MRuby::Gem::Specification.new('mruby-simplemsgpack') do |spec|
  spec.license = 'Apache-2'
  spec.summary = 'msgpack for mruby including extension types'
  spec.homepage = 'https://github.com/Asmod4n/mruby-simplemsgpack'
  spec.authors = File.readlines("#{spec.dir}/AUTHORS").map(&:strip)
  spec.add_dependency 'mruby-errno'
  spec.add_conflict 'mruby-msgpack'
end
