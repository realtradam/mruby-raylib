module Raylib
  #attr_accessor :main_loop

  #def call_main_loop
  #  self.main_loop.call
  #end

  def self.window_open(&block)
    self.main_loop = block
    self.execute_main_loop
  end
end
