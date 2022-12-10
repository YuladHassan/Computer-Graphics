#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<windows.h>
using namespace std;

void Background()
{

    glColor3ub(105,139,34);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,470.0);
    glVertex2f(1000.0,470.0);
    glVertex2f(1000.0,830.0);
    glVertex2f(0.0,830.0);
    glEnd();
}



void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    Background();
    glFlush();
    glutSwapBuffers();

}


void init()
{
  glClearColor(1,1,1,1);
  gluOrtho2D(0,1000,0,1000);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 600);
    glutCreateWindow("project");
    glutDisplayFunc(display);
    init();
    glutMainLoop();
}
