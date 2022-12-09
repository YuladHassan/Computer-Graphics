#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<windows.h>
using namespace std;


///sun
float sun_position=7.0f;




///sun
void Sun()
{
    glPushMatrix();
    glTranslatef(0.0,sun_position,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 92, 51);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 620+r * cos(A);
		float y = 930+r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);


    Sun();



    glFlush();
    glutSwapBuffers();

}



void init()
{
    glClearColor(0.0,1.0,1.0,1.0);
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
