#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
float x=0,y,x2,y2,m,i,j,p;
int dx=0,dy=0,r;
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glEnd();
    glColor3f (0.7, 0, 0.2);
    glBegin(GL_POINTS);
    p=1-r;
    while((x<=y)){
        if(p<0){
          x=x+1;
          y=y;
            printf("%0.2f %0.2f\n",x,y);
            p=p+(2*x)+1;
            }

            else{
            x=x+1;
            y=y-1;
            printf("%0.2f %0.2f\n",x,y);
            p=p+(2*x)+1-(2*y);
            }
            glVertex3f (((x/100)), ((y/100)), 0.0);
            glVertex3f (((y/100)), ((x/100)), 0.0);
            glVertex3f ((-(x/100)), (-(y/100)), 0.0);
            glVertex3f ((-(x/100)), ((y/100)), 0.0);
            glVertex3f (((x/100)), (-(y/100)), 0.0);
            glVertex3f (((y/100)), (-(x/100)), 0.0);
            glVertex3f ((-(y/100)), (-(x/100)), 0.0);
            glVertex3f ((-(y/100)), ((x/100)), 0.0);
        }
glEnd();
glFlush ();
}
void init (void)
{
