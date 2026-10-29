#include "mamaview/app/graphics_engine.h"

#include <iostream>

#include <GLFW/glfw3.h>

namespace mamaview::app
{

GraphicsEngine::GraphicsEngine(sensors::ISensorSource& sensorSource)
    : sensorSource_(sensorSource)
{
}

int GraphicsEngine::run()
{
    if (glfwInit() == GLFW_FALSE)
    {
        std::cerr << "Failed to initialize GLFW.\n";
        return 1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow* window = glfwCreateWindow(1280, 720, "MamaView", nullptr, nullptr);
    if (window == nullptr)
    {
        std::cerr << "Failed to create the MamaView window.\n";
        glfwTerminate();
        return 1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        const core::Measurement measurement = sensorSource_.read();
        if (!core::isValid(measurement))
        {
            std::cerr << "Received an invalid sensor measurement.\n";
            glfwDestroyWindow(window);
            glfwTerminate();
            return 1;
        }

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}

} // namespace mamaview::app
