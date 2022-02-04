require 'yard'

task default: [:api]
#task default: [:yard]

#YARD::Rake::YardocTask.new do |t|
#  t.files = ['./mrblib/*', 'src/*']
#  t.options = ['--output-dir', './docs', 'yardoc --markup=markdown|textile|rdoc(default)', '--plugin mruby']
#  t.stats_options = ['--list-undoc']
#end
#
YARD::Rake::YardocTask.new do |t|
  t.files = ['mrblib/raylib.rb', 'mrbdoc/core.rb'] # ['system_manager.rb', 'component_manager.rb', 'entity_manager.rb', 'scene_manager.rb', 'stage_manager.rb', 'felecs.rb']
  t.options = ['--output-dir', './docs', 'yardoc --markup=markdown|textile|rdoc(default)']
  t.stats_options = ['--list-undoc']
end

desc 'generate yard docs'
task :api do
  begin
    sh "mrbdoc"
  rescue
    puts "ERROR: To generate yard documentation, you should install yard-mruby gem."
    puts "  $ gem install yard-mruby yard-coderay"
  end
end
