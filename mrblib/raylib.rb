Rl = Raylib

module Raylib
  class << self
    attr_accessor :defined_loop
    attr_accessor :data_keys_pressed

    def while_window_open(&block)
      self.defined_loop = block
      if Raylib.platform == 'desktop'
        while !Raylib.window_should_close? do
          self.main_loop
        end
      elsif Raylib.platform == 'web'
        Raylib.emscripten_set_main_loop
      end
    end

    def main_loop
      self.data_keys_pressed = nil
      self.defined_loop.call
    end


    def draw_text(text:, x:, y:, font_size:, color:)
      self._draw_text(text, x, y, font_size, color)
    end

    def draw_texture(texture:, x:, y:, tint: Rl::Color.new(255,255,255,255))
      self._draw_texture(texture, x, y, tint)
    end

    def keys_pressed
      if self.data_keys_pressed
        return self.data_keys_pressed
      end
      self.data_keys_pressed = []
      key = self._key_pressed
      while key != 0
        self.data_keys_pressed.push key
        key = self._key_pressed
      end
      self.data_keys_pressed
    end
  end
end
