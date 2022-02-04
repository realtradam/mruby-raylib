
class Rect
  # yardoc garbage test
  #
  # @param poo [Integer] this is more
  def yep(stuff)
  end
end

module Raylib
  class << self

    # Initialize window and OpenGL context.
    #
    # @param width [Integer] width ye
    # @param height [Integer] height ye
    # @param title [String] title ye
    # @return (Nil)

    # Creates a new {FelECS::ComponentManager component manager}.
    #
    # @example
    #   # Here color is set to default to red
    #   # while max and current are nil until set.
    #   # When you make a new component using this component manager
    #   # these are the values and accessors it will have.
    #   FelECS::Component.new('Health', :max, :current, color: 'red')
    #
    # @param width [String] Name of your new component manager. Must be stylized in the format of constants in Ruby
    # @param height [:Symbols] New components made with this manager will include these symbols as accessors, the values of these accessors will default to nil
    # @param title [Keyword: DefaultValue] New components made with this manager will include these keywords as accessors, their defaults set to the values given to the keywords
    # @return [ComponentManager]
    def init_window(width: 800, height: 600, title: "Hello World from FelFlame!")
    end
  end
end
