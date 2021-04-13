#include <iostream>
#include <emscripten.h>
#include <emscripten/val.h>
#include <emscripten/bind.h>
#include <emscripten/html5.h>
#include <unordered_map>

using namespace emscripten;

void test() {
    std::unordered_map<int, int> m;
    m.at(10) = 10;
    std::cout << __func__ << std::endl;
}

EMSCRIPTEN_BINDINGS(module) {
    function("test", &test);
}