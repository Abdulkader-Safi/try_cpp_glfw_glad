#include <glad/glad.h>
#include <GLFW/glfw3.h> // Example with GLFW
#include <stdio.h>

int main()
{
  // Initialize GLFW
  if (!glfwInit())
  {
    printf("Failed to initialize GLFW\n");
    return -1;
  }

  // Create the windowed mode window and its OpenGL context
  GLFWwindow *window = glfwCreateWindow(800, 600, "OpenGL Window", NULL, NULL);
  if (!window)
  {
    printf("Failed to create GLFW window\n");
    glfwTerminate();
    return -1;
  }

  // Make the window's context current
  glfwMakeContextCurrent(window);

  // Initialize GLAD
  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
  {
    printf("Failed to initialize GLAD\n");
    return -1;
  }

  // OpenGL setup (for example, clear color)
  glClearColor(0.2f, 0.3f, 0.3f, 1.0f); // Set background color to dark gray

  // Main rendering loop
  while (!glfwWindowShouldClose(window))
  {
    // Poll and process events
    glfwPollEvents();

    // Render here
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen

    // Swap buffers
    glfwSwapBuffers(window);
  }

  // Cleanup and close the window
  glfwTerminate();
  return 0;
}