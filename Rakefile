require 'yard'

task default: [:yard]

YARD::Rake::YardocTask.new do |t|
  t.files = ['./mrblib/*', 'src/*']
  t.options = ['--output-dir', './docs', 'yardoc --markup=markdown|textile|rdoc(default)']
  t.stats_options = ['--list-undoc']
end
