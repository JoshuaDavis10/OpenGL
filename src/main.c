#include "../include/GL/gl3w.h"
#include "../include/GLFW/glfw3.h"

int main() {
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(640, 480, "Triangles", NULL, NULL);

    glfwMakeContextCurrent(window);
    gl3wInit();

    while(!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}
