Rl = Raylib

module Raylib
  class << self
    attr_accessor :main_loop

    def while_window_open(&block)
      self.main_loop = block
      if Raylib.platform == 'desktop'
        while !Raylib.window_should_close? do
          self.main_loop.call
        end
      elsif Raylib.platform == 'web'
        Raylib.emscripten_set_main_loop
      end
    end


    def draw_text(text:, x:, y:, font_size:, color:)
      self._draw_text(text, x, y, font_size, color)
    end
  end
end
