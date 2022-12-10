#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<windows.h>
using namespace std;

///sun-salam
void Sun()
{
    glBegin(GL_POLYGON);
    glColor3ub(255, 92, 51);
	for(int i=0;i<2000;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/2000;
		float r=40;
		float x = 620+r * cos(A);
		float y = 930+r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
}

///cloud initial positions-salam
float cloud1_position=0.0;
float cloud2_position=0.0;
float cloud3_position=0.0;



///cloud1 starts here-salam
void Cloud1()
{
 glPushMatrix();
 glTranslatef(cloud1_position,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 450+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x-350,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<350;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 440+r * cos(A);
		float y = 940+r * sin(A);
		glVertex2f(x-350,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 490+r * cos(A);
		float y = 950+r * sin(A);
		glVertex2f(x-350,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 510+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x-350,y );
	}
	glEnd();

	glPopMatrix();
}
///cloud1 ends-salam


///cloud2 starts-salam
void Cloud2()
{
 glPushMatrix();
 glTranslatef(cloud2_position,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 450+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 440+r * cos(A);
		float y = 940+r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 490+r * cos(A);
		float y = 950+r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 510+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

	    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 450+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x-125,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 440+r * cos(A);
		float y = 940+r * sin(A);
		glVertex2f(x-125,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 490+r * cos(A);
		float y = 950+r * sin(A);
		glVertex2f(x-125,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 510+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x-125,y );
	}
	glEnd();
	glPopMatrix();
}
///cloud2 ends here-salam


///cloud3 starts-salam
void Cloud3()
{
 glPushMatrix();
 glTranslatef(cloud3_position,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(234, 237, 237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 450+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x+400,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(234, 237, 237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 440+r * cos(A);
		float y = 940+r * sin(A);
		glVertex2f(x+400,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(234, 237, 237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 490+r * cos(A);
		float y = 950+r * sin(A);
		glVertex2f(x+400,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(234, 237, 237);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 510+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x+400,y );
	}
	glEnd();
	glPopMatrix();
}
///cloud3 ends here-salam

///Cloud-Update-Salam
///cloud1-update-salam
void UpdateCloud1(int value)
{
    cloud1_position += 10;
    if(cloud1_position > 1000)
    {
        cloud1_position = -200.0f;
    }

	glutPostRedisplay();

	glutTimerFunc(25, UpdateCloud1, 0);
}

///cloud2-update-salam
void UpdateCloud2(int value)
{
    cloud2_position += 2;
    if(cloud2_position > 1000)
    {
        cloud2_position = -600.0f;
    }

	glutPostRedisplay();

	glutTimerFunc(30, UpdateCloud2, 0);
}

///cloud3-update-salam
void UpdateCloud3(int value)
{
    cloud3_position -= 5;
    if(cloud3_position <-1000)
    {
        cloud3_position = 200.0f;
    }

	glutPostRedisplay();

	glutTimerFunc(25, UpdateCloud3, 0);
}


///sky-Nafiz
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


///background-Asif
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

///hill-salam
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

///D_Building-Asif
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

///Tree1-Yulad
void Tree1()
{
    /// left side tree
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
}


///Tree2-YULAD
void Tree2()
{
/// right side tree
    glColor3ub(160, 82, 45);
    glBegin(GL_POLYGON);
    glVertex2f(935.0,470.0);
    glVertex2f(945.0,470.0);
    glVertex2f(945.0,520.0);
    glVertex2f(935.0,520.0);
    glEnd();

    ///leaf
    glColor3ub(0, 179, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(905.0,530.0);
    glVertex2f(970.0,530.0);
    glVertex2f(940.0,570.0);
    glEnd();

    glColor3ub(0, 179, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(905.0,510.0);
    glVertex2f(970.0,510.0);
    glVertex2f(940.0,540.0);
    glEnd();


}


///Road-Asif
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


///display-functions
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

   Sky();
   Sun();
   Background();
   Road();

   Cloud1();
   Cloud2();
   Cloud3();

    Hill();
    D_Building();
    Annex7();
    Annex6();
    Tree1();
    Tree2();

    glFlush();
    glutSwapBuffers();
}


///initial functions
void init()
{
  glClearColor(17,1,.5,45);
  gluOrtho2D(0,1000,0,1000);
}

///main functions
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 600);
    glutCreateWindow("project");
    glutDisplayFunc(display);
    init();
    glutTimerFunc(25, UpdateCloud1, 0);
    glutTimerFunc(25, UpdateCloud2, 0);
    glutTimerFunc(25, UpdateCloud3, 0);
    glutMainLoop();
    glClearColor(17,1,.5,45);
    gluOrtho2D(0,1000,0,1000);
}
