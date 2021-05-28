#pragma once

#include "LveWindow.hpp"

namespace lve
{
    class Application
    {
        public:
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 600;

            void Run();

        private:
            LveWindow lveWindow = LveWindow(WIDTH, HEIGHT, "Hello Vulkan!");
    };
}