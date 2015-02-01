#include <GL/glew.h>
#include <iostream>
#include <GLUT/glut.h>
using namespace std;
void display() {
}
int main(int argcp, char **argv) {
    /* Set window size and location */ glutInit(&argcp, argv); glutInitWindowSize(640, 480); glutInitWindowPosition(0, 0);
    /* Select type of Display mode: single buffer & RGBA color */ glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    /*Initialize GLUT state */
    glutCreateWindow("Hello World");
    glutDisplayFunc( display );
    GLenum err = glewInit();
    if (GLEW_OK != err)
    {
    }
 //   std::cerr << "Status: Using GLEW " << glewGetString(GLEW_VERSION) << std::endl;
    glutMainLoop();
    return 0;
}