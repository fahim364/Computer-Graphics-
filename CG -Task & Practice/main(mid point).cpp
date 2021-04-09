#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>


void init (void)
{
glClearColor(1,0,1,0);
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1,0,0);
glPointSize(5.0);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void line(int x, int y)
{
    glBegin(GL_POINTS);
    glColor3f (1,1,1);
    glVertex2i(x,y);
    glEnd();

}

void Mid(void)
{
    int X1,Y1,X2,Y2;
    X1=100;
    X2=200;
    Y1=200;
    Y2=300;
    int dx=X2-X1;
    int dy=Y2-Y1;
    int d=2*dy-dx;
    int Pk=2*dy;
    int Pk1=2*(dy-dx);
    int x=X1;
    int y=Y1;

    int slope=(Y2-Y1)/(X2-X1);

    for(int i=X1;i<X2;i++)
    {

        if(slope<1)
        {
            d+=Pk;
            x++;
        }
        else
        {

           d+=Pk1;
           x++;
           y++;

        }
        line(x,y);
        glFlush();
    }
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitWindowSize (600, 500);
glutInitWindowPosition (400, 150);
glutCreateWindow ("");
glutDisplayFunc(Mid);
init();
glutMainLoop();
}
