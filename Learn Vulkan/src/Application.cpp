#include "Application.hpp"

namespace lve
{
    void Application::Run()
    {
        while (!lveWindow.ShouldClose())
        {
            glfwPollEvents();
        }
    }
}