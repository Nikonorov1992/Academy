# CMakeList.txt : CMake project for Academy, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Academy "Academy.cpp"  "Person.h" "Student.h" "Teacher.h" "Manager.h")

# TODO: Add tests and install targets if needed.
