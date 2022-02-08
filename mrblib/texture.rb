module Raylib
  class Texture
    # @!visibility private
    def h
      self.height
    end

    # @!visibility private
    def h=(height)
      self.height = height
    end

    # @!visibility private
    def w
      self.width
    end

    # @!visibility private
    def w=(width)
      self.width = width
    end
  end
end
