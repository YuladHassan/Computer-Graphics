#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<windows.h>
using namespace std;

///D_Building
void D_Building()
{
    glColor3ub(133, 146, 158);
    glBegin(GL_POLYGON);
    glVertex2f(580,680);
    glVertex2f(580,500);
    glVertex2f(530,500);
    glVertex2f(530,680);
    glEnd();

    glColor3ub(133, 146, 158);
    glBegin(GL_POLYGON);
    glVertex2f(528,680);
    glVertex2f(528,510);
    glVertex2f(410,510);
    glVertex2f(410,680);
    glEnd();

    ///name board
    glColor3ub(255, 112, 77);
    glBegin(GL_POLYGON);
    glVertex2f(460,680);
    glVertex2f(550,680);
    glVertex2f(550,740);
    glVertex2f(460,740);
    glEnd();

    glColor3ub(0, 0, 255);
    char *c="AIUB";
    glRasterPos2f(480.0 , 700.0);
    for(int i = 0; c[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);



///window
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(575,530);
    glVertex2f(560,530);
    glVertex2f(560,510);
    glVertex2f(575,510);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(575,590);
    glVertex2f(560,590);
    glVertex2f(560,570);
    glVertex2f(575,570);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(575,650);
    glVertex2f(560,650);
    glVertex2f(560,630);
    glVertex2f(575,630);
    glEnd();

     glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(545,545);
    glVertex2f(532,545);
    glVertex2f(532,505);
    glVertex2f(545,505);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(545,605);
    glVertex2f(532,605);
    glVertex2f(532,565);
    glVertex2f(545,565);
    glEnd();

    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2f(545,665);
    glVertex2f(532,665);
    glVertex2f(532,625);
    glVertex2f(545,625);
    glEnd();

     glColor3ub(255, 255,255);
    glBegin(GL_POLYGON);
    glVertex2f(525,650);
    glVertex2f(525,630);
    glVertex2f(515,630);
    glVertex2f(515,650);
    glEnd();

        glColor3ub(255, 255,255);
    glBegin(GL_POLYGON);
    glVertex2f(525,590);
    glVertex2f(525,570);
    glVertex2f(515,570);
    glVertex2f(515,590);
    glEnd();


     glColor3ub(255, 255,255);
    glBegin(GL_POLYGON);
    glVertex2f(525,540);
    glVertex2f(525,520);
    glVertex2f(515,520);
    glVertex2f(515,540);
    glEnd();

    glColor3ub(255, 255,255);
    glBegin(GL_POLYGON);
    glVertex2f(485,540);
    glVertex2f(485,510);
    glVertex2f(465,510);
    glVertex2f(465,540);
    glEnd();

    glColor3ub(255, 255,255);
    glBegin(GL_POLYGON);
    glVertex2f(480,590);
    glVertex2f(480,570);
    glVertex2f(470,570);
    glVertex2f(470,590);
    glEnd();

    glColor3ub(255, 255,255);
    glBegin(GL_POLYGON);
    glVertex2f(480,650);
    glVertex2f(480,630);
    glVertex2f(470,630);
    glVertex2f(470,650);
    glEnd();

    glColor3ub(255, 255,255);
    glBegin(GL_POLYGON);
    glVertex2f(440,650);
    glVertex2f(440,630);
    glVertex2f(430,630);
    glVertex2f(430,650);
    glEnd();

    glColor3ub(255, 255,255);
    glBegin(GL_POLYGON);
    glVertex2f(440,590);
    glVertex2f(440,570);
    glVertex2f(430,570);
    glVertex2f(430,590);
    glEnd();

    glColor3ub(255, 255,255);
    glBegin(GL_POLYGON);
    glVertex2f(440,540);
    glVertex2f(440,520);
    glVertex2f(430,520);
    glVertex2f(430,540);
    glEnd();

///line
glBegin(GL_POLYGON);
     glColor3ub(60,59,47);
    glVertex2f(452,680);
    glVertex2f(452,510);
    glVertex2f(448,510);
    glVertex2f(448,680);
    glEnd();

 glBegin(GL_POLYGON);
     glColor3ub(60,59,47);
    glVertex2f(500,680);
    glVertex2f(500,510);
    glVertex2f(496,510);
    glVertex2f(496,680);
    glEnd();


    glBegin(GL_POLYGON);

    glColor3ub(60,59,47);
    glVertex2f(528,510);
    glVertex2f(530,510);
    glVertex2f(530,690);
    glVertex2f(528,690);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(60,59,47);
    glVertex2f(406,690);
    glVertex2f(406,505);
    glVertex2f(410,505);
    glVertex2f(410,690);
    glEnd();

     glColor3ub(60, 59,47);
    glBegin(GL_POLYGON);
    glVertex2f(528,680);
    glVertex2f(528,690);
    glVertex2f(410,690);
    glVertex2f(410,680);
    glEnd();

     glColor3ub(60, 59,47);
    glBegin(GL_POLYGON);
    glVertex2f(530,680);
    glVertex2f(530,690);
    glVertex2f(585,690);
    glVertex2f(585,680);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(60,59,47);
    glVertex2f(585,690);
    glVertex2f(585,500);
    glVertex2f(580,500);
    glVertex2f(580,690);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3ub(255, 43,15);
    glVertex2f(410,690);
    glVertex2f(410,710);
    glVertex2f(430,710);
    glVertex2f(430,690);
    glEnd();

   glBegin(GL_POLYGON);
      glColor3ub(60,59,47);
    glVertex2f(408,710);
    glVertex2f(408,715);
    glVertex2f(432,715);
    glVertex2f(432,710);
    glEnd();


    /// ground
    glBegin(GL_QUAD_STRIP);

    glColor3ub(184, 134 ,11);
    glVertex2f(586,500);
    glVertex2f(410,500);
    glVertex2f(586,490);
    glVertex2f(410,490);
    glEnd();



    glColor3ub(184, 134 ,11);
    glBegin(GL_POLYGON);

    glVertex2f(400,490);
    glVertex2f(530,490);
    glVertex2f(530,510);
    glVertex2f(405,510);
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    D_Building();
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
