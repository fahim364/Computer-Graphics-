#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<iostream>
#include <math.h>

using namespace std;
void display(void);
void init (void);
void plot(int x, int y);
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("DDA Line");
glutDisplayFunc(display);
init();
glutMainLoop();
}

void init (void)
{
glClearColor(1,1,1,0);
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1,0,0);
glPointSize(5.0);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}


void plot(int x, int y)
{
    glBegin(GL_POINTS);
    glColor3f (1,0,0);
    glVertex2i(x,y);
    glEnd();

}

void display(void)
{
    double x1,y1,x2,y2;
    x1=100;
    x2=200;
    y1=200;
    y2=300;

    float slope=(y2-y1)/(x2-x1);

    for(int i=x1;i<x2;i++)
    {

        if(slope<1)
        {
            x1+=1;
            y1+=slope;
            plot(x1,round(y1));
        }
        else
        {
            x1+=1/slope;
            y1+=1;
            plot(round(x1),y1);

        }
        glFlush();
    }

}

