# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. The list of available CPACK_xxx variables and their associated
# documentation may be obtained using
#  cpack --help-variable-list
#
# Some variables are common to all generators (e.g. CPACK_PACKAGE_NAME)
# and some are specific to a generator
# (e.g. CPACK_NSIS_EXTRA_INSTALL_COMMANDS). The generator specific variables
# usually begin with CPACK_<GENNAME>_xxxx.


set(CPACK_BINARY_BUNDLE "OFF")
set(CPACK_BINARY_DEB "OFF")
set(CPACK_BINARY_DRAGNDROP "OFF")
set(CPACK_BINARY_FREEBSD "OFF")
set(CPACK_BINARY_IFW "OFF")
set(CPACK_BINARY_NSIS "OFF")
set(CPACK_BINARY_PRODUCTBUILD "OFF")
set(CPACK_BINARY_RPM "OFF")
set(CPACK_BINARY_STGZ "ON")
set(CPACK_BINARY_TBZ2 "OFF")
set(CPACK_BINARY_TGZ "ON")
set(CPACK_BINARY_TXZ "OFF")
set(CPACK_BUILD_SOURCE_DIRS "/Users/rliang/Downloads/DSView-Unlock-main;/Users/rliang/Downloads/DSView-Unlock-main/build/Qt_6_6_3_for_macOS-Debug")
set(CPACK_CMAKE_GENERATOR "Ninja")
set(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
set(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_FILE "/Users/rliang/Qt/Tools/CMake/CMake.app/Contents/share/cmake-3.27/Templates/CPack.GenericDescription.txt")
set(CPACK_DEFAULT_PACKAGE_DESCRIPTION_SUMMARY "DSView built using CMake")
set(CPACK_DMG_SLA_USE_RESOURCE_FILE_LICENSE "ON")
set(CPACK_GENERATOR "STGZ;TGZ")
set(CPACK_INNOSETUP_ARCHITECTURE "x64")
set(CPACK_INSTALL_CMAKE_PROJECTS "/Users/rliang/Downloads/DSView-Unlock-main/build/Qt_6_6_3_for_macOS-Debug;DSView;ALL;/")
set(CPACK_INSTALL_PREFIX "/usr/local")
set(CPACK_MODULE_PATH "/Users/rliang/Downloads/DSView-Unlock-main/CMake;/Users/rliang/Qt/6.6.3/macos/lib/cmake/Qt6;/Users/rliang/Qt/6.6.3/macos/lib/cmake/Qt6/3rdparty/extra-cmake-modules/find-modules;/Users/rliang/Qt/6.6.3/macos/lib/cmake/Qt6/3rdparty/kwin")
set(CPACK_NSIS_DISPLAY_NAME "DSView 1.3.0")
set(CPACK_NSIS_INSTALLER_ICON_CODE "")
set(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
set(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
set(CPACK_NSIS_PACKAGE_NAME "DSView 1.3.0")
set(CPACK_NSIS_UNINSTALL_NAME "Uninstall")
set(CPACK_OBJDUMP_EXECUTABLE "/usr/bin/objdump")
set(CPACK_OSX_SYSROOT "/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk")
set(CPACK_OUTPUT_CONFIG_FILE "/Users/rliang/Downloads/DSView-Unlock-main/build/Qt_6_6_3_for_macOS-Debug/CPackConfig.cmake")
set(CPACK_PACKAGE_DEFAULT_LOCATION "/")
set(CPACK_PACKAGE_DESCRIPTION_FILE "/Users/rliang/Downloads/DSView-Unlock-main/DSView/README")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "DSView built using CMake")
set(CPACK_PACKAGE_FILE_NAME "DSView-1.3.0-Darwin")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "DSView 1.3.0")
set(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "DSView 1.3.0")
set(CPACK_PACKAGE_NAME "DSView")
set(CPACK_PACKAGE_RELOCATABLE "true")
set(CPACK_PACKAGE_VENDOR "Humanity")
set(CPACK_PACKAGE_VERSION "1.3.0")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "3")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_RESOURCE_FILE_LICENSE "/Users/rliang/Downloads/DSView-Unlock-main/DSView/COPYING")
set(CPACK_RESOURCE_FILE_README "/Users/rliang/Qt/Tools/CMake/CMake.app/Contents/share/cmake-3.27/Templates/CPack.GenericDescription.txt")
set(CPACK_RESOURCE_FILE_WELCOME "/Users/rliang/Qt/Tools/CMake/CMake.app/Contents/share/cmake-3.27/Templates/CPack.GenericWelcome.txt")
set(CPACK_SET_DESTDIR "OFF")
set(CPACK_SOURCE_GENERATOR "TGZ")
set(CPACK_SOURCE_IGNORE_FILES "/Users/rliang/Downloads/DSView-Unlock-main/build/Qt_6_6_3_for_macOS-Debug;.gitignore;.git")
set(CPACK_SOURCE_OUTPUT_CONFIG_FILE "/Users/rliang/Downloads/DSView-Unlock-main/build/Qt_6_6_3_for_macOS-Debug/CPackSourceConfig.cmake")
set(CPACK_SOURCE_PACKAGE_FILE_NAME "DSView-1.3.0")
set(CPACK_SYSTEM_NAME "Darwin")
set(CPACK_THREADS "1")
set(CPACK_TOPLEVEL_TAG "Darwin")
set(CPACK_WIX_SIZEOF_VOID_P "8")

if(NOT CPACK_PROPERTIES_FILE)
  set(CPACK_PROPERTIES_FILE "/Users/rliang/Downloads/DSView-Unlock-main/build/Qt_6_6_3_for_macOS-Debug/CPackProperties.cmake")
endif()

if(EXISTS ${CPACK_PROPERTIES_FILE})
  include(${CPACK_PROPERTIES_FILE})
endif()
