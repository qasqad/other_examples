# CMakeList.txt: проект CMake для CMakeProject1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject1 "employer_2.cpp" "employer_2.h" "engineer_2.cpp" "engineer_2.h" "item_2.cpp" "item_2.h" "main_2.cpp" "person_2.cpp" "person_2.h" "worker_2.cpp" "worker_2.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
