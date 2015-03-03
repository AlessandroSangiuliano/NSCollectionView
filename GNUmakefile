include $(GNUSTEP_MAKEFILES)/common.make

#
# Application
#

VERSION = 0.1
PACKAGE_NAME = CollectionView
APP_NAME = CollectionView
CollectionView_APPLICATION_ICON = 

#
# Resource files
#

CollectionView_LANGUAGES = English

#info.plist??

CollectionView_RESOURCE_FILES = \
        CollectionView-Info.plist \

CollectionView_LOCALIZED_RESOURCE_FILES = \
	MainMenu.nib
	
	
#
# Class files
#

CollectionView_OBJC_FILES = \
	CollectionViewAppDelegate.m \
	AppController.m \
	Student.m \
	main.m

ADDITIONAL_OBJCFLAGS += -std=c99 -Wno-import -g -fobjc-arc

include $(GNUSTEP_MAKEFILES)/application.make