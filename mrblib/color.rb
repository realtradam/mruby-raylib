module Raylib

  # In addition to creating custom colors, you can call
  # any of the default 140 HTML colors(in addition to
  # RayWhite and Clear) seen here:
  # https://www.w3schools.com/colors/colors_names.asp  
  # 
  # When a default color is called it is created once and
  # then stored for each future consecutive use. To call
  # a color method simply use the ruby naming convention
  # for method calls, for example to use BlueViolet you
  # would do the following:
  #
  # +Rl::Color.blue_violet+
  #
  # You can also add custom default colors by adding it to the ColorList hash so that they can be called the same way.
  class Color
    class << self

      # @!visibility private
      def color_cache(color)
        @color_cache ||= {}
        if ColorList[color]
          @color_cache[color] ||= Raylib::Color.new(ColorList[color][:r],ColorList[color][:g],ColorList[color][:b],ColorList[color][:a]||255)
        else
          raise 'Bad Colorname'
        end
      end

      # @!visibility private
      def method_missing(method, *args)
        if ColorList[method]
          if args.empty?
            self.color_cache(method)
          else
            raise ArgumentError.new "Expected no arguments"
          end
        else
          super
        end
      end

      # @!visibility private
      def respond_to_missing?(method, *args)
        if ColorList[method]
          true
        else
          super
        end
      end

      # Get a random color from the ColorList(excluding Clear)
      # @return [Color]
      def random
        result = ColorList.keys.sample
        while result == :clear
          result = ColorList.keys.sample
        end
        self.send(result)
      end
    end

    # Hash of all web colors, RayWhite, and Clear
    ColorList  = {
      :clear=>{:r=>0, :g=>0, :b=>0, :a=>0},
      :ray_white=>{:r=>245, :g=>245, :b=>245},
      :alice_blue=>{:r=>240, :g=>248, :b=>255},
      :antique_white=>{:r=>250, :g=>235, :b=>215},
      :aqua=>{:r=>0, :g=>255, :b=>255},
      :aquamarine=>{:r=>127, :g=>255, :b=>212},
      :azure=>{:r=>240, :g=>255, :b=>255},
      :beige=>{:r=>245, :g=>245, :b=>220},
      :bisque=>{:r=>255, :g=>228, :b=>196},
      :black=>{:r=>0, :g=>0, :b=>0},
      :blanched_almond=>{:r=>255, :g=>235, :b=>205},
      :blue=>{:r=>0, :g=>0, :b=>255},
      :blue_violet=>{:r=>138, :g=>43, :b=>226},
      :brown=>{:r=>165, :g=>42, :b=>42},
      :burly_wood=>{:r=>222, :g=>184, :b=>135},
      :cadet_blue=>{:r=>95, :g=>158, :b=>160},
      :chartreuse=>{:r=>127, :g=>255, :b=>0},
      :chocolate=>{:r=>210, :g=>105, :b=>30},
      :coral=>{:r=>255, :g=>127, :b=>80},
      :cornflower_blue=>{:r=>100, :g=>149, :b=>237},
      :cornsilk=>{:r=>255, :g=>248, :b=>220},
      :crimson=>{:r=>220, :g=>20, :b=>60},
      :cyan=>{:r=>0, :g=>255, :b=>255},
      :dark_blue=>{:r=>0, :g=>0, :b=>139},
      :dark_cyan=>{:r=>0, :g=>139, :b=>139},
      :dark_golden_rod=>{:r=>184, :g=>134, :b=>11},
      :dark_gray=>{:r=>169, :g=>169, :b=>169},
      :dark_green=>{:r=>0, :g=>100, :b=>0},
      :dark_grey=>{:r=>169, :g=>169, :b=>169},
      :dark_khaki=>{:r=>189, :g=>183, :b=>107},
      :dark_magenta=>{:r=>139, :g=>0, :b=>139},
      :dark_olive_green=>{:r=>85, :g=>107, :b=>47},
      :dark_orange=>{:r=>255, :g=>140, :b=>0},
      :dark_orchid=>{:r=>153, :g=>50, :b=>204},
      :dark_red=>{:r=>139, :g=>0, :b=>0},
      :dark_salmon=>{:r=>233, :g=>150, :b=>122},
      :dark_sea_green=>{:r=>143, :g=>188, :b=>143},
      :dark_slate_blue=>{:r=>72, :g=>61, :b=>139},
      :dark_slate_gray=>{:r=>47, :g=>79, :b=>79},
      :dark_slate_grey=>{:r=>47, :g=>79, :b=>79},
      :dark_turquoise=>{:r=>0, :g=>206, :b=>209},
      :dark_violet=>{:r=>148, :g=>0, :b=>211},
      :deep_pink=>{:r=>255, :g=>20, :b=>147},
      :deep_sky_blue=>{:r=>0, :g=>191, :b=>255},
      :dim_gray=>{:r=>105, :g=>105, :b=>105},
      :dim_grey=>{:r=>105, :g=>105, :b=>105},
      :dodger_blue=>{:r=>30, :g=>144, :b=>255},
      :fire_brick=>{:r=>178, :g=>34, :b=>34},
      :floral_white=>{:r=>255, :g=>250, :b=>240},
      :forest_green=>{:r=>34, :g=>139, :b=>34},
      :fuchsia=>{:r=>255, :g=>0, :b=>255},
      :gainsboro=>{:r=>220, :g=>220, :b=>220},
      :ghost_white=>{:r=>248, :g=>248, :b=>255},
      :golden_rod=>{:r=>218, :g=>165, :b=>32},
      :gold=>{:r=>255, :g=>215, :b=>0},
      :gray=>{:r=>128, :g=>128, :b=>128},
      :green=>{:r=>0, :g=>128, :b=>0},
      :green_yellow=>{:r=>173, :g=>255, :b=>47},
      :grey=>{:r=>128, :g=>128, :b=>128},
      :honey_dew=>{:r=>240, :g=>255, :b=>240},
      :hot_pink=>{:r=>255, :g=>105, :b=>180},
      :indian_red=>{:r=>205, :g=>92, :b=>92},
      :indigo=>{:r=>75, :g=>0, :b=>130},
      :ivory=>{:r=>255, :g=>255, :b=>240},
      :khaki=>{:r=>240, :g=>230, :b=>140},
      :lavender_blush=>{:r=>255, :g=>240, :b=>245},
      :lavender=>{:r=>230, :g=>230, :b=>250},
      :lawn_green=>{:r=>124, :g=>252, :b=>0},
      :lemon_chiffon=>{:r=>255, :g=>250, :b=>205},
      :light_blue=>{:r=>173, :g=>216, :b=>230},
      :light_coral=>{:r=>240, :g=>128, :b=>128},
      :light_cyan=>{:r=>224, :g=>255, :b=>255},
      :light_golden_rod_yellow=>{:r=>250, :g=>250, :b=>210},
      :light_gray=>{:r=>211, :g=>211, :b=>211},
      :light_green=>{:r=>144, :g=>238, :b=>144},
      :light_grey=>{:r=>211, :g=>211, :b=>211},
      :light_pink=>{:r=>255, :g=>182, :b=>193},
      :light_salmon=>{:r=>255, :g=>160, :b=>122},
      :light_sea_green=>{:r=>32, :g=>178, :b=>170},
      :light_sky_blue=>{:r=>135, :g=>206, :b=>250},
      :light_slate_gray=>{:r=>119, :g=>136, :b=>153},
      :light_slate_grey=>{:r=>119, :g=>136, :b=>153},
      :light_steel_blue=>{:r=>176, :g=>196, :b=>222},
      :light_yellow=>{:r=>255, :g=>255, :b=>224},
      :lime=>{:r=>0, :g=>255, :b=>0},
      :lime_green=>{:r=>50, :g=>205, :b=>50},
      :linen=>{:r=>250, :g=>240, :b=>230},
      :magenta=>{:r=>255, :g=>0, :b=>255},
      :maroon=>{:r=>128, :g=>0, :b=>0},
      :medium_aquamarine=>{:r=>102, :g=>205, :b=>170},
      :medium_blue=>{:r=>0, :g=>0, :b=>205},
      :medium_orchid=>{:r=>186, :g=>85, :b=>211},
      :medium_purple=>{:r=>147, :g=>112, :b=>219},
      :medium_sea_green=>{:r=>60, :g=>179, :b=>113},
      :medium_slate_blue=>{:r=>123, :g=>104, :b=>238},
      :medium_spring_green=>{:r=>0, :g=>250, :b=>154},
      :medium_turquoise=>{:r=>72, :g=>209, :b=>204},
      :medium_violet_red=>{:r=>199, :g=>21, :b=>133},
      :midnight_blue=>{:r=>25, :g=>25, :b=>112},
      :mint_cream=>{:r=>245, :g=>255, :b=>250},
      :misty_rose=>{:r=>255, :g=>228, :b=>225},
      :moccasin=>{:r=>255, :g=>228, :b=>181},
      :navajo_white=>{:r=>255, :g=>222, :b=>173},
      :navy=>{:r=>0, :g=>0, :b=>128},
      :old_lace=>{:r=>253, :g=>245, :b=>230},
      :olive=>{:r=>128, :g=>128, :b=>0},
      :olive_drab=>{:r=>107, :g=>142, :b=>35},
      :orange=>{:r=>255, :g=>165, :b=>0},
      :orange_red=>{:r=>255, :g=>69, :b=>0},
      :orchid=>{:r=>218, :g=>112, :b=>214},
      :pale_golden_rod=>{:r=>238, :g=>232, :b=>170},
      :palegreen=>{:r=>152, :g=>251, :b=>152},
      :pale_turquoise=>{:r=>175, :g=>238, :b=>238},
      :pale_violet_red=>{:r=>219, :g=>112, :b=>147},
      :papaya_whip=>{:r=>255, :g=>239, :b=>213},
      :peach_puff=>{:r=>255, :g=>218, :b=>185},
      :peru=>{:r=>205, :g=>133, :b=>63},
      :pink=>{:r=>255, :g=>192, :b=>203},
      :plum=>{:r=>221, :g=>160, :b=>221},
      :powder_blue=>{:r=>176, :g=>224, :b=>230},
      :purple=>{:r=>128, :g=>0, :b=>128},
      :rebecca_purple=>{:r=>102, :g=>51, :b=>153},
      :red=>{:r=>255, :g=>0, :b=>0},
      :rosy_brown=>{:r=>188, :g=>143, :b=>143},
      :royal_blue=>{:r=>65, :g=>105, :b=>225},
      :saddle_brown=>{:r=>139, :g=>69, :b=>19},
      :salmon=>{:r=>250, :g=>128, :b=>114},
      :sandy_brown=>{:r=>244, :g=>164, :b=>96},
      :sea_green=>{:r=>46, :g=>139, :b=>87},
      :sea_shell=>{:r=>255, :g=>245, :b=>238},
      :sienna=>{:r=>160, :g=>82, :b=>45},
      :silver=>{:r=>192, :g=>192, :b=>192},
      :sky_blue=>{:r=>135, :g=>206, :b=>235},
      :slate_blue=>{:r=>106, :g=>90, :b=>205},
      :slate_gray=>{:r=>112, :g=>128, :b=>144},
      :slate_grey=>{:r=>112, :g=>128, :b=>144},
      :snow=>{:r=>255, :g=>250, :b=>250},
      :spring_green=>{:r=>0, :g=>255, :b=>127},
      :steel_blue=>{:r=>70, :g=>130, :b=>180},
      :tan=>{:r=>210, :g=>180, :b=>140},
      :teal=>{:r=>0, :g=>128, :b=>128},
      :thistle=>{:r=>216, :g=>191, :b=>216},
      :tomato=>{:r=>255, :g=>99, :b=>71},
      :turquoise=>{:r=>64, :g=>224, :b=>208},
      :violet=>{:r=>238, :g=>130, :b=>238},
      :wheat=>{:r=>245, :g=>222, :b=>179},
      :white=>{:r=>255, :g=>255, :b=>255},
      :white_smoke=>{:r=>245, :g=>245, :b=>245},
      :yellow=>{:r=>255, :g=>255, :b=>0},
      :yellow_green=>{:r=>154, :g=>205, :b=>50}
    }
  end
end
