cmake_minimum_required(VERSION 3.17)
project(QuoridorV_2)

set(CMAKE_CXX_STANDARD 14)

add_library(QuoridorV_2 src/game/Board.cpp src/game/Board.h src/application/Quoridor.cpp src/application/Quoridor.h src/game/Game.cpp src/game/Game.h src/ui/CMDInterface.cpp src/ui/CMDInterface.h src/application/dto/QuoridorDTO.cpp src/application/dto/QuoridorDTO.h src/application/dto/PlayerDTO.cpp src/application/dto/PlayerDTO.h src/application/dto/BoardDTO.cpp src/application/dto/BoardDTO.h)

add_executable(QuoridorV_2_exec main.cpp)
target_link_libraries(QuoridorV_2_exec QuoridorV_2)

enable_testing()
add_subdirectory(tests)
