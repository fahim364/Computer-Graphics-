//Draw Line

#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(255.0f, 255.0f, 255.0f, 1.0f); //white background
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(7.5);

	//The X axis Line//

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f); //red line
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);

    //The Y axis Line//

	glVertex2f(0.0f, 1.0f);
	glVertex2f(0.0f, -1.0f);
	glEnd();

    //Double triangle//

    glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 0.0f, 0.0f); //black
	glVertex2f(-0.70f, 0.55f);
	glVertex2f(-0.50f, 0.30f);
	glVertex2f(-0.35f, 0.55f);

	glVertex2f(-0.50f, 0.30f);
	glVertex2f(-0.70f, 0.05f);
	glVertex2f(-0.35f, 0.05f);

    //Single Triangle//

	glVertex2f(-0.55f, -0.10f);
	glVertex2f(-0.65f, -0.40f);
	glVertex2f(-0.35f, -0.40f);

    glEnd();

	//The H shape//

    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f); //black Lines
    glVertex2f(0.25f, -0.10f);
	glVertex2f(0.25f, -0.50f);

	glVertex2f(0.25f, -0.30f);
	glVertex2f(0.40f, -0.30f);

	glVertex2f(0.40f, -0.10f);
	glVertex2f(0.40f, -0.50f);

	//The Plus Shape

	glVertex2f(0.30f, 0.55f);
	glVertex2f(0.45f, 0.15f);

	glVertex2f(0.55f, 0.55f);
	glVertex2f(0.20f, 0.20f);

	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(1240, 1240);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

