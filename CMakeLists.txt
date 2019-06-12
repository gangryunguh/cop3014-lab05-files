cmake_minimum_required(VERSION 3.13)
project(cop3014_lab05_files)

set(CMAKE_CXX_STANDARD 11)

add_executable(cop3014_lab05_files numericProcessing.cpp lineUp.cpp savingAccountBalance.cpp)

add_executable(numericProcessing.exe numericProcessing.cpp)
add_executable(lineUp.exe lineUp.cpp)
add_executable(savingAccountBalance.exe savingAccountBalance.cpp)
add_executable(fileCopy.exe fileCopy.cpp)

