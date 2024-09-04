cmake_minimum_required(VERSION 3.21)

project("pathfinding" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(
    Qt6 REQUIRED
        COMPONENTS
            Core
            Gui
            Widgets)

qt_add_executable(
    ${PROJECT_NAME}
        src/main.cpp
        src/views/main_window.hpp src/views/main_window.cpp src/views/main_window.ui
        src/controllers/main_window_controller.hpp src/controllers/main_window_controller.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
        PRIVATE
            Qt6::Core
            Qt6::Gui
            Qt6::Widgets
)

if(CMAKE_COMPILER_IS_GNUCXX)
    target_compile_options(${PROJECT_NAME}
        PRIVATE
            -Wall
            -Wextra
            -Werror
            -pedantic)
endif()

