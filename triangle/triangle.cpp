#include <cmath>
#include <GLFW/glfw3.h>
#include <math.h>

// use mouse location to change the color of a rotating triangle
int main() {

  // Initialize the library
  if (!glfwInit()) {
    return -1;
  }

  // Create a windowed mode window and its OpenGL context
  GLFWwindow* window = glfwCreateWindow(640, 480, "Triangle", NULL, NULL);
  if (!window) {
    glfwTerminate();
    return -1;
  }

  // Make the window's context current
  glfwMakeContextCurrent(window);

  float radians = (M_PI)/180;
  float  rotate = 50;
    static GLfloat vertices[] = { 0.0, 0.0, 1.0,
           cos(0 * radians), sin(0 * radians), 1.0,
           cos(36* radians)*.4, sin(36 * radians)*.4, 1.0,
  				 cos(72 * radians), sin(72 * radians), 1.0,
  				 cos(108 * radians)*.4, sin(108 * radians)*.4, 1.0,
  				 cos(144 * radians), sin(144 * radians), 1.0,
  				 cos(180 * radians)*.4, sin(180 * radians)*.4, 1.0,
  				 cos(216 * radians), sin(216 * radians), 1.0,
  				 cos(252 * radians)*.4, sin(252 * radians)*.4, 1.0,
  				 cos(288 * radians), sin(288 * radians), 1.0,
  				 cos(324 * radians)*.4, sin(324 * radians)*.4, 1.0
       };
    static GLfloat colors[] = {0.0, 1.0, 1.0,
			       0.0, 1.0, 1.0,
			       0.0, 1.0, 1.0,
			       0.0, 1.0, 1.0,
			       0.0, 1.0, 1.0,
			       0.0, 1.0, 1.0,
			       0.0, 1.0, 1.0,
			       0.0, 1.0, 1.0,
			       0.0, 1.0, 1.0,
			       0.0, 1.0, 1.0,
			       0.0, 1.0, 1.0
           };
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
    glColorPointer (3, GL_FLOAT, 0, colors);
    glVertexPointer (3, GL_FLOAT, 0, vertices);
    GLint allIndices[] = {0, 1, 2,
			  0, 2, 3,
			  0, 3, 4,
			  0, 4, 5,
			  0, 5, 6,
			  0, 6, 7,
			  0, 7, 8,
			  0, 8, 9,
			  0, 9, 10,
			  0, 10, 1
    };

  // Loop until the user closes the window
  while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS &&
         !glfwWindowShouldClose(window)) {

    // Set the rendering viewport location and dimensions
    int width, height;
    glfwGetFramebufferSize(window, &width, &height);
    glViewport(0, 0, width, height);

    // Clear the color buffer to black
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // Select and setup the projection matrix
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    float ratio = width / (float) height;
    glOrtho(-ratio, ratio, -1.0f, 1.0f, 1.0f, -1.0f);

    //Filled, Five-pointed Star using glDrawElements
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    rotate = rotate + 1;
    glRotatef(rotate, 0.0, 0.0, 1.0);
    glTranslatef(0.9, 0, 0);
    glRotatef(rotate*5, 0.0, 0.0, 1.0);
    glScalef(0.1, 0.1, 0.1);
    glDrawElements(GL_TRIANGLES, 30, GL_UNSIGNED_INT, allIndices);


    // Swap front and back buffers
    glfwSwapBuffers(window);

    // Poll for and process events
    glfwPollEvents();
  }

  // Clean up
  glfwDestroyWindow(window);
  glfwTerminate();

  return 0;
}

