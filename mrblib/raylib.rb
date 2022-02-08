Rl = Raylib

# This is a raylib module
module Raylib
  class Rectangle
    def draw(color: Rl::Color.new(255,255,255,255))
      self._draw(color)
    end

    def draw_lines(line_thick: 1, color: Rl::Color.new(255,255,255,255))
      self._draw_lines(line_thick, color)
    end
  end

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

    def draw_text(text:, x:, y:, font_size:, color: Rl::Color.new(255,255,255,255))
      self._draw_text(text, x, y, font_size, color)
    end

    def draw_texture(texture:, x:, y:, tint: Rl::Color.new(255,255,255,255))
      texture.draw(x, y, tint)
    end

    def draw_texture_ex(texture:, pos:, rotation: 0, scale: 1, tint: Rl::Color.new(255,255,255,255))
      self._draw_texture_ex(texture, pos, rotation, scale, tint)
    end

    def draw_texture_pro(texture:, source_rec:, dest_rec:, origin: Rl::Vector.new(0,0), rotation: 0, tint: Rl::Color.new(255,255,255,255))
      self._draw_texture_pro(texture, source_rec, dest_rec, origin, rotation, tint)
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

    def draw(clear_color: nil, &block)
      self.clear_background(clear_color) if clear_color
      self.begin_drawing
      yield
      self.end_drawing
    end
  end
end
