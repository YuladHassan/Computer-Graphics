#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<windows.h>
using namespace std;

///hill
void Hill()
{
    //3rd hill
    glPushMatrix();
    glTranslatef(90.0,0.0,0.0);
    glColor3ub(0 ,139, 69);
    glBegin(GL_TRIANGLES);
    glVertex2f(300.0,830.0);
    glVertex2f(450.0,830.0);
    glVertex2f(375.0,910.0);
    glEnd();

    glPopMatrix();

    //left 2nd hill
    glColor3ub(0 ,139, 69);
    glBegin(GL_TRIANGLES);
    glVertex2f(300.0,830.0);
    glVertex2f(450.0,830.0);
    glVertex2f(375.0,910.0);
    glEnd();

    //left 1st hill
    glPushMatrix();
    glTranslatef(-300.0,0.0,0.0);
    glColor3ub(0 ,139 ,69);
    glBegin(GL_TRIANGLES);
    glVertex2f(300.0,830.0);
    glVertex2f(450.0,830.0);
    glVertex2f(375.0,910.0);
    glEnd();

    glPopMatrix();

    //4th hill
    glPushMatrix();
    glTranslatef(400.0,0.0,0.0);
    glColor3ub(0, 139, 69);
    glBegin(GL_TRIANGLES);
    glVertex2f(300.0,830.0);
    glVertex2f(450.0,830.0);
    glVertex2f(375.0,910.0);
    glEnd();



    glPopMatrix();

}



void display()
{
    glClear(GL_COLOR_BUFFER_BIT);


    Hill();



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
