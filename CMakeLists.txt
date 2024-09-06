cmake_minimum_required(VERSION 3.21)

project("pathfinding" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(
    Qt6 REQUIRED
        COMPONENTS
            Core
            Gui
            Widgets
)

qt_standard_project_setup()

qt_add_executable(
    ${PROJECT_NAME}
        src/main.cpp

        # controllers
        src/controllers/main/main_window_controller.cpp
        src/controllers/main/states/state.cpp
        src/controllers/main/states/init.cpp

        # views
        src/views/main_window_view.cpp src/views/main_window_view.ui
        src/views/map_view.cpp src/views/map_view.ui
)

target_link_libraries(
    ${PROJECT_NAME}
        PRIVATE
            Qt6::Core
            Qt6::Gui
            Qt6::Widgets
)

if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(
        ${PROJECT_NAME}
            PRIVATE
                -Wall
                -Wextra
                -Werror
                -pedantic
    )
endif()

