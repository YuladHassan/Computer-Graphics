#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<windows.h>
using namespace std;

///Road
void Road()
{
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,280.0);
    glVertex2f(1000.0,280.0);
    glVertex2f(1000.0,470.0);
    glVertex2f(0.0,470.0);
    glEnd();


    glColor3ub(105,105,105);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,300.0);
    glVertex2f(1000.0,300.0);
    glVertex2f(1000.0,450.0);
    glVertex2f(0.0,450.0);
    glEnd();



    glLineWidth(2);
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);
    glVertex2f(0.0,375.0);
    glVertex2f(1000.0,375.0);
    glEnd();

    //side white red shadow
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,280.0);
    glVertex2f(30.0,280.0);
    glVertex2f(30.0,300.0);
    glVertex2f(0.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(60.0,280.0);
    glVertex2f(90.0,280.0);
    glVertex2f(90.0,300.0);
    glVertex2f(60.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(120.0,280.0);
    glVertex2f(150.0,280.0);
    glVertex2f(150.0,300.0);
    glVertex2f(120.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(180.0,280.0);
    glVertex2f(210.0,280.0);
    glVertex2f(210.0,300.0);
    glVertex2f(180.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(240.0,280.0);
    glVertex2f(270.0,280.0);
    glVertex2f(270.0,300.0);
    glVertex2f(240.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0,280.0);
    glVertex2f(330.0,280.0);
    glVertex2f(330.0,300.0);
    glVertex2f(300.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(360.0,280.0);
    glVertex2f(390.0,280.0);
    glVertex2f(390.0,300.0);
    glVertex2f(360.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(420.0,280.0);
    glVertex2f(450.0,280.0);
    glVertex2f(450.0,300.0);
    glVertex2f(420.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(480.0,280.0);
    glVertex2f(510.0,280.0);
    glVertex2f(510.0,300.0);
    glVertex2f(480.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(540.0,280.0);
    glVertex2f(570.0,280.0);
    glVertex2f(570.0,300.0);
    glVertex2f(540.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(600.0,280.0);
    glVertex2f(630.0,280.0);
    glVertex2f(630.0,300.0);
    glVertex2f(600.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(660.0,280.0);
    glVertex2f(690.0,280.0);
    glVertex2f(690.0,300.0);
    glVertex2f(660.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(720.0,280.0);
    glVertex2f(750.0,280.0);
    glVertex2f(750.0,300.0);
    glVertex2f(720.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(780.0,280.0);
    glVertex2f(810.0,280.0);
    glVertex2f(810.0,300.0);
    glVertex2f(780.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(840.0,280.0);
    glVertex2f(870.0,280.0);
    glVertex2f(870.0,300.0);
    glVertex2f(840.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(900.0,280.0);
    glVertex2f(930.0,280.0);
    glVertex2f(930.0,300.0);
    glVertex2f(900.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(960.0,280.0);
    glVertex2f(990.0,280.0);
    glVertex2f(990.0,300.0);
    glVertex2f(960.0,300.0);
    glEnd();

    glPushMatrix();
    glTranslatef(0.0f,170.0f,0.0f);
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0,280.0);
    glVertex2f(30.0,280.0);
    glVertex2f(30.0,300.0);
    glVertex2f(0.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(60.0,280.0);
    glVertex2f(90.0,280.0);
    glVertex2f(90.0,300.0);
    glVertex2f(60.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(120.0,280.0);
    glVertex2f(150.0,280.0);
    glVertex2f(150.0,300.0);
    glVertex2f(120.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(180.0,280.0);
    glVertex2f(210.0,280.0);
    glVertex2f(210.0,300.0);
    glVertex2f(180.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(240.0,280.0);
    glVertex2f(270.0,280.0);
    glVertex2f(270.0,300.0);
    glVertex2f(240.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(300.0,280.0);
    glVertex2f(330.0,280.0);
    glVertex2f(330.0,300.0);
    glVertex2f(300.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(360.0,280.0);
    glVertex2f(390.0,280.0);
    glVertex2f(390.0,300.0);
    glVertex2f(360.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(420.0,280.0);
    glVertex2f(450.0,280.0);
    glVertex2f(450.0,300.0);
    glVertex2f(420.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(480.0,280.0);
    glVertex2f(510.0,280.0);
    glVertex2f(510.0,300.0);
    glVertex2f(480.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(540.0,280.0);
    glVertex2f(570.0,280.0);
    glVertex2f(570.0,300.0);
    glVertex2f(540.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(600.0,280.0);
    glVertex2f(630.0,280.0);
    glVertex2f(630.0,300.0);
    glVertex2f(600.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(660.0,280.0);
    glVertex2f(690.0,280.0);
    glVertex2f(690.0,300.0);
    glVertex2f(660.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(720.0,280.0);
    glVertex2f(750.0,280.0);
    glVertex2f(750.0,300.0);
    glVertex2f(720.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(780.0,280.0);
    glVertex2f(810.0,280.0);
    glVertex2f(810.0,300.0);
    glVertex2f(780.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(840.0,280.0);
    glVertex2f(870.0,280.0);
    glVertex2f(870.0,300.0);
    glVertex2f(840.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(900.0,280.0);
    glVertex2f(930.0,280.0);
    glVertex2f(930.0,300.0);
    glVertex2f(900.0,300.0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(960.0,280.0);
    glVertex2f(990.0,280.0);
    glVertex2f(990.0,300.0);
    glVertex2f(960.0,300.0);
    glEnd();
    glPopMatrix();

}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    Road();
    glFlush();
    glutSwapBuffers();

}

void init()
{
  glClearColor(0,1,0,1);
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
