#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<windows.h>
using namespace std;




void Sky()
{
    glColor3ub(77, 166, 255);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,830.0);
    glVertex2f(1000.0,830.0);
    glVertex2f(1000.0,1000.0);
    glVertex2f(0.0,1000.0);
    glEnd();


}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

   Sky();



    glFlush();
    glutSwapBuffers();

}


void init()
{
  glClearColor(0.51,1,1,0.01);
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
