Rl = Raylib

module Raylib
  class Circle
    attr_accessor :vector
    attr_accessor :radius

    def initialize(x, y, radius)
      self.vector = Vector2.new(x, y)
      self.radius = radius
    end

    def x
      self.vector.x
    end

    def y
      self.vector.y
    end

    def x=(x)
      self.vector.x = x
    end

    def y=(y)
      self.vector.y = y
    end
  end

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

    def draw_texture_ex(texture:, pos:, rotation:, scale:, tint: Rl::Color.new(255,255,255,255))
      self._draw_texture_ex(texture, pos, rotation, scale, tint)
    end

    def draw_texture_pro(texture:, source:, dest:, origin:, rotation:, tint: Rl::Color.new(255,255,255,255))
      self._draw_texture_pro(texture, source, dest, origin, rotation, tint)
    end

    def keys_pressed
      if self.data_keys_pressed
        return self.data_keys_pressed
      end
      self.data_keys_pressed = []
      key = self._next_key_pressed
      while key != 0
        self.data_keys_pressed.push key
        key = self._next_key_pressed
      end
      self.data_keys_pressed
    end

    def scissor_mode(x: x, y: y, width: width, height: height, &block)
      self.begin_scissor_mode(x, y, width, height)
      yield
      self.end_scissor_mode
    end

    def draw(clear_color: nil, &block)
      self.clear_background(clear_color) if clear_color
      self.begin_drawing
      yield
      self.end_drawing
    end
  end
end
