#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI 3.14159265358979323846

GLfloat r = 0.0f;
GLfloat s = 0.0f;
GLfloat t = 0.0f;

void display() {
	glClearColor(1.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =0.8f;
	int triangleAmount = 40;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(206,207,208);
		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x1=0.0f; GLfloat y1=0.0f; GLfloat radius1 =0.75f;
	int triangleAmount1 = 40;
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,255);
		glVertex2f(x1, y1);
		for(int j = 0; j <= triangleAmount1;j++) {
			glVertex2f(
                x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
                    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	GLfloat x2=0.0f; GLfloat y2=0.0f; GLfloat radius2 =0.05f;
	int triangleAmount2 = 40;
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(x2, y2);
		for(int k = 0; k <= triangleAmount1;k++) {
			glVertex2f(
                x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
                    y1 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

    glPushMatrix();
    glTranslatef(0.0,0.0,0);
    glRotatef(r,0,0,1);
	glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(-0.01,0.6);
    glVertex2f(-0.01,0.0);
    glVertex2f(0.01,0.0);
    glVertex2f(0.01,0.6);
    glEnd();
    glPopMatrix();
    r-=0.009;


    glPushMatrix();
    glTranslatef(0.0,0.0,0);
    glRotatef(s,0,0,1);
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(0.0,0.01);
    glVertex2f(0.0,-0.01);
    glVertex2f(0.4,-0.01);
    glVertex2f(0.4,0.01);
    glEnd();
    glPopMatrix();
    s-=0.005;

    glPushMatrix();
    glTranslatef(0.0,0.0,0);
    glRotatef(t,0,0,1);
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-0.008,0.0);
    glVertex2f(-0.008,-0.6);
    glVertex2f(0.008,-0.6);
    glVertex2f(0.008,0.0);
    glEnd();
    glPopMatrix();
    t-=0.04;

	glFlush();
}

void idle()
{
 glutPostRedisplay();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("clck");
	glutInitWindowSize(640,480);
	glutDisplayFunc(display);
	glutIdleFunc(idle);
	glutMainLoop();
	return 0;
}
