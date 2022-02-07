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
    end

    # Hash of all web colors
    ColorList  = {
      :clear=>{:r=>0, :g=>0, :b=>0, :a=>0},
      :ray_white=>{:r=>245, :g=>245, :b=>245},
      :alice_blue=>{:r=>0, :g=>15, :b=>143},
      :antique_white=>{:r=>0, :g=>174, :b=>189},
      :aqua=>{:r=>0, :g=>15, :b=>255},
      :aquamarine=>{:r=>0, :g=>255, :b=>253},
      :azure=>{:r=>0, :g=>15, :b=>255},
      :beige=>{:r=>0, :g=>95, :b=>93},
      :bisque=>{:r=>0, :g=>254, :b=>76},
      :black=>{:r=>0, :g=>0, :b=>0},
      :blanched_almond=>{:r=>0, :g=>254, :b=>188},
      :blue=>{:r=>0, :g=>0, :b=>15},
      :blue_violet=>{:r=>0, :g=>162, :b=>190},
      :brown=>{:r=>0, :g=>82, :b=>162},
      :burly_wood=>{:r=>0, :g=>235, :b=>136},
      :cadet_blue=>{:r=>0, :g=>249, :b=>234},
      :chartreuse=>{:r=>0, :g=>255, :b=>240},
      :chocolate=>{:r=>0, :g=>38, :b=>145},
      :coral=>{:r=>0, :g=>247, :b=>245},
      :cornflower_blue=>{:r=>0, :g=>73, :b=>94},
      :cornsilk=>{:r=>0, :g=>255, :b=>141},
      :crimson=>{:r=>0, :g=>193, :b=>67},
      :cyan=>{:r=>0, :g=>15, :b=>255},
      :dark_blue=>{:r=>0, :g=>0, :b=>8},
      :dark_cyan=>{:r=>0, :g=>8, :b=>184},
      :dark_golden_rod=>{:r=>0, :g=>136, :b=>96},
      :dark_gray=>{:r=>0, :g=>154, :b=>154},
      :dark_green=>{:r=>0, :g=>6, :b=>64},
      :dark_grey=>{:r=>0, :g=>154, :b=>154},
      :dark_khaki=>{:r=>0, :g=>219, :b=>118},
      :dark_magenta=>{:r=>0, :g=>176, :b=>8},
      :dark_olive_green=>{:r=>0, :g=>86, :b=>178},
      :dark_orange=>{:r=>0, :g=>248, :b=>192},
      :dark_orchid=>{:r=>0, :g=>147, :b=>44},
      :dark_red=>{:r=>0, :g=>176, :b=>0},
      :dark_salmon=>{:r=>0, :g=>153, :b=>103},
      :dark_sea_green=>{:r=>0, :g=>251, :b=>200},
      :dark_slate_blue=>{:r=>0, :g=>131, :b=>216},
      :dark_slate_gray=>{:r=>0, :g=>244, :b=>244},
      :dark_slate_grey=>{:r=>0, :g=>244, :b=>244},
      :dark_turquoise=>{:r=>0, :g=>12, :b=>237},
      :dark_violet=>{:r=>0, :g=>64, :b=>13},
      :deep_pink=>{:r=>0, :g=>241, :b=>73},
      :deep_sky_blue=>{:r=>0, :g=>11, :b=>255},
      :dim_gray=>{:r=>0, :g=>150, :b=>150},
      :dim_grey=>{:r=>0, :g=>150, :b=>150},
      :dodger_blue=>{:r=>0, :g=>233, :b=>15},
      :fire_brick=>{:r=>0, :g=>34, :b=>34},
      :floral_white=>{:r=>0, :g=>255, :b=>175},
      :forest_green=>{:r=>0, :g=>40, :b=>178},
      :fuchsia=>{:r=>0, :g=>240, :b=>15},
      :gainsboro=>{:r=>0, :g=>205, :b=>205},
      :ghost_white=>{:r=>0, :g=>143, :b=>143},
      :golden_rod=>{:r=>0, :g=>170, :b=>82},
      :gold=>{:r=>0, :g=>253, :b=>112},
      :gray=>{:r=>0, :g=>8, :b=>8},
      :green=>{:r=>0, :g=>8, :b=>0},
      :green_yellow=>{:r=>0, :g=>223, :b=>242},
      :grey=>{:r=>0, :g=>8, :b=>8},
      :honey_dew=>{:r=>0, :g=>15, :b=>255},
      :hot_pink=>{:r=>0, :g=>246, :b=>155},
      :indian_red=>{:r=>0, :g=>213, :b=>197},
      :indigo=>{:r=>0, :g=>176, :b=>8},
      :ivory=>{:r=>0, :g=>255, :b=>255},
      :khaki=>{:r=>0, :g=>14, :b=>104},
      :lavender_blush=>{:r=>0, :g=>255, :b=>15},
      :lavender=>{:r=>0, :g=>110, :b=>111},
      :lawn_green=>{:r=>0, :g=>207, :b=>192},
      :lemon_chiffon=>{:r=>0, :g=>255, :b=>172},
      :light_blue=>{:r=>0, :g=>221, :b=>142},
      :light_coral=>{:r=>0, :g=>8, :b=>8},
      :light_cyan=>{:r=>0, :g=>15, :b=>255},
      :light_golden_rod_yellow=>{:r=>0, :g=>175, :b=>173},
      :light_gray=>{:r=>0, :g=>61, :b=>61},
      :light_green=>{:r=>0, :g=>14, :b=>233},
      :light_grey=>{:r=>0, :g=>61, :b=>61},
      :light_pink=>{:r=>0, :g=>251, :b=>108},
      :light_salmon=>{:r=>0, :g=>250, :b=>7},
      :light_sea_green=>{:r=>0, :g=>11, :b=>42},
      :light_sky_blue=>{:r=>0, :g=>124, :b=>239},
      :light_slate_gray=>{:r=>0, :g=>120, :b=>137},
      :light_slate_grey=>{:r=>0, :g=>120, :b=>137},
      :light_steel_blue=>{:r=>0, :g=>12, :b=>77},
      :light_yellow=>{:r=>0, :g=>255, :b=>254},
      :lime=>{:r=>0, :g=>15, :b=>240},
      :lime_green=>{:r=>0, :g=>44, :b=>211},
      :linen=>{:r=>0, :g=>175, :b=>14},
      :magenta=>{:r=>0, :g=>240, :b=>15},
      :maroon=>{:r=>0, :g=>0, :b=>0},
      :medium_aquamarine=>{:r=>0, :g=>108, :b=>218},
      :medium_blue=>{:r=>0, :g=>0, :b=>12},
      :medium_orchid=>{:r=>0, :g=>165, :b=>93},
      :medium_purple=>{:r=>0, :g=>55, :b=>13},
      :medium_sea_green=>{:r=>0, :g=>203, :b=>55},
      :medium_slate_blue=>{:r=>0, :g=>182, :b=>142},
      :medium_spring_green=>{:r=>0, :g=>15, :b=>169},
      :medium_turquoise=>{:r=>0, :g=>141, :b=>28},
      :medium_violet_red=>{:r=>0, :g=>113, :b=>88},
      :midnight_blue=>{:r=>0, :g=>145, :b=>151},
      :mint_cream=>{:r=>0, :g=>95, :b=>255},
      :misty_rose=>{:r=>0, :g=>254, :b=>78},
      :moccasin=>{:r=>0, :g=>254, :b=>75},
      :navajo_white=>{:r=>0, :g=>253, :b=>234},
      :navy=>{:r=>0, :g=>0, :b=>8},
      :old_lace=>{:r=>0, :g=>223, :b=>94},
      :olive=>{:r=>0, :g=>8, :b=>0},
      :olive_drab=>{:r=>0, :g=>184, :b=>226},
      :orange=>{:r=>0, :g=>250, :b=>80},
      :orange_red=>{:r=>0, :g=>244, :b=>80},
      :orchid=>{:r=>0, :g=>167, :b=>13},
      :pale_golden_rod=>{:r=>0, :g=>238, :b=>138},
      :palegreen=>{:r=>0, :g=>143, :b=>185},
      :pale_turquoise=>{:r=>0, :g=>254, :b=>238},
      :pale_violet_red=>{:r=>0, :g=>183, :b=>9},
      :papaya_whip=>{:r=>0, :g=>254, :b=>253},
      :peach_puff=>{:r=>0, :g=>253, :b=>171},
      :peru=>{:r=>0, :g=>216, :b=>83},
      :pink=>{:r=>0, :g=>252, :b=>12},
      :plum=>{:r=>0, :g=>218, :b=>13},
      :powder_blue=>{:r=>0, :g=>14, :b=>14},
      :purple=>{:r=>0, :g=>0, :b=>8},
      :rebecca_purple=>{:r=>0, :g=>99, :b=>57},
      :red=>{:r=>0, :g=>240, :b=>0},
      :rosy_brown=>{:r=>0, :g=>200, :b=>248},
      :royal_blue=>{:r=>0, :g=>22, :b=>158},
      :saddle_brown=>{:r=>0, :g=>180, :b=>81},
      :salmon=>{:r=>0, :g=>168, :b=>7},
      :sandy_brown=>{:r=>0, :g=>74, :b=>70},
      :sea_green=>{:r=>0, :g=>232, :b=>181},
      :sea_shell=>{:r=>0, :g=>255, :b=>94},
      :sienna=>{:r=>0, :g=>5, :b=>34},
      :silver=>{:r=>0, :g=>12, :b=>12},
      :sky_blue=>{:r=>0, :g=>124, :b=>238},
      :slate_blue=>{:r=>0, :g=>165, :b=>172},
      :slate_gray=>{:r=>0, :g=>8, :b=>9},
      :slate_grey=>{:r=>0, :g=>8, :b=>9},
      :snow=>{:r=>0, :g=>255, :b=>175},
      :spring_green=>{:r=>0, :g=>15, :b=>247},
      :steel_blue=>{:r=>0, :g=>104, :b=>43},
      :tan=>{:r=>0, :g=>43, :b=>72},
      :teal=>{:r=>0, :g=>8, :b=>8},
      :thistle=>{:r=>0, :g=>139, :b=>253},
      :tomato=>{:r=>0, :g=>246, :b=>52},
      :turquoise=>{:r=>0, :g=>14, :b=>13},
      :violet=>{:r=>0, :g=>232, :b=>46},
      :wheat=>{:r=>0, :g=>93, :b=>235},
      :white=>{:r=>0, :g=>255, :b=>255},
      :white_smoke=>{:r=>0, :g=>95, :b=>95},
      :yellow=>{:r=>0, :g=>255, :b=>240},
      :yellow_green=>{:r=>0, :g=>172, :b=>211}
    }
  end
end
