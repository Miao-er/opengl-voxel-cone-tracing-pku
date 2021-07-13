#pragma once
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include "../Renderer/VCTApplication.h"
class UI
{
public:
	UI(GLFWwindow* window)
	{
		IMGUI_CHECKVERSION();
		ImGui::CreateContext();
		ImGuiIO& io = ImGui::GetIO(); (void)io;
		ImGui_ImplGlfw_InitForOpenGL(window, true);
		ImGui::StyleColorsClassic();
		ImGui_ImplOpenGL3_Init("#version 450");
	}
	UI() {}
	void render(VCTApplication* app)
	{

	}
};