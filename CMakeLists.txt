cmake_minimum_required(VERSION 3.17)
project(QuoridorV_2)

set(CMAKE_CXX_STANDARD 14)

add_library(QuoridorV_2 src/game/Board.cpp src/game/Board.h src/application/Application.cpp src/application/Application.h src/UI/Input.cpp src/UI/Input.h src/UI/Output.cpp src/UI/Output.h src/game/Quoridor.cpp src/game/Quoridor.h src/UI/CMDInterface.cpp src/UI/CMDInterface.h src/DTO/QuoridorDTO.cpp src/DTO/QuoridorDTO.h src/DTO/PlayerDTO.cpp src/DTO/PlayerDTO.h src/DTO/BoardDTO.cpp src/DTO/BoardDTO.h)


add_executable(QuoridorV_2_exec main.cpp)
target_link_libraries(QuoridorV_2_exec QuoridorV_2)

enable_testing()
add_subdirectory(tests)