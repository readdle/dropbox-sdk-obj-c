Pod::Spec.new do |s|
  s.name         = 'ObjectiveDropboxOfficial'
  s.version      = '7.1.1'
  s.summary      = 'Dropbox Objective C SDK for APIv2'
  s.homepage     = 'https://www.dropbox.com/developers'
  s.license      = 'MIT'
  s.author       = { 'Stephen Cobbe' => 'scobbe@dropbox.com' }
  s.source       = { :git => 'https://github.com/readdle/dropbox-sdk-obj-c.git', :tag => s.version }

  s.source_files = 'Source/ObjectiveDropboxOfficial/Shared/**/*.{h,m}', 'Source/ObjectiveDropboxOfficial/Headers/**/*.h'
  s.osx.source_files =  'Source/ObjectiveDropboxOfficial/Platform/ObjectiveDropboxOfficial_macOS/**/*.{h,m}'
  s.ios.source_files = 'Source/ObjectiveDropboxOfficial/Platform/ObjectiveDropboxOfficial_iOS/**/*.{h,m}'
  
  s.requires_arc = true
  
  s.osx.deployment_target = '10.13'
  s.ios.deployment_target = '13.0'
 
  s.public_header_files = 'Source/ObjectiveDropboxOfficial/Shared/**/*.h', 'Source/ObjectiveDropboxOfficial/Headers/Umbrella/*.h'
  s.osx.public_header_files = 'Source/ObjectiveDropboxOfficial/Platform/ObjectiveDropboxOfficial_macOS/**/*.h'
  s.ios.public_header_files = 'Source/ObjectiveDropboxOfficial/Platform/ObjectiveDropboxOfficial_iOS/**/*.h'

  s.osx.frameworks = 'AppKit', 'SystemConfiguration', 'Foundation'
  s.ios.frameworks = 'UIKit', 'SafariServices', 'SystemConfiguration', 'Foundation'

  s.resource_bundle = { "ObjectiveDropboxOfficial_Privacy" => "Source/ObjectiveDropboxOfficial/PrivacyInfo.xcprivacy" }
end
