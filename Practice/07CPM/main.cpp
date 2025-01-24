#include <fmt/core.h>
#include <fmt/color.h>
using namespace fmt;
int main() {
    print( fg(color::orange) 
    | bg(color::blue), "Hello World\n");
}