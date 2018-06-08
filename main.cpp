#include <GL/freeglut.h>
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.5f, -0.5f);    // x, y
        glVertex2f( 0.5f, -0.5f);
        glVertex2f( 0.5f,  0.5f);
        glVertex2f(-0.5f,  0.5f);
    glEnd();

    glFlush();
}

int main(int argc, char ** argv) {
    std::cout << "Hello, world" << std::endl;
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320,320);
    glutInitWindowPosition(50,50);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}