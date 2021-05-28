#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace lve
{
    class LveWindow
    {
        public:
            LveWindow(int w, int h, const std::string& title);
            ~LveWindow();

            LveWindow(const LveWindow &) = delete;
            LveWindow &operator=(const LveWindow &) = delete;

            inline bool ShouldClose() {return glfwWindowShouldClose(window); }

        private:
            void InitWindow();

            const int width;
            const int height;

            std::string windowTitle;

            GLFWwindow* window;
    };
} // namespace lve
