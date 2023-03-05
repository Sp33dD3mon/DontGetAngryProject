# CMakeList.txt : CMake project for DontGetAngryProject, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("DontGetAngryProject")

# Add source to this project's executable.
add_executable (DontGetAngryProject "DontGetAngryProject.cpp" "DontGetAngryProject.h" "Board.h" "Field.h" "Player.h" "Pawn.h")

# TODO: Add tests and install targets if needed.
