#include <pybind11/pybind11.h>
using namespace std;

long long count_numbers(int a, int b) {
    long long total = 0;

    for (int i = a; i <= b; ++i) {
        total += i;
    }
    return total;
}

int add(int a, int b) {
    return a + b;
}

double prod(double a, double b) {
    return a * b;
}

// Экспортируем функцию в модуль Python
// ЗДЕСЬ ОБЯЗАТЕЛЬНО УКАЗЫВАТЬ НАЗВАНИЕ МОДУЛЯ, КАК В CMAKE СБОРКЕ! В ДАННОМ СЛУЧАЕ "my_lib_cpp". Смотреть в конец CMakeLists.txt
PYBIND11_MODULE(my_cpp_lib, m) {
    m.doc() = "My awesome c++ module with much functions";

    m.def("count_numbers", &count_numbers, "A function that count sum of nums from a to b includive");
    m.def("add", &add, "Sum of 2 int numbers");
    m.def("prod", &prod, "Prod result of 2 float numbers");
}
