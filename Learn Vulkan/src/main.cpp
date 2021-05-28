#include "Application.hpp"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main()
{
    lve::Application app = lve::Application();

    try {
        app.Run();
    } 
    catch (const std::exception &e) {
        std::cerr << e.what() << "\n";
        return EXIT_FAILURE;
    };
}