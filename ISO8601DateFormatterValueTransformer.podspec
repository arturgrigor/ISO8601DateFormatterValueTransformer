Pod::Spec.new do |s|
  s.name     = 'ISO8601DateFormatterValueTransformer'
  s.version  = '0.7.3'
  s.license  = 'Apache2'
  s.summary  = 'A small library that integrates ISO8601DateFormatter with RKValueTransformers'
  s.homepage = 'https://github.com/blakewatters/ISO8601DateFormatterValueTransformer'
  s.authors  = { 'Blake Watters' => 'blakewatters@gmail.com' }
  s.source   = { :git => 'https://github.com/blakewatters/ISO8601DateFormatterValueTransformer.git', :tag => "v#{s.version}" }
  s.source_files = 'Code'
  s.requires_arc = true

  s.dependency 'RKValueTransformers', '~> 1.1.0'
  s.dependency 'ISO8601DateFormatter', '~> 0.7'

  s.ios.deployment_target = '6.0'
  s.osx.deployment_target = '10.7'
end
