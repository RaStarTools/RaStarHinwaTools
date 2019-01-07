Pod::Spec.new do |s|
  s.name = "RaStarHinwaTools"
  s.version = "0.0.1"
  s.summary = "\u{5de5}\u{5177}\u{7c7b}"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"Hinwa"=>"hinwaleework@126.com"}
  s.homepage = "https://github.com/RaStarTools/RaStarHinwaTools"
  s.description = "\u{5de5}\u{5177}\u{7c7b}"
  s.source = { :git => 'https://github.com/RaStarTools/RaStarHinwaTools.git', :tag => s.version.to_s }

  s.ios.deployment_target    = '9.0'
  s.ios.vendored_framework   = 'RaStarHinwaTools.framework'
end
