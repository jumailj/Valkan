#pragma once
#include <GLFW/glfw3.h>


class Application
{
public:
	GLFWwindow* window;
	void run();

private:

	const uint32_t WIDHT = 800;
	const uint32_t HEIGHT = 600;

	void initWindow();
	void initVulkan();
	void mainLoop();
	void cleanup();
};

