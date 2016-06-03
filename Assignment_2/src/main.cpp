#include <GLFW/glfw3.h>

// OpenGL Helpers to reduce the clutter
#include "Helpers.h"

// Linear Algebra Library
#include <Eigen/Core>

int main(void)
{
    GLFWwindow* window;

    // Initialize the library
    if (!glfwInit())
        return -1;

    // Activate supersampling
    glfwWindowHint(GLFW_SAMPLES, 8);

    // Ensure that we get at least a 3.2 context
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);

    // On apple we have to load a core profile with forward compatibility
#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    // Create a windowed mode window and its OpenGL context
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    // Make the window's context current
    glfwMakeContextCurrent(window);

    // Initialize the VAO
    // A Vertex Array Object (or VAO) is an object that describes how the vertex
    // attributes are stored in a Vertex Buffer Object (or VBO). This means that
    // the VAO is not the actual object storing the vertex data,
    // but the descriptor of the vertex data.
    VertexArrayObject VAO;
    VAO.init();
    VAO.bind();

    check_gl_error();
    // Initialize the VBO with the vertices data
    VertexBufferObject VBO;
    VBO.init();
    check_gl_error();

    Eigen::MatrixXf V(2,3);
    V << 0,  0.5, -0.5, 0.5, -0.5, -0.5;
    VBO.update(V);
    check_gl_error();

    // Initialize the OpenGL Program
    Program program;
    const GLchar* vertex_shader =
            "#version 150 core\n"
                    "in vec2 position;"
                    "void main()"
                    "{"
                    "    gl_Position = vec4(position, 0.0, 1.0);"
                    "}";
    const GLchar* fragment_shader =
            "#version 150 core\n"
                    "out vec4 outColor;"
                    "void main()"
                    "{"
                    "    outColor = vec4(1.0, 1.0, 1.0, 1.0);"
                    "}";
    program.init(vertex_shader,fragment_shader,"outColor");
    program.bind();
    program.bindVertexAttribArray("position",VBO);

    // Loop until the user closes the window
    while (!glfwWindowShouldClose(window))
    {
        // Bind your VAO (not necessary if you have only one)
        VAO.bind();

        // Bind your program
        program.bind();

        // Clear the framebuffer
        glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // Draw a triangle
        glDrawArrays(GL_TRIANGLES, 0, 3);

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events
        glfwPollEvents();
    }

    program.free();
    VAO.free();
    VBO.free();

    glfwTerminate();
    return 0;
}