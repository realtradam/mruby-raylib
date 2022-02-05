require 'bundler'

Bundler.setup(:default, :yard)

task default: [:yard]

desc 'generate yard docs'
task :yard do
  begin
    sh "mrbdoc"
  rescue
    puts "ERROR: To generate yard documentation, you should install yard-mruby gem."
    puts "  $ gem install yard-mruby yard-coderay"
  end
end
