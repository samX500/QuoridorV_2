cmake_minimum_required(VERSION 3.17)
project(QuoridorV_2)

set(CMAKE_CXX_STANDARD 14)

# Library
set(QUORIDOR_LIB "QuoridorV_2")
add_library(${QUORIDOR_LIB} src/game/Board.cpp src/game/Board.h src/application/Quoridor.cpp src/application/Quoridor.h src/game/Game.cpp src/game/Game.h src/ui/GUI.cpp src/ui/GUI.h src/application/dto/QuoridorDTO.cpp src/application/dto/QuoridorDTO.h src/application/dto/PlayerDTO.cpp src/application/dto/PlayerDTO.h src/application/dto/BoardDTO.cpp src/application/dto/BoardDTO.h src/game/Wall.cpp src/game/Wall.h)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)
target_link_libraries(${QUORIDOR_LIB} ${SFML_LIBRARIES})

# Executable
add_executable(QuoridorV_2_exec main.cpp)
target_link_libraries(QuoridorV_2_exec ${QUORIDOR_LIB})

# Testing
enable_testing()
add_subdirectory(tests)