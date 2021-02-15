cmake_minimum_required (VERSION 2.6)

if(DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
  set(CMAKE_TOOLCHAIN_FILE "/home/office/src/vcpkg/scripts/buildsystems/vcpkg.cmake"
      CACHE STRING "")
endif()

project (Qt_cmake LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

 # Widgets finds its own dependencies (QtGui and QtCore).
  find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
	find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)
	find_package(OpenCV REQUIRED)
	find_package(DCMTK REQUIRED)

  # The Qt5Widgets_INCLUDES also includes the include directories for
  # dependencies QtCore and QtGui
  	include_directories(${Qt5Widgets_INCLUDES})

	include_directories( ${OpenCV_INCLUDE_DIRS} )

  # We need add -DQT_WIDGETS_LIB when using QtWidgets in Qt 5.
  add_definitions(${Qt5Widgets_DEFINITIONS})

  # Executables fail to build with Qt 5 in the default configuration
  # without -fPIE. We add that here.
  set(CMAKE_CXX_FLAGS "${Qt5Widgets_EXECUTABLE_COMPILE_FLAGS}")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Qt_cmake 
Qt_cmake.cpp
    view/mainwindow.cpp
    view/mainwindow.h
    view/mainwindow.ui
    data/dicomobj.cpp
    data/dicomobj.h
    helper/asmOpenCV.h
    analyse/analysefactory.h
    analyse/analysefactory.cpp
)
target_link_libraries(Qt_cmake dcmimgle ${Qt5Widgets_LIBRARIES} ${OpenCV_LIBS})
