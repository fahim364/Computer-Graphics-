
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255,0,0);
glPointSize(4.0);

glBegin(GL_LINES);
glVertex2i(0, 240);
glVertex2i(640, 240);
glVertex2i(320, 0);
glVertex2i(320, 480);
glEnd();
glColor3ub (0,255,0);
glBegin(GL_QUADS);
glVertex2i(350, 50);
glVertex2i(450, 50);
glVertex2i(450, 150);
glVertex2i(350, 150);
glVertex2i(400, 10);
glVertex2i(510, 10);
glVertex2i(510, 100);
glVertex2i(400, 100);

glEnd();
glColor3ub (0,255,0);
glBegin(GL_TRIANGLES);
glVertex2i(350, 280);
glVertex2i(450, 360);
glVertex2i(350, 430);
glVertex2i(550, 280);
glVertex2i(450, 360);
glVertex2i(550, 430);


glEnd();

glBegin(GL_LINES);
glVertex2i(50, 50);
glVertex2i(230, 50);
glVertex2i(50, 180);
glVertex2i(50, 50);
glVertex2i(50, 180);
glVertex2i(230, 180);
glVertex2i(230, 180);
glVertex2i(230, 50);
glVertex2i(50, 180);
glVertex2i(230, 50);
glVertex2i(50, 50);
glVertex2i(230, 180);




glEnd();
glBegin(GL_TRIANGLES);
glVertex2i(50, 280);
glVertex2i(275, 280);
glVertex2i(162, 360);
glVertex2i(50, 360);
glVertex2i(275, 360);
glVertex2i(162, 450);

glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 200);
glutCreateWindow ("This is the title");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
