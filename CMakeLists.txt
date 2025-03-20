# Устанавливаем версию cmake
cmake_minimum_required(VERSION 3.12)

# Имя проекта
project(my_cpp_lib)

# Указываем стандарт C++
set(CMAKE_CXX_STANDARD 11)

# Включаем поддержку pybind11 с использованием FetchContent
include(FetchContent)
FetchContent_Declare(
    pybind11
    GIT_REPOSITORY https://github.com/pybind/pybind11.git
    GIT_TAG v2.11.1  # или используйте последнюю стабильную версию
)
FetchContent_MakeAvailable(pybind11)


# здесь указываем путь до файла, функции которого хотим конвертировать
set(SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/cpp_module.cpp)

# Создаём модуль Python из cpp_module.cpp
# Первое имя - название модуля
pybind11_add_module(my_cpp_lib ${SOURCE_FILES})



