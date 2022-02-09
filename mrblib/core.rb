module Raylib
  class Vector2
    class << self
      # A vector initialized to (0,0). Useful when dont care about the vector
      # value but you still need to pass it into a function/method and dont want
      # to initialize a new one many times.
      def default
        @default ||= self.new(0, 0)
      end
    end
  end
  class << self
    # The code block version of {Raylib.begin_scissor_mode} and {Raylib.end_scissor_mode}
    # @overload scissor_mode(x: 0, y: 0, width: 10, height: 10, &block)
    #   @param x [Integer]
    #   @param y [Integer]
    #   @param width [Integer]
    #   @param height [Integer]
    #   @param block [Proc] The code to be executed in the scissor mode
    def scissor_mode(*args, x: 0, y: 0, width: 10, height: 10, &block)
      if args.length == 4
        self.begin_scissor_mode(args[0], args[1], args[2], args[3])
      else
        self.begin_scissor_mode(x: x, y: y, width: width, height: height)
      end
      yield
      self.end_scissor_mode
    end
  end
end
