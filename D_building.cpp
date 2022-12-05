#include<windows.h>
#include<Gl\glut.h>
 void init(){
     glClearColor(0.2,0.6,0.0,0.6); //(r,g,b,opacity)
     glMatrixMode(GL_PROJECTION);
     gluOrtho2D(0.0,1000,0.0,1000);//(min and max value of x-axis,min and max value of y-axis,

 }
  void home(){
    //glColor3f(0.3,0.4,0.5);
   // glBegin(GL_POLYGON); // bohubhuj
   // glVertex2i(200,500);//2d thats why 2,integer value thats why i (x,y)
   // glVertex2i(600,500);
   // glVertex2i(700,350);
   // glVertex2i(300,350);
   // glEnd();
   //first 4 floor
   //1
    glColor3f(0.1,0.3,0.3);
    glBegin(GL_POLYGON);
    glVertex2i(700,350);
    glVertex2i(950,350);
    glVertex2i(950,200);
    glVertex2i(700,200);
    glEnd();
    //window
    glColor3f(0.7,0.74,0.7);
    glBegin(GL_POLYGON);
    glVertex2i(710,250);
    glVertex2i(940,250);
    glVertex2i(940,220);
    glVertex2i(710,220);
    glEnd();
    //window 2
    glColor3f(0.7,0.74,0.7);
    glBegin(GL_POLYGON);
    glVertex2i(710,290);
    glVertex2i(940,290);
    glVertex2i(940,260);
    glVertex2i(710,260);
    glEnd();

    //2
    glColor3f(0.1,0.3,0.3);
    glBegin(GL_POLYGON);
    glVertex2i(720,450);
    glVertex2i(950,450);
    glVertex2i(950,350);
    glVertex2i(720,350);
    glEnd();
    //window
    glColor3f(0.7,0.74,0.7);
    glBegin(GL_POLYGON);
    glVertex2i(710,250);
    glVertex2i(940,250);
    glVertex2i(940,220);
    glVertex2i(710,220);
    glEnd();





    glFlush();
 }
int main(int argc, char **argv){
    glutInit(&argc, argv); // initialize Glut
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100,100); // how the image will appear (top,left)
    glutInitWindowSize(1000,600); //window size or display size
    glutCreateWindow("2D House In OpenGL ");
    init();
    glutDisplayFunc(home);
    glutMainLoop();

}
