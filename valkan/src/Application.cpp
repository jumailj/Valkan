#include "Application.h"

void Application::run() {
	initWindow();
	initVulkan();
	mainLoop();
	cleanup();

}

void Application::initWindow() {

	//initilized glfw;
	glfwInit();

	//tell not to create opengl context;
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

	//turn off window resize;
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	//glfw window;
	window = glfwCreateWindow(WIDHT, HEIGHT, "Vulkan", nullptr, nullptr);


}

void Application::initVulkan() {

}

void Application::mainLoop() {
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

}

void Application::cleanup() {
	glfwDestroyWindow(window);
	glfwTerminate();

}