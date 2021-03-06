Pod::Spec.new do |s|
  s.name         = "KeyValueObjectMapping"
  s.version      = "1.4.1"
  s.summary      = "Automatic KeyValue Object Mapping for Objective-C, parse JSON/plist/Dictionary automatically"
  s.homepage     = "https://github.com/dchohfi/KeyValueObjectMapping"
  s.author       = { 'Diego Chohfi' => 'dchohfi@gmail.com' }

  s.license      = ''
  s.source       = { :git => "https://github.com/dchohfi/KeyValueObjectMapping.git", :tag => "1.4.1" }

  s.ios.deployment_target = '5.0'
  s.osx.deployment_target = '10.7'
  s.source_files = 'KeyValueObjectMapping/**/*.{h,m}'

  s.requires_arc = true

end
