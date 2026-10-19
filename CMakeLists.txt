cmake_minimum_required(VERSION 3.16)
project(SatThuongNhanVatConsole2D LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(SatThuongNhanVat
    src/main.cpp src/VuKhi.cpp src/Sung.cpp src/Kiem.cpp src/PhepThuat.cpp src/NhanVat.cpp)
target_include_directories(SatThuongNhanVat PRIVATE include)
