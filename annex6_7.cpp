#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<windows.h>
using namespace std;

void Annex7()
{
glColor3ub(86, 101, 115);
glBegin(GL_POLYGON);
glVertex2f(50,700);
glVertex2f(50,550);
glVertex2f(250,550);
glVertex2f(250,700);
glEnd();



glColor3ub(86, 101, 115);
glBegin(GL_POLYGON);
glVertex2f(50,540);
glVertex2f(50,550);
glVertex2f(253,550);
glVertex2f(253,540);
glEnd();

    glColor3ub(33, 33, 33);
    glBegin(GL_POLYGON);
    glVertex2f(110,740);
    glVertex2f(190,740);
    glVertex2f(190,700);
    glVertex2f(110,700);
    glEnd();

    glColor3ub(236, 240, 241);
    char *c="ANNEX 7";
    glRasterPos2f(120.0 , 720.0);
    for(int i = 0; c[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);



/// window

glColor3ub(141, 254, 234);
glBegin(GL_POLYGON);
glVertex2f(60,590);
glVertex2f(60,560);
glVertex2f(95,560);
glVertex2f(95,590);
glEnd();



glColor3ub(141, 254, 234);
glBegin(GL_POLYGON);
glVertex2f(60,610);
glVertex2f(60,640);
glVertex2f(95,640);
glVertex2f(95,610);
glEnd();



glColor3ub(141, 254, 234);
glBegin(GL_POLYGON);
glVertex2f(60,660);
glVertex2f(60,690);
glVertex2f(95,690);
glVertex2f(95,660);
glEnd();



glColor3ub(141, 254, 234);
glBegin(GL_POLYGON);
glVertex2f(105,660);
glVertex2f(105,690);
glVertex2f(145,690);
glVertex2f(145,660);
glEnd();



glColor3ub(141, 254, 234);
glBegin(GL_POLYGON);
glVertex2f(105,610);
glVertex2f(105,640);
glVertex2f(145,640);
glVertex2f(145,610);
glEnd();



glColor3ub(141, 254, 234);
glBegin(GL_POLYGON);
glVertex2f(155,610);
glVertex2f(155,640);
glVertex2f(195,640);
glVertex2f(195,610);
glEnd();



glColor3ub(141, 254, 234);
glBegin(GL_POLYGON);
glVertex2f(155,660);
glVertex2f(155,690);
glVertex2f(195,690);
glVertex2f(195,660);
glEnd();



glColor3ub(141, 254, 234);
glBegin(GL_POLYGON);
glVertex2f(205,660);
glVertex2f(245,660);
glVertex2f(245,690);
glVertex2f(205,690);
glEnd();



glColor3ub(141, 254, 234);
glBegin(GL_POLYGON);
glVertex2f(205,640);
glVertex2f(245,640);
glVertex2f(245,610);
glVertex2f(205,610);
glEnd();



glColor3ub(141, 254, 234);
glBegin(GL_POLYGON);
glVertex2f(205,590);
glVertex2f(245,590);
glVertex2f(245,560);
glVertex2f(205,560);
glEnd();




///door
glColor3ub(52, 73, 94 );
glBegin(GL_POLYGON);
glVertex2f(155,550);
glVertex2f(155,600);
glVertex2f(190,600);
glVertex2f(190,550);
glEnd();



glColor3ub(52, 73, 94 );
glBegin(GL_POLYGON);
glVertex2f(145,550);
glVertex2f(145,600);
glVertex2f(110,600);
glVertex2f(110,550);
glEnd();




///lines
glColor3ub(27, 31, 31);
glBegin(GL_POLYGON);
glVertex2f(190,605);
glVertex2f(190,600);
glVertex2f(110,600);
glVertex2f(110,605);
glEnd();



glColor3ub(27, 31, 31);
glBegin(GL_POLYGON);
glVertex2f(190,550);
glVertex2f(190,555);
glVertex2f(110,555);
glVertex2f(110,550);
glEnd();



glColor3ub(27, 31, 31);
glBegin(GL_POLYGON);
glVertex2f(185,600);
glVertex2f(185,555);
glVertex2f(190,555);
glVertex2f(190,600);
glEnd();



glColor3ub(27, 31, 31);
glBegin(GL_POLYGON);
glVertex2f(115,600);
glVertex2f(115,555);
glVertex2f(110,555);
glVertex2f(110,600);
glEnd();



glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2f(169,555);
glVertex2f(171,555);
glVertex2f(171,600);
glVertex2f(169,600);
glEnd();



glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2f(129,555);
glVertex2f(131,555);
glVertex2f(131,600);
glVertex2f(129,600);
glEnd();



glColor3ub(0, 247, 255);
glBegin(GL_POLYGON);
glVertex2f(50,707);
glVertex2f(50,700);
glVertex2f(250,700);
glVertex2f(250,707);
glEnd();


}
void Annex6()
{
glColor3ub(33, 47, 60 );
glBegin(GL_POLYGON);
glVertex2f(750,700);
glVertex2f(750,550);
glVertex2f(950,550);
glVertex2f(950,700);
glEnd();



glColor3ub(254, 142, 7);
glBegin(GL_POLYGON);
glVertex2f(750,540);
glVertex2f(750,550);
glVertex2f(953,550);
glVertex2f(953,540);
glEnd();

    glColor3ub(33, 33, 33);
    glBegin(GL_POLYGON);
    glVertex2f(805,740);
    glVertex2f(890,740);
    glVertex2f(890,705);
    glVertex2f(805,705);
    glEnd();

    glColor3ub(255, 255, 255);
    char *c="ANNEX 6";
    glRasterPos2f(820.0 , 720.0);
    for(int i = 0; c[i] !='\0'; i++)
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);



/// window


glColor3ub(133, 146, 158);
glBegin(GL_POLYGON);
glVertex2f(760,590);
glVertex2f(760,560);
glVertex2f(795,560);
glVertex2f(795,590);
glEnd();



glColor3ub(133, 146, 158);
glBegin(GL_POLYGON);
glVertex2f(760,610);
glVertex2f(760,640);
glVertex2f(795,640);
glVertex2f(795,610);
glEnd();



glColor3ub(133, 146, 158);
glBegin(GL_POLYGON);
glVertex2f(760,660);
glVertex2f(760,690);
glVertex2f(795,690);
glVertex2f(795,660);
glEnd();



glColor3ub(133, 146, 158);
glBegin(GL_POLYGON);
glVertex2f(805,660);
glVertex2f(805,690);
glVertex2f(845,690);
glVertex2f(845,660);
glEnd();



glColor3ub(133, 146, 158);
glBegin(GL_POLYGON);
glVertex2f(805,610);
glVertex2f(805,640);
glVertex2f(845,640);
glVertex2f(845,610);
glEnd();



glColor3ub(133, 146, 158);
glBegin(GL_POLYGON);
glVertex2f(855,610);
glVertex2f(855,640);
glVertex2f(895,640);
glVertex2f(895,610);
glEnd();



glColor3ub(133, 146, 158);
glBegin(GL_POLYGON);
glVertex2f(855,660);
glVertex2f(855,690);
glVertex2f(895,690);
glVertex2f(895,660);
glEnd();



glColor3ub(133, 146, 158);
glBegin(GL_POLYGON);
glVertex2f(905,660);
glVertex2f(945,660);
glVertex2f(945,690);
glVertex2f(905,690);
glEnd();



glColor3ub(133, 146, 158);
glBegin(GL_POLYGON);
glVertex2f(905,640);
glVertex2f(945,640);
glVertex2f(945,610);
glVertex2f(905,610);
glEnd();



glColor3ub(133, 146, 158);
glBegin(GL_POLYGON);
glVertex2f(905,590);
glVertex2f(945,590);
glVertex2f(945,560);
glVertex2f(905,560);
glEnd();




///door
glColor3ub(141, 254, 234);
glBegin(GL_POLYGON);
glVertex2f(855,550);
glVertex2f(855,600);
glVertex2f(890,600);
glVertex2f(890,550);
glEnd();



glColor3ub(141, 254, 234);
glBegin(GL_POLYGON);
glVertex2f(845,550);
glVertex2f(845,600);
glVertex2f(810,600);
glVertex2f(810,550);
glEnd();




///lines
glColor3ub(27, 31, 31);
glBegin(GL_POLYGON);
glVertex2f(890,605);
glVertex2f(890,600);
glVertex2f(810,600);
glVertex2f(810,605);
glEnd();



glColor3ub(27, 31, 31);
glBegin(GL_POLYGON);
glVertex2f(890,550);
glVertex2f(890,555);
glVertex2f(810,555);
glVertex2f(810,550);
glEnd();



glColor3ub(27, 31, 31);
glBegin(GL_POLYGON);
glVertex2f(885,600);
glVertex2f(885,555);
glVertex2f(890,555);
glVertex2f(890,600);
glEnd();



glColor3ub(27, 31, 31);
glBegin(GL_POLYGON);
glVertex2f(815,600);
glVertex2f(815,555);
glVertex2f(810,555);
glVertex2f(810,600);
glEnd();



glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2f(869,555);
glVertex2f(871,555);
glVertex2f(871,600);
glVertex2f(869,600);
glEnd();



glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2f(829,555);
glVertex2f(831,555);
glVertex2f(831,600);
glVertex2f(829,600);
glEnd();



glColor3ub(220, 118, 51);
glBegin(GL_POLYGON);
glVertex2f(750,707);
glVertex2f(750,700);
glVertex2f(950,700);
glVertex2f(950,707);
glEnd();


}
void Tree1()
{
///left side tree
    glPushMatrix();
    glTranslatef(-140.0,0.0,0.0);
    glColor3ub(160 ,82 ,45);
    glBegin(GL_POLYGON);
    glVertex2f(195.0,470.0);
    glVertex2f(205.0,470.0);
    glVertex2f(205.0,520.0);
    glVertex2f(195.0,520.0);
    glEnd();

    ///leaf
    glColor3ub(0, 179, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(165.0,530.0);
    glVertex2f(230.0,530.0);
    glVertex2f(200.0,570.0);
    glEnd();

    glColor3ub(0, 179, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(165.0,510.0);
    glVertex2f(230.0,510.0);
    glVertex2f(200.0,540.0);
    glEnd();
    glPopMatrix();
    ///done
}
void Tree2()
{
///right side tree
    glColor3ub(160, 82, 45);
    glBegin(GL_POLYGON);
    glVertex2f(195.0,470.0);
    glVertex2f(205.0,470.0);
    glVertex2f(205.0,520.0);
    glVertex2f(195.0,520.0);
    glEnd();

    ///leaf
    glColor3ub(0, 179, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(165.0,530.0);
    glVertex2f(230.0,530.0);
    glVertex2f(200.0,570.0);
    glEnd();

    glColor3ub(0, 179, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(165.0,510.0);
    glVertex2f(230.0,510.0);
    glVertex2f(200.0,540.0);
    glEnd();
    ///done

}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);


    Annex6();
    Annex7();
    Tree1();
    Tree2();



    glFlush();
    glutSwapBuffers();

}
void init()
{
  glClearColor(0.0,0.0,0.0,0.0);
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

