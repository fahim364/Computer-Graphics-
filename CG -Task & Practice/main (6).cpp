#include<iostream>
#include<GL/glut.h>
#include<math.h>
#define PI          3.14159265358979323846


GLfloat position = 0.0f;
GLfloat position2 = 0.0f;
GLfloat position3 = 0.0f;
int i;

GLfloat speed = 0.1f;

void update(int value)
{
    if(position < -1.0)
        position = 1.0f;
            position -= speed;
        glutPostRedisplay();
        glutTimerFunc(100, update, 0);
}

void update2(int value)
{
        if(position2 > 1.0)
        position2 = -1.0f;
        position2 += speed;
        glutPostRedisplay();
    glutTimerFunc(100, update2, 0);
}

void update3(int value)
{
         if(position3 > -1.0 && position3<0 )
        position3 = -.7f;
        position3 += speed;
        glutPostRedisplay();
    glutTimerFunc(100, update3, 0);
}

void update4(int value)
{
         if(position3 > -1.0 && position3<0 )
        position3 = -.7f;
        position3 += speed;
        glutPostRedisplay();
    glutTimerFunc(100, update3, 0);
}

void init()
{
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void SpecialInput(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_UP:

            break;
        case GLUT_KEY_DOWN:
                speed=0.0f;
            break;
        case GLUT_KEY_LEFT:
            speed=0.1f;
            glutTimerFunc(1000, update, 0);
            break;
        case GLUT_KEY_RIGHT:
            speed=0.1f;
            glutTimerFunc(1000, update2, 0);
            glutTimerFunc(1000, update3, 0);
            break;
    }
    glutPostRedisplay();
}

void handlekeyexpress(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'a':
        glutTimerFunc(100, update, 0);
        glutPostRedisplay();
        break;
    case 'b':
        glutTimerFunc(100, update2, 0);
        glutPostRedisplay();
        break;
    case 'c':
        glutTimerFunc(100, update3, 0);
        glutPostRedisplay();
        break;
    case 'd':
        glutTimerFunc(100, update4, 0);
        glutPostRedisplay();
        break;

    }
    glutPostRedisplay();
}


void handleMouse(int button,int state, int x, int y)
{
    if(button==GLUT_LEFT_BUTTON)
    {
        speed+=0.1f;
    }
    if(button==GLUT_RIGHT_BUTTON)
    {
        speed-=0.1f;
    }
    glutPostRedisplay();
}

void summer(int v);
void rainy(int v);

void winter(int v)
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //################$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$


     //grass.........

        glBegin(GL_QUADS);
      glColor3ub(45,134,45);
      glVertex2f(-1,.5);
      glVertex2f(-1,-1);
      glVertex2f(1,-1);
      glVertex2f(1,.5);
      glEnd();



      //sky................

          glBegin(GL_QUADS);
      glColor3ub( 37, 127, 229   );
      glVertex2f(-1,1);
      glVertex2f(-1,.5);
      glVertex2f(1,.5);
      glVertex2f(1,1);
      glEnd();


      //road.........

        glBegin(GL_QUADS);
      glColor3ub( 49, 49, 46  );
      glVertex2f(-1,.5);
      glVertex2f(-1,.25);
      glVertex2f(1,.25);
      glVertex2f(1,.5);
      glEnd();



      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(-.8,.38);
      glVertex2f(-.8,.36);
      glVertex2f(-.6,.36);
      glVertex2f(-.6,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(-.15,.38);
      glVertex2f(-.15,.36);
      glVertex2f(.15,.36);
      glVertex2f(.15,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(.2,.38);
      glVertex2f(.2,.36);
      glVertex2f(.3,.36);
      glVertex2f(.3,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(.4,.38);
      glVertex2f(.4,.36);
      glVertex2f(.6,.36);
      glVertex2f(.6,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(.7,.38);
      glVertex2f(.7,.36);
      glVertex2f(.95,.36);
      glVertex2f(.95,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(-.95,.38);
      glVertex2f(-.95,.36);
      glVertex2f(-.8,.36);
      glVertex2f(-.8,.38);
      glEnd();

      //Zebra Crossing
      glBegin(GL_QUADS);
      glColor3ub( 209, 207, 201 );
      glVertex2f(-.5,.49);
      glVertex2f(-.5,.46);
      glVertex2f(-.2,.46);
      glVertex2f(-.2,.49);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 209, 207, 201 );
      glVertex2f(-.5,.43);
      glVertex2f(-.5,.40);
      glVertex2f(-.2,.40);
      glVertex2f(-.2,.43);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 209, 207, 201 );
      glVertex2f(-.5,.37);
      glVertex2f(-.5,.34);
      glVertex2f(-.2,.34);
      glVertex2f(-.2,.37);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 209, 207, 201 );
      glVertex2f(-.5,.31);
      glVertex2f(-.5,.28);
      glVertex2f(-.2,.28);
      glVertex2f(-.2,.31);
      glEnd();

      //Lamp Post2
      glBegin(GL_QUADS);
      glColor3ub( 92, 78, 36 );
      glVertex2f(-.95,.65);
      glVertex2f(-.95,.50);
      glVertex2f(-.94,.50);
      glVertex2f(-.94,.65);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 191, 165, 86 );
      glVertex2f(-.94,.63);
      glVertex2f(-.94,.62);
      glVertex2f(-.91,.62);
      glVertex2f(-.91,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0,0,0 );
      glVertex2f(-.924,.62);
      glVertex2f(-.924,.60);
      glVertex2f(-.926,.60);
      glVertex2f(-.926,.62);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 192, 0 );
      glVertex2f(-.936,.60);
      glVertex2f(-.936,.56);
      glVertex2f(-.914,.56);
      glVertex2f(-.914,.60);
      glEnd();

      //Lamp Post2.1
      glBegin(GL_QUADS);
      glColor3ub( 92, 78, 36 );
      glVertex2f(-.65,.65);
      glVertex2f(-.65,.50);
      glVertex2f(-.64,.50);
      glVertex2f(-.64,.65);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 191, 165, 86 );
      glVertex2f(-.64,.63);
      glVertex2f(-.64,.62);
      glVertex2f(-.61,.62);
      glVertex2f(-.61,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0,0,0 );
      glVertex2f(-.624,.62);
      glVertex2f(-.624,.60);
      glVertex2f(-.626,.60);
      glVertex2f(-.626,.62);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 192, 0 );
      glVertex2f(-.636,.60);
      glVertex2f(-.636,.56);
      glVertex2f(-.614,.56);
      glVertex2f(-.614,.60);
      glEnd();

      //Lamp Post2.2
      glBegin(GL_QUADS);
      glColor3ub( 92, 78, 36 );
      glVertex2f(-.05,.65);
      glVertex2f(-.05,.50);
      glVertex2f(-.04,.50);
      glVertex2f(-.04,.65);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 191, 165, 86 );
      glVertex2f(-.04,.63);
      glVertex2f(-.04,.62);
      glVertex2f(-.01,.62);
      glVertex2f(-.01,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0,0,0 );
      glVertex2f(-.024,.62);
      glVertex2f(-.024,.60);
      glVertex2f(-.026,.60);
      glVertex2f(-.026,.62);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 192, 0 );
      glVertex2f(-.036,.60);
      glVertex2f(-.036,.56);
      glVertex2f(-.014,.56);
      glVertex2f(-.014,.60);
      glEnd();

      //Lamp Post2.3
      glBegin(GL_QUADS);
      glColor3ub( 92, 78, 36 );
      glVertex2f(.95,.65);
      glVertex2f(.95,.50);
      glVertex2f(.94,.50);
      glVertex2f(.94,.65);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 191, 165, 86 );
      glVertex2f(.94,.63);
      glVertex2f(.94,.62);
      glVertex2f(.91,.62);
      glVertex2f(.91,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0,0,0 );
      glVertex2f(.924,.62);
      glVertex2f(.924,.60);
      glVertex2f(.926,.60);
      glVertex2f(.926,.62);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 192, 0 );
      glVertex2f(.936,.60);
      glVertex2f(.936,.56);
      glVertex2f(.914,.56);
      glVertex2f(.914,.60);
      glEnd();


//tree 2............

     glLineWidth(5);//tree lower dal...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.5f, 0.5f);
	glVertex2f(-0.5f, 0.65f);
 glEnd();



	 glBegin(GL_TRIANGLES);// tree2 leaf 1..
    glColor3ub(127, 179, 125);//rgb color picker

    glVertex2f(-.56f, .56f);    // 2
	glVertex2f(-0.44f,.56f);
	glVertex2f(-.5f, 0.64f);

    glVertex2f(-.55f, .60f);    // 3
	glVertex2f(-0.45f,.60f);
	glVertex2f(-.5f, 0.65f);

    glVertex2f(-.54f, .63f);    // 4
	glVertex2f(-0.46f,.63f);
	glVertex2f(-.5f, 0.67f);


    glVertex2f(-.53f, .65f);    // 5
	glVertex2f(-0.47f,.65f);
	glVertex2f(-.5f, 0.69f);


    glVertex2f(-.52f, .67f);    // 6
	glVertex2f(-0.48f,.67f);
	glVertex2f(-.5f, 0.71f);
	glEnd();


      //building 1......

         glBegin(GL_QUADS);
      glColor3ub( 153, 77, 51 );
      glVertex2f(-.18,.68);
      glVertex2f(-.18,.5);
      glVertex2f(-.1,.5);
      glVertex2f(-.1,.68);
      glEnd();

glLineWidth(5);//bldng spaace......................
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(-.17f, 0.55f);
	glVertex2f(-.15f, 0.55f);    // x, y

glVertex2f(-.17f, 0.60f);
	glVertex2f(-.15f, 0.60f);    // x, y

glVertex2f(-.17f, 0.65f);
	glVertex2f(-.15f, 0.65f);    // x, y

	glVertex2f(-.11f, 0.55f);
	glVertex2f(-.13f, 0.55f);    // x, y

glVertex2f(-.11f, 0.60f);
	glVertex2f(-.13f, 0.60f);    // x, y

glVertex2f(-.11f, 0.65f);
	glVertex2f(-.13f, 0.65f);    // x, y
	 glEnd();


glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(153, 0, 0);
glVertex2f(-.14f, 0.51f);   //midline of bldng
	glVertex2f(-.14f, 0.66f);

 glEnd();

  //building 2......

         glBegin(GL_QUADS);
      glColor3ub(1204, 102, 0);
      glVertex2f(-.25,.65);
      glVertex2f(-.25,.5);
      glVertex2f(-.19,.5);
      glVertex2f(-.19,.65);
      glEnd();

glLineWidth(5);//bldng2 sgape......................
	glBegin(GL_LINES);
	glColor3ub(255, 255, 102);
	glVertex2f(-.24f, 0.53f);
	glVertex2f(-.23f, 0.53f);

	glVertex2f(-.24f, 0.58f);
	glVertex2f(-.23f, 0.58f);

glVertex2f(-.24f, 0.63f);
	glVertex2f(-.23f, 0.63f);

	glVertex2f(-.2f, 0.53f);
	glVertex2f(-.21f, 0.53f);

	glVertex2f(-.2f, 0.58f);
	glVertex2f(-.21f, 0.58f);

	glVertex2f(-.2f, 0.63f);
	glVertex2f(-.21f, 0.63f);

	glEnd();

	glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(153, 0, 1);
glVertex2f(-.22f, 0.51f);   //midline of bldng2........
	glVertex2f(-.22f, 0.63f);

    glEnd();
    //road................
glEnable(GL_LIGHTING);
GLfloat global_ambient[]={5,5,5,5};
glLightModelfv(GL_LIGHT_MODEL_AMBIENT,global_ambient);
          glBegin(GL_QUADS);
      glColor3ub( 229, 232, 229   );
      glVertex2f(-1,1);
      glVertex2f(-1,.6);
      glVertex2f(1,.6);
      glVertex2f(1,1);
      glEnd();
glDisable(GL_LIGHTING);


GLfloat global_ambient2[]={10,10,10,10};
glLightModelfv(GL_LIGHT_MODEL_AMBIENT,global_ambient2);
        glBegin(GL_QUADS);
      glColor3ub( 110, 136, 111 );
      glVertex2f(-1,.6);
      glVertex2f(-1,-.4);
      glVertex2f(1,-.4);
      glVertex2f(1,.6);
      glEnd();
glDisable(GL_LIGHTING);
      //sky.........
glEnable(GL_LIGHTING);
GLfloat global_ambient1[]={2,2,2,2};
glLightModelfv(GL_LIGHT_MODEL_AMBIENT,global_ambient1);
        glBegin(GL_QUADS);
      glColor3ub( 49, 49, 46  );
      glVertex2f(-1,.6);
      glVertex2f(-1,.3);
      glVertex2f(1,.3);
      glVertex2f(1,.6);
      glEnd();



      //2nd station lower bit..............
      glBegin(GL_QUADS);
      glColor3ub(38, 94, 213);
      glVertex2f(0,0);
      glVertex2f(.9,0);
      glVertex2f(.9,.1);
      glVertex2f(0,.1);
      glEnd();

         //2nd station right side bit.........
       glBegin(GL_QUADS);
      glColor3ub(213, 139, 38);
      glVertex2f(.95,.2);
      glVertex2f(.9,.1);
      glVertex2f(.9,0);
      glVertex2f(.95,.125);
      glEnd();
           //2nd station upper side bit.........
       glBegin(GL_QUADS);
      glColor3ub(124, 140, 176);
      glVertex2f(0,.1);
      glVertex2f(.9,.1);
      glVertex2f(.95,.2);
      glVertex2f(.1,.2);
      glEnd();


glDisable(GL_LIGHTING);

      //#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@





      //Bus
    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(150, 183, 191);
    glVertex2f(-.69,0.59);
    glVertex2f(-.69,0.36);
    glVertex2f(-.44,0.36);
    glVertex2f(-.44,0.59);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(114, 86, 72);
    glVertex2f(-.52,0.53);
    glVertex2f(-.52,0.48);
    glVertex2f(-.49,0.48);
    glVertex2f(-.49,0.53);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(114, 86, 72);
    glVertex2f(-.68,0.53);
    glVertex2f(-.68,0.48);
    glVertex2f(-.65,0.48);
    glVertex2f(-.65,0.53);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(114, 86, 72);
    glVertex2f(-.61,0.37);
    glVertex2f(-.61,0.51);
    glVertex2f(-.58,0.51);
    glVertex2f(-.58,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(114, 86, 72);
    glVertex2f(-.56,0.53);
    glVertex2f(-.56,0.48);
    glVertex2f(-.53,0.48);
    glVertex2f(-.53,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(114, 86, 72);
    glVertex2f(-.45,0.53);
    glVertex2f(-.45,0.48);
    glVertex2f(-.48,0.48);
    glVertex2f(-.48,0.53);
    glEnd();

    //BusWheel1
    int j;
	GLfloat a=-0.64f; GLfloat b=0.36f; GLfloat r =.03f;
	int triangleAmount = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(132, 121, 115);
		glVertex2f(a, b);
		GLfloat tPi = 2.0f * PI;
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            a + (r * cos(j *  tPi / triangleAmount)),
			    b + (r * sin(j * tPi / triangleAmount))
			);
		}
	glEnd();

	//BusWheel2
    int k;
	GLfloat m=-.50f; GLfloat n=0.36f; GLfloat ra =.03f;
	int tAa = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(132, 121, 115);
		glVertex2f(m, n);
		GLfloat twPi = 2.0f * PI;
		for(k = 0; k <= tAa;k++) {
			glVertex2f(
		            m + (ra * cos(k *  twPi / triangleAmount)),
			    n + (ra * sin(k * twPi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    glPopMatrix();


    //Car
    glPushMatrix();
glTranslatef(position, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(173, 129, 128);
    glVertex2f(.4,.650);
    glVertex2f(.4,.450);
    glVertex2f(.6,.450);
    glVertex2f(.6,.650);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(173, 129, 128);
    glVertex2f(.3,.55);
    glVertex2f(.3,0.45);
    glVertex2f(.4,0.45);
    glVertex2f(.4,0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(173, 129, 128);
    glVertex2f(.6,0.58);
    glVertex2f(.6,0.45);
    glVertex2f(.67,0.45);
    glVertex2f(.67,.55);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(74, 70, 70);
    glVertex2f(.4,0.58);
    glVertex2f(.4,.45);
    glVertex2f(.36,0.57);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(74, 70, 70);
    glVertex2f(.6,.65);
    glVertex2f(.6,0.58);
    glVertex2f(.63,0.565);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(74, 70, 70);
    glVertex2f(.43,.58);
    glVertex2f(.48,.58);
    glVertex2f(.49,.63);
    glVertex2f(.44,.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(74, 70, 70);
    glVertex2f(.52,.58);
    glVertex2f(.57,.58);
    glVertex2f(.58,.63);
    glVertex2f(.53,.63);
    glEnd();

    //CarWheel1
    int w;
	GLfloat c=.4f; GLfloat d=0.45f; GLfloat rad =.03f;
	int tAn = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(82, 73, 68);
		glVertex2f(c, d);
		GLfloat twiPi = 2.0f * PI;
		for(w = 0; w <= tAn;w++) {
			glVertex2f(
		            c + (rad * cos(w *  twiPi / triangleAmount)),
			    d + (rad * sin(w * twiPi / triangleAmount))
			);
		}
	glEnd();

	//CarWheel2
    int z;
	GLfloat e=.58f; GLfloat f=0.45f; GLfloat radi =.03f;
	int tAng = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(82, 73, 68);
		glVertex2f(e, f);
		GLfloat twicPi = 2.0f * PI;
		for(z = 0; z <= tAng;z++) {
			glVertex2f(
		            e + (radi * cos(z *  twicPi / triangleAmount)),
			    f + (radi * sin(z * twicPi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	    glPopMatrix();



	 //tree rail line............

     glLineWidth(4);//tree lower dal...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.6f, 0.2f);
	glVertex2f(-0.6f, 0.35f);
 glEnd();



	 glBegin(GL_TRIANGLES);// tree2 leaf 1..
    glColor3ub(127, 179, 125);//rgb color picker

    glVertex2f(-.66f, .26f);    // 2
	glVertex2f(-0.54f,.26f);
	glVertex2f(-.6f, 0.34f);

    glVertex2f(-.65f, .30f);    // 3
	glVertex2f(-0.55f,.30f);
	glVertex2f(-.6f, 0.35f);

    glVertex2f(-.64f, .33f);    // 4
	glVertex2f(-0.56f,.33f);
	glVertex2f(-.6f, 0.37f);


    glVertex2f(-.63f, .35f);    // 5
	glVertex2f(-0.57f,.35f);
	glVertex2f(-.6f, 0.39f);


    glVertex2f(-.62f, .37f);    // 6
	glVertex2f(-0.58f,.37f);
	glVertex2f(-.6f, 0.41f);
	glEnd();


	 //tree rail line............

     glLineWidth(4);//tree lower dal...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.4f, 0.2f);
	glVertex2f(-0.4f, 0.35f);
 glEnd();



	 glBegin(GL_TRIANGLES);// tree2 leaf 1..
    glColor3ub(127, 179, 125);//rgb color picker

    glVertex2f(-.46f, .26f);    // 2
	glVertex2f(-0.34f,.26f);
	glVertex2f(-.4f, 0.34f);

    glVertex2f(-.45f, .30f);    // 3
	glVertex2f(-0.35f,.30f);
	glVertex2f(-.4f, 0.35f);

    glVertex2f(-.44f, .33f);    // 4
	glVertex2f(-0.36f,.33f);
	glVertex2f(-.4f, 0.37f);


    glVertex2f(-.43f, .35f);    // 5
	glVertex2f(-0.37f,.35f);
	glVertex2f(-.4f, 0.39f);


    glVertex2f(-.42f, .37f);    // 6
	glVertex2f(-0.38f,.37f);
	glVertex2f(-.4f, 0.41f);
	glEnd();



	 //tree rail line............

     glLineWidth(4);//tree lower dal...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.2f, 0.2f);
	glVertex2f(-0.2f, 0.35f);
 glEnd();



	 glBegin(GL_TRIANGLES);// tree2 leaf 1..
    glColor3ub(127, 179, 125);//rgb color picker

    glVertex2f(-.26f, .26f);    // 2
	glVertex2f(-0.14f,.26f);
	glVertex2f(-.2f, 0.34f);

    glVertex2f(-.25f, .30f);    // 3
	glVertex2f(-0.15f,.30f);
	glVertex2f(-.2f, 0.35f);

    glVertex2f(-.24f, .33f);    // 4
	glVertex2f(-0.16f,.33f);
	glVertex2f(-.2f, 0.37f);


    glVertex2f(-.23f, .35f);    // 5
	glVertex2f(-0.17f,.35f);
	glVertex2f(-.2f, 0.39f);


    glVertex2f(-.22f, .37f);    // 6
	glVertex2f(-0.18f,.37f);
	glVertex2f(-.2f, 0.41f);
	glEnd();



	//RAIL LINE 4

      //RAIL LINE

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-1,0);             //SURU
    glVertex2f(-1,-.02);
    glVertex2f(1,-.02);
    glVertex2f(1,0);

    glVertex2f(-1,-.07);
    glVertex2f(-1,-.09);
    glVertex2f(1,-.09);
    glVertex2f(1,-.07);

    glVertex2f(-.95,-.02);
    glVertex2f(-.95,-.07);
    glVertex2f(-.9,-.07);
    glVertex2f(-.9,-.02);

    glVertex2f(-.75,-.02);
    glVertex2f(-.75,-.07);
    glVertex2f(-.7,-.07);
    glVertex2f(-.7,-.02);

    glVertex2f(-.55,-.02);
    glVertex2f(-.55,-.07);
    glVertex2f(-.5,-.07);
    glVertex2f(-.5,-.02);

    glVertex2f(-.35,-.02);
    glVertex2f(-.35,-.07);
    glVertex2f(-.3,-.07);
    glVertex2f(-.3,-.02);

    glVertex2f(-.15,-.02);
    glVertex2f(-.15,-.07);
    glVertex2f(-.1,-.07);
    glVertex2f(-.1,-.02);

    glVertex2f(.15,-.02);
    glVertex2f(.15,-.07);
    glVertex2f(.1,-.07);
    glVertex2f(.1,-.02);

     glVertex2f(.35,-.02);
    glVertex2f(.35,-.07);
    glVertex2f(.3,-.07);
    glVertex2f(.3,-.02);


    glVertex2f(.55,-.02);
    glVertex2f(.55,-.07);
    glVertex2f(.5,-.07);
    glVertex2f(.5,-.02);

    glVertex2f(.75,-.02);
    glVertex2f(.75,-.07);
    glVertex2f(.7,-.07);
    glVertex2f(.7,-.02);

    glVertex2f(.95,-.02);
    glVertex2f(.95,-.07);
    glVertex2f(.9,-.07);
    glVertex2f(.9,-.02);
    glEnd();


    //BACKSIDE TRAIN 03

    //RAIL LINE

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-1,-.2);             //SURU
    glVertex2f(-1,-.23);
    glVertex2f(1,-.23);
    glVertex2f(1,-.2);

    glVertex2f(-1,-.11);
    glVertex2f(-1,-.14);
    glVertex2f(1,-.14);
    glVertex2f(1,-.11);

    glVertex2f(-.95,-.13);
    glVertex2f(-.95,-.2);
    glVertex2f(-.9,-.2);
    glVertex2f(-.9,-.13);

    glVertex2f(-.75,-.13);
    glVertex2f(-.75,-.2);
    glVertex2f(-.7,-.2);
    glVertex2f(-.7,-.13);

    glVertex2f(-.55,-.13);
    glVertex2f(-.55,-.2);
    glVertex2f(-.5,-.2);
    glVertex2f(-.5,-.13);

    glVertex2f(-.35,-.13);
    glVertex2f(-.35,-.2);
    glVertex2f(-.3,-.2);
    glVertex2f(-.3,-.13);

    glVertex2f(-.15,-.13);
    glVertex2f(-.15,-.2);
    glVertex2f(-.1,-.2);
    glVertex2f(-.1,-.13);

    glVertex2f(.15,-.13);
    glVertex2f(.15,-.2);
    glVertex2f(.1,-.2);
    glVertex2f(.1,-.13);

     glVertex2f(.35,-.13);
    glVertex2f(.35,-.2);
    glVertex2f(.3,-.2);
    glVertex2f(.3,-.13);


    glVertex2f(.55,-.13);
    glVertex2f(.55,-.2);
    glVertex2f(.5,-.2);
    glVertex2f(.5,-.13);

    glVertex2f(.75,-.13);
    glVertex2f(.75,-.2);
    glVertex2f(.7,-.2);
    glVertex2f(.7,-.13);

    glVertex2f(.95,-.13);
    glVertex2f(.95,-.2);
    glVertex2f(.9,-.2);
    glVertex2f(.9,-.13);
    glEnd();


       //TRAIN 3
    glLoadIdentity();                           //SURU
    glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);


    //BOGI 1
    glBegin(GL_QUADS);
    glColor3ub(0, 53, 102);
    glVertex2f(.6,.03);
    glVertex2f(.6,-.2);
    glVertex2f(.4,-.2);
    glVertex2f(.4,.03);

    //BOGI 2
    glVertex2f(.38,.02);
    glVertex2f(.38,-.2);
    glVertex2f(0,-.2);
    glVertex2f(0,.02);

    //BOGI 3
    glVertex2f(-.02,.02);
    glVertex2f(-.02,-.2);
    glVertex2f(-.4,-.2);
    glVertex2f(-.4,.02);

    //BOGI 4
    glVertex2f(-.42,.02);
    glVertex2f(-.42,-.2);
    glVertex2f(-.8,-.2);
    glVertex2f(-.8,.02);

    glEnd();



    //SMOKE




    //glPushMatrix();
	glTranslatef(0.0f,position3,0.0f);
    //1
    GLfloat s11=.7f; GLfloat d11=.05; GLfloat radiusdh11 =.02f;
	int triangleAmountdh11 = 20;
	GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s11, d11);
    int dh11;
    for(dh11 = 0; dh11 <= triangleAmountdh11;dh11++)
        {
        glVertex2f(s11 + (radiusdh11 * cos(dh11 *  twicePi / triangleAmountdh11)),
                   d11 + (radiusdh11 * sin(dh11 * twicePi / triangleAmountdh11)));
		}
	glEnd();


	//2
	 GLfloat s22=.7f; GLfloat d22=-.02; GLfloat radiusdh22 =.02f;
	int triangleAmountdh22 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s22, d22);
    int dh22;
    for(dh22 = 0; dh22 <= triangleAmountdh22;dh22++)
        {
        glVertex2f(s22 + (radiusdh22 * cos(dh22 *  twicePi / triangleAmountdh22)),
                   d22 + (radiusdh22 * sin(dh22 * twicePi / triangleAmountdh22)));
		}
	glEnd();


	//3
	 GLfloat s33=.7f; GLfloat d33=-.09f; GLfloat radiusdh33 =.02f;
	int triangleAmountdh33 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s33, d33);
    int dh33;
    for(dh33 = 0; dh33 <= triangleAmountdh33;dh33++)
        {
        glVertex2f(s33 + (radiusdh33 * cos(dh33 *  twicePi / triangleAmountdh33)),
                   d33 + (radiusdh33 * sin(dh33 * twicePi / triangleAmountdh33)));
		}
	glEnd();

	//glPopMatrix();
	glLoadIdentity();



	glTranslatef(position2,0.0f,0.0f);



    //FRONT
    glBegin(GL_QUADS);
    glColor3ub(0, 38, 77);
    glVertex2f(.6,-.03);
    glVertex2f(.75,-.03);
    glVertex2f(.75,-.2);
    glVertex2f(.6,-.2);


    glColor3ub(38,38,38);
    glVertex2f(.72,-.05);
    glVertex2f(.68,-.05);
    glVertex2f(.68,.05);
    glVertex2f(.72,.05);

    glColor3ub(26,26,26);
    glVertex2f(.73,.08);
    glVertex2f(.67,.08);
    glVertex2f(.67,.04);
    glVertex2f(.73,.04);

    glColor3ub(26,26,26);
    glVertex2f(.65,-.05);
    glVertex2f(.62,-.05);
    glVertex2f(.62,-.02);
    glVertex2f(.65,-.02);              //SESH

    //HEADLIGHT
    glColor3ub(255,255,0);
    glVertex2f(.75,-.15);
    glVertex2f(.77,-.15);
    glVertex2f(.77,-.17);
    glVertex2f(.75,-.17);

    //TRAIN 2 ER BOGI CONNECTOR
    //BOGI 1-2
    glColor3ub(0,0,0);
    glVertex2f(.4,-.17);
    glVertex2f(.4,-.19);
    glVertex2f(.38,-.19);
    glVertex2f(.38,-.17);

    //BOGI 2-3
    glVertex2f(0,-.17);
    glVertex2f(0,-.19);
    glVertex2f(-.02,-.19);
    glVertex2f(-.02,-.17);

    //BOGI 3-4
    glVertex2f(-.4,-.17);
    glVertex2f(-.4,-.19);
    glVertex2f(-.42,-.19);
    glVertex2f(-.42,-.17);


    //TRAIN ER MAJHKHAN
    glColor3ub(255, 255, 128);            //SURU
    glVertex2f(-.8,-.11);
    glVertex2f(-.8,-.04);
    glVertex2f(-.42,-.04);
    glVertex2f(-.42,-.11);

   // glColor3ub(77,77,77);
    glVertex2f(-.4,-.11);
    glVertex2f(-.4,-.04);
    glVertex2f(-.02,-.04);
    glVertex2f(-.02,-.11);

    //glColor3ub(77,77,77);
    glVertex2f(.38,-.11);
    glVertex2f(.38,-.04);
    glVertex2f(0,-.04);
    glVertex2f(0,-.11);

    //glColor3ub(77,77,77);
    glVertex2f(.6,-.11);
    glVertex2f(.6,-.04);
    glVertex2f(.4,-.04);
    glVertex2f(.4,-.11);                 //SESH

    // TRAIN 2 ER WINDOW

    //BOGI 1


    glColor3ub(217, 217, 217);
    glVertex2f(.55,-.1);
    glVertex2f(.42,-.1);
    glVertex2f(.42,.01);
    glVertex2f(.55,.01);

    //DOOR
    //glColor3ub(255,255,255);
    glVertex2f(.59,-.16);
    glVertex2f(.56,-.16);
    glVertex2f(.56,-.02);
    glVertex2f(.59,-.02);                           //SESH


    //BOGI 2
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.33,-.1);
    glVertex2f(.27,-.1);
    glVertex2f(.27,-.05);
    glVertex2f(.33,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(.26,-.1);
    glVertex2f(.2,-.1);
    glVertex2f(.2,-.05);
    glVertex2f(.26,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(.19,-.1);
    glVertex2f(.13,-.1);
    glVertex2f(.13,-.05);
    glVertex2f(.19,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(.12,-.1);
    glVertex2f(.06,-.1);
    glVertex2f(.06,-.05);
    glVertex2f(.12,-.05);                  //SESH


    //DOOR

    //glColor3ub(255,255,255);              //SURU
    glVertex2f(.37,-.16);
    glVertex2f(.34,-.16);
    glVertex2f(.34,-.02);
    glVertex2f(.37,-.02);

    //glColor3ub(255,255,255);
    glVertex2f(.01,-.16);
    glVertex2f(.04,-.16);
    glVertex2f(.04,-.02);
    glVertex2f(.01,-.02);                       //SHESH

    // BOGI 3
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(-.07,-.1);
    glVertex2f(-.13,-.1);
    glVertex2f(-.13,-.05);
    glVertex2f(-.07,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.14,-.1);
    glVertex2f(-.2,-.1);
    glVertex2f(-.2,-.05);
    glVertex2f(-.14,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.21,-.1);
    glVertex2f(-.27,-.1);
    glVertex2f(-.27,-.05);
    glVertex2f(-.21,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.28,-.1);
    glVertex2f(-.34,-.1);
    glVertex2f(-.34,-.05);
    glVertex2f(-.28,-.05);                  //SESH


    //DOOR

    //glColor3ub(255,255,255);              //SURU
    glVertex2f(-.03,-.16);
    glVertex2f(-.06,-.16);
    glVertex2f(-.06,-.02);
    glVertex2f(-.03,-.02);

    //glColor3ub(255,255,255);
    glVertex2f(-.39,-.16);
    glVertex2f(-.36,-.16);
    glVertex2f(-.36,-.02);
    glVertex2f(-.39,-.02);                       //SHESH


    // BOGI 4
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(-.47,-.1);
    glVertex2f(-.53,-.1);
    glVertex2f(-.53,-.05);
    glVertex2f(-.47,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.54,-.1);
    glVertex2f(-.6,-.1);
    glVertex2f(-.6,-.05);
    glVertex2f(-.54,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.61,-.1);
    glVertex2f(-.67,-.1);
    glVertex2f(-.67,-.05);
    glVertex2f(-.61,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.68,-.1);
    glVertex2f(-.74,-.1);
    glVertex2f(-.74,-.05);
    glVertex2f(-.68,-.05);                      //SESH


    //DOOR

    //glColor3ub(255,255,255);              //SURU
    glVertex2f(-.43,-.16);
    glVertex2f(-.46,-.16);
    glVertex2f(-.46,-.02);
    glVertex2f(-.43,-.02);

    //glColor3ub(255,255,255);
    glVertex2f(-.79,-.16);
    glVertex2f(-.76,-.16);
    glVertex2f(-.76,-.02);
    glVertex2f(-.79,-.02);                       //SHESH



    glEnd();

    //TRAIN 2 ER WINDOW ER PARTITION
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glLineWidth(3);
    // BOGI W1

    glVertex2f(.51,-.1);
    glVertex2f(.51,.01);

    glVertex2f(.46,-.1);
    glVertex2f(.46,.01);

    glVertex2f(.6,-.1);
    glVertex2f(.75,-.1);

    glVertex2f(.6,-.15);
    glVertex2f(.75,-.15);

    glVertex2f(.59,-.15);
    glVertex2f(.56,-.15);


    //BOGI W2
    glVertex2f(.3,-.1);
    glVertex2f(.3,-.05);

    glVertex2f(.23,-.1);
    glVertex2f(.23,-.05);

    glVertex2f(.16,-.1);
    glVertex2f(.16,-.05);

    glVertex2f(.09,-.1);
    glVertex2f(.09,-.05);


    glVertex2f(.38,0);
    glVertex2f(0,0);

    glVertex2f(.37,-.15);
    glVertex2f(.34,-.15);

    glVertex2f(.01,-.15);
    glVertex2f(.04,-.15);

    // BOGI W3
    glVertex2f(-.1,-.1);
    glVertex2f(-.1,-.05);

    glVertex2f(-.17,-.1);
    glVertex2f(-.17,-.05);

    glVertex2f(-.24,-.1);
    glVertex2f(-.24,-.05);

    glVertex2f(-.31,-.1);
    glVertex2f(-.31,-.05);

    glVertex2f(-.02,0);
    glVertex2f(-.4,0);

    glVertex2f(-.03,-.15);
    glVertex2f(-.06,-.15);

    glVertex2f(-.39,-.15);
    glVertex2f(-.36,-.15);

    //BOGI W4
    glVertex2f(-.5,-.1);
    glVertex2f(-.5,-.05);

    glVertex2f(-.57,-.1);
    glVertex2f(-.57,-.05);

    glVertex2f(-.64,-.1);
    glVertex2f(-.64,-.05);

    glVertex2f(-.71,-.1);
    glVertex2f(-.71,-.05);

    glVertex2f(-.42,0);
    glVertex2f(-.8,0);

    glVertex2f(-.43,-.15);
    glVertex2f(-.46,-.15);

     glVertex2f(-.76,-.15);
    glVertex2f(-.79,-.15);


    glEnd();


    //TRAIN 2 ER WHEEL

    //WHEEL 1


    GLfloat m1=-.75f; GLfloat n1=-.2f; GLfloat radiusst1 =.02f;
	int triangleAmountst1 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m1,n1);
    int k1;
    for(k1 = 0; k1 <= triangleAmountst1;k1++)
        {
        glVertex2f(m1 + (radiusst1 * cos(k1 *  twicePi / triangleAmountst1)),
                   n1 + (radiusst1 * sin(k1 * twicePi / triangleAmountst1)));
		}
	glEnd();

	//WHEEL 2
    GLfloat m2=-.65f; GLfloat n2=-.2f; GLfloat radiusst2 =.02f;
	int triangleAmountst2 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m2, n2);
    int k2;
    for(k2 = 0; k2 <= triangleAmountst2;k2++)
        {
        glVertex2f(m2 + (radiusst2 * cos(k2 *  twicePi / triangleAmountst2)),
                   n2 + (radiusst2 * sin(k2 * twicePi / triangleAmountst2)));
		}
	glEnd();

	//WHEEL 3
    GLfloat m3=-.55f; GLfloat n3=-.2f; GLfloat radiusst3 =.02f;
	int triangleAmountst3 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m3, n3);
    int k3;
    for(k3 = 0; k3 <= triangleAmountst3;k3++)
        {
        glVertex2f(m3 + (radiusst3 * cos(k3 *  twicePi / triangleAmountst3)),
                   n3 + (radiusst3 * sin(k3 * twicePi / triangleAmountst3)));
		}
	glEnd();

	//WHEEL 4
    GLfloat m4=-.45f; GLfloat n4=-.2f; GLfloat radiusst4 =.02f;
	int triangleAmountst4 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m4, n4);
    int k4;
    for(k4 = 0; k4 <= triangleAmountst4;k4++)
        {
        glVertex2f(m4 + (radiusst4 * cos(k4 *  twicePi / triangleAmountst4)),
                   n4 + (radiusst4 * sin(k4 * twicePi / triangleAmountst4)));
		}
	glEnd();

	//WHEEL 5
    GLfloat m5=-.35f; GLfloat n5=-.2f; GLfloat radiusst5 =.02f;
	int triangleAmountst5 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m5, n5);
    int k5;
    for(k5 = 0; k5 <= triangleAmountst5;k5++)
        {
        glVertex2f(m5 + (radiusst5 * cos(k5 *  twicePi / triangleAmountst5)),
                   n5 + (radiusst5 * sin(k5 * twicePi / triangleAmountst5)));
		}
	glEnd();

	//WHEEL 6
    GLfloat m6=-.25f; GLfloat n6=-.2f; GLfloat radiusst6 =.02f;
	int triangleAmountst6 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m6, n6);
    int k6;
    for(k6= 0; k6 <= triangleAmountst6;k6++)
        {
        glVertex2f(m6 + (radiusst6 * cos(k6 *  twicePi / triangleAmountst6)),
                   n6 + (radiusst6 * sin(k6 * twicePi / triangleAmountst6)));
		}
	glEnd();

	//WHEEL 7
    GLfloat m7=-.15f; GLfloat n7=-.2f; GLfloat radiusst7 =.02f;
	int triangleAmountst7 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m7, n7);
    int k7;
    for(k7 = 0; k7 <= triangleAmountst7;k7++)
        {
        glVertex2f(m7 + (radiusst7 * cos(k7 *  twicePi / triangleAmountst7)),
                   n7 + (radiusst7 * sin(k7 * twicePi / triangleAmountst7)));
		}
	glEnd();

	//WHEEL 8
    GLfloat m8=-.05f; GLfloat n8=-.2f; GLfloat radiusst8 =.02f;
	int triangleAmountst8 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m8, n8);
    int k8;
    for(k8 = 0; k8 <= triangleAmountst8;k8++)
        {
        glVertex2f(m8 + (radiusst8 * cos(k8 *  twicePi / triangleAmountst8)),
                   n8 + (radiusst7 * sin(k8 * twicePi / triangleAmountst8)));
		}
	glEnd();

	//WHEEL 9
    GLfloat m9=.05f; GLfloat n9=-.2f; GLfloat radiusst9 =.02f;
	int triangleAmountst9 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m9, n9);
    int k9;
    for(k9 = 0; k9 <= triangleAmountst9;k9++)
        {
        glVertex2f(m9 + (radiusst9 * cos(k9 *  twicePi / triangleAmountst9)),
                   n9 + (radiusst9 * sin(k9 * twicePi / triangleAmountst9)));
		}
	glEnd();

	//WHEEL 10
    GLfloat m10=.15f; GLfloat n10=-.2f; GLfloat radiusst10 =.02f;
	int triangleAmountst10 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m10, n10);
    int k10;
    for(k10= 0; k10 <= triangleAmountst10;k10++)
        {
        glVertex2f(m10 + (radiusst10 * cos(k10 *  twicePi / triangleAmountst10)),
                   n10 + (radiusst10 * sin(k10 * twicePi / triangleAmountst10)));
		}
	glEnd();

	//WHEEL 11
    GLfloat m11=.25f; GLfloat n11=-.2f; GLfloat radiusst11 =.02f;
	int triangleAmountst11 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m11, n11);
    int k11;
    for(k11 = 0; k11 <= triangleAmountst11;k11++)
        {
        glVertex2f(m11 + (radiusst11 * cos(k11 *  twicePi / triangleAmountst11)),
                   n11 + (radiusst11 * sin(k11* twicePi / triangleAmountst11)));
		}
	glEnd();

	//WHEEL 12
    GLfloat m12=.35f; GLfloat n12=-.2f; GLfloat radiusst12 =.02f;
	int triangleAmountst12 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m12, n12);
    int k12;
    for(k12 = 0; k12 <= triangleAmountst12;k12++)
        {
        glVertex2f(m12 + (radiusst12 * cos(k12 *  twicePi / triangleAmountst12)),
                   n12 + (radiusst12* sin(k12 * twicePi / triangleAmountst12)));
		}
	glEnd();


	//WHEEL 13
    GLfloat m13=.45f; GLfloat n13=-.2f; GLfloat radiusst13 =.02f;
	int triangleAmountst13 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m13, n13);
    int k13;
    for(k13 = 0; k13 <= triangleAmountst13;k13++)
        {
        glVertex2f(m13 + (radiusst13 * cos(k13 *  twicePi / triangleAmountst13)),
                   n13 + (radiusst13* sin(k13 * twicePi / triangleAmountst13)));
		}
	glEnd();

	//WHEEL 14
    GLfloat m14=.55f; GLfloat n14=-.2f; GLfloat radiusst14 =.02f;
	int triangleAmountst14 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m14, n14);
    int k14;
    for(k14 = 0; k14 <= triangleAmountst14;k14++)
        {
        glVertex2f(m14 + (radiusst14 * cos(k14 *  twicePi / triangleAmountst14)),
                   n14+ (radiusst14* sin(k14* twicePi / triangleAmountst14)));
		}
	glEnd();

	//WHEEL 15
    GLfloat m15=.65f; GLfloat n15=-.2f; GLfloat radiusst15=.025f;
	int triangleAmountst15= 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m15, n15);
    int k15;
    for(k15= 0; k15<= triangleAmountst15;k15++)
        {
        glVertex2f(m15+ (radiusst15* cos(k15 *  twicePi / triangleAmountst15)),
                   n15 + (radiusst15* sin(k15 * twicePi / triangleAmountst15)));
		}
	glEnd();

	//WHEEL 16
    GLfloat m16=.72f; GLfloat n16=-.2f; GLfloat radiusst16 =.025f;
	int triangleAmountst16 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m16, n16);
    int k16;
    for(k16 = 0; k16 <= triangleAmountst16;k16++)
        {
        glVertex2f(m16 + (radiusst16 * cos(k16 *  twicePi / triangleAmountst16)),
                   n16 + (radiusst16* sin(k16 * twicePi / triangleAmountst16)));
		}
	glEnd();

glLoadIdentity();




	//station lower bit..............
      glBegin(GL_QUADS);
      glColor3ub(38, 94, 213);
      glVertex2f(-.2,-.4);
      glVertex2f(-.2,-.5);
      glVertex2f(.75,-.5);
      glVertex2f(.75,-.4);
      glEnd();
      //upper side bit.........
      glBegin(GL_QUADS);
      glColor3ub(124, 140, 176);
      glVertex2f(-.1,-.2);
      glVertex2f(-.2,-.4);
      glVertex2f(.75,-.4);
      glVertex2f(.85,-.2);
      glEnd();
      //right side bit.........
       glBegin(GL_QUADS);
      glColor3ub( 213, 139, 38 );
      glVertex2f(.75,-.4);
      glVertex2f(.75,-.5);
      glVertex2f(.85,-.28);
      glVertex2f(.85,-.2);
      glEnd();

      //bench 1..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(-.05,-.25);
      glVertex2f(-.05,-.35);
      glVertex2f(.15,-.35);
      glVertex2f(.15,-.25);
      glEnd();

           //bench 2..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.25,-.25);
      glVertex2f(.25,-.35);
      glVertex2f(.45,-.35);
      glVertex2f(.45,-.25);
      glEnd();
         //bench 3..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.55,-.25);
      glVertex2f(.55,-.35);
      glVertex2f(.7,-.35);
      glVertex2f(.7,-.25);
      glEnd();

           //pillar 1..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(0,-.35);
      glVertex2f(.05,-.35);
      glVertex2f(.05,.4);
      glVertex2f(0,.4);
      glEnd();
         //pillar 2..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.3,-.35);
      glVertex2f(.35,-.35);
      glVertex2f(.35,.4);
      glVertex2f(.3,.4);
      glEnd();
          //pillar 3..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.6,-.35);
      glVertex2f(.65,-.35);
      glVertex2f(.65,.4);
      glVertex2f(.6,.4);
      glEnd();

      //roof........

   glBegin(GL_QUADS);
      glColor3ub( 207, 144, 9  );
      glVertex2f(-.1,.4);
      glVertex2f(.85,.4);
      glVertex2f(.85,.5);
      glVertex2f(-.1,.5);
      glEnd();
      //celling.........
         glBegin(GL_QUADS);
      glColor3ub(177, 185, 171    );
      glVertex2f(-.1,.5);
      glVertex2f(.85,.5);
      glVertex2f(.9,.6);
      glVertex2f(-.05,.6);
      glEnd();
     // celling right...
        glBegin(GL_QUADS);
      glColor3ub(115, 55, 45   );
      glVertex2f(.9,.6);
      glVertex2f(.85,.5);
      glVertex2f(.85,.4);
      glVertex2f(.9,.5);
      glEnd();

      //2nd station bench1.....

        glBegin(GL_QUADS);
      glColor3ub(117, 23, 7);
      glVertex2f(.15,.13);
      glVertex2f(.28,.13);
      glVertex2f(.28,.2);
      glVertex2f(.15,.2);
      glEnd();
     //2nd station 2nd bench
          glBegin(GL_QUADS);
      glColor3ub(117, 23, 7);
      glVertex2f(.4,.13);
      glVertex2f(.55,.13);
      glVertex2f(.55,.2);
      glVertex2f(.4,.2);
      glEnd();
        //2nd station 3rd bench
          glBegin(GL_QUADS);
      glColor3ub(117, 23, 7);
      glVertex2f(.7,.13);
      glVertex2f(.85,.13);
      glVertex2f(.85,.2);
      glVertex2f(.7,.2);
      glEnd();

     glEnable(GL_LIGHTING);
GLfloat global_ambient14[]={3,3,3,3};
glLightModelfv(GL_LIGHT_MODEL_AMBIENT,global_ambient14);
     //2nd station piller1
       glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.2,.2);
      glVertex2f(.25,.2);
      glVertex2f(.25,.4);
      glVertex2f(.2,.4);
      glEnd();

         //2nd station piller2
       glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.45,.2);
      glVertex2f(.5,.2);
      glVertex2f(.5,.4);
      glVertex2f(.45,.4);
      glEnd();

           //2nd station piller3
       glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.75,.2);
      glVertex2f(.8,.2);
      glVertex2f(.8,.4);
      glVertex2f(.75,.4);
      glEnd();

glDisable(GL_LIGHTING);





      //STATION NAME


            //station billboard...
      glBegin(GL_QUADS);
      glColor3ub( 124, 140, 176 );
      glVertex2f(.15,.5);
      glVertex2f(.65,.5);
      glVertex2f(.65,.65);
      glVertex2f(.15,.65);
      glEnd();

      //"J"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.167,.64);
      glVertex2f(.167,.63);
      glVertex2f(.187,.63);
      glVertex2f(.187,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.187,.63);
      glVertex2f(.182,.63);
      glVertex2f(.182,.52);
      glVertex2f(.187,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.182,.52);
      glVertex2f(.182,.53);
      glVertex2f(.167,.53);
      glVertex2f(.167,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.167,.52);
      glVertex2f(.172,.52);
      glVertex2f(.172,.56);
      glVertex2f(.167,.56);
      glEnd();

      //"O"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.192,.64);
      glVertex2f(.192,.52);
      glVertex2f(.195,.52);
      glVertex2f(.195,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.207,.64);
      glVertex2f(.207,.52);
      glVertex2f(.210,.52);
      glVertex2f(.210,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.192,.64);
      glVertex2f(.192,.63);
      glVertex2f(.210,.63);
      glVertex2f(.210,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.192,.53);
      glVertex2f(.192,.52);
      glVertex2f(.210,.52);
      glVertex2f(.210,.53);
      glEnd();

      //"Y"
	  glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.214,.64);
      glVertex2f(.210,.64);
      glVertex2f(.216,.58);
      glVertex2f(.220,.58);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.220,.58);
      glVertex2f(.224,.58);
      glVertex2f(.230,.64);
      glVertex2f(.226,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.218,.58);
      glVertex2f(.218,.52);
      glVertex2f(.222,.52);
      glVertex2f(.222,.58);
      glEnd();

      //"P"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.235,.64);
      glVertex2f(.235,.52);
      glVertex2f(.238,.52);
      glVertex2f(.238,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.235,.64);
      glVertex2f(.235,.63);
      glVertex2f(.250,.63);
      glVertex2f(.250,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.245,.64);
      glVertex2f(.245,.59);
      glVertex2f(.250,.59);
      glVertex2f(.250,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.250,.60);
      glVertex2f(.235,.60);
      glVertex2f(.235,.59);
      glVertex2f(.250,.59);
      glEnd();

      //"U"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.255,.64);
      glVertex2f(.255,.52);
      glVertex2f(.259,.52);
      glVertex2f(.259,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.266,.64);
      glVertex2f(.266,.52);
      glVertex2f(.270,.52);
      glVertex2f(.270,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.255,.535);
      glVertex2f(.255,.52);
      glVertex2f(.270,.52);
      glVertex2f(.270,.535);
      glEnd();

      //"R"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.275,.64);
      glVertex2f(.275,.52);
      glVertex2f(.278,.52);
      glVertex2f(.278,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.275,.64);
      glVertex2f(.275,.63);
      glVertex2f(.290,.63);
      glVertex2f(.290,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.285,.64);
      glVertex2f(.285,.59);
      glVertex2f(.290,.59);
      glVertex2f(.290,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.290,.60);
      glVertex2f(.275,.60);
      glVertex2f(.275,.59);
      glVertex2f(.290,.59);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.275,.60);
      glVertex2f(.275,.585);
      glVertex2f(.290,.53);
      glVertex2f(.290,.555);
      glEnd();

      //"H"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.295,.64);
      glVertex2f(.295,.52);
      glVertex2f(.3,.52);
      glVertex2f(.3,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.305,.64);
      glVertex2f(.305,.52);
      glVertex2f(.31,.52);
      glVertex2f(.31,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.295,.59);
      glVertex2f(.295,.57);
      glVertex2f(.310,.57);
      glVertex2f(.310,.59);
      glEnd();

      //"A"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.321,.64);
      glVertex2f(.318,.64);
      glVertex2f(.313,.52);
      glVertex2f(.316,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.324,.64);
      glVertex2f(.321,.64);
      glVertex2f(.325,.52);
      glVertex2f(.328,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.315,.58);
      glVertex2f(.315,.57);
      glVertex2f(.326,.57);
      glVertex2f(.326,.58);
      glEnd();

      //"T"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.328,.64);
      glVertex2f(.328,.63);
      glVertex2f(.348,.63);
      glVertex2f(.348,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.336,.64);
      glVertex2f(.336,.52);
      glVertex2f(.340,.52);
      glVertex2f(.340,.64);
      glEnd();

      //"R"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.361,.64);
      glVertex2f(.361,.52);
      glVertex2f(.364,.52);
      glVertex2f(.364,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.361,.64);
      glVertex2f(.361,.63);
      glVertex2f(.376,.63);
      glVertex2f(.376,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.371,.64);
      glVertex2f(.371,.59);
      glVertex2f(.376,.59);
      glVertex2f(.376,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.376,.60);
      glVertex2f(.376,.60);
      glVertex2f(.361,.59);
      glVertex2f(.376,.59);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.361,.60);
      glVertex2f(.361,.585);
      glVertex2f(.376,.53);
      glVertex2f(.376,.555);
      glEnd();

      //"A"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.385,.64);
      glVertex2f(.382,.64);
      glVertex2f(.377,.52);
      glVertex2f(.380,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.388,.64);
      glVertex2f(.385,.64);
      glVertex2f(.389,.52);
      glVertex2f(.392,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.379,.58);
      glVertex2f(.379,.57);
      glVertex2f(.390,.57);
      glVertex2f(.390,.58);
      glEnd();

      //"I"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.393,.64);
      glVertex2f(.393,.63);
      glVertex2f(.403,.63);
      glVertex2f(.403,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.397,.64);
      glVertex2f(.397,.52);
      glVertex2f(.399,.52);
      glVertex2f(.399,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.393,.53);
      glVertex2f(.393,.52);
      glVertex2f(.403,.52);
      glVertex2f(.403,.53);
      glEnd();

      //"L"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.405,.64);
      glVertex2f(.405,.52);
      glVertex2f(.410,.52);
      glVertex2f(.410,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.410,.53);
      glVertex2f(.410,.52);
      glVertex2f(.422,.52);
      glVertex2f(.422,.53);
      glEnd();

      //W
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.425,.64);
      glVertex2f(.425,.52);
      glVertex2f(.428,.52);
      glVertex2f(.428,.64);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub( 0, 0, 0);
      glVertex2f(.427,.52);
      glVertex2f(.444,.52);
      glVertex2f(.435,.59);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub( 124, 140, 176);
      glVertex2f(.430,.52);
      glVertex2f(.441,.52);
      glVertex2f(.435,.57);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.444,.64);
      glVertex2f(.444,.52);
      glVertex2f(.446,.52);
      glVertex2f(.446,.64);
      glEnd();

      //"A"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.462,.64);
      glVertex2f(.457,.64);
      glVertex2f(.454,.52);
      glVertex2f(.457,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.465,.64);
      glVertex2f(.462,.64);
      glVertex2f(.466,.52);
      glVertex2f(.469,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.456,.58);
      glVertex2f(.456,.57);
      glVertex2f(.467,.57);
      glVertex2f(.467,.58);
      glEnd();

      //"Y"
	  glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.475,.64);
      glVertex2f(.471,.64);
      glVertex2f(.477,.58);
      glVertex2f(.481,.58);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.481,.58);
      glVertex2f(.485,.58);
      glVertex2f(.491,.64);
      glVertex2f(.487,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.479,.58);
      glVertex2f(.479,.52);
      glVertex2f(.483,.52);
      glVertex2f(.483,.58);
      glEnd();

      //S
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.505,.64);
      glVertex2f(.505,.58);
      glVertex2f(.508,.58);
      glVertex2f(.508,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.518,.64);
      glVertex2f(.505,.64);
      glVertex2f(.505,.63);
      glVertex2f(.518,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.518,.58);
      glVertex2f(.505,.58);
      glVertex2f(.505,.57);
      glVertex2f(.518,.57);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.518,.58);
      glVertex2f(.515,.58);
      glVertex2f(.515,.52);
      glVertex2f(.518,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.518,.53);
      glVertex2f(.505,.53);
      glVertex2f(.505,.52);
      glVertex2f(.518,.52);
      glEnd();

      //"T"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.520,.64);
      glVertex2f(.520,.63);
      glVertex2f(.540,.63);
      glVertex2f(.540,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.528,.64);
      glVertex2f(.528,.52);
      glVertex2f(.532,.52);
      glVertex2f(.532,.64);
      glEnd();

      //"A"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.545,.64);
      glVertex2f(.542,.64);
      glVertex2f(.537,.52);
      glVertex2f(.540,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.548,.64);
      glVertex2f(.545,.64);
      glVertex2f(.549,.52);
      glVertex2f(.552,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.539,.58);
      glVertex2f(.539,.57);
      glVertex2f(.550,.57);
      glVertex2f(.550,.58);
      glEnd();

      //"T"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.553,.64);
      glVertex2f(.553,.63);
      glVertex2f(.573,.63);
      glVertex2f(.573,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.561,.64);
      glVertex2f(.561,.52);
      glVertex2f(.565,.52);
      glVertex2f(.565,.64);
      glEnd();

      //"I"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.575,.64);
      glVertex2f(.575,.63);
      glVertex2f(.585,.63);
      glVertex2f(.585,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.579,.64);
      glVertex2f(.579,.52);
      glVertex2f(.581,.52);
      glVertex2f(.581,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.575,.53);
      glVertex2f(.575,.52);
      glVertex2f(.585,.52);
      glVertex2f(.585,.53);
      glEnd();

      //"O"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.590,.64);
      glVertex2f(.590,.52);
      glVertex2f(.593,.52);
      glVertex2f(.593,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.605,.64);
      glVertex2f(.605,.52);
      glVertex2f(.608,.52);
      glVertex2f(.608,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.590,.64);
      glVertex2f(.590,.63);
      glVertex2f(.608,.63);
      glVertex2f(.608,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.590,.53);
      glVertex2f(.590,.52);
      glVertex2f(.608,.52);
      glVertex2f(.608,.53);
      glEnd();

      //"N"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.615,.64);
      glVertex2f(.615,.52);
      glVertex2f(.618,.52);
      glVertex2f(.618,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.630,.64);
      glVertex2f(.630,.52);
      glVertex2f(.633,.52);
      glVertex2f(.633,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.615,.64);
      glVertex2f(.615,.62);
      glVertex2f(.633,.52);
      glVertex2f(.633,.54);
      glEnd();


//@#@#@#@#@#@#@#@#@#@#@##@#@#@#@#@#@#@#@#@#@#@##@#@#@#@#@#@#@#@#@##@#@#@#@#@#@#@##@#@#@##@#@#@#@#@#@#


    //trees1 lower...........

   glLineWidth(12);
    glBegin(GL_QUADS);
	glColor3ub(153, 77, 0);

	glVertex2f(-.8f, 0.1f);    // x, y
	glVertex2f(-0.77f, 0.1f);
	 glVertex2f(-.77,.4);
      glVertex2f(-.8,.4);
    glEnd();


    glBegin(GL_QUADS);//tree ground..
      glColor3ub(153, 77, 0);
      glVertex2f(-.8,.1);
      glVertex2f(-.84,.05);
      glVertex2f(-.74,.05);
      glVertex2f(-.77,.1);
      glEnd();


//tree Leaf.......
    GLfloat x=-.85f;
    GLfloat y=.4f;
    GLfloat radius =.06f;//leaf-1..
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(135, 176, 133);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();



 x=-.82f;//leaf0..
    y=.45f;
    radius =.06f;//leaf1
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(220, 192, 129);
    glVertex2f(x, y); // center of circle
    for(int i99 = 0; i99 <= triangleAmount; i99++)
    {
        glVertex2f(
            x + (radius * cos(i99 *  twicePi / triangleAmount)),
            y + (radius * sin(i99 * twicePi / triangleAmount))
        );
    }
    glEnd();


  x=-.8f;//leaf1..
    y=.5;
    radius =.08f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(135, 176, 133);
    glVertex2f(x, y); // center of circle
    for(int i88 = 0; i88 <= triangleAmount; i88++)
    {
        glVertex2f(
            x + (radius * cos(i88 *  twicePi / triangleAmount)),
            y + (radius * sin(i88 * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-.76f;//leaf2..
    y=.56f;
    radius =.07f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(220, 192, 129);
    glVertex2f(x, y); // center of circle
    for(int i77 = 0; i77 <= triangleAmount; i77++)
    {
        glVertex2f(
            x + (radius * cos(i77 *  twicePi / triangleAmount)),
            y + (radius * sin(i77 * twicePi / triangleAmount))
        );
    }
    glEnd();

     x=-.73f;//leaf3..
    y=.59f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(135, 176, 133);
    glVertex2f(x, y);
    for(int i100 = 0; i100 <= triangleAmount; i100++)
    {
        glVertex2f(
            x + (radius * cos(i100 *  twicePi / triangleAmount)),
            y + (radius * sin(i100 * twicePi / triangleAmount))
        );
    }
    glEnd();


      x=-.7f;//leaf4..
    y=.55f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(220, 192, 129);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


   x=-.68f;//leaf6..
    y=.54f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(220, 192, 129);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


     x=-.68f;//leaf7..
    y=.50f;
    radius =.05f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(135, 176, 133);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


     x=-.69f;//leaf8..
    y=.46f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(220, 192, 129);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

  x=-.69f;//leaf9..
    y=.42f;
    radius =.05f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(220, 192, 129);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

     x=-.7f;//leaf10..
    y=.40f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(135, 176, 133);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


  glBegin(GL_QUADS);//tree upper dal1...
      glColor3ub(153, 77, 0);
      glVertex2f(-.8,.4);
      glVertex2f(-.78,.4);
      glVertex2f(-.81,.46);
      glVertex2f(-.83,.42);
      glEnd();

glBegin(GL_QUADS);//tree upper dal2....
      glColor3ub(153, 77, 0);
      glVertex2f(-.78,.4);
      glVertex2f(-.77,.4);
      glVertex2f(-.75,.47);
      glVertex2f(-.78,.47);
      glEnd();


 glLineWidth(7.5);//tree uper dal3...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.77f, 0.4f);
	glVertex2f(-0.73f, 0.44f);
 glEnd();

//BACK OF SUN


//sun....................

     x=-.85f;
    y=.82f;
    radius =.08f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(221,38,38);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


//rain..............


/*glPushMatrix();
glTranslatef(0.0f,position, 0.0f);


glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(204, 230, 255);
	glVertex2f(-.9f, 0.75f);    // 1(xtra..)
	glVertex2f(-.95f, 0.66f);    // x, y


	glVertex2f(-.7f, 0.8f);    // 1
	glVertex2f(-.75f, 0.7f);    // x, y


	glVertex2f(-.5f, 0.8f);    // 2
	glVertex2f(-.55f, 0.7f);    // x, y


	glVertex2f(-.3f, 0.8f);    // 3
	glVertex2f(-.35f, 0.7f);    // x, y


	glVertex2f(-.1f, 0.8f);    // 4
	glVertex2f(-.15f, 0.7f);    // x, y


	glVertex2f(.1f, 0.8f);    // 5
	glVertex2f(.05f, 0.7f);    // x, y


	glVertex2f(.3f, 0.8f);    // 6
	glVertex2f(.25f, 0.7f);    // x, y


	glVertex2f(.5f, 0.8f);    // 7
	glVertex2f(.45f, 0.7f);    // x, y


	glVertex2f(.5f, 0.8f);    // 8
	glVertex2f(.45f, 0.7f);    // x, y


	glVertex2f(.7f, 0.8f);    // 9
	glVertex2f(.65f, 0.7f);    // x, y


	glVertex2f(.9, 0.8f);    // 10
	glVertex2f(.85f, 0.7f);    // x, y

	glVertex2f(1, 0.8f);    // 10(xtra....)
	glVertex2f(.95f, 0.7f);    // x, y


	glVertex2f(-.8f, 0.6f);    // 11
	glVertex2f(-.85f, 0.5f);    // x, y


	glVertex2f(-.6f, 0.6f);    // 12
	glVertex2f(-.65f, 0.5f);    // x, y


	glVertex2f(-.4f, 0.6f);    // 13
	glVertex2f(-.45f, 0.5f);    // x, y

	glVertex2f(-.2f, 0.6f);    // 14
	glVertex2f(-.25f, 0.5f);    // x, y


	glVertex2f(.0f, 0.6f);    // 15
	glVertex2f(-.05f, 0.5f);    // x, y


	glVertex2f(.2f, 0.6f);    // 16
	glVertex2f(.15f, 0.5f);    // x, y


	glVertex2f(.4f, 0.6f);    // 17
	glVertex2f(.35f, 0.5f);    // x, y


	glVertex2f(.6f, 0.6f);    // 18
	glVertex2f(.55f, 0.5f);    // x, y

	glVertex2f(.8f, 0.6f);    // 19
	glVertex2f(.75f, 0.5f);    // x, y


	glVertex2f(.95f, 0.6f);    // 20
	glVertex2f(.9f, 0.5f);    // x, y


	glVertex2f(-.9f, 0.4f);    // 21(xtra..)
	glVertex2f(-.95f, 0.3f);    // x, y


	glVertex2f(-.7f, 0.4f);    // 21
	glVertex2f(-.75f, 0.3f);    // x, y


	glVertex2f(-.5f, 0.4f);    // 22
    glVertex2f(-.55f, 0.3f);    // x, y


	glVertex2f(-.3f, 0.4f);    // 23
    glVertex2f(-.35f, 0.3f);    // x, y


	glVertex2f(-.1f, 0.4f);    // 24
    glVertex2f(-.15f, 0.3f);    // x, y


	glVertex2f(.1f, 0.4f);    // 25
    glVertex2f(.05f, 0.3f);    // x, y


	glVertex2f(.3f, 0.4f);    // 26
    glVertex2f(.25f, 0.3f);    // x, y




	glVertex2f(.5f, 0.4f);    // 27
    glVertex2f(.45f, 0.3f);    // x, y


	glVertex2f(.7f, 0.4f);    // 28
    glVertex2f(.65f, 0.3f);    // x, y


	glVertex2f(.9f, 0.4f);    // 29
    glVertex2f(.85f, 0.3f);    // x, y


	glVertex2f(1, 0.4f);    // 30(extra...)
    glVertex2f(.95f, 0.3f);    // x, y


	glVertex2f(-.8f, 0.2f);    // 31
    glVertex2f(-.85f, 0.1f);    // x, y


	glVertex2f(-.6f, 0.2f);    // 32
    glVertex2f(-.65f, 0.1f);    // x, y

	glVertex2f(-.4f, 0.2f);    // 33
    glVertex2f(-.45f, 0.1f);    // x, y

	glVertex2f(-.2f, 0.2f);    // 34
    glVertex2f(-.25f, 0.1f);    // x, y


	glVertex2f(.0f, 0.2f);    // 35
    glVertex2f(-.05f, 0.1f);    // x, y


	glVertex2f(.2f, 0.2f);    // 36
    glVertex2f(.15f, 0.1f);    // x, y


	glVertex2f(.4f, 0.2f);    // 37
    glVertex2f(.35f, 0.1f);    // x, y


	glVertex2f(.6f, 0.2f);    // 38
    glVertex2f(.55f, 0.1f);    // x, y


	glVertex2f(.8f, 0.2f);    // 39
    glVertex2f(.75f, 0.1f);    // x, y


	glVertex2f(.95f, 0.2f);    // 40
    glVertex2f(.90f, 0.1f);    // x, y


	glVertex2f(-.9f, 0.0f);    // 41(extra...)
    glVertex2f(-.95f, -0.1f);    // x, y


	glVertex2f(-.7f, 0.0f);    // 41
    glVertex2f(-.75f, -0.1f);    // x, y


	glVertex2f(-.5f, 0.0f);    // 42
    glVertex2f(-.55f,-0.1f);    // x, y


	glVertex2f(-.3f, 0.0f);    // 43
    glVertex2f(-.35f,-0.1f);    // x, y


	glVertex2f(-.1f, 0.0f);    // 44
    glVertex2f(-.15f,-0.1f);    // x, y


	glVertex2f(.1f, 0.0f);    // 45
    glVertex2f(.05f,-0.1f);    // x, y

	glVertex2f(.3f, 0.0f);    // 46
    glVertex2f(.25f,-0.1f);    // x, y


	glVertex2f(.5f, 0.0f);    // 47
    glVertex2f(.45f,-0.1f);    // x, y


	glVertex2f(.7f, 0.0f);    // 48
    glVertex2f(.65f,-0.1f);    // x, y

	glVertex2f(.9f, 0.0f);    // 49
    glVertex2f(.85f,-0.1f);    // x, y


	glVertex2f(1, 0.0f);    // 50
    glVertex2f(.95f,-0.1f);    // x, y


	glVertex2f(-.8f, -0.2f);    // 51
    glVertex2f(-.85f,-0.3f);    // x, y


	glVertex2f(-.6f, -0.2f);    // 52
    glVertex2f(-.65f,-0.3f);    // x, y


	glVertex2f(-.4f, -0.2f);    // 53
    glVertex2f(-.45f,-0.3f);    // x, y


	glVertex2f(-.2f, -0.2f);    // 54
    glVertex2f(-.25f,-0.3f);    // x, y



	glVertex2f(.0f, -0.2f);    // 55
    glVertex2f(-.05f,-0.3f);    // x, y


	glVertex2f(0.2f, -0.2f);    // 56
    glVertex2f(.15f,-0.3f);    // x, y


	glVertex2f(0.4f, -0.2f);    // 57
    glVertex2f(.35f,-0.3f);    // x, y

	glVertex2f(0.6f, -0.2f);    // 58
    glVertex2f(.55f,-0.3f);    // x, y


	glVertex2f(0.8f, -0.2f);    // 59
    glVertex2f(.75f,-0.3f);    // x, y


	glVertex2f(0.95f, -0.2f);    // 60
    glVertex2f(.90f,-0.3f);    // x, y

	glVertex2f(-0.9f, -0.5f);    // 61
    glVertex2f(-.95f,-0.6f);    // x, y


	glVertex2f(-0.7f, -0.5f);    // 62
    glVertex2f(-.75f,-0.6f);    // x, y


	glVertex2f(-0.5f, -0.5f);    // 63
    glVertex2f(-.55f,-0.6f);    // x, y


	glVertex2f(-0.3f, -0.5f);    // 64
    glVertex2f(-.35f,-0.6f);    // x, y


	glVertex2f(-0.1f, -0.5f);    // 65
    glVertex2f(-.15f,-0.6f);    // x, y


	glVertex2f(0.1f, -0.5f);    // 66
    glVertex2f(.05f,-0.6f);    // x, y



	glVertex2f(0.3f, -0.5f);    // 67
    glVertex2f(.25f,-0.6f);    // x, y


	glVertex2f(0.5f, -0.5f);    // 68
    glVertex2f(.45f,-0.6f);    // x, y



	glVertex2f(0.7f, -0.5f);    // 69
    glVertex2f(.65f,-0.6f);    // x, y


	glVertex2f(0.9f, -0.5f);    // 70
    glVertex2f(.85f,-0.6f);    // x, y

	glEnd();



glLoadIdentity();

glPopMatrix();*/



    //@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // RAIL LINE
    glBegin(GL_QUADS);          //SURU
    glColor3ub(0,0,0);
    glVertex2f(-1,-.9);
    glVertex2f(-1,-.93);
    glVertex2f(1,-.93);
    glVertex2f(1,-.9);

    glVertex2f(-1,-.8);
    glVertex2f(-1,-.83);
    glVertex2f(1,-.83);
    glVertex2f(1,-.8);

    glVertex2f(-.95,-.83);
    glVertex2f(-.95,-.9);
    glVertex2f(-.9,-.9);
    glVertex2f(-.9,-.83);

    glVertex2f(-.75,-.83);
    glVertex2f(-.75,-.9);
    glVertex2f(-.7,-.9);
    glVertex2f(-.7,-.83);

    glVertex2f(-.55,-.83);
    glVertex2f(-.55,-.9);
    glVertex2f(-.5,-.9);
    glVertex2f(-.5,-.83);

    glVertex2f(-.35,-.83);
    glVertex2f(-.35,-.9);
    glVertex2f(-.3,-.9);
    glVertex2f(-.3,-.83);

    glVertex2f(-.15,-.83);
    glVertex2f(-.15,-.9);
    glVertex2f(-.1,-.9);
    glVertex2f(-.1,-.83);

    glVertex2f(.15,-.83);
    glVertex2f(.15,-.9);
    glVertex2f(.1,-.9);
    glVertex2f(.1,-.83);

     glVertex2f(.35,-.83);
    glVertex2f(.35,-.9);
    glVertex2f(.3,-.9);
    glVertex2f(.3,-.83);


    glVertex2f(.55,-.83);
    glVertex2f(.55,-.9);
    glVertex2f(.5,-.9);
    glVertex2f(.5,-.83);

    glVertex2f(.75,-.83);
    glVertex2f(.75,-.9);
    glVertex2f(.7,-.9);
    glVertex2f(.7,-.83);

    glVertex2f(.95,-.83);
    glVertex2f(.95,-.9);
    glVertex2f(.9,-.9);
    glVertex2f(.9,-.83);            //SESH


    // SECOND LINE
    glVertex2f(-1,-.6);             //SURU
    glVertex2f(-1,-.63);
    glVertex2f(1,-.63);
    glVertex2f(1,-.6);

    glVertex2f(-1,-.5);
    glVertex2f(-1,-.53);
    glVertex2f(1,-.53);
    glVertex2f(1,-.5);

    glVertex2f(-.95,-.53);
    glVertex2f(-.95,-.6);
    glVertex2f(-.9,-.6);
    glVertex2f(-.9,-.53);

    glVertex2f(-.75,-.53);
    glVertex2f(-.75,-.6);
    glVertex2f(-.7,-.6);
    glVertex2f(-.7,-.53);

    glVertex2f(-.55,-.53);
    glVertex2f(-.55,-.6);
    glVertex2f(-.5,-.6);
    glVertex2f(-.5,-.53);

    glVertex2f(-.35,-.53);
    glVertex2f(-.35,-.6);
    glVertex2f(-.3,-.6);
    glVertex2f(-.3,-.53);

    glVertex2f(-.15,-.53);
    glVertex2f(-.15,-.6);
    glVertex2f(-.1,-.6);
    glVertex2f(-.1,-.53);

    glVertex2f(.15,-.53);
    glVertex2f(.15,-.6);
    glVertex2f(.1,-.6);
    glVertex2f(.1,-.53);

     glVertex2f(.35,-.53);
    glVertex2f(.35,-.6);
    glVertex2f(.3,-.6);
    glVertex2f(.3,-.53);


    glVertex2f(.55,-.53);
    glVertex2f(.55,-.6);
    glVertex2f(.5,-.6);
    glVertex2f(.5,-.53);

    glVertex2f(.75,-.53);
    glVertex2f(.75,-.6);
    glVertex2f(.7,-.6);
    glVertex2f(.7,-.53);

    glVertex2f(.95,-.53);
    glVertex2f(.95,-.6);
    glVertex2f(.9,-.6);
    glVertex2f(.9,-.53);
    glEnd();


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

    //TRAIN NO 1
    //BOGI #1
    glLoadIdentity();           //SURU
    glPushMatrix();
    glTranslatef(position,0.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(0,53,102);

    //BOGI #1

    glVertex2f(-.6,-.67);
    glVertex2f(-.6,-.9);
    glVertex2f(-.4,-.9);
    glVertex2f(-.4,-.67);
// BOGI #2


    glColor3ub(0, 53, 102);
    glVertex2f(-.38,-.68);
    glVertex2f(-.38,-.9);
    glVertex2f(0,-.9);
    glVertex2f(0,-.68);

    //BOGI #3
    glVertex2f(.02,-.68);
    glVertex2f(.02,-.9);
    glVertex2f(.4,-.9);
    glVertex2f(.4,-.68);

    // BOGI #4
    glVertex2f(.42,-.68);
    glVertex2f(.42,-.9);
    glVertex2f(.8,-.9);
    glVertex2f(.8,-.68);                 //SESH
    glEnd();

    /*//SMOKE

    glTranslatef(0.0f,position3,0.0f);

    GLfloat xdh1=-.7f; GLfloat ydh1=-.9f; GLfloat radiusd1 =.025f;
	int triangleAmountd1 = 20;
	//GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
    glVertex2f(xdh1, ydh1);
    int idh1;
    for(idh1 = 0; idh1 <= triangleAmountd1;idh1++)
        {
        glVertex2f(xdh1 + (radiusd1 * cos(idh1 *  twicePi / triangleAmountd1)),
                   ydh1 + (radiusd1 * sin(idh1 * twicePi / triangleAmountd1)));
		}
	glEnd();*/

	glLoadIdentity();

	glTranslatef(position,0.0f,0.0f);
    glBegin(GL_QUADS);
    //FRONT
    glColor3ub(0, 38, 77);
    glVertex2f(-.75,-.73);
    glVertex2f(-.6,-.73);
    glVertex2f(-.6,-.9);
    glVertex2f(-.75,-.9);

    glColor3ub(38,38,38);
    glVertex2f(-.72,-.75);
    glVertex2f(-.68,-.75);
    glVertex2f(-.68,-.7);
    glVertex2f(-.72,-.7);

    glColor3ub(38,38,38);
    glVertex2f(-.67,-.7);
    glVertex2f(-.67,-.66);
    glVertex2f(-.73,-.66);
    glVertex2f(-.73,-.7);

    glColor3ub(26,26,26);
    glVertex2f(-.65,-.75);
    glVertex2f(-.62,-.75);
    glVertex2f(-.62,-.72);
    glVertex2f(-.65,-.72);


//HEADLIGHT

    glColor3ub(255,225,0);
    glVertex2f(-.75,-.85);
    glVertex2f(-.77,-.85);
    glVertex2f(-.77,-.87);
    glVertex2f(-.75,-.87);


//TRAIN 1 ER BOGI CONNECTOR
    //BOGI 1-2
    glColor3ub(0,0,0);
    glVertex2f(-.4,-.87);
    glVertex2f(-.4,-.89);
    glVertex2f(-.38,-.89);
    glVertex2f(-.38,-.87);

    //BOGI 2-3
    glVertex2f(0,-.87);
    glVertex2f(0,-.89);
    glVertex2f(.02,-.89);
    glVertex2f(.02,-.87);

    //BOGI 3-4
    glVertex2f(.4,-.87);
    glVertex2f(.4,-.89);
    glVertex2f(.42,-.89);
    glVertex2f(.42,-.87);


    //TRAIN ER MAJHKHAN
    glColor3ub(255, 255, 128);            //SURU
    glVertex2f(-.6,-.75);
    glVertex2f(-.6,-.82);
    glVertex2f(-.4,-.82);
    glVertex2f(-.4,-.75);

    glColor3ub(255, 255, 128);
    glVertex2f(-.38,-.74);
    glVertex2f(-.38,-.81);
    glVertex2f(0,-.81);
    glVertex2f(0,-.74);

    glColor3ub(255, 255, 128);
    glVertex2f(.02,-.74);
    glVertex2f(.02,-.81);
    glVertex2f(.4,-.81);
    glVertex2f(.4,-.74);

    glColor3ub(255, 255, 128);
    glVertex2f(.42,-.74);
    glVertex2f(.42,-.81);
    glVertex2f(.8,-.81);
    glVertex2f(.8,-.74);                 //SESH

    //TRAIN 1 ER WINDOW

    //BOGI 1

    glColor3ub(217, 217, 217);
    glVertex2f(-.55,-.8);
    glVertex2f(-.42,-.8);
    glVertex2f(-.42,-.69);
    glVertex2f(-.55,-.69);

    glVertex2f(-.59,-.85);
    glVertex2f(-.56,-.85);
    glVertex2f(-.56,-.7);
    glVertex2f(-.59,-.7);              //SESH

    //BOGI 2
    //WINDOW
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(-.33,-.8);
    glVertex2f(-.27,-.8);
    glVertex2f(-.27,-.75);
    glVertex2f(-.33,-.75);

   // glColor3ub(255,255,255);
    glVertex2f(-.2,-.8);
    glVertex2f(-.26,-.8);
    glVertex2f(-.26,-.75);
    glVertex2f(-.2,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(-.13,-.8);
    glVertex2f(-.19,-.8);
    glVertex2f(-.19,-.75);
    glVertex2f(-.13,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(-.12,-.8);
    glVertex2f(-.06,-.8);
    glVertex2f(-.06,-.75);
    glVertex2f(-.12,-.75);                  //SESH


    // BOGI 3
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.07,-.8);
    glVertex2f(.13,-.8);
    glVertex2f(.13,-.75);
    glVertex2f(.07,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.14,-.8);
    glVertex2f(.2,-.8);
    glVertex2f(.2,-.75);
    glVertex2f(.14,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.21,-.8);
    glVertex2f(.27,-.8);
    glVertex2f(.27,-.75);
    glVertex2f(.21,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.28,-.8);
    glVertex2f(.34,-.8);
    glVertex2f(.34,-.75);
    glVertex2f(.28,-.75);                  //SESH

    // BOGI 4
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.47,-.8);
    glVertex2f(.53,-.8);
    glVertex2f(.53,-.75);
    glVertex2f(.47,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.54,-.8);
    glVertex2f(.6,-.8);
    glVertex2f(.6,-.75);
    glVertex2f(.54,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.61,-.8);
    glVertex2f(.67,-.8);
    glVertex2f(.67,-.75);
    glVertex2f(.61,-.75);

   // glColor3ub(255,255,255);
    glVertex2f(.68,-.8);
    glVertex2f(.74,-.8);
    glVertex2f(.74,-.75);
    glVertex2f(.68,-.75);                  //SESH


    //DOOR BOGI 2

    //glColor3ub(255,255,255);            //SURU
    glVertex2f(-.37,-.86);
    glVertex2f(-.34,-.86);
    glVertex2f(-.34,-.72);
    glVertex2f(-.37,-.72);

    //glColor3ub(255,255,255);
    glVertex2f(-.04,-.86);
    glVertex2f(-.01,-.86);
    glVertex2f(-.01,-.72);
    glVertex2f(-.04,-.72);              //SESH


     //DOOR BOGI 3

    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.06,-.86);
    glVertex2f(.03,-.86);
    glVertex2f(.03,-.72);
    glVertex2f(.06,-.72);

   // glColor3ub(255,255,255);
    glVertex2f(.39,-.86);
    glVertex2f(.36,-.86);
    glVertex2f(.36,-.72);
    glVertex2f(.39,-.72);              //SESH

     //DOOR BOGI 4

    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.46,-.86);
    glVertex2f(.43,-.86);
    glVertex2f(.43,-.72);
    glVertex2f(.46,-.72);

    //glColor3ub(255,255,255);
    glVertex2f(.79,-.86);
    glVertex2f(.76,-.86);
    glVertex2f(.76,-.72);
    glVertex2f(.79,-.72);              //SESH

    glEnd();


    //TRAIN 1 ER WINDOW ER PARTITION
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glLineWidth(3);
    // BOGI W1

    glVertex2f(-.51,-.8);
    glVertex2f(-.51,-.69);

    glVertex2f(-.46,-.8);
    glVertex2f(-.46,-.69);

    glVertex2f(-.75,-.8);
    glVertex2f(-.6,-.8);

    glVertex2f(-.75,-.85);
    glVertex2f(-.6,-.85);

    glVertex2f(-.59,-.84);
    glVertex2f(-.56,-.84);

    //BOGI W2
    glVertex2f(-.3,-.8);
    glVertex2f(-.3,-.75);

    glVertex2f(-.23,-.8);
    glVertex2f(-.23,-.75);

    glVertex2f(-.16,-.8);
    glVertex2f(-.16,-.75);

    glVertex2f(-.09,-.8);
    glVertex2f(-.09,-.75);

    glVertex2f(-.38,-.7);
    glVertex2f(0,-.7);

    glVertex2f(-.37,-.85);
    glVertex2f(-.34,-.85);

    glVertex2f(-.04,-.85);
    glVertex2f(-.01,-.85);

    // BOGI W3
    glVertex2f(.1,-.8);
    glVertex2f(.1,-.75);

    glVertex2f(.17,-.8);
    glVertex2f(.17,-.75);

    glVertex2f(.24,-.8);
    glVertex2f(.24,-.75);

    glVertex2f(.31,-.8);
    glVertex2f(.31,-.75);

    glVertex2f(.02,-.7);
    glVertex2f(.4,-.7);

    glVertex2f(.06,-.85);
    glVertex2f(.03,-.85);

    glVertex2f(.39,-.85);
    glVertex2f(.36,-.85);

    //BOGI W4
    glVertex2f(.5,-.8);
    glVertex2f(.5,-.75);

    glVertex2f(.57,-.8);
    glVertex2f(.57,-.75);

    glVertex2f(.64,-.8);
    glVertex2f(.64,-.75);

    glVertex2f(.71,-.8);
    glVertex2f(.71,-.75);

    glVertex2f(.42,-.7);
    glVertex2f(.8,-.7);

    glVertex2f(.46,-.85);
    glVertex2f(.43,-.85);

    glVertex2f(.79,-.85);
    glVertex2f(.76,-.85);

    glEnd();


    //TRAIN ER WHEEL

    //WHEEL 1


    GLfloat x1=-.72f; GLfloat y1=-.9f; GLfloat radius1 =.025f;
	int triangleAmount1 = 20;
	//GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x1, y1);
    int i1;
    for(i1 = 0; i1 <= triangleAmount1;i1++)
        {
        glVertex2f(x1 + (radius1 * cos(i1 *  twicePi / triangleAmount1)),
                   y1 + (radius1 * sin(i1 * twicePi / triangleAmount1)));
		}
	glEnd();

	//WHEEL 2
    GLfloat x2=-.65f; GLfloat y2=-.9f; GLfloat radius2 =.025f;
	int triangleAmount2 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x2, y2);
    int i2;
    for(i2 = 0; i2 <= triangleAmount2;i2++)
        {
        glVertex2f(x2 + (radius2 * cos(i2 *  twicePi / triangleAmount2)),
                   y2 + (radius2 * sin(i2 * twicePi / triangleAmount2)));
		}
	glEnd();

	//WHEEL 3
    GLfloat x3=-.55f; GLfloat y3=-.9f; GLfloat radius3 =.02f;
	int triangleAmount3 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x3, y3);
    int i3;
    for(i3 = 0; i3 <= triangleAmount3;i3++)
        {
        glVertex2f(x3 + (radius3 * cos(i3 *  twicePi / triangleAmount3)),
                   y3 + (radius3 * sin(i3 * twicePi / triangleAmount3)));
		}
	glEnd();

	//WHEEL 4
    GLfloat x4=-.45f; GLfloat y4=-.9f; GLfloat radius4 =.02f;
	int triangleAmount4 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x4, y4);
    int i4;
    for(i4 = 0; i4 <= triangleAmount4;i4++)
        {
        glVertex2f(x4 + (radius4 * cos(i4 *  twicePi / triangleAmount4)),
                   y4 + (radius4 * sin(i4 * twicePi / triangleAmount4)));
		}
	glEnd();

	//WHEEL 5
    GLfloat x5=-.35f; GLfloat y5=-.9f; GLfloat radius5 =.02f;
	int triangleAmount5 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x5, y5);
    int i5;
    for(i5 = 0; i5 <= triangleAmount5;i5++)
        {
        glVertex2f(x5 + (radius5 * cos(i5 *  twicePi / triangleAmount5)),
                   y5 + (radius5 * sin(i5 * twicePi / triangleAmount5)));
		}
	glEnd();

	//WHEEL 6
    GLfloat x6=-.25f; GLfloat y6=-.9f; GLfloat radius6 =.02f;
	int triangleAmount6 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x6, y6);
    int i6;
    for(i6= 0; i6 <= triangleAmount6;i6++)
        {
        glVertex2f(x6 + (radius6 * cos(i6 *  twicePi / triangleAmount6)),
                   y6 + (radius6 * sin(i6 * twicePi / triangleAmount6)));
		}
	glEnd();

	//WHEEL 7
    GLfloat x7=-.15f; GLfloat y7=-.9f; GLfloat radius7 =.02f;
	int triangleAmount7 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x7, y7);
    int i7;
    for(i7 = 0; i7 <= triangleAmount7;i7++)
        {
        glVertex2f(x7 + (radius7 * cos(i7 *  twicePi / triangleAmount7)),
                   y7 + (radius7 * sin(i7 * twicePi / triangleAmount7)));
		}
	glEnd();

	//WHEEL 8
    GLfloat x8=-.05f; GLfloat y8=-.9f; GLfloat radius8 =.02f;
	int triangleAmount8 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x8, y8);
    int i8;
    for(i8 = 0; i8 <= triangleAmount8;i8++)
        {
        glVertex2f(x8 + (radius8 * cos(i8 *  twicePi / triangleAmount8)),
                   y8 + (radius7 * sin(i8 * twicePi / triangleAmount8)));
		}
	glEnd();

	//WHEEL 9
    GLfloat x9=.05f; GLfloat y9=-.9f; GLfloat radius9 =.02f;
	int triangleAmount9 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x9, y9);
    int i9;
    for(i9 = 0; i9 <= triangleAmount9;i9++)
        {
        glVertex2f(x9 + (radius9 * cos(i9 *  twicePi / triangleAmount9)),
                   y9 + (radius9 * sin(i9 * twicePi / triangleAmount9)));
		}
	glEnd();

	//WHEEL 10
    GLfloat x10=.15f; GLfloat y10=-.9f; GLfloat radius10 =.02f;
	int triangleAmount10 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x10, y10);
    int i10;
    for(i10= 0; i10 <= triangleAmount10;i10++)
        {
        glVertex2f(x10 + (radius10 * cos(i10 *  twicePi / triangleAmount10)),
                   y10 + (radius10 * sin(i10 * twicePi / triangleAmount10)));
		}
	glEnd();

	//WHEEL 11
    GLfloat x11=.25f; GLfloat y11=-.9f; GLfloat radius11 =.02f;
	int triangleAmount11 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x11, y11);
    int i11;
    for(i11 = 0; i11 <= triangleAmount11;i11++)
        {
        glVertex2f(x11 + (radius11 * cos(i11 *  twicePi / triangleAmount11)),
                   y11 + (radius11 * sin(i11* twicePi / triangleAmount11)));
		}
	glEnd();

	//WHEEL 12
    GLfloat x12=.35f; GLfloat y12=-.9f; GLfloat radius12 =.02f;
	int triangleAmount12 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x12, y12);
    int i12;
    for(i12 = 0; i12 <= triangleAmount12;i12++)
        {
        glVertex2f(x12 + (radius12 * cos(i12 *  twicePi / triangleAmount12)),
                   y12 + (radius12* sin(i12 * twicePi / triangleAmount12)));
		}
	glEnd();

	//WHEEL 13
    GLfloat x13=.45f; GLfloat y13=-.9f; GLfloat radius13 =.02f;
	int triangleAmount13 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x13, y13);
    int i13;
    for(i13 = 0; i13 <= triangleAmount13;i13++)
        {
        glVertex2f(x13 + (radius13 * cos(i13 *  twicePi / triangleAmount13)),
                   y13 + (radius13* sin(i13 * twicePi / triangleAmount13)));
		}
	glEnd();

	//WHEEL 14
    GLfloat x14=.55f; GLfloat y14=-.9f; GLfloat radius14 =.02f;
	int triangleAmount14 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x14, y14);
    int i14;
    for(i14 = 0; i14 <= triangleAmount14;i14++)
        {
        glVertex2f(x14 + (radius14 * cos(i14 *  twicePi / triangleAmount14)),
                   y14 + (radius14* sin(i14 * twicePi / triangleAmount14)));
		}
	glEnd();

	//WHEEL 15
    GLfloat x15=.65f; GLfloat y15=-.9f; GLfloat radius15 =.02f;
	int triangleAmount15 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x15, y15);
    int i15;
    for(i15 = 0; i15 <= triangleAmount15;i15++)
        {
        glVertex2f(x15 + (radius15 * cos(i15 *  twicePi / triangleAmount15)),
                   y15 + (radius15* sin(i15 * twicePi / triangleAmount15)));
		}
	glEnd();

	//WHEEL 16
    GLfloat x16=.75f; GLfloat y16=-.9f; GLfloat radius16=.02f;
	int triangleAmount16 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x16, y16);
    int i16;
    for(i16 = 0; i16 <= triangleAmount16;i16++)
        {
        glVertex2f(x16 + (radius16 * cos(i16* twicePi / triangleAmount16)),
                   y16 + (radius16* sin(i16 * twicePi / triangleAmount16)));
		}
	glEnd();

    glPopMatrix();



//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

    // TRAIN NO 2
    glLoadIdentity();                           //SURU
    glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);

    //BOGI 1
    glBegin(GL_QUADS);
    glColor3ub(0, 53, 102);
    glVertex2f(.6,-.37);
    glVertex2f(.6,-.6);
    glVertex2f(.4,-.6);
    glVertex2f(.4,-.37);

    //BOGI 2
    glVertex2f(.38,-.38);
    glVertex2f(.38,-.6);
    glVertex2f(0,-.6);
    glVertex2f(0,-.38);

    //BOGI 3
    glVertex2f(-.02,-.38);
    glVertex2f(-.02,-.6);
    glVertex2f(-.4,-.6);
    glVertex2f(-.4,-.38);

    //BOGI 4
    glVertex2f(-.42,-.38);
    glVertex2f(-.42,-.6);
    glVertex2f(-.8,-.6);
    glVertex2f(-.8,-.38);

    glEnd();



    //SMOKE




    //glPushMatrix();
	glTranslatef(0.0f,position3,0.0f);
    //1
    GLfloat s1=.7f; GLfloat d1=-.38f; GLfloat radiusdh1 =.03f;
	int triangleAmountdh1 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s1, d1);
    int dh1;
    for(dh1 = 0; dh1 <= triangleAmountdh1;dh1++)
        {
        glVertex2f(s1 + (radiusdh1 * cos(dh1 *  twicePi / triangleAmountdh1)),
                   d1 + (radiusdh1 * sin(dh1 * twicePi / triangleAmountdh1)));
		}
	glEnd();


	//2
	 GLfloat s2=.7f; GLfloat d2=-.45f; GLfloat radiusdh2 =.03f;
	int triangleAmountdh2 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s2, d2);
    int dh2;
    for(dh2 = 0; dh2 <= triangleAmountdh2;dh2++)
        {
        glVertex2f(s2 + (radiusdh2 * cos(dh2 *  twicePi / triangleAmountdh2)),
                   d2 + (radiusdh2 * sin(dh2 * twicePi / triangleAmountdh2)));
		}
	glEnd();


	//3
	 GLfloat s3=.7f; GLfloat d3=-.52f; GLfloat radiusdh3 =.03f;
	int triangleAmountdh3 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s3, d3);
    int dh3;
    for(dh3 = 0; dh3 <= triangleAmountdh3;dh3++)
        {
        glVertex2f(s3 + (radiusdh3 * cos(dh3 *  twicePi / triangleAmountdh3)),
                   d3 + (radiusdh3 * sin(dh3 * twicePi / triangleAmountdh3)));
		}
	glEnd();

	//glPopMatrix();
	glLoadIdentity();



	glTranslatef(position2,0.0f,0.0f);
    //FRONT
    glBegin(GL_QUADS);
    glColor3ub(0, 38, 77);
    glVertex2f(.6,-.43);
    glVertex2f(.75,-.43);
    glVertex2f(.75,-.6);
    glVertex2f(.6,-.6);


    glColor3ub(38,38,38);
    glVertex2f(.73,-.45);
    glVertex2f(.67,-.45);
    glVertex2f(.67,-.38);
    glVertex2f(.73,-.38);

    glColor3ub(26,26,26);
    glVertex2f(.73,-.38);
    glVertex2f(.67,-.38);
    glVertex2f(.67,-.35);
    glVertex2f(.73,-.35);

    glColor3ub(26,26,26);
    glVertex2f(.65,-.45);
    glVertex2f(.62,-.45);
    glVertex2f(.62,-.42);
    glVertex2f(.65,-.42);              //SESH

    //HEADLIGHT
    glColor3ub(255,255,0);
    glVertex2f(.75,-.55);
    glVertex2f(.77,-.55);
    glVertex2f(.77,-.57);
    glVertex2f(.75,-.57);

    //TRAIN 2 ER BOGI CONNECTOR
    //BOGI 1-2
    glColor3ub(0,0,0);
    glVertex2f(.4,-.57);
    glVertex2f(.4,-.59);
    glVertex2f(.38,-.59);
    glVertex2f(.38,-.57);

    //BOGI 2-3
    glVertex2f(0,-.57);
    glVertex2f(0,-.59);
    glVertex2f(-.02,-.59);
    glVertex2f(-.02,-.57);

    //BOGI 3-4
    glVertex2f(-.4,-.57);
    glVertex2f(-.4,-.59);
    glVertex2f(-.42,-.59);
    glVertex2f(-.42,-.57);


    //TRAIN ER MAJHKHAN
    glColor3ub(255, 255, 128);            //SURU
    glVertex2f(-.8,-.51);
    glVertex2f(-.8,-.44);
    glVertex2f(-.42,-.44);
    glVertex2f(-.42,-.51);

   // glColor3ub(77,77,77);
    glVertex2f(-.4,-.51);
    glVertex2f(-.4,-.44);
    glVertex2f(-.02,-.44);
    glVertex2f(-.02,-.51);

    //glColor3ub(77,77,77);
    glVertex2f(.38,-.51);
    glVertex2f(.38,-.44);
    glVertex2f(0,-.44);
    glVertex2f(0,-.51);

    //glColor3ub(77,77,77);
    glVertex2f(.6,-.51);
    glVertex2f(.6,-.44);
    glVertex2f(.4,-.44);
    glVertex2f(.4,-.51);                 //SESH

    // TRAIN 2 ER WINDOW

    //BOGI 1


    glColor3ub(217, 217, 217);
    glVertex2f(.55,-.5);
    glVertex2f(.42,-.5);
    glVertex2f(.42,-.39);
    glVertex2f(.55,-.39);

    //DOOR
    glColor3ub(217, 217, 217);
    glVertex2f(.59,-.56);
    glVertex2f(.56,-.56);
    glVertex2f(.56,-.42);
    glVertex2f(.59,-.42);                           //SESH


    //BOGI 2
    glColor3ub(217, 217, 217);            //SURU
    glVertex2f(.33,-.5);
    glVertex2f(.27,-.5);
    glVertex2f(.27,-.45);
    glVertex2f(.33,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(.26,-.5);
    glVertex2f(.2,-.5);
    glVertex2f(.2,-.45);
    glVertex2f(.26,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(.19,-.5);
    glVertex2f(.13,-.5);
    glVertex2f(.13,-.45);
    glVertex2f(.19,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(.12,-.5);
    glVertex2f(.06,-.5);
    glVertex2f(.06,-.45);
    glVertex2f(.12,-.45);                  //SESH


    //DOOR

    glColor3ub(217, 217, 217);              //SURU
    glVertex2f(.37,-.56);
    glVertex2f(.34,-.56);
    glVertex2f(.34,-.42);
    glVertex2f(.37,-.42);

    glColor3ub(217, 217, 217);
    glVertex2f(.01,-.56);
    glVertex2f(.04,-.56);
    glVertex2f(.04,-.42);
    glVertex2f(.01,-.42);                       //SHESH

    // BOGI 3
    glColor3ub(217, 217, 217);            //SURU
    glVertex2f(-.07,-.5);
    glVertex2f(-.13,-.5);
    glVertex2f(-.13,-.45);
    glVertex2f(-.07,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.14,-.5);
    glVertex2f(-.2,-.5);
    glVertex2f(-.2,-.45);
    glVertex2f(-.14,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.21,-.5);
    glVertex2f(-.27,-.5);
    glVertex2f(-.27,-.45);
    glVertex2f(-.21,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.28,-.5);
    glVertex2f(-.34,-.5);
    glVertex2f(-.34,-.45);
    glVertex2f(-.28,-.45);                  //SESH


    //DOOR

    glColor3ub(217, 217, 217);              //SURU
    glVertex2f(-.03,-.56);
    glVertex2f(-.06,-.56);
    glVertex2f(-.06,-.42);
    glVertex2f(-.03,-.42);

    glColor3ub(217, 217, 217);
    glVertex2f(-.39,-.56);
    glVertex2f(-.36,-.56);
    glVertex2f(-.36,-.42);
    glVertex2f(-.39,-.42);                       //SHESH


    // BOGI 4
    glColor3ub(217, 217, 217);            //SURU
    glVertex2f(-.47,-.5);
    glVertex2f(-.53,-.5);
    glVertex2f(-.53,-.45);
    glVertex2f(-.47,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.54,-.5);
    glVertex2f(-.6,-.5);
    glVertex2f(-.6,-.45);
    glVertex2f(-.54,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.61,-.5);
    glVertex2f(-.67,-.5);
    glVertex2f(-.67,-.45);
    glVertex2f(-.61,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.68,-.5);
    glVertex2f(-.74,-.5);
    glVertex2f(-.74,-.45);
    glVertex2f(-.68,-.45);                      //SESH


    //DOOR

    glColor3ub(217, 217, 217);              //SURU
    glVertex2f(-.43,-.56);
    glVertex2f(-.46,-.56);
    glVertex2f(-.46,-.42);
    glVertex2f(-.43,-.42);

    glColor3ub(217, 217, 217);
    glVertex2f(-.79,-.56);
    glVertex2f(-.76,-.56);
    glVertex2f(-.76,-.42);
    glVertex2f(-.79,-.42);                       //SHESH



    glEnd();

    //TRAIN 2 ER WINDOW ER PARTITION
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glLineWidth(3);
    // BOGI W1

    glVertex2f(.51,-.5);
    glVertex2f(.51,-.39);

    glVertex2f(.46,-.5);
    glVertex2f(.46,-.39);

    glVertex2f(.6,-.5);
    glVertex2f(.75,-.5);

    glVertex2f(.6,-.55);
    glVertex2f(.75,-.55);

    glVertex2f(.59,-.55);
    glVertex2f(.56,-.55);

    //BOGI W2
    glVertex2f(.3,-.5);
    glVertex2f(.3,-.45);

    glVertex2f(.23,-.5);
    glVertex2f(.23,-.45);

    glVertex2f(.16,-.5);
    glVertex2f(.16,-.45);

    glVertex2f(.09,-.5);
    glVertex2f(.09,-.45);


    glVertex2f(.38,-.4);
    glVertex2f(0,-.4);

    glVertex2f(.37,-.55);
    glVertex2f(.34,-.55);

    glVertex2f(.01,-.55);
    glVertex2f(.04,-.55);

    // BOGI W3
    glVertex2f(-.1,-.5);
    glVertex2f(-.1,-.45);

    glVertex2f(-.17,-.5);
    glVertex2f(-.17,-.45);

    glVertex2f(-.24,-.5);
    glVertex2f(-.24,-.45);

    glVertex2f(-.31,-.5);
    glVertex2f(-.31,-.45);

    glVertex2f(-.02,-.4);
    glVertex2f(-.4,-.4);

    glVertex2f(-.03,-.55);
    glVertex2f(-.06,-.55);

    glVertex2f(-.39,-.55);
    glVertex2f(-.36,-.55);

    //BOGI W4
    glVertex2f(-.5,-.5);
    glVertex2f(-.5,-.45);

    glVertex2f(-.57,-.5);
    glVertex2f(-.57,-.45);

    glVertex2f(-.64,-.5);
    glVertex2f(-.64,-.45);

    glVertex2f(-.71,-.5);
    glVertex2f(-.71,-.45);

    glVertex2f(-.42,-.4);
    glVertex2f(-.8,-.4);

    glVertex2f(-.43,-.55);
    glVertex2f(-.46,-.55);

     glVertex2f(-.76,-.55);
    glVertex2f(-.79,-.55);


    glEnd();

    //TRAIN 2 ER WHEEL

    //WHEEL 1


    GLfloat a1=-.75f; GLfloat b1=-.6f; GLfloat radiuss1 =.02f;
	int triangleAmounts1 = 20;
	//GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a1, b1);
    int j1;
    for(j1 = 0; j1 <= triangleAmounts1;j1++)
        {
        glVertex2f(a1 + (radiuss1 * cos(j1 *  twicePi / triangleAmounts1)),
                   b1 + (radiuss1 * sin(j1 * twicePi / triangleAmounts1)));
		}
	glEnd();

	//WHEEL 2
    GLfloat a2=-.65f; GLfloat b2=-.6f; GLfloat radiuss2 =.02f;
	int triangleAmounts2 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a2, b2);
    int j2;
    for(j2 = 0; j2 <= triangleAmounts2;j2++)
        {
        glVertex2f(a2 + (radiuss2 * cos(j2 *  twicePi / triangleAmounts2)),
                   b2 + (radiuss2 * sin(j2 * twicePi / triangleAmounts2)));
		}
	glEnd();

	//WHEEL 3
    GLfloat a3=-.55f; GLfloat b3=-.6f; GLfloat radiuss3 =.02f;
	int triangleAmounts3 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a3, b3);
    int j3;
    for(j3 = 0; j3 <= triangleAmounts3;j3++)
        {
        glVertex2f(a3 + (radiuss3 * cos(j3 *  twicePi / triangleAmounts3)),
                   b3 + (radiuss3 * sin(j3 * twicePi / triangleAmounts3)));
		}
	glEnd();

	//WHEEL 4
    GLfloat a4=-.45f; GLfloat b4=-.6f; GLfloat radiuss4 =.02f;
	int triangleAmounts4 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a4, b4);
    int j4;
    for(j4 = 0; j4 <= triangleAmounts4;j4++)
        {
        glVertex2f(a4 + (radiuss4 * cos(j4 *  twicePi / triangleAmounts4)),
                   b4 + (radiuss4 * sin(j4 * twicePi / triangleAmounts4)));
		}
	glEnd();

	//WHEEL 5
    GLfloat a5=-.35f; GLfloat b5=-.6f; GLfloat radiuss5 =.02f;
	int triangleAmounts5 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a5, b5);
    int j5;
    for(j5 = 0; j5 <= triangleAmounts5;j5++)
        {
        glVertex2f(a5 + (radiuss5 * cos(j5 *  twicePi / triangleAmounts5)),
                   b5 + (radiuss5 * sin(j5 * twicePi / triangleAmounts5)));
		}
	glEnd();

	//WHEEL 6
    GLfloat a6=-.25f; GLfloat b6=-.6f; GLfloat radiuss6 =.02f;
	int triangleAmounts6 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a6, b6);
    int j6;
    for(j6= 0; j6 <= triangleAmounts6;j6++)
        {
        glVertex2f(a6 + (radiuss6 * cos(j6 *  twicePi / triangleAmounts6)),
                   b6 + (radiuss6 * sin(j6 * twicePi / triangleAmounts6)));
		}
	glEnd();

	//WHEEL 7
    GLfloat a7=-.15f; GLfloat b7=-.6f; GLfloat radiuss7 =.02f;
	int triangleAmounts7 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a7, b7);
    int j7;
    for(j7 = 0; j7 <= triangleAmounts7;j7++)
        {
        glVertex2f(a7 + (radiuss7 * cos(j7 *  twicePi / triangleAmounts7)),
                   b7 + (radiuss7 * sin(j7 * twicePi / triangleAmounts7)));
		}
	glEnd();

	//WHEEL 8
    GLfloat a8=-.05f; GLfloat b8=-.6f; GLfloat radiuss8 =.02f;
	int triangleAmounts8 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a8, b8);
    int j8;
    for(j8 = 0; j8 <= triangleAmounts8;j8++)
        {
        glVertex2f(a8 + (radiuss8 * cos(j8 *  twicePi / triangleAmounts8)),
                   b8 + (radiuss7 * sin(j8 * twicePi / triangleAmounts8)));
		}
	glEnd();

	//WHEEL 9
    GLfloat a9=.05f; GLfloat b9=-.6f; GLfloat radiuss9 =.02f;
	int triangleAmounts9 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a9, b9);
    int j9;
    for(j9 = 0; j9 <= triangleAmounts9;j9++)
        {
        glVertex2f(a9 + (radiuss9 * cos(j9 *  twicePi / triangleAmounts9)),
                   b9 + (radiuss9 * sin(j9 * twicePi / triangleAmounts9)));
		}
	glEnd();

	//WHEEL 10
    GLfloat a10=.15f; GLfloat b10=-.6f; GLfloat radiuss10 =.02f;
	int triangleAmounts10 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a10, b10);
    int j10;
    for(j10= 0; j10 <= triangleAmounts10;j10++)
        {
        glVertex2f(a10 + (radiuss10 * cos(j10 *  twicePi / triangleAmounts10)),
                   b10 + (radiuss10 * sin(j10 * twicePi / triangleAmounts10)));
		}
	glEnd();

	//WHEEL 11
    GLfloat a11=.25f; GLfloat b11=-.6f; GLfloat radiuss11 =.02f;
	int triangleAmounts11 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a11, b11);
    int j11;
    for(j11 = 0; j11 <= triangleAmounts11;j11++)
        {
        glVertex2f(a11 + (radiuss11 * cos(j11 *  twicePi / triangleAmounts11)),
                   b11 + (radiuss11 * sin(j11* twicePi / triangleAmounts11)));
		}
	glEnd();

	//WHEEL 12
    GLfloat a12=.35f; GLfloat b12=-.6f; GLfloat radiuss12 =.02f;
	int triangleAmounts12 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a12, b12);
    int j12;
    for(j12 = 0; j12 <= triangleAmounts12;j12++)
        {
        glVertex2f(a12 + (radiuss12 * cos(j12 *  twicePi / triangleAmounts12)),
                   b12 + (radiuss12* sin(j12 * twicePi / triangleAmounts12)));
		}
	glEnd();

	//WHEEL 13
    GLfloat a13=.45f; GLfloat b13=-.6f; GLfloat radiuss13 =.02f;
	int triangleAmounts13 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a13, b13);
    int j13;
    for(j13= 0; j13<= triangleAmounts13;j13++)
        {
        glVertex2f(a13 + (radiuss13 * cos(j13 *  twicePi / triangleAmounts13)),
                   b13 + (radiuss13* sin(j13 * twicePi / triangleAmounts13)));
		}
	glEnd();

	//WHEEL 14
    GLfloat a14=.55f; GLfloat b14=-.6f; GLfloat radiuss14 =.02f;
	int triangleAmounts14 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a14, b14);
    int j14;
    for(j14 = 0; j14 <= triangleAmounts14;j14++)
        {
        glVertex2f(a14 + (radiuss14 * cos(j14 *  twicePi / triangleAmounts14)),
                   b14 + (radiuss14* sin(j14 * twicePi / triangleAmounts14)));
		}
	glEnd();

	//WHEEL 15
    GLfloat a15=.65f; GLfloat b15=-.6f; GLfloat radiuss15 =.025f;
	int triangleAmounts15= 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a15, b15);
    int j15;
    for(j15 = 0; j15 <= triangleAmounts15;j15++)
        {
        glVertex2f(a15 + (radiuss15 * cos(j15*  twicePi / triangleAmounts15)),
                   b15 + (radiuss15* sin(j15 * twicePi / triangleAmounts15)));
		}
	glEnd();

	//WHEEL 16
    GLfloat a16=.72f; GLfloat b16=-.6f; GLfloat radiuss16 =.025f;
	int triangleAmounts16 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a16, b16);
    int j16;
    for(j16 = 0; j16<= triangleAmounts16;j16++)
        {
        glVertex2f(a16+ (radiuss16 * cos(j16 *  twicePi / triangleAmounts16)),
                   b16 + (radiuss16* sin(j16 * twicePi / triangleAmounts16)));
		}
	glEnd();

    glPopMatrix();

    glLoadIdentity();

    glFlush();
   glutTimerFunc(8000,summer,0);
}

void summer(int v)
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //################$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$


     //grass.........

        glBegin(GL_QUADS);
      glColor3ub(45,134,45);
      glVertex2f(-1,.5);
      glVertex2f(-1,-1);
      glVertex2f(1,-1);
      glVertex2f(1,.5);
      glEnd();



      //sky................

          glBegin(GL_QUADS);
      glColor3ub( 37, 127, 229   );
      glVertex2f(-1,1);
      glVertex2f(-1,.5);
      glVertex2f(1,.5);
      glVertex2f(1,1);
      glEnd();


      //road.........

        glBegin(GL_QUADS);
      glColor3ub( 49, 49, 46  );
      glVertex2f(-1,.5);
      glVertex2f(-1,.25);
      glVertex2f(1,.25);
      glVertex2f(1,.5);
      glEnd();



      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(-.8,.38);
      glVertex2f(-.8,.36);
      glVertex2f(-.6,.36);
      glVertex2f(-.6,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(-.15,.38);
      glVertex2f(-.15,.36);
      glVertex2f(.15,.36);
      glVertex2f(.15,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(.2,.38);
      glVertex2f(.2,.36);
      glVertex2f(.3,.36);
      glVertex2f(.3,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(.4,.38);
      glVertex2f(.4,.36);
      glVertex2f(.6,.36);
      glVertex2f(.6,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(.7,.38);
      glVertex2f(.7,.36);
      glVertex2f(.95,.36);
      glVertex2f(.95,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(-.95,.38);
      glVertex2f(-.95,.36);
      glVertex2f(-.8,.36);
      glVertex2f(-.8,.38);
      glEnd();

      //Zebra Crossing
      glBegin(GL_QUADS);
      glColor3ub( 209, 207, 201 );
      glVertex2f(-.5,.49);
      glVertex2f(-.5,.46);
      glVertex2f(-.2,.46);
      glVertex2f(-.2,.49);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 209, 207, 201 );
      glVertex2f(-.5,.43);
      glVertex2f(-.5,.40);
      glVertex2f(-.2,.40);
      glVertex2f(-.2,.43);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 209, 207, 201 );
      glVertex2f(-.5,.37);
      glVertex2f(-.5,.34);
      glVertex2f(-.2,.34);
      glVertex2f(-.2,.37);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 209, 207, 201 );
      glVertex2f(-.5,.31);
      glVertex2f(-.5,.28);
      glVertex2f(-.2,.28);
      glVertex2f(-.2,.31);
      glEnd();

      //Lamp Post2
      glBegin(GL_QUADS);
      glColor3ub( 92, 78, 36 );
      glVertex2f(-.95,.65);
      glVertex2f(-.95,.50);
      glVertex2f(-.94,.50);
      glVertex2f(-.94,.65);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 191, 165, 86 );
      glVertex2f(-.94,.63);
      glVertex2f(-.94,.62);
      glVertex2f(-.91,.62);
      glVertex2f(-.91,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0,0,0 );
      glVertex2f(-.924,.62);
      glVertex2f(-.924,.60);
      glVertex2f(-.926,.60);
      glVertex2f(-.926,.62);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 192, 0 );
      glVertex2f(-.936,.60);
      glVertex2f(-.936,.56);
      glVertex2f(-.914,.56);
      glVertex2f(-.914,.60);
      glEnd();

      //Lamp Post2.1
      glBegin(GL_QUADS);
      glColor3ub( 92, 78, 36 );
      glVertex2f(-.65,.65);
      glVertex2f(-.65,.50);
      glVertex2f(-.64,.50);
      glVertex2f(-.64,.65);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 191, 165, 86 );
      glVertex2f(-.64,.63);
      glVertex2f(-.64,.62);
      glVertex2f(-.61,.62);
      glVertex2f(-.61,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0,0,0 );
      glVertex2f(-.624,.62);
      glVertex2f(-.624,.60);
      glVertex2f(-.626,.60);
      glVertex2f(-.626,.62);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 192, 0 );
      glVertex2f(-.636,.60);
      glVertex2f(-.636,.56);
      glVertex2f(-.614,.56);
      glVertex2f(-.614,.60);
      glEnd();

      //Lamp Post2.2
      glBegin(GL_QUADS);
      glColor3ub( 92, 78, 36 );
      glVertex2f(-.05,.65);
      glVertex2f(-.05,.50);
      glVertex2f(-.04,.50);
      glVertex2f(-.04,.65);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 191, 165, 86 );
      glVertex2f(-.04,.63);
      glVertex2f(-.04,.62);
      glVertex2f(-.01,.62);
      glVertex2f(-.01,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0,0,0 );
      glVertex2f(-.024,.62);
      glVertex2f(-.024,.60);
      glVertex2f(-.026,.60);
      glVertex2f(-.026,.62);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 192, 0 );
      glVertex2f(-.036,.60);
      glVertex2f(-.036,.56);
      glVertex2f(-.014,.56);
      glVertex2f(-.014,.60);
      glEnd();

      //Lamp Post2.3
      glBegin(GL_QUADS);
      glColor3ub( 92, 78, 36 );
      glVertex2f(.95,.65);
      glVertex2f(.95,.50);
      glVertex2f(.94,.50);
      glVertex2f(.94,.65);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 191, 165, 86 );
      glVertex2f(.94,.63);
      glVertex2f(.94,.62);
      glVertex2f(.91,.62);
      glVertex2f(.91,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0,0,0 );
      glVertex2f(.924,.62);
      glVertex2f(.924,.60);
      glVertex2f(.926,.60);
      glVertex2f(.926,.62);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 192, 0 );
      glVertex2f(.936,.60);
      glVertex2f(.936,.56);
      glVertex2f(.914,.56);
      glVertex2f(.914,.60);
      glEnd();



//tree 2............

     glLineWidth(5);//tree lower dal...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.5f, 0.5f);
	glVertex2f(-0.5f, 0.65f);
 glEnd();



	 glBegin(GL_TRIANGLES);// tree2 leaf 1..
    glColor3ub(0, 51, 0);//rgb color picker

    glVertex2f(-.56f, .56f);    // 2
	glVertex2f(-0.44f,.56f);
	glVertex2f(-.5f, 0.64f);

    glVertex2f(-.55f, .60f);    // 3
	glVertex2f(-0.45f,.60f);
	glVertex2f(-.5f, 0.65f);

    glVertex2f(-.54f, .63f);    // 4
	glVertex2f(-0.46f,.63f);
	glVertex2f(-.5f, 0.67f);


    glVertex2f(-.53f, .65f);    // 5
	glVertex2f(-0.47f,.65f);
	glVertex2f(-.5f, 0.69f);


    glVertex2f(-.52f, .67f);    // 6
	glVertex2f(-0.48f,.67f);
	glVertex2f(-.5f, 0.71f);
	glEnd();

      //building 1......

         glBegin(GL_QUADS);
      glColor3ub( 153, 77, 51 );
      glVertex2f(-.18,.68);
      glVertex2f(-.18,.5);
      glVertex2f(-.1,.5);
      glVertex2f(-.1,.68);
      glEnd();

glLineWidth(5);//bldng spaace......................
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(-.17f, 0.55f);
	glVertex2f(-.15f, 0.55f);    // x, y

glVertex2f(-.17f, 0.60f);
	glVertex2f(-.15f, 0.60f);    // x, y

glVertex2f(-.17f, 0.65f);
	glVertex2f(-.15f, 0.65f);    // x, y

	glVertex2f(-.11f, 0.55f);
	glVertex2f(-.13f, 0.55f);    // x, y

glVertex2f(-.11f, 0.60f);
	glVertex2f(-.13f, 0.60f);    // x, y

glVertex2f(-.11f, 0.65f);
	glVertex2f(-.13f, 0.65f);    // x, y
	 glEnd();


glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(153, 0, 0);
glVertex2f(-.14f, 0.51f);   //midline of bldng
	glVertex2f(-.14f, 0.66f);

 glEnd();

  //building 2......

         glBegin(GL_QUADS);
      glColor3ub(1204, 102, 0);
      glVertex2f(-.25,.65);
      glVertex2f(-.25,.5);
      glVertex2f(-.19,.5);
      glVertex2f(-.19,.65);
      glEnd();

glLineWidth(5);//bldng2 sgape......................
	glBegin(GL_LINES);
	glColor3ub(255, 255, 102);
	glVertex2f(-.24f, 0.53f);
	glVertex2f(-.23f, 0.53f);

	glVertex2f(-.24f, 0.58f);
	glVertex2f(-.23f, 0.58f);

glVertex2f(-.24f, 0.63f);
	glVertex2f(-.23f, 0.63f);

	glVertex2f(-.2f, 0.53f);
	glVertex2f(-.21f, 0.53f);

	glVertex2f(-.2f, 0.58f);
	glVertex2f(-.21f, 0.58f);

	glVertex2f(-.2f, 0.63f);
	glVertex2f(-.21f, 0.63f);

	glEnd();

	glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(153, 0, 1);
glVertex2f(-.22f, 0.51f);   //midline of bldng2........
	glVertex2f(-.22f, 0.63f);

    glEnd();




      //2nd station lower bit..............
      glBegin(GL_QUADS);
      glColor3ub(38, 94, 213);
      glVertex2f(0,0);
      glVertex2f(.9,0);
      glVertex2f(.9,.1);
      glVertex2f(0,.1);
      glEnd();

         //2nd station right side bit.........
       glBegin(GL_QUADS);
      glColor3ub(213, 139, 38);
      glVertex2f(.95,.2);
      glVertex2f(.9,.1);
      glVertex2f(.9,0);
      glVertex2f(.95,.125);
      glEnd();
           //2nd station upper side bit.........
       glBegin(GL_QUADS);
      glColor3ub(124, 140, 176);
      glVertex2f(0,.1);
      glVertex2f(.9,.1);
      glVertex2f(.95,.2);
      glVertex2f(.1,.2);
      glEnd();




      //#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@





      //Bus
    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(66, 203, 245);
    glVertex2f(-.69,0.59);
    glVertex2f(-.69,0.36);
    glVertex2f(-.44,0.36);
    glVertex2f(-.44,0.59);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(120, 1, 1);
    glVertex2f(-.52,0.53);
    glVertex2f(-.52,0.48);
    glVertex2f(-.49,0.48);
    glVertex2f(-.49,0.53);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(120, 1, 1);
    glVertex2f(-.68,0.53);
    glVertex2f(-.68,0.48);
    glVertex2f(-.65,0.48);
    glVertex2f(-.65,0.53);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(120, 1, 1);
    glVertex2f(-.61,0.37);
    glVertex2f(-.61,0.51);
    glVertex2f(-.58,0.51);
    glVertex2f(-.58,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(120, 1, 1);
    glVertex2f(-.56,0.53);
    glVertex2f(-.56,0.48);
    glVertex2f(-.53,0.48);
    glVertex2f(-.53,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(120, 1, 1);
    glVertex2f(-.45,0.53);
    glVertex2f(-.45,0.48);
    glVertex2f(-.48,0.48);
    glVertex2f(-.48,0.53);
    glEnd();

    //BusWheel1
    int j;
	GLfloat a=-0.64f; GLfloat b=0.36f; GLfloat r =.03f;
	int triangleAmount = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,64,0);
		glVertex2f(a, b);
		GLfloat tPi = 2.0f * PI;
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            a + (r * cos(j *  tPi / triangleAmount)),
			    b + (r * sin(j * tPi / triangleAmount))
			);
		}
	glEnd();

	//BusWheel2
    int k;
	GLfloat m=-.50f; GLfloat n=0.36f; GLfloat ra =.03f;
	int tAa = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,64,0);
		glVertex2f(m, n);
		GLfloat twPi = 2.0f * PI;
		for(k = 0; k <= tAa;k++) {
			glVertex2f(
		            m + (ra * cos(k *  twPi / triangleAmount)),
			    n + (ra * sin(k * twPi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    glPopMatrix();


    //Car
    glPushMatrix();
glTranslatef(position, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(255, 17, 0);
    glVertex2f(.4,.650);
    glVertex2f(.4,.450);
    glVertex2f(.6,.450);
    glVertex2f(.6,.650);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 17, 0);
    glVertex2f(.3,.55);
    glVertex2f(.3,0.45);
    glVertex2f(.4,0.45);
    glVertex2f(.4,0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 17, 0.03);
    glVertex2f(.6,0.58);
    glVertex2f(.6,0.45);
    glVertex2f(.67,0.45);
    glVertex2f(.67,.55);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(74, 70, 70);
    glVertex2f(.4,0.58);
    glVertex2f(.4,.45);
    glVertex2f(.36,0.57);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(74, 70, 70);
    glVertex2f(.6,.65);
    glVertex2f(.6,0.58);
    glVertex2f(.63,0.565);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(74, 70, 70);
    glVertex2f(.43,.58);
    glVertex2f(.48,.58);
    glVertex2f(.49,.63);
    glVertex2f(.44,.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(74, 70, 70);
    glVertex2f(.52,.58);
    glVertex2f(.57,.58);
    glVertex2f(.58,.63);
    glVertex2f(.53,.63);
    glEnd();

    //CarWheel1
    int w;
	GLfloat c=.4f; GLfloat d=0.45f; GLfloat rad =.03f;
	int tAn = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(c, d);
		GLfloat twiPi = 2.0f * PI;
		for(w = 0; w <= tAn;w++) {
			glVertex2f(
		            c + (rad * cos(w *  twiPi / triangleAmount)),
			    d + (rad * sin(w * twiPi / triangleAmount))
			);
		}
	glEnd();

	//CarWheel2
    int z;
	GLfloat e=.58f; GLfloat f=0.45f; GLfloat radi =.03f;
	int tAng = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(e, f);
		GLfloat twicPi = 2.0f * PI;
		for(z = 0; z <= tAng;z++) {
			glVertex2f(
		            e + (radi * cos(z *  twicPi / triangleAmount)),
			    f + (radi * sin(z * twicPi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	    glPopMatrix();



	 //tree rail line............

     glLineWidth(4);//tree lower dal...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.6f, 0.2f);
	glVertex2f(-0.6f, 0.35f);
 glEnd();



	 glBegin(GL_TRIANGLES);// tree2 leaf 1..
    glColor3ub(0, 51, 0);//rgb color picker

    glVertex2f(-.66f, .26f);    // 2
	glVertex2f(-0.54f,.26f);
	glVertex2f(-.6f, 0.34f);

    glVertex2f(-.65f, .30f);    // 3
	glVertex2f(-0.55f,.30f);
	glVertex2f(-.6f, 0.35f);

    glVertex2f(-.64f, .33f);    // 4
	glVertex2f(-0.56f,.33f);
	glVertex2f(-.6f, 0.37f);


    glVertex2f(-.63f, .35f);    // 5
	glVertex2f(-0.57f,.35f);
	glVertex2f(-.6f, 0.39f);


    glVertex2f(-.62f, .37f);    // 6
	glVertex2f(-0.58f,.37f);
	glVertex2f(-.6f, 0.41f);
	glEnd();


	 //tree rail line............

     glLineWidth(4);//tree lower dal...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.4f, 0.2f);
	glVertex2f(-0.4f, 0.35f);
 glEnd();



	 glBegin(GL_TRIANGLES);// tree2 leaf 1..
    glColor3ub(0, 51, 0);//rgb color picker

    glVertex2f(-.46f, .26f);    // 2
	glVertex2f(-0.34f,.26f);
	glVertex2f(-.4f, 0.34f);

    glVertex2f(-.45f, .30f);    // 3
	glVertex2f(-0.35f,.30f);
	glVertex2f(-.4f, 0.35f);

    glVertex2f(-.44f, .33f);    // 4
	glVertex2f(-0.36f,.33f);
	glVertex2f(-.4f, 0.37f);


    glVertex2f(-.43f, .35f);    // 5
	glVertex2f(-0.37f,.35f);
	glVertex2f(-.4f, 0.39f);


    glVertex2f(-.42f, .37f);    // 6
	glVertex2f(-0.38f,.37f);
	glVertex2f(-.4f, 0.41f);
	glEnd();



	 //tree rail line............

     glLineWidth(4);//tree lower dal...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.2f, 0.2f);
	glVertex2f(-0.2f, 0.35f);
 glEnd();



	 glBegin(GL_TRIANGLES);// tree2 leaf 1..
    glColor3ub(0, 51, 0);//rgb color picker

    glVertex2f(-.26f, .26f);    // 2
	glVertex2f(-0.14f,.26f);
	glVertex2f(-.2f, 0.34f);

    glVertex2f(-.25f, .30f);    // 3
	glVertex2f(-0.15f,.30f);
	glVertex2f(-.2f, 0.35f);

    glVertex2f(-.24f, .33f);    // 4
	glVertex2f(-0.16f,.33f);
	glVertex2f(-.2f, 0.37f);


    glVertex2f(-.23f, .35f);    // 5
	glVertex2f(-0.17f,.35f);
	glVertex2f(-.2f, 0.39f);


    glVertex2f(-.22f, .37f);    // 6
	glVertex2f(-0.18f,.37f);
	glVertex2f(-.2f, 0.41f);
	glEnd();




      //###################

      //RAIL LINE 4

      //RAIL LINE

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-1,0);             //SURU
    glVertex2f(-1,-.02);
    glVertex2f(1,-.02);
    glVertex2f(1,0);

    glVertex2f(-1,-.07);
    glVertex2f(-1,-.09);
    glVertex2f(1,-.09);
    glVertex2f(1,-.07);

    glVertex2f(-.95,-.02);
    glVertex2f(-.95,-.07);
    glVertex2f(-.9,-.07);
    glVertex2f(-.9,-.02);

    glVertex2f(-.75,-.02);
    glVertex2f(-.75,-.07);
    glVertex2f(-.7,-.07);
    glVertex2f(-.7,-.02);

    glVertex2f(-.55,-.02);
    glVertex2f(-.55,-.07);
    glVertex2f(-.5,-.07);
    glVertex2f(-.5,-.02);

    glVertex2f(-.35,-.02);
    glVertex2f(-.35,-.07);
    glVertex2f(-.3,-.07);
    glVertex2f(-.3,-.02);

    glVertex2f(-.15,-.02);
    glVertex2f(-.15,-.07);
    glVertex2f(-.1,-.07);
    glVertex2f(-.1,-.02);

    glVertex2f(.15,-.02);
    glVertex2f(.15,-.07);
    glVertex2f(.1,-.07);
    glVertex2f(.1,-.02);

     glVertex2f(.35,-.02);
    glVertex2f(.35,-.07);
    glVertex2f(.3,-.07);
    glVertex2f(.3,-.02);


    glVertex2f(.55,-.02);
    glVertex2f(.55,-.07);
    glVertex2f(.5,-.07);
    glVertex2f(.5,-.02);

    glVertex2f(.75,-.02);
    glVertex2f(.75,-.07);
    glVertex2f(.7,-.07);
    glVertex2f(.7,-.02);

    glVertex2f(.95,-.02);
    glVertex2f(.95,-.07);
    glVertex2f(.9,-.07);
    glVertex2f(.9,-.02);
    glEnd();





    //BACKSIDE TRAIN 03

    //RAIL LINE

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-1,-.2);             //SURU
    glVertex2f(-1,-.23);
    glVertex2f(1,-.23);
    glVertex2f(1,-.2);

    glVertex2f(-1,-.11);
    glVertex2f(-1,-.14);
    glVertex2f(1,-.14);
    glVertex2f(1,-.11);

    glVertex2f(-.95,-.13);
    glVertex2f(-.95,-.2);
    glVertex2f(-.9,-.2);
    glVertex2f(-.9,-.13);

    glVertex2f(-.75,-.13);
    glVertex2f(-.75,-.2);
    glVertex2f(-.7,-.2);
    glVertex2f(-.7,-.13);

    glVertex2f(-.55,-.13);
    glVertex2f(-.55,-.2);
    glVertex2f(-.5,-.2);
    glVertex2f(-.5,-.13);

    glVertex2f(-.35,-.13);
    glVertex2f(-.35,-.2);
    glVertex2f(-.3,-.2);
    glVertex2f(-.3,-.13);

    glVertex2f(-.15,-.13);
    glVertex2f(-.15,-.2);
    glVertex2f(-.1,-.2);
    glVertex2f(-.1,-.13);

    glVertex2f(.15,-.13);
    glVertex2f(.15,-.2);
    glVertex2f(.1,-.2);
    glVertex2f(.1,-.13);

     glVertex2f(.35,-.13);
    glVertex2f(.35,-.2);
    glVertex2f(.3,-.2);
    glVertex2f(.3,-.13);


    glVertex2f(.55,-.13);
    glVertex2f(.55,-.2);
    glVertex2f(.5,-.2);
    glVertex2f(.5,-.13);

    glVertex2f(.75,-.13);
    glVertex2f(.75,-.2);
    glVertex2f(.7,-.2);
    glVertex2f(.7,-.13);

    glVertex2f(.95,-.13);
    glVertex2f(.95,-.2);
    glVertex2f(.9,-.2);
    glVertex2f(.9,-.13);
    glEnd();


       //TRAIN 3
    glLoadIdentity();                           //SURU
    glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);


    //BOGI 1
    glBegin(GL_QUADS);
    glColor3ub(0, 53, 102);
    glVertex2f(.6,.03);
    glVertex2f(.6,-.2);
    glVertex2f(.4,-.2);
    glVertex2f(.4,.03);

    //BOGI 2
    glVertex2f(.38,.02);
    glVertex2f(.38,-.2);
    glVertex2f(0,-.2);
    glVertex2f(0,.02);

    //BOGI 3
    glVertex2f(-.02,.02);
    glVertex2f(-.02,-.2);
    glVertex2f(-.4,-.2);
    glVertex2f(-.4,.02);

    //BOGI 4
    glVertex2f(-.42,.02);
    glVertex2f(-.42,-.2);
    glVertex2f(-.8,-.2);
    glVertex2f(-.8,.02);

    glEnd();



    //SMOKE




    //glPushMatrix();
	glTranslatef(0.0f,position3,0.0f);
    //1
    GLfloat s11=.7f; GLfloat d11=.05; GLfloat radiusdh11 =.02f;
	int triangleAmountdh11 = 20;
	GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s11, d11);
    int dh11;
    for(dh11 = 0; dh11 <= triangleAmountdh11;dh11++)
        {
        glVertex2f(s11 + (radiusdh11 * cos(dh11 *  twicePi / triangleAmountdh11)),
                   d11 + (radiusdh11 * sin(dh11 * twicePi / triangleAmountdh11)));
		}
	glEnd();


	//2
	 GLfloat s22=.7f; GLfloat d22=-.02; GLfloat radiusdh22 =.02f;
	int triangleAmountdh22 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s22, d22);
    int dh22;
    for(dh22 = 0; dh22 <= triangleAmountdh22;dh22++)
        {
        glVertex2f(s22 + (radiusdh22 * cos(dh22 *  twicePi / triangleAmountdh22)),
                   d22 + (radiusdh22 * sin(dh22 * twicePi / triangleAmountdh22)));
		}
	glEnd();


	//3
	 GLfloat s33=.7f; GLfloat d33=-.09f; GLfloat radiusdh33 =.02f;
	int triangleAmountdh33 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s33, d33);
    int dh33;
    for(dh33 = 0; dh33 <= triangleAmountdh33;dh33++)
        {
        glVertex2f(s33 + (radiusdh33 * cos(dh33 *  twicePi / triangleAmountdh33)),
                   d33 + (radiusdh33 * sin(dh33 * twicePi / triangleAmountdh33)));
		}
	glEnd();

	//glPopMatrix();
	glLoadIdentity();



	glTranslatef(position2,0.0f,0.0f);



    //FRONT
    glBegin(GL_QUADS);
    glColor3ub(0, 38, 77);
    glVertex2f(.6,-.03);
    glVertex2f(.75,-.03);
    glVertex2f(.75,-.2);
    glVertex2f(.6,-.2);


    glColor3ub(38,38,38);
    glVertex2f(.72,-.05);
    glVertex2f(.68,-.05);
    glVertex2f(.68,.05);
    glVertex2f(.72,.05);

    glColor3ub(26,26,26);
    glVertex2f(.73,.08);
    glVertex2f(.67,.08);
    glVertex2f(.67,.04);
    glVertex2f(.73,.04);

    glColor3ub(26,26,26);
    glVertex2f(.65,-.05);
    glVertex2f(.62,-.05);
    glVertex2f(.62,-.02);
    glVertex2f(.65,-.02);              //SESH

    //HEADLIGHT
    glColor3ub(255,255,0);
    glVertex2f(.75,-.15);
    glVertex2f(.77,-.15);
    glVertex2f(.77,-.17);
    glVertex2f(.75,-.17);

    //TRAIN 2 ER BOGI CONNECTOR
    //BOGI 1-2
    glColor3ub(0,0,0);
    glVertex2f(.4,-.17);
    glVertex2f(.4,-.19);
    glVertex2f(.38,-.19);
    glVertex2f(.38,-.17);

    //BOGI 2-3
    glVertex2f(0,-.17);
    glVertex2f(0,-.19);
    glVertex2f(-.02,-.19);
    glVertex2f(-.02,-.17);

    //BOGI 3-4
    glVertex2f(-.4,-.17);
    glVertex2f(-.4,-.19);
    glVertex2f(-.42,-.19);
    glVertex2f(-.42,-.17);


    //TRAIN ER MAJHKHAN
    glColor3ub(255, 255, 128);            //SURU
    glVertex2f(-.8,-.11);
    glVertex2f(-.8,-.04);
    glVertex2f(-.42,-.04);
    glVertex2f(-.42,-.11);

   // glColor3ub(77,77,77);
    glVertex2f(-.4,-.11);
    glVertex2f(-.4,-.04);
    glVertex2f(-.02,-.04);
    glVertex2f(-.02,-.11);

    //glColor3ub(77,77,77);
    glVertex2f(.38,-.11);
    glVertex2f(.38,-.04);
    glVertex2f(0,-.04);
    glVertex2f(0,-.11);

    //glColor3ub(77,77,77);
    glVertex2f(.6,-.11);
    glVertex2f(.6,-.04);
    glVertex2f(.4,-.04);
    glVertex2f(.4,-.11);                 //SESH

    // TRAIN 2 ER WINDOW

    //BOGI 1


    glColor3ub(217, 217, 217);
    glVertex2f(.55,-.1);
    glVertex2f(.42,-.1);
    glVertex2f(.42,.01);
    glVertex2f(.55,.01);

    //DOOR
    //glColor3ub(255,255,255);
    glVertex2f(.59,-.16);
    glVertex2f(.56,-.16);
    glVertex2f(.56,-.02);
    glVertex2f(.59,-.02);                           //SESH


    //BOGI 2
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.33,-.1);
    glVertex2f(.27,-.1);
    glVertex2f(.27,-.05);
    glVertex2f(.33,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(.26,-.1);
    glVertex2f(.2,-.1);
    glVertex2f(.2,-.05);
    glVertex2f(.26,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(.19,-.1);
    glVertex2f(.13,-.1);
    glVertex2f(.13,-.05);
    glVertex2f(.19,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(.12,-.1);
    glVertex2f(.06,-.1);
    glVertex2f(.06,-.05);
    glVertex2f(.12,-.05);                  //SESH


    //DOOR

    //glColor3ub(255,255,255);              //SURU
    glVertex2f(.37,-.16);
    glVertex2f(.34,-.16);
    glVertex2f(.34,-.02);
    glVertex2f(.37,-.02);

    //glColor3ub(255,255,255);
    glVertex2f(.01,-.16);
    glVertex2f(.04,-.16);
    glVertex2f(.04,-.02);
    glVertex2f(.01,-.02);                       //SHESH

    // BOGI 3
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(-.07,-.1);
    glVertex2f(-.13,-.1);
    glVertex2f(-.13,-.05);
    glVertex2f(-.07,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.14,-.1);
    glVertex2f(-.2,-.1);
    glVertex2f(-.2,-.05);
    glVertex2f(-.14,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.21,-.1);
    glVertex2f(-.27,-.1);
    glVertex2f(-.27,-.05);
    glVertex2f(-.21,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.28,-.1);
    glVertex2f(-.34,-.1);
    glVertex2f(-.34,-.05);
    glVertex2f(-.28,-.05);                  //SESH


    //DOOR

    //glColor3ub(255,255,255);              //SURU
    glVertex2f(-.03,-.16);
    glVertex2f(-.06,-.16);
    glVertex2f(-.06,-.02);
    glVertex2f(-.03,-.02);

    //glColor3ub(255,255,255);
    glVertex2f(-.39,-.16);
    glVertex2f(-.36,-.16);
    glVertex2f(-.36,-.02);
    glVertex2f(-.39,-.02);                       //SHESH


    // BOGI 4
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(-.47,-.1);
    glVertex2f(-.53,-.1);
    glVertex2f(-.53,-.05);
    glVertex2f(-.47,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.54,-.1);
    glVertex2f(-.6,-.1);
    glVertex2f(-.6,-.05);
    glVertex2f(-.54,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.61,-.1);
    glVertex2f(-.67,-.1);
    glVertex2f(-.67,-.05);
    glVertex2f(-.61,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.68,-.1);
    glVertex2f(-.74,-.1);
    glVertex2f(-.74,-.05);
    glVertex2f(-.68,-.05);                      //SESH


    //DOOR

    //glColor3ub(255,255,255);              //SURU
    glVertex2f(-.43,-.16);
    glVertex2f(-.46,-.16);
    glVertex2f(-.46,-.02);
    glVertex2f(-.43,-.02);

    //glColor3ub(255,255,255);
    glVertex2f(-.79,-.16);
    glVertex2f(-.76,-.16);
    glVertex2f(-.76,-.02);
    glVertex2f(-.79,-.02);                       //SHESH



    glEnd();

    //TRAIN 2 ER WINDOW ER PARTITION
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glLineWidth(3);
    // BOGI W1

    glVertex2f(.51,-.1);
    glVertex2f(.51,.01);

    glVertex2f(.46,-.1);
    glVertex2f(.46,.01);

    glVertex2f(.6,-.1);
    glVertex2f(.75,-.1);

    glVertex2f(.6,-.15);
    glVertex2f(.75,-.15);

    glVertex2f(.59,-.15);
    glVertex2f(.56,-.15);


    //BOGI W2
    glVertex2f(.3,-.1);
    glVertex2f(.3,-.05);

    glVertex2f(.23,-.1);
    glVertex2f(.23,-.05);

    glVertex2f(.16,-.1);
    glVertex2f(.16,-.05);

    glVertex2f(.09,-.1);
    glVertex2f(.09,-.05);


    glVertex2f(.38,0);
    glVertex2f(0,0);

    glVertex2f(.37,-.15);
    glVertex2f(.34,-.15);

    glVertex2f(.01,-.15);
    glVertex2f(.04,-.15);

    // BOGI W3
    glVertex2f(-.1,-.1);
    glVertex2f(-.1,-.05);

    glVertex2f(-.17,-.1);
    glVertex2f(-.17,-.05);

    glVertex2f(-.24,-.1);
    glVertex2f(-.24,-.05);

    glVertex2f(-.31,-.1);
    glVertex2f(-.31,-.05);

    glVertex2f(-.02,0);
    glVertex2f(-.4,0);

    glVertex2f(-.03,-.15);
    glVertex2f(-.06,-.15);

    glVertex2f(-.39,-.15);
    glVertex2f(-.36,-.15);

    //BOGI W4
    glVertex2f(-.5,-.1);
    glVertex2f(-.5,-.05);

    glVertex2f(-.57,-.1);
    glVertex2f(-.57,-.05);

    glVertex2f(-.64,-.1);
    glVertex2f(-.64,-.05);

    glVertex2f(-.71,-.1);
    glVertex2f(-.71,-.05);

    glVertex2f(-.42,0);
    glVertex2f(-.8,0);

    glVertex2f(-.43,-.15);
    glVertex2f(-.46,-.15);

     glVertex2f(-.76,-.15);
    glVertex2f(-.79,-.15);


    glEnd();


    //TRAIN 2 ER WHEEL

    //WHEEL 1


    GLfloat m1=-.75f; GLfloat n1=-.2f; GLfloat radiusst1 =.02f;
	int triangleAmountst1 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m1,n1);
    int k1;
    for(k1 = 0; k1 <= triangleAmountst1;k1++)
        {
        glVertex2f(m1 + (radiusst1 * cos(k1 *  twicePi / triangleAmountst1)),
                   n1 + (radiusst1 * sin(k1 * twicePi / triangleAmountst1)));
		}
	glEnd();

	//WHEEL 2
    GLfloat m2=-.65f; GLfloat n2=-.2f; GLfloat radiusst2 =.02f;
	int triangleAmountst2 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m2, n2);
    int k2;
    for(k2 = 0; k2 <= triangleAmountst2;k2++)
        {
        glVertex2f(m2 + (radiusst2 * cos(k2 *  twicePi / triangleAmountst2)),
                   n2 + (radiusst2 * sin(k2 * twicePi / triangleAmountst2)));
		}
	glEnd();

	//WHEEL 3
    GLfloat m3=-.55f; GLfloat n3=-.2f; GLfloat radiusst3 =.02f;
	int triangleAmountst3 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m3, n3);
    int k3;
    for(k3 = 0; k3 <= triangleAmountst3;k3++)
        {
        glVertex2f(m3 + (radiusst3 * cos(k3 *  twicePi / triangleAmountst3)),
                   n3 + (radiusst3 * sin(k3 * twicePi / triangleAmountst3)));
		}
	glEnd();

	//WHEEL 4
    GLfloat m4=-.45f; GLfloat n4=-.2f; GLfloat radiusst4 =.02f;
	int triangleAmountst4 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m4, n4);
    int k4;
    for(k4 = 0; k4 <= triangleAmountst4;k4++)
        {
        glVertex2f(m4 + (radiusst4 * cos(k4 *  twicePi / triangleAmountst4)),
                   n4 + (radiusst4 * sin(k4 * twicePi / triangleAmountst4)));
		}
	glEnd();

	//WHEEL 5
    GLfloat m5=-.35f; GLfloat n5=-.2f; GLfloat radiusst5 =.02f;
	int triangleAmountst5 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m5, n5);
    int k5;
    for(k5 = 0; k5 <= triangleAmountst5;k5++)
        {
        glVertex2f(m5 + (radiusst5 * cos(k5 *  twicePi / triangleAmountst5)),
                   n5 + (radiusst5 * sin(k5 * twicePi / triangleAmountst5)));
		}
	glEnd();

	//WHEEL 6
    GLfloat m6=-.25f; GLfloat n6=-.2f; GLfloat radiusst6 =.02f;
	int triangleAmountst6 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m6, n6);
    int k6;
    for(k6= 0; k6 <= triangleAmountst6;k6++)
        {
        glVertex2f(m6 + (radiusst6 * cos(k6 *  twicePi / triangleAmountst6)),
                   n6 + (radiusst6 * sin(k6 * twicePi / triangleAmountst6)));
		}
	glEnd();

	//WHEEL 7
    GLfloat m7=-.15f; GLfloat n7=-.2f; GLfloat radiusst7 =.02f;
	int triangleAmountst7 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m7, n7);
    int k7;
    for(k7 = 0; k7 <= triangleAmountst7;k7++)
        {
        glVertex2f(m7 + (radiusst7 * cos(k7 *  twicePi / triangleAmountst7)),
                   n7 + (radiusst7 * sin(k7 * twicePi / triangleAmountst7)));
		}
	glEnd();

	//WHEEL 8
    GLfloat m8=-.05f; GLfloat n8=-.2f; GLfloat radiusst8 =.02f;
	int triangleAmountst8 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m8, n8);
    int k8;
    for(k8 = 0; k8 <= triangleAmountst8;k8++)
        {
        glVertex2f(m8 + (radiusst8 * cos(k8 *  twicePi / triangleAmountst8)),
                   n8 + (radiusst7 * sin(k8 * twicePi / triangleAmountst8)));
		}
	glEnd();

	//WHEEL 9
    GLfloat m9=.05f; GLfloat n9=-.2f; GLfloat radiusst9 =.02f;
	int triangleAmountst9 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m9, n9);
    int k9;
    for(k9 = 0; k9 <= triangleAmountst9;k9++)
        {
        glVertex2f(m9 + (radiusst9 * cos(k9 *  twicePi / triangleAmountst9)),
                   n9 + (radiusst9 * sin(k9 * twicePi / triangleAmountst9)));
		}
	glEnd();

	//WHEEL 10
    GLfloat m10=.15f; GLfloat n10=-.2f; GLfloat radiusst10 =.02f;
	int triangleAmountst10 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m10, n10);
    int k10;
    for(k10= 0; k10 <= triangleAmountst10;k10++)
        {
        glVertex2f(m10 + (radiusst10 * cos(k10 *  twicePi / triangleAmountst10)),
                   n10 + (radiusst10 * sin(k10 * twicePi / triangleAmountst10)));
		}
	glEnd();

	//WHEEL 11
    GLfloat m11=.25f; GLfloat n11=-.2f; GLfloat radiusst11 =.02f;
	int triangleAmountst11 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m11, n11);
    int k11;
    for(k11 = 0; k11 <= triangleAmountst11;k11++)
        {
        glVertex2f(m11 + (radiusst11 * cos(k11 *  twicePi / triangleAmountst11)),
                   n11 + (radiusst11 * sin(k11* twicePi / triangleAmountst11)));
		}
	glEnd();

	//WHEEL 12
    GLfloat m12=.35f; GLfloat n12=-.2f; GLfloat radiusst12 =.02f;
	int triangleAmountst12 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m12, n12);
    int k12;
    for(k12 = 0; k12 <= triangleAmountst12;k12++)
        {
        glVertex2f(m12 + (radiusst12 * cos(k12 *  twicePi / triangleAmountst12)),
                   n12 + (radiusst12* sin(k12 * twicePi / triangleAmountst12)));
		}
	glEnd();


	//WHEEL 13
    GLfloat m13=.45f; GLfloat n13=-.2f; GLfloat radiusst13 =.02f;
	int triangleAmountst13 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m13, n13);
    int k13;
    for(k13 = 0; k13 <= triangleAmountst13;k13++)
        {
        glVertex2f(m13 + (radiusst13 * cos(k13 *  twicePi / triangleAmountst13)),
                   n13 + (radiusst13* sin(k13 * twicePi / triangleAmountst13)));
		}
	glEnd();

	//WHEEL 14
    GLfloat m14=.55f; GLfloat n14=-.2f; GLfloat radiusst14 =.02f;
	int triangleAmountst14 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m14, n14);
    int k14;
    for(k14 = 0; k14 <= triangleAmountst14;k14++)
        {
        glVertex2f(m14 + (radiusst14 * cos(k14 *  twicePi / triangleAmountst14)),
                   n14+ (radiusst14* sin(k14* twicePi / triangleAmountst14)));
		}
	glEnd();

	//WHEEL 15
    GLfloat m15=.65f; GLfloat n15=-.2f; GLfloat radiusst15=.025f;
	int triangleAmountst15= 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m15, n15);
    int k15;
    for(k15= 0; k15<= triangleAmountst15;k15++)
        {
        glVertex2f(m15+ (radiusst15* cos(k15 *  twicePi / triangleAmountst15)),
                   n15 + (radiusst15* sin(k15 * twicePi / triangleAmountst15)));
		}
	glEnd();

	//WHEEL 16
    GLfloat m16=.72f; GLfloat n16=-.2f; GLfloat radiusst16 =.025f;
	int triangleAmountst16 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m16, n16);
    int k16;
    for(k16 = 0; k16 <= triangleAmountst16;k16++)
        {
        glVertex2f(m16 + (radiusst16 * cos(k16 *  twicePi / triangleAmountst16)),
                   n16 + (radiusst16* sin(k16 * twicePi / triangleAmountst16)));
		}
	glEnd();

glLoadIdentity();




	//station lower bit..............
      glBegin(GL_QUADS);
      glColor3ub(38, 94, 213);
      glVertex2f(-.2,-.4);
      glVertex2f(-.2,-.5);
      glVertex2f(.75,-.5);
      glVertex2f(.75,-.4);
      glEnd();
      //upper side bit.........
      glBegin(GL_QUADS);
      glColor3ub(124, 140, 176);
      glVertex2f(-.1,-.2);
      glVertex2f(-.2,-.4);
      glVertex2f(.75,-.4);
      glVertex2f(.85,-.2);
      glEnd();
      //right side bit.........
       glBegin(GL_QUADS);
      glColor3ub( 213, 139, 38 );
      glVertex2f(.75,-.4);
      glVertex2f(.75,-.5);
      glVertex2f(.85,-.28);
      glVertex2f(.85,-.2);
      glEnd();

      //bench 1..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(-.05,-.25);
      glVertex2f(-.05,-.35);
      glVertex2f(.15,-.35);
      glVertex2f(.15,-.25);
      glEnd();

           //bench 2..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.25,-.25);
      glVertex2f(.25,-.35);
      glVertex2f(.45,-.35);
      glVertex2f(.45,-.25);
      glEnd();
         //bench 3..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.55,-.25);
      glVertex2f(.55,-.35);
      glVertex2f(.7,-.35);
      glVertex2f(.7,-.25);
      glEnd();

           //pillar 1..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(0,-.35);
      glVertex2f(.05,-.35);
      glVertex2f(.05,.4);
      glVertex2f(0,.4);
      glEnd();
         //pillar 2..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.3,-.35);
      glVertex2f(.35,-.35);
      glVertex2f(.35,.4);
      glVertex2f(.3,.4);
      glEnd();
          //pillar 3..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.6,-.35);
      glVertex2f(.65,-.35);
      glVertex2f(.65,.4);
      glVertex2f(.6,.4);
      glEnd();

      //roof........

   glBegin(GL_QUADS);
      glColor3ub( 207, 144, 9  );
      glVertex2f(-.1,.4);
      glVertex2f(.85,.4);
      glVertex2f(.85,.5);
      glVertex2f(-.1,.5);
      glEnd();
      //celling.........
         glBegin(GL_QUADS);
      glColor3ub(177, 185, 171    );
      glVertex2f(-.1,.5);
      glVertex2f(.85,.5);
      glVertex2f(.9,.6);
      glVertex2f(-.05,.6);
      glEnd();
     // celling right...
        glBegin(GL_QUADS);
      glColor3ub(115, 55, 45   );
      glVertex2f(.9,.6);
      glVertex2f(.85,.5);
      glVertex2f(.85,.4);
      glVertex2f(.9,.5);
      glEnd();

      //2nd station bench1.....

        glBegin(GL_QUADS);
      glColor3ub(117, 23, 7);
      glVertex2f(.15,.13);
      glVertex2f(.28,.13);
      glVertex2f(.28,.2);
      glVertex2f(.15,.2);
      glEnd();
     //2nd station 2nd bench
          glBegin(GL_QUADS);
      glColor3ub(117, 23, 7);
      glVertex2f(.4,.13);
      glVertex2f(.55,.13);
      glVertex2f(.55,.2);
      glVertex2f(.4,.2);
      glEnd();
        //2nd station 3rd bench
          glBegin(GL_QUADS);
      glColor3ub(117, 23, 7);
      glVertex2f(.7,.13);
      glVertex2f(.85,.13);
      glVertex2f(.85,.2);
      glVertex2f(.7,.2);
      glEnd();

     //2nd station piller1
       glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.2,.2);
      glVertex2f(.25,.2);
      glVertex2f(.25,.4);
      glVertex2f(.2,.4);
      glEnd();

         //2nd station piller2
       glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.45,.2);
      glVertex2f(.5,.2);
      glVertex2f(.5,.4);
      glVertex2f(.45,.4);
      glEnd();

           //2nd station piller3
       glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.75,.2);
      glVertex2f(.8,.2);
      glVertex2f(.8,.4);
      glVertex2f(.75,.4);
      glEnd();





      //STATION NAME


            //station billboard...
      glBegin(GL_QUADS);
      glColor3ub( 124, 140, 176 );
      glVertex2f(.15,.5);
      glVertex2f(.65,.5);
      glVertex2f(.65,.65);
      glVertex2f(.15,.65);
      glEnd();

      //"J"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.167,.64);
      glVertex2f(.167,.63);
      glVertex2f(.187,.63);
      glVertex2f(.187,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.187,.63);
      glVertex2f(.182,.63);
      glVertex2f(.182,.52);
      glVertex2f(.187,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.182,.52);
      glVertex2f(.182,.53);
      glVertex2f(.167,.53);
      glVertex2f(.167,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.167,.52);
      glVertex2f(.172,.52);
      glVertex2f(.172,.56);
      glVertex2f(.167,.56);
      glEnd();

      //"O"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.192,.64);
      glVertex2f(.192,.52);
      glVertex2f(.195,.52);
      glVertex2f(.195,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.207,.64);
      glVertex2f(.207,.52);
      glVertex2f(.210,.52);
      glVertex2f(.210,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.192,.64);
      glVertex2f(.192,.63);
      glVertex2f(.210,.63);
      glVertex2f(.210,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.192,.53);
      glVertex2f(.192,.52);
      glVertex2f(.210,.52);
      glVertex2f(.210,.53);
      glEnd();

      //"Y"
	  glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.214,.64);
      glVertex2f(.210,.64);
      glVertex2f(.216,.58);
      glVertex2f(.220,.58);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.220,.58);
      glVertex2f(.224,.58);
      glVertex2f(.230,.64);
      glVertex2f(.226,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.218,.58);
      glVertex2f(.218,.52);
      glVertex2f(.222,.52);
      glVertex2f(.222,.58);
      glEnd();

      //"P"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.235,.64);
      glVertex2f(.235,.52);
      glVertex2f(.238,.52);
      glVertex2f(.238,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.235,.64);
      glVertex2f(.235,.63);
      glVertex2f(.250,.63);
      glVertex2f(.250,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.245,.64);
      glVertex2f(.245,.59);
      glVertex2f(.250,.59);
      glVertex2f(.250,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.250,.60);
      glVertex2f(.235,.60);
      glVertex2f(.235,.59);
      glVertex2f(.250,.59);
      glEnd();

      //"U"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.255,.64);
      glVertex2f(.255,.52);
      glVertex2f(.259,.52);
      glVertex2f(.259,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.266,.64);
      glVertex2f(.266,.52);
      glVertex2f(.270,.52);
      glVertex2f(.270,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.255,.535);
      glVertex2f(.255,.52);
      glVertex2f(.270,.52);
      glVertex2f(.270,.535);
      glEnd();

      //"R"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.275,.64);
      glVertex2f(.275,.52);
      glVertex2f(.278,.52);
      glVertex2f(.278,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.275,.64);
      glVertex2f(.275,.63);
      glVertex2f(.290,.63);
      glVertex2f(.290,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.285,.64);
      glVertex2f(.285,.59);
      glVertex2f(.290,.59);
      glVertex2f(.290,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.290,.60);
      glVertex2f(.275,.60);
      glVertex2f(.275,.59);
      glVertex2f(.290,.59);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.275,.60);
      glVertex2f(.275,.585);
      glVertex2f(.290,.53);
      glVertex2f(.290,.555);
      glEnd();

      //"H"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.295,.64);
      glVertex2f(.295,.52);
      glVertex2f(.3,.52);
      glVertex2f(.3,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.305,.64);
      glVertex2f(.305,.52);
      glVertex2f(.31,.52);
      glVertex2f(.31,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.295,.59);
      glVertex2f(.295,.57);
      glVertex2f(.310,.57);
      glVertex2f(.310,.59);
      glEnd();

      //"A"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.321,.64);
      glVertex2f(.318,.64);
      glVertex2f(.313,.52);
      glVertex2f(.316,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.324,.64);
      glVertex2f(.321,.64);
      glVertex2f(.325,.52);
      glVertex2f(.328,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.315,.58);
      glVertex2f(.315,.57);
      glVertex2f(.326,.57);
      glVertex2f(.326,.58);
      glEnd();

      //"T"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.328,.64);
      glVertex2f(.328,.63);
      glVertex2f(.348,.63);
      glVertex2f(.348,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.336,.64);
      glVertex2f(.336,.52);
      glVertex2f(.340,.52);
      glVertex2f(.340,.64);
      glEnd();

      //"R"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.361,.64);
      glVertex2f(.361,.52);
      glVertex2f(.364,.52);
      glVertex2f(.364,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.361,.64);
      glVertex2f(.361,.63);
      glVertex2f(.376,.63);
      glVertex2f(.376,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.371,.64);
      glVertex2f(.371,.59);
      glVertex2f(.376,.59);
      glVertex2f(.376,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.376,.60);
      glVertex2f(.376,.60);
      glVertex2f(.361,.59);
      glVertex2f(.376,.59);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.361,.60);
      glVertex2f(.361,.585);
      glVertex2f(.376,.53);
      glVertex2f(.376,.555);
      glEnd();

      //"A"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.385,.64);
      glVertex2f(.382,.64);
      glVertex2f(.377,.52);
      glVertex2f(.380,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.388,.64);
      glVertex2f(.385,.64);
      glVertex2f(.389,.52);
      glVertex2f(.392,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.379,.58);
      glVertex2f(.379,.57);
      glVertex2f(.390,.57);
      glVertex2f(.390,.58);
      glEnd();

      //"I"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.393,.64);
      glVertex2f(.393,.63);
      glVertex2f(.403,.63);
      glVertex2f(.403,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.397,.64);
      glVertex2f(.397,.52);
      glVertex2f(.399,.52);
      glVertex2f(.399,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.393,.53);
      glVertex2f(.393,.52);
      glVertex2f(.403,.52);
      glVertex2f(.403,.53);
      glEnd();

      //"L"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.405,.64);
      glVertex2f(.405,.52);
      glVertex2f(.410,.52);
      glVertex2f(.410,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.410,.53);
      glVertex2f(.410,.52);
      glVertex2f(.422,.52);
      glVertex2f(.422,.53);
      glEnd();

      //W
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.425,.64);
      glVertex2f(.425,.52);
      glVertex2f(.428,.52);
      glVertex2f(.428,.64);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub( 0, 0, 0);
      glVertex2f(.427,.52);
      glVertex2f(.444,.52);
      glVertex2f(.435,.59);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub( 124, 140, 176);
      glVertex2f(.430,.52);
      glVertex2f(.441,.52);
      glVertex2f(.435,.57);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.444,.64);
      glVertex2f(.444,.52);
      glVertex2f(.446,.52);
      glVertex2f(.446,.64);
      glEnd();

      //"A"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.462,.64);
      glVertex2f(.457,.64);
      glVertex2f(.454,.52);
      glVertex2f(.457,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.465,.64);
      glVertex2f(.462,.64);
      glVertex2f(.466,.52);
      glVertex2f(.469,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.456,.58);
      glVertex2f(.456,.57);
      glVertex2f(.467,.57);
      glVertex2f(.467,.58);
      glEnd();

      //"Y"
	  glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.475,.64);
      glVertex2f(.471,.64);
      glVertex2f(.477,.58);
      glVertex2f(.481,.58);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.481,.58);
      glVertex2f(.485,.58);
      glVertex2f(.491,.64);
      glVertex2f(.487,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.479,.58);
      glVertex2f(.479,.52);
      glVertex2f(.483,.52);
      glVertex2f(.483,.58);
      glEnd();

      //S
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.505,.64);
      glVertex2f(.505,.58);
      glVertex2f(.508,.58);
      glVertex2f(.508,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.518,.64);
      glVertex2f(.505,.64);
      glVertex2f(.505,.63);
      glVertex2f(.518,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.518,.58);
      glVertex2f(.505,.58);
      glVertex2f(.505,.57);
      glVertex2f(.518,.57);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.518,.58);
      glVertex2f(.515,.58);
      glVertex2f(.515,.52);
      glVertex2f(.518,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.518,.53);
      glVertex2f(.505,.53);
      glVertex2f(.505,.52);
      glVertex2f(.518,.52);
      glEnd();

      //"T"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.520,.64);
      glVertex2f(.520,.63);
      glVertex2f(.540,.63);
      glVertex2f(.540,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.528,.64);
      glVertex2f(.528,.52);
      glVertex2f(.532,.52);
      glVertex2f(.532,.64);
      glEnd();

      //"A"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.545,.64);
      glVertex2f(.542,.64);
      glVertex2f(.537,.52);
      glVertex2f(.540,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.548,.64);
      glVertex2f(.545,.64);
      glVertex2f(.549,.52);
      glVertex2f(.552,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.539,.58);
      glVertex2f(.539,.57);
      glVertex2f(.550,.57);
      glVertex2f(.550,.58);
      glEnd();

      //"T"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.553,.64);
      glVertex2f(.553,.63);
      glVertex2f(.573,.63);
      glVertex2f(.573,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.561,.64);
      glVertex2f(.561,.52);
      glVertex2f(.565,.52);
      glVertex2f(.565,.64);
      glEnd();

      //"I"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.575,.64);
      glVertex2f(.575,.63);
      glVertex2f(.585,.63);
      glVertex2f(.585,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.579,.64);
      glVertex2f(.579,.52);
      glVertex2f(.581,.52);
      glVertex2f(.581,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.575,.53);
      glVertex2f(.575,.52);
      glVertex2f(.585,.52);
      glVertex2f(.585,.53);
      glEnd();

      //"O"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.590,.64);
      glVertex2f(.590,.52);
      glVertex2f(.593,.52);
      glVertex2f(.593,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.605,.64);
      glVertex2f(.605,.52);
      glVertex2f(.608,.52);
      glVertex2f(.608,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.590,.64);
      glVertex2f(.590,.63);
      glVertex2f(.608,.63);
      glVertex2f(.608,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.590,.53);
      glVertex2f(.590,.52);
      glVertex2f(.608,.52);
      glVertex2f(.608,.53);
      glEnd();

      //"N"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.615,.64);
      glVertex2f(.615,.52);
      glVertex2f(.618,.52);
      glVertex2f(.618,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.630,.64);
      glVertex2f(.630,.52);
      glVertex2f(.633,.52);
      glVertex2f(.633,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.615,.64);
      glVertex2f(.615,.62);
      glVertex2f(.633,.52);
      glVertex2f(.633,.54);
      glEnd();










//@#@#@#@#@#@#@#@#@#@#@##@#@#@#@#@#@#@#@#@#@#@##@#@#@#@#@#@#@#@#@##@#@#@#@#@#@#@##@#@#@##@#@#@#@#@#@#


//1st clouds.............
int i;
GLfloat x=-.2f;
GLfloat y=.9f;
GLfloat radius =.08f;//cloud1....
int triangleAmountc = 20;


  //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

   x=-.2f;
    y=.8f;
    radius =.08f;//cloud2....
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    x=-.3f;
    y=.8f;
    radius =.08f;//cloud3....
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //2nd clouds...........

     x=.65f;
    y=.85f;
    radius =.07f;//cloud3...
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


  x=.6f;
    y=.93f;
    radius =.07f;//cloud2....
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();



  x=.58f;
    y=.85f;
    radius =.07f;//cloud1.....
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


//3rd clouds.............

     x=.88f;
    y=.87f;
    radius =.06f;//cloud1
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


     x=.93f;
    y=.94f;
    radius =.06f;//cloud2....
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

     x=.96f;
    y=.84f;
    radius =.06f;//cloud3........
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


  //extra clouds...........
  x=-.56f;
    y=.97f;
    radius =.06f;//cloud1....
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

  x=-.61f;
    y=.94f;
    radius =.065f;//cloud2...
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    //trees1 lower...........

   glLineWidth(12);
    glBegin(GL_QUADS);
	glColor3ub(153, 77, 0);

	glVertex2f(-.8f, 0.1f);    // x, y
	glVertex2f(-0.77f, 0.1f);
	 glVertex2f(-.77,.4);
      glVertex2f(-.8,.4);
    glEnd();


    glBegin(GL_QUADS);//tree ground..
      glColor3ub(153, 77, 0);
      glVertex2f(-.8,.1);
      glVertex2f(-.84,.05);
      glVertex2f(-.74,.05);
      glVertex2f(-.77,.1);
      glEnd();


//tree Leaf.......
 x=-.85f;
    y=.4f;
    radius =.06f;//leaf-1..
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 179, 0);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();



 x=-.82f;//leaf0..
    y=.45f;
    radius =.06f;//leaf1
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 179, 0);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


  x=-.8f;//leaf1..
    y=.5;
    radius =.08f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-.76f;//leaf2..
    y=.56f;
    radius =.07f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,179,0);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

     x=-.73f;//leaf3..
    y=.59f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


      x=-.7f;//leaf4..
    y=.55f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,179,0);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


   x=-.68f;//leaf6..
    y=.54f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


     x=-.68f;//leaf7..
    y=.50f;
    radius =.05f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


     x=-.69f;//leaf8..
    y=.46f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

  x=-.69f;//leaf9..
    y=.42f;
    radius =.05f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

     x=-.7f;//leaf10..
    y=.40f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 179, 0);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


  glBegin(GL_QUADS);//tree upper dal1...
      glColor3ub(153, 77, 0);
      glVertex2f(-.8,.4);
      glVertex2f(-.78,.4);
      glVertex2f(-.81,.46);
      glVertex2f(-.83,.42);
      glEnd();

glBegin(GL_QUADS);//tree upper dal2....
      glColor3ub(153, 77, 0);
      glVertex2f(-.78,.4);
      glVertex2f(-.77,.4);
      glVertex2f(-.75,.47);
      glVertex2f(-.78,.47);
      glEnd();


 glLineWidth(7.5);//tree uper dal3...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.77f, 0.4f);
	glVertex2f(-0.73f, 0.44f);
 glEnd();

//BACK OF SUN


//sun....................

     x=-.85f;
    y=.82f;
    radius =.08f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,204,10);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


//rain..............


/*glPushMatrix();
glTranslatef(0.0f,position, 0.0f);


glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(204, 230, 255);
	glVertex2f(-.9f, 0.75f);    // 1(xtra..)
	glVertex2f(-.95f, 0.66f);    // x, y


	glVertex2f(-.7f, 0.8f);    // 1
	glVertex2f(-.75f, 0.7f);    // x, y


	glVertex2f(-.5f, 0.8f);    // 2
	glVertex2f(-.55f, 0.7f);    // x, y


	glVertex2f(-.3f, 0.8f);    // 3
	glVertex2f(-.35f, 0.7f);    // x, y


	glVertex2f(-.1f, 0.8f);    // 4
	glVertex2f(-.15f, 0.7f);    // x, y


	glVertex2f(.1f, 0.8f);    // 5
	glVertex2f(.05f, 0.7f);    // x, y


	glVertex2f(.3f, 0.8f);    // 6
	glVertex2f(.25f, 0.7f);    // x, y


	glVertex2f(.5f, 0.8f);    // 7
	glVertex2f(.45f, 0.7f);    // x, y


	glVertex2f(.5f, 0.8f);    // 8
	glVertex2f(.45f, 0.7f);    // x, y


	glVertex2f(.7f, 0.8f);    // 9
	glVertex2f(.65f, 0.7f);    // x, y


	glVertex2f(.9, 0.8f);    // 10
	glVertex2f(.85f, 0.7f);    // x, y

	glVertex2f(1, 0.8f);    // 10(xtra....)
	glVertex2f(.95f, 0.7f);    // x, y


	glVertex2f(-.8f, 0.6f);    // 11
	glVertex2f(-.85f, 0.5f);    // x, y


	glVertex2f(-.6f, 0.6f);    // 12
	glVertex2f(-.65f, 0.5f);    // x, y


	glVertex2f(-.4f, 0.6f);    // 13
	glVertex2f(-.45f, 0.5f);    // x, y

	glVertex2f(-.2f, 0.6f);    // 14
	glVertex2f(-.25f, 0.5f);    // x, y


	glVertex2f(.0f, 0.6f);    // 15
	glVertex2f(-.05f, 0.5f);    // x, y


	glVertex2f(.2f, 0.6f);    // 16
	glVertex2f(.15f, 0.5f);    // x, y


	glVertex2f(.4f, 0.6f);    // 17
	glVertex2f(.35f, 0.5f);    // x, y


	glVertex2f(.6f, 0.6f);    // 18
	glVertex2f(.55f, 0.5f);    // x, y

	glVertex2f(.8f, 0.6f);    // 19
	glVertex2f(.75f, 0.5f);    // x, y


	glVertex2f(.95f, 0.6f);    // 20
	glVertex2f(.9f, 0.5f);    // x, y


	glVertex2f(-.9f, 0.4f);    // 21(xtra..)
	glVertex2f(-.95f, 0.3f);    // x, y


	glVertex2f(-.7f, 0.4f);    // 21
	glVertex2f(-.75f, 0.3f);    // x, y


	glVertex2f(-.5f, 0.4f);    // 22
    glVertex2f(-.55f, 0.3f);    // x, y


	glVertex2f(-.3f, 0.4f);    // 23
    glVertex2f(-.35f, 0.3f);    // x, y


	glVertex2f(-.1f, 0.4f);    // 24
    glVertex2f(-.15f, 0.3f);    // x, y


	glVertex2f(.1f, 0.4f);    // 25
    glVertex2f(.05f, 0.3f);    // x, y


	glVertex2f(.3f, 0.4f);    // 26
    glVertex2f(.25f, 0.3f);    // x, y




	glVertex2f(.5f, 0.4f);    // 27
    glVertex2f(.45f, 0.3f);    // x, y


	glVertex2f(.7f, 0.4f);    // 28
    glVertex2f(.65f, 0.3f);    // x, y


	glVertex2f(.9f, 0.4f);    // 29
    glVertex2f(.85f, 0.3f);    // x, y


	glVertex2f(1, 0.4f);    // 30(extra...)
    glVertex2f(.95f, 0.3f);    // x, y


	glVertex2f(-.8f, 0.2f);    // 31
    glVertex2f(-.85f, 0.1f);    // x, y


	glVertex2f(-.6f, 0.2f);    // 32
    glVertex2f(-.65f, 0.1f);    // x, y

	glVertex2f(-.4f, 0.2f);    // 33
    glVertex2f(-.45f, 0.1f);    // x, y

	glVertex2f(-.2f, 0.2f);    // 34
    glVertex2f(-.25f, 0.1f);    // x, y


	glVertex2f(.0f, 0.2f);    // 35
    glVertex2f(-.05f, 0.1f);    // x, y


	glVertex2f(.2f, 0.2f);    // 36
    glVertex2f(.15f, 0.1f);    // x, y


	glVertex2f(.4f, 0.2f);    // 37
    glVertex2f(.35f, 0.1f);    // x, y


	glVertex2f(.6f, 0.2f);    // 38
    glVertex2f(.55f, 0.1f);    // x, y


	glVertex2f(.8f, 0.2f);    // 39
    glVertex2f(.75f, 0.1f);    // x, y


	glVertex2f(.95f, 0.2f);    // 40
    glVertex2f(.90f, 0.1f);    // x, y


	glVertex2f(-.9f, 0.0f);    // 41(extra...)
    glVertex2f(-.95f, -0.1f);    // x, y


	glVertex2f(-.7f, 0.0f);    // 41
    glVertex2f(-.75f, -0.1f);    // x, y


	glVertex2f(-.5f, 0.0f);    // 42
    glVertex2f(-.55f,-0.1f);    // x, y


	glVertex2f(-.3f, 0.0f);    // 43
    glVertex2f(-.35f,-0.1f);    // x, y


	glVertex2f(-.1f, 0.0f);    // 44
    glVertex2f(-.15f,-0.1f);    // x, y


	glVertex2f(.1f, 0.0f);    // 45
    glVertex2f(.05f,-0.1f);    // x, y

	glVertex2f(.3f, 0.0f);    // 46
    glVertex2f(.25f,-0.1f);    // x, y


	glVertex2f(.5f, 0.0f);    // 47
    glVertex2f(.45f,-0.1f);    // x, y


	glVertex2f(.7f, 0.0f);    // 48
    glVertex2f(.65f,-0.1f);    // x, y

	glVertex2f(.9f, 0.0f);    // 49
    glVertex2f(.85f,-0.1f);    // x, y


	glVertex2f(1, 0.0f);    // 50
    glVertex2f(.95f,-0.1f);    // x, y


	glVertex2f(-.8f, -0.2f);    // 51
    glVertex2f(-.85f,-0.3f);    // x, y


	glVertex2f(-.6f, -0.2f);    // 52
    glVertex2f(-.65f,-0.3f);    // x, y


	glVertex2f(-.4f, -0.2f);    // 53
    glVertex2f(-.45f,-0.3f);    // x, y


	glVertex2f(-.2f, -0.2f);    // 54
    glVertex2f(-.25f,-0.3f);    // x, y



	glVertex2f(.0f, -0.2f);    // 55
    glVertex2f(-.05f,-0.3f);    // x, y


	glVertex2f(0.2f, -0.2f);    // 56
    glVertex2f(.15f,-0.3f);    // x, y


	glVertex2f(0.4f, -0.2f);    // 57
    glVertex2f(.35f,-0.3f);    // x, y

	glVertex2f(0.6f, -0.2f);    // 58
    glVertex2f(.55f,-0.3f);    // x, y


	glVertex2f(0.8f, -0.2f);    // 59
    glVertex2f(.75f,-0.3f);    // x, y


	glVertex2f(0.95f, -0.2f);    // 60
    glVertex2f(.90f,-0.3f);    // x, y

	glVertex2f(-0.9f, -0.5f);    // 61
    glVertex2f(-.95f,-0.6f);    // x, y


	glVertex2f(-0.7f, -0.5f);    // 62
    glVertex2f(-.75f,-0.6f);    // x, y


	glVertex2f(-0.5f, -0.5f);    // 63
    glVertex2f(-.55f,-0.6f);    // x, y


	glVertex2f(-0.3f, -0.5f);    // 64
    glVertex2f(-.35f,-0.6f);    // x, y


	glVertex2f(-0.1f, -0.5f);    // 65
    glVertex2f(-.15f,-0.6f);    // x, y


	glVertex2f(0.1f, -0.5f);    // 66
    glVertex2f(.05f,-0.6f);    // x, y



	glVertex2f(0.3f, -0.5f);    // 67
    glVertex2f(.25f,-0.6f);    // x, y


	glVertex2f(0.5f, -0.5f);    // 68
    glVertex2f(.45f,-0.6f);    // x, y



	glVertex2f(0.7f, -0.5f);    // 69
    glVertex2f(.65f,-0.6f);    // x, y


	glVertex2f(0.9f, -0.5f);    // 70
    glVertex2f(.85f,-0.6f);    // x, y

	glEnd();



glLoadIdentity();

glPopMatrix();*/



    //@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // RAIL LINE
    glBegin(GL_QUADS);          //SURU
    glColor3ub(0,0,0);
    glVertex2f(-1,-.9);
    glVertex2f(-1,-.93);
    glVertex2f(1,-.93);
    glVertex2f(1,-.9);

    glVertex2f(-1,-.8);
    glVertex2f(-1,-.83);
    glVertex2f(1,-.83);
    glVertex2f(1,-.8);

    glVertex2f(-.95,-.83);
    glVertex2f(-.95,-.9);
    glVertex2f(-.9,-.9);
    glVertex2f(-.9,-.83);

    glVertex2f(-.75,-.83);
    glVertex2f(-.75,-.9);
    glVertex2f(-.7,-.9);
    glVertex2f(-.7,-.83);

    glVertex2f(-.55,-.83);
    glVertex2f(-.55,-.9);
    glVertex2f(-.5,-.9);
    glVertex2f(-.5,-.83);

    glVertex2f(-.35,-.83);
    glVertex2f(-.35,-.9);
    glVertex2f(-.3,-.9);
    glVertex2f(-.3,-.83);

    glVertex2f(-.15,-.83);
    glVertex2f(-.15,-.9);
    glVertex2f(-.1,-.9);
    glVertex2f(-.1,-.83);

    glVertex2f(.15,-.83);
    glVertex2f(.15,-.9);
    glVertex2f(.1,-.9);
    glVertex2f(.1,-.83);

     glVertex2f(.35,-.83);
    glVertex2f(.35,-.9);
    glVertex2f(.3,-.9);
    glVertex2f(.3,-.83);


    glVertex2f(.55,-.83);
    glVertex2f(.55,-.9);
    glVertex2f(.5,-.9);
    glVertex2f(.5,-.83);

    glVertex2f(.75,-.83);
    glVertex2f(.75,-.9);
    glVertex2f(.7,-.9);
    glVertex2f(.7,-.83);

    glVertex2f(.95,-.83);
    glVertex2f(.95,-.9);
    glVertex2f(.9,-.9);
    glVertex2f(.9,-.83);            //SESH


    // SECOND LINE
    glVertex2f(-1,-.6);             //SURU
    glVertex2f(-1,-.63);
    glVertex2f(1,-.63);
    glVertex2f(1,-.6);

    glVertex2f(-1,-.5);
    glVertex2f(-1,-.53);
    glVertex2f(1,-.53);
    glVertex2f(1,-.5);

    glVertex2f(-.95,-.53);
    glVertex2f(-.95,-.6);
    glVertex2f(-.9,-.6);
    glVertex2f(-.9,-.53);

    glVertex2f(-.75,-.53);
    glVertex2f(-.75,-.6);
    glVertex2f(-.7,-.6);
    glVertex2f(-.7,-.53);

    glVertex2f(-.55,-.53);
    glVertex2f(-.55,-.6);
    glVertex2f(-.5,-.6);
    glVertex2f(-.5,-.53);

    glVertex2f(-.35,-.53);
    glVertex2f(-.35,-.6);
    glVertex2f(-.3,-.6);
    glVertex2f(-.3,-.53);

    glVertex2f(-.15,-.53);
    glVertex2f(-.15,-.6);
    glVertex2f(-.1,-.6);
    glVertex2f(-.1,-.53);

    glVertex2f(.15,-.53);
    glVertex2f(.15,-.6);
    glVertex2f(.1,-.6);
    glVertex2f(.1,-.53);

     glVertex2f(.35,-.53);
    glVertex2f(.35,-.6);
    glVertex2f(.3,-.6);
    glVertex2f(.3,-.53);


    glVertex2f(.55,-.53);
    glVertex2f(.55,-.6);
    glVertex2f(.5,-.6);
    glVertex2f(.5,-.53);

    glVertex2f(.75,-.53);
    glVertex2f(.75,-.6);
    glVertex2f(.7,-.6);
    glVertex2f(.7,-.53);

    glVertex2f(.95,-.53);
    glVertex2f(.95,-.6);
    glVertex2f(.9,-.6);
    glVertex2f(.9,-.53);
    glEnd();


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

    //TRAIN NO 1
    //BOGI #1
    glLoadIdentity();           //SURU
    glPushMatrix();
    glTranslatef(position,0.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(0,53,102);

    //BOGI #1

    glVertex2f(-.6,-.67);
    glVertex2f(-.6,-.9);
    glVertex2f(-.4,-.9);
    glVertex2f(-.4,-.67);
// BOGI #2


    glColor3ub(0, 53, 102);
    glVertex2f(-.38,-.68);
    glVertex2f(-.38,-.9);
    glVertex2f(0,-.9);
    glVertex2f(0,-.68);

    //BOGI #3
    glVertex2f(.02,-.68);
    glVertex2f(.02,-.9);
    glVertex2f(.4,-.9);
    glVertex2f(.4,-.68);

    // BOGI #4
    glVertex2f(.42,-.68);
    glVertex2f(.42,-.9);
    glVertex2f(.8,-.9);
    glVertex2f(.8,-.68);                 //SESH
    glEnd();

    /*//SMOKE

    glTranslatef(0.0f,position3,0.0f);

    GLfloat xdh1=-.7f; GLfloat ydh1=-.9f; GLfloat radiusd1 =.025f;
	int triangleAmountd1 = 20;
	//GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
    glVertex2f(xdh1, ydh1);
    int idh1;
    for(idh1 = 0; idh1 <= triangleAmountd1;idh1++)
        {
        glVertex2f(xdh1 + (radiusd1 * cos(idh1 *  twicePi / triangleAmountd1)),
                   ydh1 + (radiusd1 * sin(idh1 * twicePi / triangleAmountd1)));
		}
	glEnd();*/

	glLoadIdentity();

	glTranslatef(position,0.0f,0.0f);
    glBegin(GL_QUADS);
    //FRONT
    glColor3ub(0, 38, 77);
    glVertex2f(-.75,-.73);
    glVertex2f(-.6,-.73);
    glVertex2f(-.6,-.9);
    glVertex2f(-.75,-.9);

    glColor3ub(38,38,38);
    glVertex2f(-.72,-.75);
    glVertex2f(-.68,-.75);
    glVertex2f(-.68,-.7);
    glVertex2f(-.72,-.7);

    glColor3ub(38,38,38);
    glVertex2f(-.67,-.7);
    glVertex2f(-.67,-.66);
    glVertex2f(-.73,-.66);
    glVertex2f(-.73,-.7);

    glColor3ub(26,26,26);
    glVertex2f(-.65,-.75);
    glVertex2f(-.62,-.75);
    glVertex2f(-.62,-.72);
    glVertex2f(-.65,-.72);


//HEADLIGHT

    glColor3ub(255,255,0);
    glVertex2f(-.75,-.85);
    glVertex2f(-.77,-.85);
    glVertex2f(-.77,-.87);
    glVertex2f(-.75,-.87);


//TRAIN 1 ER BOGI CONNECTOR
    //BOGI 1-2
    glColor3ub(0,0,0);
    glVertex2f(-.4,-.87);
    glVertex2f(-.4,-.89);
    glVertex2f(-.38,-.89);
    glVertex2f(-.38,-.87);

    //BOGI 2-3
    glVertex2f(0,-.87);
    glVertex2f(0,-.89);
    glVertex2f(.02,-.89);
    glVertex2f(.02,-.87);

    //BOGI 3-4
    glVertex2f(.4,-.87);
    glVertex2f(.4,-.89);
    glVertex2f(.42,-.89);
    glVertex2f(.42,-.87);


    //TRAIN ER MAJHKHAN
    glColor3ub(255, 255, 128);            //SURU
    glVertex2f(-.6,-.75);
    glVertex2f(-.6,-.82);
    glVertex2f(-.4,-.82);
    glVertex2f(-.4,-.75);

    glColor3ub(255, 255, 128);
    glVertex2f(-.38,-.74);
    glVertex2f(-.38,-.81);
    glVertex2f(0,-.81);
    glVertex2f(0,-.74);

    glColor3ub(255, 255, 128);
    glVertex2f(.02,-.74);
    glVertex2f(.02,-.81);
    glVertex2f(.4,-.81);
    glVertex2f(.4,-.74);

    glColor3ub(255, 255, 128);
    glVertex2f(.42,-.74);
    glVertex2f(.42,-.81);
    glVertex2f(.8,-.81);
    glVertex2f(.8,-.74);                 //SESH

    //TRAIN 1 ER WINDOW

    //BOGI 1

    glColor3ub(217, 217, 217);
    glVertex2f(-.55,-.8);
    glVertex2f(-.42,-.8);
    glVertex2f(-.42,-.69);
    glVertex2f(-.55,-.69);

    glVertex2f(-.59,-.85);
    glVertex2f(-.56,-.85);
    glVertex2f(-.56,-.7);
    glVertex2f(-.59,-.7);              //SESH

    //BOGI 2
    //WINDOW
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(-.33,-.8);
    glVertex2f(-.27,-.8);
    glVertex2f(-.27,-.75);
    glVertex2f(-.33,-.75);

   // glColor3ub(255,255,255);
    glVertex2f(-.2,-.8);
    glVertex2f(-.26,-.8);
    glVertex2f(-.26,-.75);
    glVertex2f(-.2,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(-.13,-.8);
    glVertex2f(-.19,-.8);
    glVertex2f(-.19,-.75);
    glVertex2f(-.13,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(-.12,-.8);
    glVertex2f(-.06,-.8);
    glVertex2f(-.06,-.75);
    glVertex2f(-.12,-.75);                  //SESH


    // BOGI 3
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.07,-.8);
    glVertex2f(.13,-.8);
    glVertex2f(.13,-.75);
    glVertex2f(.07,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.14,-.8);
    glVertex2f(.2,-.8);
    glVertex2f(.2,-.75);
    glVertex2f(.14,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.21,-.8);
    glVertex2f(.27,-.8);
    glVertex2f(.27,-.75);
    glVertex2f(.21,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.28,-.8);
    glVertex2f(.34,-.8);
    glVertex2f(.34,-.75);
    glVertex2f(.28,-.75);                  //SESH

    // BOGI 4
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.47,-.8);
    glVertex2f(.53,-.8);
    glVertex2f(.53,-.75);
    glVertex2f(.47,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.54,-.8);
    glVertex2f(.6,-.8);
    glVertex2f(.6,-.75);
    glVertex2f(.54,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.61,-.8);
    glVertex2f(.67,-.8);
    glVertex2f(.67,-.75);
    glVertex2f(.61,-.75);

   // glColor3ub(255,255,255);
    glVertex2f(.68,-.8);
    glVertex2f(.74,-.8);
    glVertex2f(.74,-.75);
    glVertex2f(.68,-.75);                  //SESH


    //DOOR BOGI 2

    //glColor3ub(255,255,255);            //SURU
    glVertex2f(-.37,-.86);
    glVertex2f(-.34,-.86);
    glVertex2f(-.34,-.72);
    glVertex2f(-.37,-.72);

    //glColor3ub(255,255,255);
    glVertex2f(-.04,-.86);
    glVertex2f(-.01,-.86);
    glVertex2f(-.01,-.72);
    glVertex2f(-.04,-.72);              //SESH


     //DOOR BOGI 3

    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.06,-.86);
    glVertex2f(.03,-.86);
    glVertex2f(.03,-.72);
    glVertex2f(.06,-.72);

   // glColor3ub(255,255,255);
    glVertex2f(.39,-.86);
    glVertex2f(.36,-.86);
    glVertex2f(.36,-.72);
    glVertex2f(.39,-.72);              //SESH

     //DOOR BOGI 4

    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.46,-.86);
    glVertex2f(.43,-.86);
    glVertex2f(.43,-.72);
    glVertex2f(.46,-.72);

    //glColor3ub(255,255,255);
    glVertex2f(.79,-.86);
    glVertex2f(.76,-.86);
    glVertex2f(.76,-.72);
    glVertex2f(.79,-.72);              //SESH

    glEnd();


    //TRAIN 1 ER WINDOW ER PARTITION
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glLineWidth(3);
    // BOGI W1

    glVertex2f(-.51,-.8);
    glVertex2f(-.51,-.69);

    glVertex2f(-.46,-.8);
    glVertex2f(-.46,-.69);

    glVertex2f(-.75,-.8);
    glVertex2f(-.6,-.8);

    glVertex2f(-.75,-.85);
    glVertex2f(-.6,-.85);

    glVertex2f(-.59,-.84);
    glVertex2f(-.56,-.84);

    //BOGI W2
    glVertex2f(-.3,-.8);
    glVertex2f(-.3,-.75);

    glVertex2f(-.23,-.8);
    glVertex2f(-.23,-.75);

    glVertex2f(-.16,-.8);
    glVertex2f(-.16,-.75);

    glVertex2f(-.09,-.8);
    glVertex2f(-.09,-.75);

    glVertex2f(-.38,-.7);
    glVertex2f(0,-.7);

    glVertex2f(-.37,-.85);
    glVertex2f(-.34,-.85);

    glVertex2f(-.04,-.85);
    glVertex2f(-.01,-.85);

    // BOGI W3
    glVertex2f(.1,-.8);
    glVertex2f(.1,-.75);

    glVertex2f(.17,-.8);
    glVertex2f(.17,-.75);

    glVertex2f(.24,-.8);
    glVertex2f(.24,-.75);

    glVertex2f(.31,-.8);
    glVertex2f(.31,-.75);

    glVertex2f(.02,-.7);
    glVertex2f(.4,-.7);

    glVertex2f(.06,-.85);
    glVertex2f(.03,-.85);

    glVertex2f(.39,-.85);
    glVertex2f(.36,-.85);

    //BOGI W4
    glVertex2f(.5,-.8);
    glVertex2f(.5,-.75);

    glVertex2f(.57,-.8);
    glVertex2f(.57,-.75);

    glVertex2f(.64,-.8);
    glVertex2f(.64,-.75);

    glVertex2f(.71,-.8);
    glVertex2f(.71,-.75);

    glVertex2f(.42,-.7);
    glVertex2f(.8,-.7);

    glVertex2f(.46,-.85);
    glVertex2f(.43,-.85);

    glVertex2f(.79,-.85);
    glVertex2f(.76,-.85);

    glEnd();


    //TRAIN ER WHEEL

    //WHEEL 1


    GLfloat x1=-.72f; GLfloat y1=-.9f; GLfloat radius1 =.025f;
	int triangleAmount1 = 20;
	//GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x1, y1);
    int i1;
    for(i1 = 0; i1 <= triangleAmount1;i1++)
        {
        glVertex2f(x1 + (radius1 * cos(i1 *  twicePi / triangleAmount1)),
                   y1 + (radius1 * sin(i1 * twicePi / triangleAmount1)));
		}
	glEnd();

	//WHEEL 2
    GLfloat x2=-.65f; GLfloat y2=-.9f; GLfloat radius2 =.025f;
	int triangleAmount2 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x2, y2);
    int i2;
    for(i2 = 0; i2 <= triangleAmount2;i2++)
        {
        glVertex2f(x2 + (radius2 * cos(i2 *  twicePi / triangleAmount2)),
                   y2 + (radius2 * sin(i2 * twicePi / triangleAmount2)));
		}
	glEnd();

	//WHEEL 3
    GLfloat x3=-.55f; GLfloat y3=-.9f; GLfloat radius3 =.02f;
	int triangleAmount3 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x3, y3);
    int i3;
    for(i3 = 0; i3 <= triangleAmount3;i3++)
        {
        glVertex2f(x3 + (radius3 * cos(i3 *  twicePi / triangleAmount3)),
                   y3 + (radius3 * sin(i3 * twicePi / triangleAmount3)));
		}
	glEnd();

	//WHEEL 4
    GLfloat x4=-.45f; GLfloat y4=-.9f; GLfloat radius4 =.02f;
	int triangleAmount4 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x4, y4);
    int i4;
    for(i4 = 0; i4 <= triangleAmount4;i4++)
        {
        glVertex2f(x4 + (radius4 * cos(i4 *  twicePi / triangleAmount4)),
                   y4 + (radius4 * sin(i4 * twicePi / triangleAmount4)));
		}
	glEnd();

	//WHEEL 5
    GLfloat x5=-.35f; GLfloat y5=-.9f; GLfloat radius5 =.02f;
	int triangleAmount5 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x5, y5);
    int i5;
    for(i5 = 0; i5 <= triangleAmount5;i5++)
        {
        glVertex2f(x5 + (radius5 * cos(i5 *  twicePi / triangleAmount5)),
                   y5 + (radius5 * sin(i5 * twicePi / triangleAmount5)));
		}
	glEnd();

	//WHEEL 6
    GLfloat x6=-.25f; GLfloat y6=-.9f; GLfloat radius6 =.02f;
	int triangleAmount6 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x6, y6);
    int i6;
    for(i6= 0; i6 <= triangleAmount6;i6++)
        {
        glVertex2f(x6 + (radius6 * cos(i6 *  twicePi / triangleAmount6)),
                   y6 + (radius6 * sin(i6 * twicePi / triangleAmount6)));
		}
	glEnd();

	//WHEEL 7
    GLfloat x7=-.15f; GLfloat y7=-.9f; GLfloat radius7 =.02f;
	int triangleAmount7 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x7, y7);
    int i7;
    for(i7 = 0; i7 <= triangleAmount7;i7++)
        {
        glVertex2f(x7 + (radius7 * cos(i7 *  twicePi / triangleAmount7)),
                   y7 + (radius7 * sin(i7 * twicePi / triangleAmount7)));
		}
	glEnd();

	//WHEEL 8
    GLfloat x8=-.05f; GLfloat y8=-.9f; GLfloat radius8 =.02f;
	int triangleAmount8 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x8, y8);
    int i8;
    for(i8 = 0; i8 <= triangleAmount8;i8++)
        {
        glVertex2f(x8 + (radius8 * cos(i8 *  twicePi / triangleAmount8)),
                   y8 + (radius7 * sin(i8 * twicePi / triangleAmount8)));
		}
	glEnd();

	//WHEEL 9
    GLfloat x9=.05f; GLfloat y9=-.9f; GLfloat radius9 =.02f;
	int triangleAmount9 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x9, y9);
    int i9;
    for(i9 = 0; i9 <= triangleAmount9;i9++)
        {
        glVertex2f(x9 + (radius9 * cos(i9 *  twicePi / triangleAmount9)),
                   y9 + (radius9 * sin(i9 * twicePi / triangleAmount9)));
		}
	glEnd();

	//WHEEL 10
    GLfloat x10=.15f; GLfloat y10=-.9f; GLfloat radius10 =.02f;
	int triangleAmount10 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x10, y10);
    int i10;
    for(i10= 0; i10 <= triangleAmount10;i10++)
        {
        glVertex2f(x10 + (radius10 * cos(i10 *  twicePi / triangleAmount10)),
                   y10 + (radius10 * sin(i10 * twicePi / triangleAmount10)));
		}
	glEnd();

	//WHEEL 11
    GLfloat x11=.25f; GLfloat y11=-.9f; GLfloat radius11 =.02f;
	int triangleAmount11 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x11, y11);
    int i11;
    for(i11 = 0; i11 <= triangleAmount11;i11++)
        {
        glVertex2f(x11 + (radius11 * cos(i11 *  twicePi / triangleAmount11)),
                   y11 + (radius11 * sin(i11* twicePi / triangleAmount11)));
		}
	glEnd();

	//WHEEL 12
    GLfloat x12=.35f; GLfloat y12=-.9f; GLfloat radius12 =.02f;
	int triangleAmount12 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x12, y12);
    int i12;
    for(i12 = 0; i12 <= triangleAmount12;i12++)
        {
        glVertex2f(x12 + (radius12 * cos(i12 *  twicePi / triangleAmount12)),
                   y12 + (radius12* sin(i12 * twicePi / triangleAmount12)));
		}
	glEnd();

	//WHEEL 13
    GLfloat x13=.45f; GLfloat y13=-.9f; GLfloat radius13 =.02f;
	int triangleAmount13 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x13, y13);
    int i13;
    for(i13 = 0; i13 <= triangleAmount13;i13++)
        {
        glVertex2f(x13 + (radius13 * cos(i13 *  twicePi / triangleAmount13)),
                   y13 + (radius13* sin(i13 * twicePi / triangleAmount13)));
		}
	glEnd();

	//WHEEL 14
    GLfloat x14=.55f; GLfloat y14=-.9f; GLfloat radius14 =.02f;
	int triangleAmount14 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x14, y14);
    int i14;
    for(i14 = 0; i14 <= triangleAmount14;i14++)
        {
        glVertex2f(x14 + (radius14 * cos(i14 *  twicePi / triangleAmount14)),
                   y14 + (radius14* sin(i14 * twicePi / triangleAmount14)));
		}
	glEnd();

	//WHEEL 15
    GLfloat x15=.65f; GLfloat y15=-.9f; GLfloat radius15 =.02f;
	int triangleAmount15 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x15, y15);
    int i15;
    for(i15 = 0; i15 <= triangleAmount15;i15++)
        {
        glVertex2f(x15 + (radius15 * cos(i15 *  twicePi / triangleAmount15)),
                   y15 + (radius15* sin(i15 * twicePi / triangleAmount15)));
		}
	glEnd();

	//WHEEL 16
    GLfloat x16=.75f; GLfloat y16=-.9f; GLfloat radius16=.02f;
	int triangleAmount16 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x16, y16);
    int i16;
    for(i16 = 0; i16 <= triangleAmount16;i16++)
        {
        glVertex2f(x16 + (radius16 * cos(i16* twicePi / triangleAmount16)),
                   y16 + (radius16* sin(i16 * twicePi / triangleAmount16)));
		}
	glEnd();

    glPopMatrix();



//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

    // TRAIN NO 2
    glLoadIdentity();                           //SURU
    glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);

    //BOGI 1
    glBegin(GL_QUADS);
    glColor3ub(0, 53, 102);
    glVertex2f(.6,-.37);
    glVertex2f(.6,-.6);
    glVertex2f(.4,-.6);
    glVertex2f(.4,-.37);

    //BOGI 2
    glVertex2f(.38,-.38);
    glVertex2f(.38,-.6);
    glVertex2f(0,-.6);
    glVertex2f(0,-.38);

    //BOGI 3
    glVertex2f(-.02,-.38);
    glVertex2f(-.02,-.6);
    glVertex2f(-.4,-.6);
    glVertex2f(-.4,-.38);

    //BOGI 4
    glVertex2f(-.42,-.38);
    glVertex2f(-.42,-.6);
    glVertex2f(-.8,-.6);
    glVertex2f(-.8,-.38);

    glEnd();



    //SMOKE




    //glPushMatrix();
	glTranslatef(0.0f,position3,0.0f);
    //1
    GLfloat s1=.7f; GLfloat d1=-.38f; GLfloat radiusdh1 =.03f;
	int triangleAmountdh1 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s1, d1);
    int dh1;
    for(dh1 = 0; dh1 <= triangleAmountdh1;dh1++)
        {
        glVertex2f(s1 + (radiusdh1 * cos(dh1 *  twicePi / triangleAmountdh1)),
                   d1 + (radiusdh1 * sin(dh1 * twicePi / triangleAmountdh1)));
		}
	glEnd();


	//2
	 GLfloat s2=.7f; GLfloat d2=-.45f; GLfloat radiusdh2 =.03f;
	int triangleAmountdh2 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s2, d2);
    int dh2;
    for(dh2 = 0; dh2 <= triangleAmountdh2;dh2++)
        {
        glVertex2f(s2 + (radiusdh2 * cos(dh2 *  twicePi / triangleAmountdh2)),
                   d2 + (radiusdh2 * sin(dh2 * twicePi / triangleAmountdh2)));
		}
	glEnd();


	//3
	 GLfloat s3=.7f; GLfloat d3=-.52f; GLfloat radiusdh3 =.03f;
	int triangleAmountdh3 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s3, d3);
    int dh3;
    for(dh3 = 0; dh3 <= triangleAmountdh3;dh3++)
        {
        glVertex2f(s3 + (radiusdh3 * cos(dh3 *  twicePi / triangleAmountdh3)),
                   d3 + (radiusdh3 * sin(dh3 * twicePi / triangleAmountdh3)));
		}
	glEnd();

	//glPopMatrix();
	glLoadIdentity();



	glTranslatef(position2,0.0f,0.0f);
    //FRONT
    glBegin(GL_QUADS);
    glColor3ub(0, 38, 77);
    glVertex2f(.6,-.43);
    glVertex2f(.75,-.43);
    glVertex2f(.75,-.6);
    glVertex2f(.6,-.6);


    glColor3ub(38,38,38);
    glVertex2f(.73,-.45);
    glVertex2f(.67,-.45);
    glVertex2f(.67,-.38);
    glVertex2f(.73,-.38);

    glColor3ub(26,26,26);
    glVertex2f(.73,-.38);
    glVertex2f(.67,-.38);
    glVertex2f(.67,-.35);
    glVertex2f(.73,-.35);

    glColor3ub(26,26,26);
    glVertex2f(.65,-.45);
    glVertex2f(.62,-.45);
    glVertex2f(.62,-.42);
    glVertex2f(.65,-.42);              //SESH

    //HEADLIGHT
    glColor3ub(255,255,0);
    glVertex2f(.75,-.55);
    glVertex2f(.77,-.55);
    glVertex2f(.77,-.57);
    glVertex2f(.75,-.57);

    //TRAIN 2 ER BOGI CONNECTOR
    //BOGI 1-2
    glColor3ub(0,0,0);
    glVertex2f(.4,-.57);
    glVertex2f(.4,-.59);
    glVertex2f(.38,-.59);
    glVertex2f(.38,-.57);

    //BOGI 2-3
    glVertex2f(0,-.57);
    glVertex2f(0,-.59);
    glVertex2f(-.02,-.59);
    glVertex2f(-.02,-.57);

    //BOGI 3-4
    glVertex2f(-.4,-.57);
    glVertex2f(-.4,-.59);
    glVertex2f(-.42,-.59);
    glVertex2f(-.42,-.57);


    //TRAIN ER MAJHKHAN
    glColor3ub(255, 255, 128);            //SURU
    glVertex2f(-.8,-.51);
    glVertex2f(-.8,-.44);
    glVertex2f(-.42,-.44);
    glVertex2f(-.42,-.51);

   // glColor3ub(77,77,77);
    glVertex2f(-.4,-.51);
    glVertex2f(-.4,-.44);
    glVertex2f(-.02,-.44);
    glVertex2f(-.02,-.51);

    //glColor3ub(77,77,77);
    glVertex2f(.38,-.51);
    glVertex2f(.38,-.44);
    glVertex2f(0,-.44);
    glVertex2f(0,-.51);

    //glColor3ub(77,77,77);
    glVertex2f(.6,-.51);
    glVertex2f(.6,-.44);
    glVertex2f(.4,-.44);
    glVertex2f(.4,-.51);                 //SESH

    // TRAIN 2 ER WINDOW

    //BOGI 1


    glColor3ub(217, 217, 217);
    glVertex2f(.55,-.5);
    glVertex2f(.42,-.5);
    glVertex2f(.42,-.39);
    glVertex2f(.55,-.39);

    //DOOR
    glColor3ub(217, 217, 217);
    glVertex2f(.59,-.56);
    glVertex2f(.56,-.56);
    glVertex2f(.56,-.42);
    glVertex2f(.59,-.42);                           //SESH


    //BOGI 2
    glColor3ub(217, 217, 217);            //SURU
    glVertex2f(.33,-.5);
    glVertex2f(.27,-.5);
    glVertex2f(.27,-.45);
    glVertex2f(.33,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(.26,-.5);
    glVertex2f(.2,-.5);
    glVertex2f(.2,-.45);
    glVertex2f(.26,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(.19,-.5);
    glVertex2f(.13,-.5);
    glVertex2f(.13,-.45);
    glVertex2f(.19,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(.12,-.5);
    glVertex2f(.06,-.5);
    glVertex2f(.06,-.45);
    glVertex2f(.12,-.45);                  //SESH


    //DOOR

    glColor3ub(217, 217, 217);              //SURU
    glVertex2f(.37,-.56);
    glVertex2f(.34,-.56);
    glVertex2f(.34,-.42);
    glVertex2f(.37,-.42);

    glColor3ub(217, 217, 217);
    glVertex2f(.01,-.56);
    glVertex2f(.04,-.56);
    glVertex2f(.04,-.42);
    glVertex2f(.01,-.42);                       //SHESH

    // BOGI 3
    glColor3ub(217, 217, 217);            //SURU
    glVertex2f(-.07,-.5);
    glVertex2f(-.13,-.5);
    glVertex2f(-.13,-.45);
    glVertex2f(-.07,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.14,-.5);
    glVertex2f(-.2,-.5);
    glVertex2f(-.2,-.45);
    glVertex2f(-.14,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.21,-.5);
    glVertex2f(-.27,-.5);
    glVertex2f(-.27,-.45);
    glVertex2f(-.21,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.28,-.5);
    glVertex2f(-.34,-.5);
    glVertex2f(-.34,-.45);
    glVertex2f(-.28,-.45);                  //SESH


    //DOOR

    glColor3ub(217, 217, 217);              //SURU
    glVertex2f(-.03,-.56);
    glVertex2f(-.06,-.56);
    glVertex2f(-.06,-.42);
    glVertex2f(-.03,-.42);

    glColor3ub(217, 217, 217);
    glVertex2f(-.39,-.56);
    glVertex2f(-.36,-.56);
    glVertex2f(-.36,-.42);
    glVertex2f(-.39,-.42);                       //SHESH


    // BOGI 4
    glColor3ub(217, 217, 217);            //SURU
    glVertex2f(-.47,-.5);
    glVertex2f(-.53,-.5);
    glVertex2f(-.53,-.45);
    glVertex2f(-.47,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.54,-.5);
    glVertex2f(-.6,-.5);
    glVertex2f(-.6,-.45);
    glVertex2f(-.54,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.61,-.5);
    glVertex2f(-.67,-.5);
    glVertex2f(-.67,-.45);
    glVertex2f(-.61,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.68,-.5);
    glVertex2f(-.74,-.5);
    glVertex2f(-.74,-.45);
    glVertex2f(-.68,-.45);                      //SESH


    //DOOR

    glColor3ub(217, 217, 217);              //SURU
    glVertex2f(-.43,-.56);
    glVertex2f(-.46,-.56);
    glVertex2f(-.46,-.42);
    glVertex2f(-.43,-.42);

    glColor3ub(217, 217, 217);
    glVertex2f(-.79,-.56);
    glVertex2f(-.76,-.56);
    glVertex2f(-.76,-.42);
    glVertex2f(-.79,-.42);                       //SHESH



    glEnd();

    //TRAIN 2 ER WINDOW ER PARTITION
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glLineWidth(3);
    // BOGI W1

    glVertex2f(.51,-.5);
    glVertex2f(.51,-.39);

    glVertex2f(.46,-.5);
    glVertex2f(.46,-.39);

    glVertex2f(.6,-.5);
    glVertex2f(.75,-.5);

    glVertex2f(.6,-.55);
    glVertex2f(.75,-.55);

    glVertex2f(.59,-.55);
    glVertex2f(.56,-.55);

    //BOGI W2
    glVertex2f(.3,-.5);
    glVertex2f(.3,-.45);

    glVertex2f(.23,-.5);
    glVertex2f(.23,-.45);

    glVertex2f(.16,-.5);
    glVertex2f(.16,-.45);

    glVertex2f(.09,-.5);
    glVertex2f(.09,-.45);


    glVertex2f(.38,-.4);
    glVertex2f(0,-.4);

    glVertex2f(.37,-.55);
    glVertex2f(.34,-.55);

    glVertex2f(.01,-.55);
    glVertex2f(.04,-.55);

    // BOGI W3
    glVertex2f(-.1,-.5);
    glVertex2f(-.1,-.45);

    glVertex2f(-.17,-.5);
    glVertex2f(-.17,-.45);

    glVertex2f(-.24,-.5);
    glVertex2f(-.24,-.45);

    glVertex2f(-.31,-.5);
    glVertex2f(-.31,-.45);

    glVertex2f(-.02,-.4);
    glVertex2f(-.4,-.4);

    glVertex2f(-.03,-.55);
    glVertex2f(-.06,-.55);

    glVertex2f(-.39,-.55);
    glVertex2f(-.36,-.55);

    //BOGI W4
    glVertex2f(-.5,-.5);
    glVertex2f(-.5,-.45);

    glVertex2f(-.57,-.5);
    glVertex2f(-.57,-.45);

    glVertex2f(-.64,-.5);
    glVertex2f(-.64,-.45);

    glVertex2f(-.71,-.5);
    glVertex2f(-.71,-.45);

    glVertex2f(-.42,-.4);
    glVertex2f(-.8,-.4);

    glVertex2f(-.43,-.55);
    glVertex2f(-.46,-.55);

     glVertex2f(-.76,-.55);
    glVertex2f(-.79,-.55);


    glEnd();

    //TRAIN 2 ER WHEEL

    //WHEEL 1


    GLfloat a1=-.75f; GLfloat b1=-.6f; GLfloat radiuss1 =.02f;
	int triangleAmounts1 = 20;
	//GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a1, b1);
    int j1;
    for(j1 = 0; j1 <= triangleAmounts1;j1++)
        {
        glVertex2f(a1 + (radiuss1 * cos(j1 *  twicePi / triangleAmounts1)),
                   b1 + (radiuss1 * sin(j1 * twicePi / triangleAmounts1)));
		}
	glEnd();

	//WHEEL 2
    GLfloat a2=-.65f; GLfloat b2=-.6f; GLfloat radiuss2 =.02f;
	int triangleAmounts2 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a2, b2);
    int j2;
    for(j2 = 0; j2 <= triangleAmounts2;j2++)
        {
        glVertex2f(a2 + (radiuss2 * cos(j2 *  twicePi / triangleAmounts2)),
                   b2 + (radiuss2 * sin(j2 * twicePi / triangleAmounts2)));
		}
	glEnd();

	//WHEEL 3
    GLfloat a3=-.55f; GLfloat b3=-.6f; GLfloat radiuss3 =.02f;
	int triangleAmounts3 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a3, b3);
    int j3;
    for(j3 = 0; j3 <= triangleAmounts3;j3++)
        {
        glVertex2f(a3 + (radiuss3 * cos(j3 *  twicePi / triangleAmounts3)),
                   b3 + (radiuss3 * sin(j3 * twicePi / triangleAmounts3)));
		}
	glEnd();

	//WHEEL 4
    GLfloat a4=-.45f; GLfloat b4=-.6f; GLfloat radiuss4 =.02f;
	int triangleAmounts4 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a4, b4);
    int j4;
    for(j4 = 0; j4 <= triangleAmounts4;j4++)
        {
        glVertex2f(a4 + (radiuss4 * cos(j4 *  twicePi / triangleAmounts4)),
                   b4 + (radiuss4 * sin(j4 * twicePi / triangleAmounts4)));
		}
	glEnd();

	//WHEEL 5
    GLfloat a5=-.35f; GLfloat b5=-.6f; GLfloat radiuss5 =.02f;
	int triangleAmounts5 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a5, b5);
    int j5;
    for(j5 = 0; j5 <= triangleAmounts5;j5++)
        {
        glVertex2f(a5 + (radiuss5 * cos(j5 *  twicePi / triangleAmounts5)),
                   b5 + (radiuss5 * sin(j5 * twicePi / triangleAmounts5)));
		}
	glEnd();

	//WHEEL 6
    GLfloat a6=-.25f; GLfloat b6=-.6f; GLfloat radiuss6 =.02f;
	int triangleAmounts6 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a6, b6);
    int j6;
    for(j6= 0; j6 <= triangleAmounts6;j6++)
        {
        glVertex2f(a6 + (radiuss6 * cos(j6 *  twicePi / triangleAmounts6)),
                   b6 + (radiuss6 * sin(j6 * twicePi / triangleAmounts6)));
		}
	glEnd();

	//WHEEL 7
    GLfloat a7=-.15f; GLfloat b7=-.6f; GLfloat radiuss7 =.02f;
	int triangleAmounts7 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a7, b7);
    int j7;
    for(j7 = 0; j7 <= triangleAmounts7;j7++)
        {
        glVertex2f(a7 + (radiuss7 * cos(j7 *  twicePi / triangleAmounts7)),
                   b7 + (radiuss7 * sin(j7 * twicePi / triangleAmounts7)));
		}
	glEnd();

	//WHEEL 8
    GLfloat a8=-.05f; GLfloat b8=-.6f; GLfloat radiuss8 =.02f;
	int triangleAmounts8 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a8, b8);
    int j8;
    for(j8 = 0; j8 <= triangleAmounts8;j8++)
        {
        glVertex2f(a8 + (radiuss8 * cos(j8 *  twicePi / triangleAmounts8)),
                   b8 + (radiuss7 * sin(j8 * twicePi / triangleAmounts8)));
		}
	glEnd();

	//WHEEL 9
    GLfloat a9=.05f; GLfloat b9=-.6f; GLfloat radiuss9 =.02f;
	int triangleAmounts9 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a9, b9);
    int j9;
    for(j9 = 0; j9 <= triangleAmounts9;j9++)
        {
        glVertex2f(a9 + (radiuss9 * cos(j9 *  twicePi / triangleAmounts9)),
                   b9 + (radiuss9 * sin(j9 * twicePi / triangleAmounts9)));
		}
	glEnd();

	//WHEEL 10
    GLfloat a10=.15f; GLfloat b10=-.6f; GLfloat radiuss10 =.02f;
	int triangleAmounts10 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a10, b10);
    int j10;
    for(j10= 0; j10 <= triangleAmounts10;j10++)
        {
        glVertex2f(a10 + (radiuss10 * cos(j10 *  twicePi / triangleAmounts10)),
                   b10 + (radiuss10 * sin(j10 * twicePi / triangleAmounts10)));
		}
	glEnd();

	//WHEEL 11
    GLfloat a11=.25f; GLfloat b11=-.6f; GLfloat radiuss11 =.02f;
	int triangleAmounts11 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a11, b11);
    int j11;
    for(j11 = 0; j11 <= triangleAmounts11;j11++)
        {
        glVertex2f(a11 + (radiuss11 * cos(j11 *  twicePi / triangleAmounts11)),
                   b11 + (radiuss11 * sin(j11* twicePi / triangleAmounts11)));
		}
	glEnd();

	//WHEEL 12
    GLfloat a12=.35f; GLfloat b12=-.6f; GLfloat radiuss12 =.02f;
	int triangleAmounts12 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a12, b12);
    int j12;
    for(j12 = 0; j12 <= triangleAmounts12;j12++)
        {
        glVertex2f(a12 + (radiuss12 * cos(j12 *  twicePi / triangleAmounts12)),
                   b12 + (radiuss12* sin(j12 * twicePi / triangleAmounts12)));
		}
	glEnd();

	//WHEEL 13
    GLfloat a13=.45f; GLfloat b13=-.6f; GLfloat radiuss13 =.02f;
	int triangleAmounts13 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a13, b13);
    int j13;
    for(j13= 0; j13<= triangleAmounts13;j13++)
        {
        glVertex2f(a13 + (radiuss13 * cos(j13 *  twicePi / triangleAmounts13)),
                   b13 + (radiuss13* sin(j13 * twicePi / triangleAmounts13)));
		}
	glEnd();

	//WHEEL 14
    GLfloat a14=.55f; GLfloat b14=-.6f; GLfloat radiuss14 =.02f;
	int triangleAmounts14 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a14, b14);
    int j14;
    for(j14 = 0; j14 <= triangleAmounts14;j14++)
        {
        glVertex2f(a14 + (radiuss14 * cos(j14 *  twicePi / triangleAmounts14)),
                   b14 + (radiuss14* sin(j14 * twicePi / triangleAmounts14)));
		}
	glEnd();

	//WHEEL 15
    GLfloat a15=.65f; GLfloat b15=-.6f; GLfloat radiuss15 =.025f;
	int triangleAmounts15= 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a15, b15);
    int j15;
    for(j15 = 0; j15 <= triangleAmounts15;j15++)
        {
        glVertex2f(a15 + (radiuss15 * cos(j15*  twicePi / triangleAmounts15)),
                   b15 + (radiuss15* sin(j15 * twicePi / triangleAmounts15)));
		}
	glEnd();

	//WHEEL 16
    GLfloat a16=.72f; GLfloat b16=-.6f; GLfloat radiuss16 =.025f;
	int triangleAmounts16 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a16, b16);
    int j16;
    for(j16 = 0; j16<= triangleAmounts16;j16++)
        {
        glVertex2f(a16+ (radiuss16 * cos(j16 *  twicePi / triangleAmounts16)),
                   b16 + (radiuss16* sin(j16 * twicePi / triangleAmounts16)));
		}
	glEnd();

    glPopMatrix();

    glLoadIdentity();

    glFlush();
    glutTimerFunc(8000,rainy,0);
}

void rainy(int v)
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    //################$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$


     //grass.........

        glBegin(GL_QUADS);
      glColor3ub(45,134,45);
      glVertex2f(-1,.5);
      glVertex2f(-1,-1);
      glVertex2f(1,-1);
      glVertex2f(1,.5);
      glEnd();



      //sky................

          glBegin(GL_QUADS);
      glColor3ub(77, 77, 77);
      glVertex2f(-1,1);
      glVertex2f(-1,.5);
      glVertex2f(1,.5);
      glVertex2f(1,1);
      glEnd();


      //road.........

        glBegin(GL_QUADS);
      glColor3ub( 49, 49, 46  );
      glVertex2f(-1,.5);
      glVertex2f(-1,.25);
      glVertex2f(1,.25);
      glVertex2f(1,.5);
      glEnd();



      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(-.8,.38);
      glVertex2f(-.8,.36);
      glVertex2f(-.6,.36);
      glVertex2f(-.6,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(-.15,.38);
      glVertex2f(-.15,.36);
      glVertex2f(.15,.36);
      glVertex2f(.15,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(.2,.38);
      glVertex2f(.2,.36);
      glVertex2f(.3,.36);
      glVertex2f(.3,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(.4,.38);
      glVertex2f(.4,.36);
      glVertex2f(.6,.36);
      glVertex2f(.6,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(.7,.38);
      glVertex2f(.7,.36);
      glVertex2f(.95,.36);
      glVertex2f(.95,.38);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 255, 255 );
      glVertex2f(-.95,.38);
      glVertex2f(-.95,.36);
      glVertex2f(-.8,.36);
      glVertex2f(-.8,.38);
      glEnd();

      //Zebra Crossing
      glBegin(GL_QUADS);
      glColor3ub( 209, 207, 201 );
      glVertex2f(-.5,.49);
      glVertex2f(-.5,.46);
      glVertex2f(-.2,.46);
      glVertex2f(-.2,.49);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 209, 207, 201 );
      glVertex2f(-.5,.43);
      glVertex2f(-.5,.40);
      glVertex2f(-.2,.40);
      glVertex2f(-.2,.43);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 209, 207, 201 );
      glVertex2f(-.5,.37);
      glVertex2f(-.5,.34);
      glVertex2f(-.2,.34);
      glVertex2f(-.2,.37);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 209, 207, 201 );
      glVertex2f(-.5,.31);
      glVertex2f(-.5,.28);
      glVertex2f(-.2,.28);
      glVertex2f(-.2,.31);
      glEnd();

      //Lamp Post2
      glBegin(GL_QUADS);
      glColor3ub( 92, 78, 36 );
      glVertex2f(-.95,.65);
      glVertex2f(-.95,.50);
      glVertex2f(-.94,.50);
      glVertex2f(-.94,.65);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 191, 165, 86 );
      glVertex2f(-.94,.63);
      glVertex2f(-.94,.62);
      glVertex2f(-.91,.62);
      glVertex2f(-.91,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0,0,0 );
      glVertex2f(-.924,.62);
      glVertex2f(-.924,.60);
      glVertex2f(-.926,.60);
      glVertex2f(-.926,.62);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 192, 0 );
      glVertex2f(-.936,.60);
      glVertex2f(-.936,.56);
      glVertex2f(-.914,.56);
      glVertex2f(-.914,.60);
      glEnd();

      //Lamp Post2.1
      glBegin(GL_QUADS);
      glColor3ub( 92, 78, 36 );
      glVertex2f(-.65,.65);
      glVertex2f(-.65,.50);
      glVertex2f(-.64,.50);
      glVertex2f(-.64,.65);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 191, 165, 86 );
      glVertex2f(-.64,.63);
      glVertex2f(-.64,.62);
      glVertex2f(-.61,.62);
      glVertex2f(-.61,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0,0,0 );
      glVertex2f(-.624,.62);
      glVertex2f(-.624,.60);
      glVertex2f(-.626,.60);
      glVertex2f(-.626,.62);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 192, 0 );
      glVertex2f(-.636,.60);
      glVertex2f(-.636,.56);
      glVertex2f(-.614,.56);
      glVertex2f(-.614,.60);
      glEnd();

      //Lamp Post2.2
      glBegin(GL_QUADS);
      glColor3ub( 92, 78, 36 );
      glVertex2f(-.05,.65);
      glVertex2f(-.05,.50);
      glVertex2f(-.04,.50);
      glVertex2f(-.04,.65);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 191, 165, 86 );
      glVertex2f(-.04,.63);
      glVertex2f(-.04,.62);
      glVertex2f(-.01,.62);
      glVertex2f(-.01,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0,0,0 );
      glVertex2f(-.024,.62);
      glVertex2f(-.024,.60);
      glVertex2f(-.026,.60);
      glVertex2f(-.026,.62);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 192, 0 );
      glVertex2f(-.036,.60);
      glVertex2f(-.036,.56);
      glVertex2f(-.014,.56);
      glVertex2f(-.014,.60);
      glEnd();

      //Lamp Post2.3
      glBegin(GL_QUADS);
      glColor3ub( 92, 78, 36 );
      glVertex2f(.95,.65);
      glVertex2f(.95,.50);
      glVertex2f(.94,.50);
      glVertex2f(.94,.65);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 191, 165, 86 );
      glVertex2f(.94,.63);
      glVertex2f(.94,.62);
      glVertex2f(.91,.62);
      glVertex2f(.91,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0,0,0 );
      glVertex2f(.924,.62);
      glVertex2f(.924,.60);
      glVertex2f(.926,.60);
      glVertex2f(.926,.62);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 255, 192, 0 );
      glVertex2f(.936,.60);
      glVertex2f(.936,.56);
      glVertex2f(.914,.56);
      glVertex2f(.914,.60);
      glEnd();


      //tree 2............

     glLineWidth(5);//tree lower dal...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.5f, 0.5f);
	glVertex2f(-0.5f, 0.65f);
 glEnd();



	 glBegin(GL_TRIANGLES);// tree2 leaf 1..
    glColor3ub(0, 51, 0);//rgb color picker

    glVertex2f(-.56f, .56f);    // 2
	glVertex2f(-0.44f,.56f);
	glVertex2f(-.5f, 0.64f);

    glVertex2f(-.55f, .60f);    // 3
	glVertex2f(-0.45f,.60f);
	glVertex2f(-.5f, 0.65f);

    glVertex2f(-.54f, .63f);    // 4
	glVertex2f(-0.46f,.63f);
	glVertex2f(-.5f, 0.67f);


    glVertex2f(-.53f, .65f);    // 5
	glVertex2f(-0.47f,.65f);
	glVertex2f(-.5f, 0.69f);


    glVertex2f(-.52f, .67f);    // 6
	glVertex2f(-0.48f,.67f);
	glVertex2f(-.5f, 0.71f);
	glEnd();



      //building 1......

         glBegin(GL_QUADS);
      glColor3ub( 153, 77, 51 );
      glVertex2f(-.18,.68);
      glVertex2f(-.18,.5);
      glVertex2f(-.1,.5);
      glVertex2f(-.1,.68);
      glEnd();

glLineWidth(5);//bldng spaace......................
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(-.17f, 0.55f);
	glVertex2f(-.15f, 0.55f);    // x, y

glVertex2f(-.17f, 0.60f);
	glVertex2f(-.15f, 0.60f);    // x, y

glVertex2f(-.17f, 0.65f);
	glVertex2f(-.15f, 0.65f);    // x, y

	glVertex2f(-.11f, 0.55f);
	glVertex2f(-.13f, 0.55f);    // x, y

glVertex2f(-.11f, 0.60f);
	glVertex2f(-.13f, 0.60f);    // x, y

glVertex2f(-.11f, 0.65f);
	glVertex2f(-.13f, 0.65f);    // x, y
	 glEnd();


glLineWidth(3);
glBegin(GL_LINES);
glColor3ub(153, 0, 0);
glVertex2f(-.14f, 0.51f);   //midline of bldng
	glVertex2f(-.14f, 0.66f);

 glEnd();

  //building 2......

         glBegin(GL_QUADS);
      glColor3ub(1204, 102, 0);
      glVertex2f(-.25,.65);
      glVertex2f(-.25,.5);
      glVertex2f(-.19,.5);
      glVertex2f(-.19,.65);
      glEnd();

glLineWidth(5);//bldng2 sgape......................
	glBegin(GL_LINES);
	glColor3ub(255, 255, 102);
	glVertex2f(-.24f, 0.53f);
	glVertex2f(-.23f, 0.53f);

	glVertex2f(-.24f, 0.58f);
	glVertex2f(-.23f, 0.58f);

glVertex2f(-.24f, 0.63f);
	glVertex2f(-.23f, 0.63f);

	glVertex2f(-.2f, 0.53f);
	glVertex2f(-.21f, 0.53f);

	glVertex2f(-.2f, 0.58f);
	glVertex2f(-.21f, 0.58f);

	glVertex2f(-.2f, 0.63f);
	glVertex2f(-.21f, 0.63f);

	glEnd();

	glLineWidth(2);
glBegin(GL_LINES);
glColor3ub(153, 0, 1);
glVertex2f(-.22f, 0.51f);   //midline of bldng2........
	glVertex2f(-.22f, 0.63f);

    glEnd();




      //2nd station lower bit..............
      glBegin(GL_QUADS);
      glColor3ub(38, 94, 213);
      glVertex2f(0,0);
      glVertex2f(.9,0);
      glVertex2f(.9,.1);
      glVertex2f(0,.1);
      glEnd();

         //2nd station right side bit.........
       glBegin(GL_QUADS);
      glColor3ub(213, 139, 38);
      glVertex2f(.95,.2);
      glVertex2f(.9,.1);
      glVertex2f(.9,0);
      glVertex2f(.95,.125);
      glEnd();
           //2nd station upper side bit.........
       glBegin(GL_QUADS);
      glColor3ub(124, 140, 176);
      glVertex2f(0,.1);
      glVertex2f(.9,.1);
      glVertex2f(.95,.2);
      glVertex2f(.1,.2);
      glEnd();




      //#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@





      //Bus
    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3ub(66, 203, 245);
    glVertex2f(-.69,0.59);
    glVertex2f(-.69,0.36);
    glVertex2f(-.44,0.36);
    glVertex2f(-.44,0.59);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(120, 1, 1);
    glVertex2f(-.52,0.53);
    glVertex2f(-.52,0.48);
    glVertex2f(-.49,0.48);
    glVertex2f(-.49,0.53);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(120, 1, 1);
    glVertex2f(-.68,0.53);
    glVertex2f(-.68,0.48);
    glVertex2f(-.65,0.48);
    glVertex2f(-.65,0.53);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(120, 1, 1);
    glVertex2f(-.61,0.37);
    glVertex2f(-.61,0.51);
    glVertex2f(-.58,0.51);
    glVertex2f(-.58,0.37);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(120, 1, 1);
    glVertex2f(-.56,0.53);
    glVertex2f(-.56,0.48);
    glVertex2f(-.53,0.48);
    glVertex2f(-.53,0.53);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(120, 1, 1);
    glVertex2f(-.45,0.53);
    glVertex2f(-.45,0.48);
    glVertex2f(-.48,0.48);
    glVertex2f(-.48,0.53);
    glEnd();

    //BusWheel1
    int j;
	GLfloat a=-0.64f; GLfloat b=0.36f; GLfloat r =.03f;
	int triangleAmount = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,64,0);
		glVertex2f(a, b);
		GLfloat tPi = 2.0f * PI;
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            a + (r * cos(j *  tPi / triangleAmount)),
			    b + (r * sin(j * tPi / triangleAmount))
			);
		}
	glEnd();

	//BusWheel2
    int k;
	GLfloat m=-.50f; GLfloat n=0.36f; GLfloat ra =.03f;
	int tAa = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,64,0);
		glVertex2f(m, n);
		GLfloat twPi = 2.0f * PI;
		for(k = 0; k <= tAa;k++) {
			glVertex2f(
		            m + (ra * cos(k *  twPi / triangleAmount)),
			    n + (ra * sin(k * twPi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
    glPopMatrix();


    //Car
    glPushMatrix();
glTranslatef(position, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(255, 17, 0);
    glVertex2f(.4,.650);
    glVertex2f(.4,.450);
    glVertex2f(.6,.450);
    glVertex2f(.6,.650);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 17, 0);
    glVertex2f(.3,.55);
    glVertex2f(.3,0.45);
    glVertex2f(.4,0.45);
    glVertex2f(.4,0.58);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 17, 0.03);
    glVertex2f(.6,0.58);
    glVertex2f(.6,0.45);
    glVertex2f(.67,0.45);
    glVertex2f(.67,.55);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(74, 70, 70);
    glVertex2f(.4,0.58);
    glVertex2f(.4,.45);
    glVertex2f(.36,0.57);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(74, 70, 70);
    glVertex2f(.6,.65);
    glVertex2f(.6,0.58);
    glVertex2f(.63,0.565);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(74, 70, 70);
    glVertex2f(.43,.58);
    glVertex2f(.48,.58);
    glVertex2f(.49,.63);
    glVertex2f(.44,.63);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(74, 70, 70);
    glVertex2f(.52,.58);
    glVertex2f(.57,.58);
    glVertex2f(.58,.63);
    glVertex2f(.53,.63);
    glEnd();

    //CarWheel1
    int w;
	GLfloat c=.4f; GLfloat d=0.45f; GLfloat rad =.03f;
	int tAn = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(c, d);
		GLfloat twiPi = 2.0f * PI;
		for(w = 0; w <= tAn;w++) {
			glVertex2f(
		            c + (rad * cos(w *  twiPi / triangleAmount)),
			    d + (rad * sin(w * twiPi / triangleAmount))
			);
		}
	glEnd();

	//CarWheel2
    int z;
	GLfloat e=.58f; GLfloat f=0.45f; GLfloat radi =.03f;
	int tAng = 20;
    glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(e, f);
		GLfloat twicPi = 2.0f * PI;
		for(z = 0; z <= tAng;z++) {
			glVertex2f(
		            e + (radi * cos(z *  twicPi / triangleAmount)),
			    f + (radi * sin(z * twicPi / triangleAmount))
			);
		}
	glEnd();
	glLoadIdentity();
	    glPopMatrix();



	 //tree rail line............

     glLineWidth(4);//tree lower dal...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.6f, 0.2f);
	glVertex2f(-0.6f, 0.35f);
 glEnd();



	 glBegin(GL_TRIANGLES);// tree2 leaf 1..
    glColor3ub(0, 51, 0);//rgb color picker

    glVertex2f(-.66f, .26f);    // 2
	glVertex2f(-0.54f,.26f);
	glVertex2f(-.6f, 0.34f);

    glVertex2f(-.65f, .30f);    // 3
	glVertex2f(-0.55f,.30f);
	glVertex2f(-.6f, 0.35f);

    glVertex2f(-.64f, .33f);    // 4
	glVertex2f(-0.56f,.33f);
	glVertex2f(-.6f, 0.37f);


    glVertex2f(-.63f, .35f);    // 5
	glVertex2f(-0.57f,.35f);
	glVertex2f(-.6f, 0.39f);


    glVertex2f(-.62f, .37f);    // 6
	glVertex2f(-0.58f,.37f);
	glVertex2f(-.6f, 0.41f);
	glEnd();


	 //tree rail line............

     glLineWidth(4);//tree lower dal...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.4f, 0.2f);
	glVertex2f(-0.4f, 0.35f);
 glEnd();



	 glBegin(GL_TRIANGLES);// tree2 leaf 1..
    glColor3ub(0, 51, 0);//rgb color picker

    glVertex2f(-.46f, .26f);    // 2
	glVertex2f(-0.34f,.26f);
	glVertex2f(-.4f, 0.34f);

    glVertex2f(-.45f, .30f);    // 3
	glVertex2f(-0.35f,.30f);
	glVertex2f(-.4f, 0.35f);

    glVertex2f(-.44f, .33f);    // 4
	glVertex2f(-0.36f,.33f);
	glVertex2f(-.4f, 0.37f);


    glVertex2f(-.43f, .35f);    // 5
	glVertex2f(-0.37f,.35f);
	glVertex2f(-.4f, 0.39f);


    glVertex2f(-.42f, .37f);    // 6
	glVertex2f(-0.38f,.37f);
	glVertex2f(-.4f, 0.41f);
	glEnd();



	 //tree rail line............

     glLineWidth(4);//tree lower dal...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.2f, 0.2f);
	glVertex2f(-0.2f, 0.35f);
 glEnd();



	 glBegin(GL_TRIANGLES);// tree2 leaf 1..
    glColor3ub(0, 51, 0);//rgb color picker

    glVertex2f(-.26f, .26f);    // 2
	glVertex2f(-0.14f,.26f);
	glVertex2f(-.2f, 0.34f);

    glVertex2f(-.25f, .30f);    // 3
	glVertex2f(-0.15f,.30f);
	glVertex2f(-.2f, 0.35f);

    glVertex2f(-.24f, .33f);    // 4
	glVertex2f(-0.16f,.33f);
	glVertex2f(-.2f, 0.37f);


    glVertex2f(-.23f, .35f);    // 5
	glVertex2f(-0.17f,.35f);
	glVertex2f(-.2f, 0.39f);


    glVertex2f(-.22f, .37f);    // 6
	glVertex2f(-0.18f,.37f);
	glVertex2f(-.2f, 0.41f);
	glEnd();




      //###################


      //RAIL LINE 4

      //RAIL LINE

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-1,0);             //SURU
    glVertex2f(-1,-.02);
    glVertex2f(1,-.02);
    glVertex2f(1,0);

    glVertex2f(-1,-.07);
    glVertex2f(-1,-.09);
    glVertex2f(1,-.09);
    glVertex2f(1,-.07);

    glVertex2f(-.95,-.02);
    glVertex2f(-.95,-.07);
    glVertex2f(-.9,-.07);
    glVertex2f(-.9,-.02);

    glVertex2f(-.75,-.02);
    glVertex2f(-.75,-.07);
    glVertex2f(-.7,-.07);
    glVertex2f(-.7,-.02);

    glVertex2f(-.55,-.02);
    glVertex2f(-.55,-.07);
    glVertex2f(-.5,-.07);
    glVertex2f(-.5,-.02);

    glVertex2f(-.35,-.02);
    glVertex2f(-.35,-.07);
    glVertex2f(-.3,-.07);
    glVertex2f(-.3,-.02);

    glVertex2f(-.15,-.02);
    glVertex2f(-.15,-.07);
    glVertex2f(-.1,-.07);
    glVertex2f(-.1,-.02);

    glVertex2f(.15,-.02);
    glVertex2f(.15,-.07);
    glVertex2f(.1,-.07);
    glVertex2f(.1,-.02);

     glVertex2f(.35,-.02);
    glVertex2f(.35,-.07);
    glVertex2f(.3,-.07);
    glVertex2f(.3,-.02);


    glVertex2f(.55,-.02);
    glVertex2f(.55,-.07);
    glVertex2f(.5,-.07);
    glVertex2f(.5,-.02);

    glVertex2f(.75,-.02);
    glVertex2f(.75,-.07);
    glVertex2f(.7,-.07);
    glVertex2f(.7,-.02);

    glVertex2f(.95,-.02);
    glVertex2f(.95,-.07);
    glVertex2f(.9,-.07);
    glVertex2f(.9,-.02);
    glEnd();

    //BACKSIDE TRAIN 03

    //RAIL LINE

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-1,-.2);             //SURU
    glVertex2f(-1,-.23);
    glVertex2f(1,-.23);
    glVertex2f(1,-.2);

    glVertex2f(-1,-.11);
    glVertex2f(-1,-.14);
    glVertex2f(1,-.14);
    glVertex2f(1,-.11);

    glVertex2f(-.95,-.13);
    glVertex2f(-.95,-.2);
    glVertex2f(-.9,-.2);
    glVertex2f(-.9,-.13);

    glVertex2f(-.75,-.13);
    glVertex2f(-.75,-.2);
    glVertex2f(-.7,-.2);
    glVertex2f(-.7,-.13);

    glVertex2f(-.55,-.13);
    glVertex2f(-.55,-.2);
    glVertex2f(-.5,-.2);
    glVertex2f(-.5,-.13);

    glVertex2f(-.35,-.13);
    glVertex2f(-.35,-.2);
    glVertex2f(-.3,-.2);
    glVertex2f(-.3,-.13);

    glVertex2f(-.15,-.13);
    glVertex2f(-.15,-.2);
    glVertex2f(-.1,-.2);
    glVertex2f(-.1,-.13);

    glVertex2f(.15,-.13);
    glVertex2f(.15,-.2);
    glVertex2f(.1,-.2);
    glVertex2f(.1,-.13);

     glVertex2f(.35,-.13);
    glVertex2f(.35,-.2);
    glVertex2f(.3,-.2);
    glVertex2f(.3,-.13);


    glVertex2f(.55,-.13);
    glVertex2f(.55,-.2);
    glVertex2f(.5,-.2);
    glVertex2f(.5,-.13);

    glVertex2f(.75,-.13);
    glVertex2f(.75,-.2);
    glVertex2f(.7,-.2);
    glVertex2f(.7,-.13);

    glVertex2f(.95,-.13);
    glVertex2f(.95,-.2);
    glVertex2f(.9,-.2);
    glVertex2f(.9,-.13);
    glEnd();


       //TRAIN 3
    glLoadIdentity();                           //SURU
    glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);


    //BOGI 1
    glBegin(GL_QUADS);
    glColor3ub(0, 53, 102);
    glVertex2f(.6,.03);
    glVertex2f(.6,-.2);
    glVertex2f(.4,-.2);
    glVertex2f(.4,.03);

    //BOGI 2
    glVertex2f(.38,.02);
    glVertex2f(.38,-.2);
    glVertex2f(0,-.2);
    glVertex2f(0,.02);

    //BOGI 3
    glVertex2f(-.02,.02);
    glVertex2f(-.02,-.2);
    glVertex2f(-.4,-.2);
    glVertex2f(-.4,.02);

    //BOGI 4
    glVertex2f(-.42,.02);
    glVertex2f(-.42,-.2);
    glVertex2f(-.8,-.2);
    glVertex2f(-.8,.02);

    glEnd();



    //SMOKE




    //glPushMatrix();
	glTranslatef(0.0f,position3,0.0f);
    //1
    GLfloat s11=.7f; GLfloat d11=.05; GLfloat radiusdh11 =.02f;
	int triangleAmountdh11 = 20;
	GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s11, d11);
    int dh11;
    for(dh11 = 0; dh11 <= triangleAmountdh11;dh11++)
        {
        glVertex2f(s11 + (radiusdh11 * cos(dh11 *  twicePi / triangleAmountdh11)),
                   d11 + (radiusdh11 * sin(dh11 * twicePi / triangleAmountdh11)));
		}
	glEnd();


	//2
	 GLfloat s22=.7f; GLfloat d22=-.02; GLfloat radiusdh22 =.02f;
	int triangleAmountdh22 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s22, d22);
    int dh22;
    for(dh22 = 0; dh22 <= triangleAmountdh22;dh22++)
        {
        glVertex2f(s22 + (radiusdh22 * cos(dh22 *  twicePi / triangleAmountdh22)),
                   d22 + (radiusdh22 * sin(dh22 * twicePi / triangleAmountdh22)));
		}
	glEnd();


	//3
	 GLfloat s33=.7f; GLfloat d33=-.09f; GLfloat radiusdh33 =.02f;
	int triangleAmountdh33 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s33, d33);
    int dh33;
    for(dh33 = 0; dh33 <= triangleAmountdh33;dh33++)
        {
        glVertex2f(s33 + (radiusdh33 * cos(dh33 *  twicePi / triangleAmountdh33)),
                   d33 + (radiusdh33 * sin(dh33 * twicePi / triangleAmountdh33)));
		}
	glEnd();

	//glPopMatrix();
	glLoadIdentity();



	glTranslatef(position2,0.0f,0.0f);



    //FRONT
    glBegin(GL_QUADS);
    glColor3ub(0, 38, 77);
    glVertex2f(.6,-.03);
    glVertex2f(.75,-.03);
    glVertex2f(.75,-.2);
    glVertex2f(.6,-.2);


    glColor3ub(38,38,38);
    glVertex2f(.72,-.05);
    glVertex2f(.68,-.05);
    glVertex2f(.68,.05);
    glVertex2f(.72,.05);

    glColor3ub(26,26,26);
    glVertex2f(.73,.08);
    glVertex2f(.67,.08);
    glVertex2f(.67,.04);
    glVertex2f(.73,.04);

    glColor3ub(26,26,26);
    glVertex2f(.65,-.05);
    glVertex2f(.62,-.05);
    glVertex2f(.62,-.02);
    glVertex2f(.65,-.02);              //SESH

    //HEADLIGHT
    glColor3ub(255,255,0);
    glVertex2f(.75,-.15);
    glVertex2f(.77,-.15);
    glVertex2f(.77,-.17);
    glVertex2f(.75,-.17);

    //TRAIN 2 ER BOGI CONNECTOR
    //BOGI 1-2
    glColor3ub(0,0,0);
    glVertex2f(.4,-.17);
    glVertex2f(.4,-.19);
    glVertex2f(.38,-.19);
    glVertex2f(.38,-.17);

    //BOGI 2-3
    glVertex2f(0,-.17);
    glVertex2f(0,-.19);
    glVertex2f(-.02,-.19);
    glVertex2f(-.02,-.17);

    //BOGI 3-4
    glVertex2f(-.4,-.17);
    glVertex2f(-.4,-.19);
    glVertex2f(-.42,-.19);
    glVertex2f(-.42,-.17);


    //TRAIN ER MAJHKHAN
    glColor3ub(255, 255, 128);            //SURU
    glVertex2f(-.8,-.11);
    glVertex2f(-.8,-.04);
    glVertex2f(-.42,-.04);
    glVertex2f(-.42,-.11);

   // glColor3ub(77,77,77);
    glVertex2f(-.4,-.11);
    glVertex2f(-.4,-.04);
    glVertex2f(-.02,-.04);
    glVertex2f(-.02,-.11);

    //glColor3ub(77,77,77);
    glVertex2f(.38,-.11);
    glVertex2f(.38,-.04);
    glVertex2f(0,-.04);
    glVertex2f(0,-.11);

    //glColor3ub(77,77,77);
    glVertex2f(.6,-.11);
    glVertex2f(.6,-.04);
    glVertex2f(.4,-.04);
    glVertex2f(.4,-.11);                 //SESH

    // TRAIN 2 ER WINDOW

    //BOGI 1


    glColor3ub(217, 217, 217);
    glVertex2f(.55,-.1);
    glVertex2f(.42,-.1);
    glVertex2f(.42,.01);
    glVertex2f(.55,.01);

    //DOOR
    //glColor3ub(255,255,255);
    glVertex2f(.59,-.16);
    glVertex2f(.56,-.16);
    glVertex2f(.56,-.02);
    glVertex2f(.59,-.02);                           //SESH


    //BOGI 2
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.33,-.1);
    glVertex2f(.27,-.1);
    glVertex2f(.27,-.05);
    glVertex2f(.33,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(.26,-.1);
    glVertex2f(.2,-.1);
    glVertex2f(.2,-.05);
    glVertex2f(.26,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(.19,-.1);
    glVertex2f(.13,-.1);
    glVertex2f(.13,-.05);
    glVertex2f(.19,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(.12,-.1);
    glVertex2f(.06,-.1);
    glVertex2f(.06,-.05);
    glVertex2f(.12,-.05);                  //SESH


    //DOOR

    //glColor3ub(255,255,255);              //SURU
    glVertex2f(.37,-.16);
    glVertex2f(.34,-.16);
    glVertex2f(.34,-.02);
    glVertex2f(.37,-.02);

    //glColor3ub(255,255,255);
    glVertex2f(.01,-.16);
    glVertex2f(.04,-.16);
    glVertex2f(.04,-.02);
    glVertex2f(.01,-.02);                       //SHESH

    // BOGI 3
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(-.07,-.1);
    glVertex2f(-.13,-.1);
    glVertex2f(-.13,-.05);
    glVertex2f(-.07,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.14,-.1);
    glVertex2f(-.2,-.1);
    glVertex2f(-.2,-.05);
    glVertex2f(-.14,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.21,-.1);
    glVertex2f(-.27,-.1);
    glVertex2f(-.27,-.05);
    glVertex2f(-.21,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.28,-.1);
    glVertex2f(-.34,-.1);
    glVertex2f(-.34,-.05);
    glVertex2f(-.28,-.05);                  //SESH


    //DOOR

    //glColor3ub(255,255,255);              //SURU
    glVertex2f(-.03,-.16);
    glVertex2f(-.06,-.16);
    glVertex2f(-.06,-.02);
    glVertex2f(-.03,-.02);

    //glColor3ub(255,255,255);
    glVertex2f(-.39,-.16);
    glVertex2f(-.36,-.16);
    glVertex2f(-.36,-.02);
    glVertex2f(-.39,-.02);                       //SHESH


    // BOGI 4
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(-.47,-.1);
    glVertex2f(-.53,-.1);
    glVertex2f(-.53,-.05);
    glVertex2f(-.47,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.54,-.1);
    glVertex2f(-.6,-.1);
    glVertex2f(-.6,-.05);
    glVertex2f(-.54,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.61,-.1);
    glVertex2f(-.67,-.1);
    glVertex2f(-.67,-.05);
    glVertex2f(-.61,-.05);

    //glColor3ub(255,255,255);
    glVertex2f(-.68,-.1);
    glVertex2f(-.74,-.1);
    glVertex2f(-.74,-.05);
    glVertex2f(-.68,-.05);                      //SESH


    //DOOR

    //glColor3ub(255,255,255);              //SURU
    glVertex2f(-.43,-.16);
    glVertex2f(-.46,-.16);
    glVertex2f(-.46,-.02);
    glVertex2f(-.43,-.02);

    //glColor3ub(255,255,255);
    glVertex2f(-.79,-.16);
    glVertex2f(-.76,-.16);
    glVertex2f(-.76,-.02);
    glVertex2f(-.79,-.02);                       //SHESH



    glEnd();

    //TRAIN 2 ER WINDOW ER PARTITION
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glLineWidth(3);
    // BOGI W1

    glVertex2f(.51,-.1);
    glVertex2f(.51,.01);

    glVertex2f(.46,-.1);
    glVertex2f(.46,.01);

    glVertex2f(.6,-.1);
    glVertex2f(.75,-.1);

    glVertex2f(.6,-.15);
    glVertex2f(.75,-.15);

    glVertex2f(.59,-.15);
    glVertex2f(.56,-.15);


    //BOGI W2
    glVertex2f(.3,-.1);
    glVertex2f(.3,-.05);

    glVertex2f(.23,-.1);
    glVertex2f(.23,-.05);

    glVertex2f(.16,-.1);
    glVertex2f(.16,-.05);

    glVertex2f(.09,-.1);
    glVertex2f(.09,-.05);


    glVertex2f(.38,0);
    glVertex2f(0,0);

    glVertex2f(.37,-.15);
    glVertex2f(.34,-.15);

    glVertex2f(.01,-.15);
    glVertex2f(.04,-.15);

    // BOGI W3
    glVertex2f(-.1,-.1);
    glVertex2f(-.1,-.05);

    glVertex2f(-.17,-.1);
    glVertex2f(-.17,-.05);

    glVertex2f(-.24,-.1);
    glVertex2f(-.24,-.05);

    glVertex2f(-.31,-.1);
    glVertex2f(-.31,-.05);

    glVertex2f(-.02,0);
    glVertex2f(-.4,0);

    glVertex2f(-.03,-.15);
    glVertex2f(-.06,-.15);

    glVertex2f(-.39,-.15);
    glVertex2f(-.36,-.15);

    //BOGI W4
    glVertex2f(-.5,-.1);
    glVertex2f(-.5,-.05);

    glVertex2f(-.57,-.1);
    glVertex2f(-.57,-.05);

    glVertex2f(-.64,-.1);
    glVertex2f(-.64,-.05);

    glVertex2f(-.71,-.1);
    glVertex2f(-.71,-.05);

    glVertex2f(-.42,0);
    glVertex2f(-.8,0);

    glVertex2f(-.43,-.15);
    glVertex2f(-.46,-.15);

     glVertex2f(-.76,-.15);
    glVertex2f(-.79,-.15);


    glEnd();


    //TRAIN 2 ER WHEEL

    //WHEEL 1


    GLfloat m1=-.75f; GLfloat n1=-.2f; GLfloat radiusst1 =.02f;
	int triangleAmountst1 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m1,n1);
    int k1;
    for(k1 = 0; k1 <= triangleAmountst1;k1++)
        {
        glVertex2f(m1 + (radiusst1 * cos(k1 *  twicePi / triangleAmountst1)),
                   n1 + (radiusst1 * sin(k1 * twicePi / triangleAmountst1)));
		}
	glEnd();

	//WHEEL 2
    GLfloat m2=-.65f; GLfloat n2=-.2f; GLfloat radiusst2 =.02f;
	int triangleAmountst2 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m2, n2);
    int k2;
    for(k2 = 0; k2 <= triangleAmountst2;k2++)
        {
        glVertex2f(m2 + (radiusst2 * cos(k2 *  twicePi / triangleAmountst2)),
                   n2 + (radiusst2 * sin(k2 * twicePi / triangleAmountst2)));
		}
	glEnd();

	//WHEEL 3
    GLfloat m3=-.55f; GLfloat n3=-.2f; GLfloat radiusst3 =.02f;
	int triangleAmountst3 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m3, n3);
    int k3;
    for(k3 = 0; k3 <= triangleAmountst3;k3++)
        {
        glVertex2f(m3 + (radiusst3 * cos(k3 *  twicePi / triangleAmountst3)),
                   n3 + (radiusst3 * sin(k3 * twicePi / triangleAmountst3)));
		}
	glEnd();

	//WHEEL 4
    GLfloat m4=-.45f; GLfloat n4=-.2f; GLfloat radiusst4 =.02f;
	int triangleAmountst4 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m4, n4);
    int k4;
    for(k4 = 0; k4 <= triangleAmountst4;k4++)
        {
        glVertex2f(m4 + (radiusst4 * cos(k4 *  twicePi / triangleAmountst4)),
                   n4 + (radiusst4 * sin(k4 * twicePi / triangleAmountst4)));
		}
	glEnd();

	//WHEEL 5
    GLfloat m5=-.35f; GLfloat n5=-.2f; GLfloat radiusst5 =.02f;
	int triangleAmountst5 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m5, n5);
    int k5;
    for(k5 = 0; k5 <= triangleAmountst5;k5++)
        {
        glVertex2f(m5 + (radiusst5 * cos(k5 *  twicePi / triangleAmountst5)),
                   n5 + (radiusst5 * sin(k5 * twicePi / triangleAmountst5)));
		}
	glEnd();

	//WHEEL 6
    GLfloat m6=-.25f; GLfloat n6=-.2f; GLfloat radiusst6 =.02f;
	int triangleAmountst6 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m6, n6);
    int k6;
    for(k6= 0; k6 <= triangleAmountst6;k6++)
        {
        glVertex2f(m6 + (radiusst6 * cos(k6 *  twicePi / triangleAmountst6)),
                   n6 + (radiusst6 * sin(k6 * twicePi / triangleAmountst6)));
		}
	glEnd();

	//WHEEL 7
    GLfloat m7=-.15f; GLfloat n7=-.2f; GLfloat radiusst7 =.02f;
	int triangleAmountst7 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m7, n7);
    int k7;
    for(k7 = 0; k7 <= triangleAmountst7;k7++)
        {
        glVertex2f(m7 + (radiusst7 * cos(k7 *  twicePi / triangleAmountst7)),
                   n7 + (radiusst7 * sin(k7 * twicePi / triangleAmountst7)));
		}
	glEnd();

	//WHEEL 8
    GLfloat m8=-.05f; GLfloat n8=-.2f; GLfloat radiusst8 =.02f;
	int triangleAmountst8 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m8, n8);
    int k8;
    for(k8 = 0; k8 <= triangleAmountst8;k8++)
        {
        glVertex2f(m8 + (radiusst8 * cos(k8 *  twicePi / triangleAmountst8)),
                   n8 + (radiusst7 * sin(k8 * twicePi / triangleAmountst8)));
		}
	glEnd();

	//WHEEL 9
    GLfloat m9=.05f; GLfloat n9=-.2f; GLfloat radiusst9 =.02f;
	int triangleAmountst9 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m9, n9);
    int k9;
    for(k9 = 0; k9 <= triangleAmountst9;k9++)
        {
        glVertex2f(m9 + (radiusst9 * cos(k9 *  twicePi / triangleAmountst9)),
                   n9 + (radiusst9 * sin(k9 * twicePi / triangleAmountst9)));
		}
	glEnd();

	//WHEEL 10
    GLfloat m10=.15f; GLfloat n10=-.2f; GLfloat radiusst10 =.02f;
	int triangleAmountst10 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m10, n10);
    int k10;
    for(k10= 0; k10 <= triangleAmountst10;k10++)
        {
        glVertex2f(m10 + (radiusst10 * cos(k10 *  twicePi / triangleAmountst10)),
                   n10 + (radiusst10 * sin(k10 * twicePi / triangleAmountst10)));
		}
	glEnd();

	//WHEEL 11
    GLfloat m11=.25f; GLfloat n11=-.2f; GLfloat radiusst11 =.02f;
	int triangleAmountst11 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m11, n11);
    int k11;
    for(k11 = 0; k11 <= triangleAmountst11;k11++)
        {
        glVertex2f(m11 + (radiusst11 * cos(k11 *  twicePi / triangleAmountst11)),
                   n11 + (radiusst11 * sin(k11* twicePi / triangleAmountst11)));
		}
	glEnd();

	//WHEEL 12
    GLfloat m12=.35f; GLfloat n12=-.2f; GLfloat radiusst12 =.02f;
	int triangleAmountst12 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m12, n12);
    int k12;
    for(k12 = 0; k12 <= triangleAmountst12;k12++)
        {
        glVertex2f(m12 + (radiusst12 * cos(k12 *  twicePi / triangleAmountst12)),
                   n12 + (radiusst12* sin(k12 * twicePi / triangleAmountst12)));
		}
	glEnd();


	//WHEEL 13
    GLfloat m13=.45f; GLfloat n13=-.2f; GLfloat radiusst13 =.02f;
	int triangleAmountst13 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m13, n13);
    int k13;
    for(k13 = 0; k13 <= triangleAmountst13;k13++)
        {
        glVertex2f(m13 + (radiusst13 * cos(k13 *  twicePi / triangleAmountst13)),
                   n13 + (radiusst13* sin(k13 * twicePi / triangleAmountst13)));
		}
	glEnd();

	//WHEEL 14
    GLfloat m14=.55f; GLfloat n14=-.2f; GLfloat radiusst14 =.02f;
	int triangleAmountst14 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m14, n14);
    int k14;
    for(k14 = 0; k14 <= triangleAmountst14;k14++)
        {
        glVertex2f(m14 + (radiusst14 * cos(k14 *  twicePi / triangleAmountst14)),
                   n14+ (radiusst14* sin(k14* twicePi / triangleAmountst14)));
		}
	glEnd();

	//WHEEL 15
    GLfloat m15=.65f; GLfloat n15=-.2f; GLfloat radiusst15=.025f;
	int triangleAmountst15= 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m15, n15);
    int k15;
    for(k15= 0; k15<= triangleAmountst15;k15++)
        {
        glVertex2f(m15+ (radiusst15* cos(k15 *  twicePi / triangleAmountst15)),
                   n15 + (radiusst15* sin(k15 * twicePi / triangleAmountst15)));
		}
	glEnd();

	//WHEEL 16
    GLfloat m16=.72f; GLfloat n16=-.2f; GLfloat radiusst16 =.025f;
	int triangleAmountst16 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(m16, n16);
    int k16;
    for(k16 = 0; k16 <= triangleAmountst16;k16++)
        {
        glVertex2f(m16 + (radiusst16 * cos(k16 *  twicePi / triangleAmountst16)),
                   n16 + (radiusst16* sin(k16 * twicePi / triangleAmountst16)));
		}
	glEnd();

glLoadIdentity();




	//station lower bit..............
      glBegin(GL_QUADS);
      glColor3ub(38, 94, 213);
      glVertex2f(-.2,-.4);
      glVertex2f(-.2,-.5);
      glVertex2f(.75,-.5);
      glVertex2f(.75,-.4);
      glEnd();
      //upper side bit.........
      glBegin(GL_QUADS);
      glColor3ub(124, 140, 176);
      glVertex2f(-.1,-.2);
      glVertex2f(-.2,-.4);
      glVertex2f(.75,-.4);
      glVertex2f(.85,-.2);
      glEnd();
      //right side bit.........
       glBegin(GL_QUADS);
      glColor3ub( 213, 139, 38 );
      glVertex2f(.75,-.4);
      glVertex2f(.75,-.5);
      glVertex2f(.85,-.28);
      glVertex2f(.85,-.2);
      glEnd();

      //bench 1..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(-.05,-.25);
      glVertex2f(-.05,-.35);
      glVertex2f(.15,-.35);
      glVertex2f(.15,-.25);
      glEnd();

           //bench 2..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.25,-.25);
      glVertex2f(.25,-.35);
      glVertex2f(.45,-.35);
      glVertex2f(.45,-.25);
      glEnd();
         //bench 3..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.55,-.25);
      glVertex2f(.55,-.35);
      glVertex2f(.7,-.35);
      glVertex2f(.7,-.25);
      glEnd();

           //pillar 1..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(0,-.35);
      glVertex2f(.05,-.35);
      glVertex2f(.05,.4);
      glVertex2f(0,.4);
      glEnd();
         //pillar 2..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.3,-.35);
      glVertex2f(.35,-.35);
      glVertex2f(.35,.4);
      glVertex2f(.3,.4);
      glEnd();
          //pillar 3..
        glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.6,-.35);
      glVertex2f(.65,-.35);
      glVertex2f(.65,.4);
      glVertex2f(.6,.4);
      glEnd();

      //roof........

   glBegin(GL_QUADS);
      glColor3ub( 207, 144, 9  );
      glVertex2f(-.1,.4);
      glVertex2f(.85,.4);
      glVertex2f(.85,.5);
      glVertex2f(-.1,.5);
      glEnd();
      //celling.........
         glBegin(GL_QUADS);
      glColor3ub(177, 185, 171    );
      glVertex2f(-.1,.5);
      glVertex2f(.85,.5);
      glVertex2f(.9,.6);
      glVertex2f(-.05,.6);
      glEnd();
     // celling right...
        glBegin(GL_QUADS);
      glColor3ub(115, 55, 45   );
      glVertex2f(.9,.6);
      glVertex2f(.85,.5);
      glVertex2f(.85,.4);
      glVertex2f(.9,.5);
      glEnd();

      //2nd station bench1.....

        glBegin(GL_QUADS);
      glColor3ub(117, 23, 7);
      glVertex2f(.15,.13);
      glVertex2f(.28,.13);
      glVertex2f(.28,.2);
      glVertex2f(.15,.2);
      glEnd();
     //2nd station 2nd bench
          glBegin(GL_QUADS);
      glColor3ub(117, 23, 7);
      glVertex2f(.4,.13);
      glVertex2f(.55,.13);
      glVertex2f(.55,.2);
      glVertex2f(.4,.2);
      glEnd();
        //2nd station 3rd bench
          glBegin(GL_QUADS);
      glColor3ub(117, 23, 7);
      glVertex2f(.7,.13);
      glVertex2f(.85,.13);
      glVertex2f(.85,.2);
      glVertex2f(.7,.2);
      glEnd();

     //2nd station piller1
       glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.2,.2);
      glVertex2f(.25,.2);
      glVertex2f(.25,.4);
      glVertex2f(.2,.4);
      glEnd();

         //2nd station piller2
       glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.45,.2);
      glVertex2f(.5,.2);
      glVertex2f(.5,.4);
      glVertex2f(.45,.4);
      glEnd();

           //2nd station piller3
       glBegin(GL_QUADS);
      glColor3ub( 117, 23, 7 );
      glVertex2f(.75,.2);
      glVertex2f(.8,.2);
      glVertex2f(.8,.4);
      glVertex2f(.75,.4);
      glEnd();





      //STATION NAME


            //station billboard...
      glBegin(GL_QUADS);
      glColor3ub( 124, 140, 176 );
      glVertex2f(.15,.5);
      glVertex2f(.65,.5);
      glVertex2f(.65,.65);
      glVertex2f(.15,.65);
      glEnd();

      //"J"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.167,.64);
      glVertex2f(.167,.63);
      glVertex2f(.187,.63);
      glVertex2f(.187,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.187,.63);
      glVertex2f(.182,.63);
      glVertex2f(.182,.52);
      glVertex2f(.187,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.182,.52);
      glVertex2f(.182,.53);
      glVertex2f(.167,.53);
      glVertex2f(.167,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.167,.52);
      glVertex2f(.172,.52);
      glVertex2f(.172,.56);
      glVertex2f(.167,.56);
      glEnd();

      //"O"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.192,.64);
      glVertex2f(.192,.52);
      glVertex2f(.195,.52);
      glVertex2f(.195,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.207,.64);
      glVertex2f(.207,.52);
      glVertex2f(.210,.52);
      glVertex2f(.210,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.192,.64);
      glVertex2f(.192,.63);
      glVertex2f(.210,.63);
      glVertex2f(.210,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.192,.53);
      glVertex2f(.192,.52);
      glVertex2f(.210,.52);
      glVertex2f(.210,.53);
      glEnd();

      //"Y"
	  glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.214,.64);
      glVertex2f(.210,.64);
      glVertex2f(.216,.58);
      glVertex2f(.220,.58);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.220,.58);
      glVertex2f(.224,.58);
      glVertex2f(.230,.64);
      glVertex2f(.226,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.218,.58);
      glVertex2f(.218,.52);
      glVertex2f(.222,.52);
      glVertex2f(.222,.58);
      glEnd();

      //"P"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.235,.64);
      glVertex2f(.235,.52);
      glVertex2f(.238,.52);
      glVertex2f(.238,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.235,.64);
      glVertex2f(.235,.63);
      glVertex2f(.250,.63);
      glVertex2f(.250,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.245,.64);
      glVertex2f(.245,.59);
      glVertex2f(.250,.59);
      glVertex2f(.250,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.250,.60);
      glVertex2f(.235,.60);
      glVertex2f(.235,.59);
      glVertex2f(.250,.59);
      glEnd();

      //"U"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.255,.64);
      glVertex2f(.255,.52);
      glVertex2f(.259,.52);
      glVertex2f(.259,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.266,.64);
      glVertex2f(.266,.52);
      glVertex2f(.270,.52);
      glVertex2f(.270,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.255,.535);
      glVertex2f(.255,.52);
      glVertex2f(.270,.52);
      glVertex2f(.270,.535);
      glEnd();

      //"R"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.275,.64);
      glVertex2f(.275,.52);
      glVertex2f(.278,.52);
      glVertex2f(.278,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.275,.64);
      glVertex2f(.275,.63);
      glVertex2f(.290,.63);
      glVertex2f(.290,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.285,.64);
      glVertex2f(.285,.59);
      glVertex2f(.290,.59);
      glVertex2f(.290,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.290,.60);
      glVertex2f(.275,.60);
      glVertex2f(.275,.59);
      glVertex2f(.290,.59);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.275,.60);
      glVertex2f(.275,.585);
      glVertex2f(.290,.53);
      glVertex2f(.290,.555);
      glEnd();

      //"H"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.295,.64);
      glVertex2f(.295,.52);
      glVertex2f(.3,.52);
      glVertex2f(.3,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.305,.64);
      glVertex2f(.305,.52);
      glVertex2f(.31,.52);
      glVertex2f(.31,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.295,.59);
      glVertex2f(.295,.57);
      glVertex2f(.310,.57);
      glVertex2f(.310,.59);
      glEnd();

      //"A"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.321,.64);
      glVertex2f(.318,.64);
      glVertex2f(.313,.52);
      glVertex2f(.316,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.324,.64);
      glVertex2f(.321,.64);
      glVertex2f(.325,.52);
      glVertex2f(.328,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.315,.58);
      glVertex2f(.315,.57);
      glVertex2f(.326,.57);
      glVertex2f(.326,.58);
      glEnd();

      //"T"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.328,.64);
      glVertex2f(.328,.63);
      glVertex2f(.348,.63);
      glVertex2f(.348,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.336,.64);
      glVertex2f(.336,.52);
      glVertex2f(.340,.52);
      glVertex2f(.340,.64);
      glEnd();

      //"R"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.361,.64);
      glVertex2f(.361,.52);
      glVertex2f(.364,.52);
      glVertex2f(.364,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.361,.64);
      glVertex2f(.361,.63);
      glVertex2f(.376,.63);
      glVertex2f(.376,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.371,.64);
      glVertex2f(.371,.59);
      glVertex2f(.376,.59);
      glVertex2f(.376,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.376,.60);
      glVertex2f(.376,.60);
      glVertex2f(.361,.59);
      glVertex2f(.376,.59);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.361,.60);
      glVertex2f(.361,.585);
      glVertex2f(.376,.53);
      glVertex2f(.376,.555);
      glEnd();

      //"A"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.385,.64);
      glVertex2f(.382,.64);
      glVertex2f(.377,.52);
      glVertex2f(.380,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.388,.64);
      glVertex2f(.385,.64);
      glVertex2f(.389,.52);
      glVertex2f(.392,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.379,.58);
      glVertex2f(.379,.57);
      glVertex2f(.390,.57);
      glVertex2f(.390,.58);
      glEnd();

      //"I"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.393,.64);
      glVertex2f(.393,.63);
      glVertex2f(.403,.63);
      glVertex2f(.403,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.397,.64);
      glVertex2f(.397,.52);
      glVertex2f(.399,.52);
      glVertex2f(.399,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.393,.53);
      glVertex2f(.393,.52);
      glVertex2f(.403,.52);
      glVertex2f(.403,.53);
      glEnd();

      //"L"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.405,.64);
      glVertex2f(.405,.52);
      glVertex2f(.410,.52);
      glVertex2f(.410,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.410,.53);
      glVertex2f(.410,.52);
      glVertex2f(.422,.52);
      glVertex2f(.422,.53);
      glEnd();

      //W
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.425,.64);
      glVertex2f(.425,.52);
      glVertex2f(.428,.52);
      glVertex2f(.428,.64);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub( 0, 0, 0);
      glVertex2f(.427,.52);
      glVertex2f(.444,.52);
      glVertex2f(.435,.59);
      glEnd();

      glBegin(GL_TRIANGLES);
      glColor3ub( 124, 140, 176);
      glVertex2f(.430,.52);
      glVertex2f(.441,.52);
      glVertex2f(.435,.57);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.444,.64);
      glVertex2f(.444,.52);
      glVertex2f(.446,.52);
      glVertex2f(.446,.64);
      glEnd();

      //"A"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.462,.64);
      glVertex2f(.457,.64);
      glVertex2f(.454,.52);
      glVertex2f(.457,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.465,.64);
      glVertex2f(.462,.64);
      glVertex2f(.466,.52);
      glVertex2f(.469,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.456,.58);
      glVertex2f(.456,.57);
      glVertex2f(.467,.57);
      glVertex2f(.467,.58);
      glEnd();

      //"Y"
	  glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.475,.64);
      glVertex2f(.471,.64);
      glVertex2f(.477,.58);
      glVertex2f(.481,.58);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.481,.58);
      glVertex2f(.485,.58);
      glVertex2f(.491,.64);
      glVertex2f(.487,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.479,.58);
      glVertex2f(.479,.52);
      glVertex2f(.483,.52);
      glVertex2f(.483,.58);
      glEnd();

      //S
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.505,.64);
      glVertex2f(.505,.58);
      glVertex2f(.508,.58);
      glVertex2f(.508,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.518,.64);
      glVertex2f(.505,.64);
      glVertex2f(.505,.63);
      glVertex2f(.518,.63);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.518,.58);
      glVertex2f(.505,.58);
      glVertex2f(.505,.57);
      glVertex2f(.518,.57);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.518,.58);
      glVertex2f(.515,.58);
      glVertex2f(.515,.52);
      glVertex2f(.518,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.518,.53);
      glVertex2f(.505,.53);
      glVertex2f(.505,.52);
      glVertex2f(.518,.52);
      glEnd();

      //"T"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.520,.64);
      glVertex2f(.520,.63);
      glVertex2f(.540,.63);
      glVertex2f(.540,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.528,.64);
      glVertex2f(.528,.52);
      glVertex2f(.532,.52);
      glVertex2f(.532,.64);
      glEnd();

      //"A"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.545,.64);
      glVertex2f(.542,.64);
      glVertex2f(.537,.52);
      glVertex2f(.540,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.548,.64);
      glVertex2f(.545,.64);
      glVertex2f(.549,.52);
      glVertex2f(.552,.52);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.539,.58);
      glVertex2f(.539,.57);
      glVertex2f(.550,.57);
      glVertex2f(.550,.58);
      glEnd();

      //"T"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.553,.64);
      glVertex2f(.553,.63);
      glVertex2f(.573,.63);
      glVertex2f(.573,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.561,.64);
      glVertex2f(.561,.52);
      glVertex2f(.565,.52);
      glVertex2f(.565,.64);
      glEnd();

      //"I"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.575,.64);
      glVertex2f(.575,.63);
      glVertex2f(.585,.63);
      glVertex2f(.585,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.579,.64);
      glVertex2f(.579,.52);
      glVertex2f(.581,.52);
      glVertex2f(.581,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.575,.53);
      glVertex2f(.575,.52);
      glVertex2f(.585,.52);
      glVertex2f(.585,.53);
      glEnd();

      //"O"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.590,.64);
      glVertex2f(.590,.52);
      glVertex2f(.593,.52);
      glVertex2f(.593,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.605,.64);
      glVertex2f(.605,.52);
      glVertex2f(.608,.52);
      glVertex2f(.608,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.590,.64);
      glVertex2f(.590,.63);
      glVertex2f(.608,.63);
      glVertex2f(.608,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.590,.53);
      glVertex2f(.590,.52);
      glVertex2f(.608,.52);
      glVertex2f(.608,.53);
      glEnd();

      //"N"
      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.615,.64);
      glVertex2f(.615,.52);
      glVertex2f(.618,.52);
      glVertex2f(.618,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.630,.64);
      glVertex2f(.630,.52);
      glVertex2f(.633,.52);
      glVertex2f(.633,.64);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub( 0, 0, 0);
      glVertex2f(.615,.64);
      glVertex2f(.615,.62);
      glVertex2f(.633,.52);
      glVertex2f(.633,.54);
      glEnd();










//@#@#@#@#@#@#@#@#@#@#@##@#@#@#@#@#@#@#@#@#@#@##@#@#@#@#@#@#@#@#@##@#@#@#@#@#@#@##@#@#@##@#@#@#@#@#@#


//1st clouds.............
int i;
GLfloat x=-.2f;
GLfloat y=.9f;
GLfloat radius =.08f;//cloud1....
int triangleAmountc = 20;


  //GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

   x=-.2f;
    y=.8f;
    radius =.08f;//cloud2....
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }

    glEnd();

    x=-.3f;
    y=.8f;
    radius =.08f;//cloud3....
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    //2nd clouds...........

     x=.65f;
    y=.85f;
    radius =.07f;//cloud3...
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


  x=.6f;
    y=.93f;
    radius =.07f;//cloud2....
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();



  x=.58f;
    y=.85f;
    radius =.07f;//cloud1.....
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


//3rd clouds.............

     x=.88f;
    y=.87f;
    radius =.06f;//cloud1
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


     x=.93f;
    y=.94f;
    radius =.06f;//cloud2....
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

     x=.96f;
    y=.84f;
    radius =.06f;//cloud3........
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


  //extra clouds...........
  x=-.56f;
    y=.97f;
    radius =.06f;//cloud1....
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

  x=-.61f;
    y=.94f;
    radius =.065f;//cloud2...
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(153,195,228);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


    //trees1 lower...........

   glLineWidth(12);
    glBegin(GL_QUADS);
	glColor3ub(153, 77, 0);

	glVertex2f(-.8f, 0.1f);    // x, y
	glVertex2f(-0.77f, 0.1f);
	 glVertex2f(-.77,.4);
      glVertex2f(-.8,.4);
    glEnd();


    glBegin(GL_QUADS);//tree ground..
      glColor3ub(153, 77, 0);
      glVertex2f(-.8,.1);
      glVertex2f(-.84,.05);
      glVertex2f(-.74,.05);
      glVertex2f(-.77,.1);
      glEnd();


//tree Leaf.......
 x=-.85f;
    y=.4f;
    radius =.06f;//leaf-1..
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 179, 0);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();



 x=-.82f;//leaf0..
    y=.45f;
    radius =.06f;//leaf1
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 179, 0);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


  x=-.8f;//leaf1..
    y=.5;
    radius =.08f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=-.76f;//leaf2..
    y=.56f;
    radius =.07f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,179,0);
    glVertex2f(x, y); // center of circle
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

     x=-.73f;//leaf3..
    y=.59f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


      x=-.7f;//leaf4..
    y=.55f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,179,0);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


   x=-.68f;//leaf6..
    y=.54f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


     x=-.68f;//leaf7..
    y=.50f;
    radius =.05f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


     x=-.69f;//leaf8..
    y=.46f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

  x=-.69f;//leaf9..
    y=.42f;
    radius =.05f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51, 204, 51);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

     x=-.7f;//leaf10..
    y=.40f;
    radius =.06f;
    triangleAmount = 20;


    twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 179, 0);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();


  glBegin(GL_QUADS);//tree upper dal1...
      glColor3ub(153, 77, 0);
      glVertex2f(-.8,.4);
      glVertex2f(-.78,.4);
      glVertex2f(-.81,.46);
      glVertex2f(-.83,.42);
      glEnd();

glBegin(GL_QUADS);//tree upper dal2....
      glColor3ub(153, 77, 0);
      glVertex2f(-.78,.4);
      glVertex2f(-.77,.4);
      glVertex2f(-.75,.47);
      glVertex2f(-.78,.47);
      glEnd();


 glLineWidth(7.5);//tree uper dal3...
    glBegin(GL_LINES);
	glColor3ub(153, 77, 0);

	glVertex2f(-.77f, 0.4f);
	glVertex2f(-0.73f, 0.44f);
 glEnd();


//rain..............


glPushMatrix();
glTranslatef(0.0f,position, 0.0f);


glLineWidth(3);
	glBegin(GL_LINES);
	glColor3ub(204, 230, 255);

	//////////////////
	glVertex2f(-.95f, 0.99f);    // 1(xtra..)
	glVertex2f(-.99f, 0.9f);

    glVertex2f(-.75f, 0.99f);    // 1(xtra..)
	glVertex2f(-.79f, 0.9f);

    glVertex2f(-.55f, 0.99f);    // 1(xtra..)
	glVertex2f(-.59f, 0.9f);

	glVertex2f(-.35f, 0.99f);    // 1(xtra..)
	glVertex2f(-.39f, 0.9f);

	glVertex2f(-.15f, 0.99f);    // 1(xtra..)
	glVertex2f(-.19f, 0.9f);

	glVertex2f(.05f, 0.9f);    // 1(xtra..)
	glVertex2f(.09f, 0.99f);

	glVertex2f(.25f, 0.9f);    // 1(xtra..)
	glVertex2f(.29f, 0.99f);

	glVertex2f(.45f, 0.9f);    // 1(xtra..)
	glVertex2f(.49f, 0.99f);

	glVertex2f(.65f, 0.9f);    // 1(xtra..)
	glVertex2f(.69f, 0.99f);

	glVertex2f(.85f, 0.9f);    // 1(xtra..)
	glVertex2f(.89f, 0.99f);

	glVertex2f(-.9f, 0.75f);    // 1(xtra..)
	glVertex2f(-.95f, 0.66f);    // x, y


	glVertex2f(-.7f, 0.8f);    // 1
	glVertex2f(-.75f, 0.7f);    // x, y


	glVertex2f(-.5f, 0.8f);    // 2
	glVertex2f(-.55f, 0.7f);    // x, y


	glVertex2f(-.3f, 0.8f);    // 3
	glVertex2f(-.35f, 0.7f);    // x, y


	glVertex2f(-.1f, 0.8f);    // 4
	glVertex2f(-.15f, 0.7f);    // x, y


	glVertex2f(.1f, 0.8f);    // 5
	glVertex2f(.05f, 0.7f);    // x, y


	glVertex2f(.3f, 0.8f);    // 6
	glVertex2f(.25f, 0.7f);    // x, y


	glVertex2f(.5f, 0.8f);    // 7
	glVertex2f(.45f, 0.7f);    // x, y


	glVertex2f(.5f, 0.8f);    // 8
	glVertex2f(.45f, 0.7f);    // x, y


	glVertex2f(.7f, 0.8f);    // 9
	glVertex2f(.65f, 0.7f);    // x, y


	glVertex2f(.9, 0.8f);    // 10
	glVertex2f(.85f, 0.7f);    // x, y

	glVertex2f(1, 0.8f);    // 10(xtra....)
	glVertex2f(.95f, 0.7f);    // x, y


	glVertex2f(-.8f, 0.6f);    // 11
	glVertex2f(-.85f, 0.5f);    // x, y


	glVertex2f(-.6f, 0.6f);    // 12
	glVertex2f(-.65f, 0.5f);    // x, y


	glVertex2f(-.4f, 0.6f);    // 13
	glVertex2f(-.45f, 0.5f);    // x, y

	glVertex2f(-.2f, 0.6f);    // 14
	glVertex2f(-.25f, 0.5f);    // x, y


	glVertex2f(.0f, 0.6f);    // 15
	glVertex2f(-.05f, 0.5f);    // x, y


	glVertex2f(.2f, 0.6f);    // 16
	glVertex2f(.15f, 0.5f);    // x, y


	glVertex2f(.4f, 0.6f);    // 17
	glVertex2f(.35f, 0.5f);    // x, y


	glVertex2f(.6f, 0.6f);    // 18
	glVertex2f(.55f, 0.5f);    // x, y

	glVertex2f(.8f, 0.6f);    // 19
	glVertex2f(.75f, 0.5f);    // x, y


	glVertex2f(.95f, 0.6f);    // 20
	glVertex2f(.9f, 0.5f);    // x, y


	glVertex2f(-.9f, 0.4f);    // 21(xtra..)
	glVertex2f(-.95f, 0.3f);    // x, y


	glVertex2f(-.7f, 0.4f);    // 21
	glVertex2f(-.75f, 0.3f);    // x, y


	glVertex2f(-.5f, 0.4f);    // 22
    glVertex2f(-.55f, 0.3f);    // x, y


	glVertex2f(-.3f, 0.4f);    // 23
    glVertex2f(-.35f, 0.3f);    // x, y


	glVertex2f(-.1f, 0.4f);    // 24
    glVertex2f(-.15f, 0.3f);    // x, y


	glVertex2f(.1f, 0.4f);    // 25
    glVertex2f(.05f, 0.3f);    // x, y


	glVertex2f(.3f, 0.4f);    // 26
    glVertex2f(.25f, 0.3f);    // x, y




	glVertex2f(.5f, 0.4f);    // 27
    glVertex2f(.45f, 0.3f);    // x, y


	glVertex2f(.7f, 0.4f);    // 28
    glVertex2f(.65f, 0.3f);    // x, y


	glVertex2f(.9f, 0.4f);    // 29
    glVertex2f(.85f, 0.3f);    // x, y


	glVertex2f(1, 0.4f);    // 30(extra...)
    glVertex2f(.95f, 0.3f);    // x, y


	glVertex2f(-.8f, 0.2f);    // 31
    glVertex2f(-.85f, 0.1f);    // x, y


	glVertex2f(-.6f, 0.2f);    // 32
    glVertex2f(-.65f, 0.1f);    // x, y

	glVertex2f(-.4f, 0.2f);    // 33
    glVertex2f(-.45f, 0.1f);    // x, y

	glVertex2f(-.2f, 0.2f);    // 34
    glVertex2f(-.25f, 0.1f);    // x, y


	glVertex2f(.0f, 0.2f);    // 35
    glVertex2f(-.05f, 0.1f);    // x, y


	glVertex2f(.2f, 0.2f);    // 36
    glVertex2f(.15f, 0.1f);    // x, y


	glVertex2f(.4f, 0.2f);    // 37
    glVertex2f(.35f, 0.1f);    // x, y


	glVertex2f(.6f, 0.2f);    // 38
    glVertex2f(.55f, 0.1f);    // x, y


	glVertex2f(.8f, 0.2f);    // 39
    glVertex2f(.75f, 0.1f);    // x, y


	glVertex2f(.95f, 0.2f);    // 40
    glVertex2f(.90f, 0.1f);    // x, y


	glVertex2f(-.9f, 0.0f);    // 41(extra...)
    glVertex2f(-.95f, -0.1f);    // x, y


	glVertex2f(-.7f, 0.0f);    // 41
    glVertex2f(-.75f, -0.1f);    // x, y


	glVertex2f(-.5f, 0.0f);    // 42
    glVertex2f(-.55f,-0.1f);    // x, y


	glVertex2f(-.3f, 0.0f);    // 43
    glVertex2f(-.35f,-0.1f);    // x, y


	glVertex2f(-.1f, 0.0f);    // 44
    glVertex2f(-.15f,-0.1f);    // x, y


	glVertex2f(.1f, 0.0f);    // 45
    glVertex2f(.05f,-0.1f);    // x, y

	glVertex2f(.3f, 0.0f);    // 46
    glVertex2f(.25f,-0.1f);    // x, y


	glVertex2f(.5f, 0.0f);    // 47
    glVertex2f(.45f,-0.1f);    // x, y


	glVertex2f(.7f, 0.0f);    // 48
    glVertex2f(.65f,-0.1f);    // x, y

	glVertex2f(.9f, 0.0f);    // 49
    glVertex2f(.85f,-0.1f);    // x, y


	glVertex2f(1, 0.0f);    // 50
    glVertex2f(.95f,-0.1f);    // x, y


	glVertex2f(-.8f, -0.2f);    // 51
    glVertex2f(-.85f,-0.3f);    // x, y


	glVertex2f(-.6f, -0.2f);    // 52
    glVertex2f(-.65f,-0.3f);    // x, y


	glVertex2f(-.4f, -0.2f);    // 53
    glVertex2f(-.45f,-0.3f);    // x, y


	glVertex2f(-.2f, -0.2f);    // 54
    glVertex2f(-.25f,-0.3f);    // x, y



	glVertex2f(.0f, -0.2f);    // 55
    glVertex2f(-.05f,-0.3f);    // x, y


	glVertex2f(0.2f, -0.2f);    // 56
    glVertex2f(.15f,-0.3f);    // x, y


	glVertex2f(0.4f, -0.2f);    // 57
    glVertex2f(.35f,-0.3f);    // x, y

	glVertex2f(0.6f, -0.2f);    // 58
    glVertex2f(.55f,-0.3f);    // x, y


	glVertex2f(0.8f, -0.2f);    // 59
    glVertex2f(.75f,-0.3f);    // x, y


	glVertex2f(0.95f, -0.2f);    // 60
    glVertex2f(.90f,-0.3f);    // x, y

	glVertex2f(-0.9f, -0.5f);    // 61
    glVertex2f(-.95f,-0.6f);    // x, y


	glVertex2f(-0.7f, -0.5f);    // 62
    glVertex2f(-.75f,-0.6f);    // x, y


	glVertex2f(-0.5f, -0.5f);    // 63
    glVertex2f(-.55f,-0.6f);    // x, y


	glVertex2f(-0.3f, -0.5f);    // 64
    glVertex2f(-.35f,-0.6f);    // x, y


	glVertex2f(-0.1f, -0.5f);    // 65
    glVertex2f(-.15f,-0.6f);    // x, y


	glVertex2f(0.1f, -0.5f);    // 66
    glVertex2f(.05f,-0.6f);    // x, y



	glVertex2f(0.3f, -0.5f);    // 67
    glVertex2f(.25f,-0.6f);    // x, y


	glVertex2f(0.5f, -0.5f);    // 68
    glVertex2f(.45f,-0.6f);    // x, y



	glVertex2f(0.7f, -0.5f);    // 69
    glVertex2f(.65f,-0.6f);    // x, y


	glVertex2f(0.9f, -0.5f);    // 70
    glVertex2f(.85f,-0.6f);    // x, y

	glEnd();



glLoadIdentity();

glPopMatrix();



    //@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    // RAIL LINE
    glBegin(GL_QUADS);          //SURU
    glColor3ub(0,0,0);
    glVertex2f(-1,-.9);
    glVertex2f(-1,-.93);
    glVertex2f(1,-.93);
    glVertex2f(1,-.9);

    glVertex2f(-1,-.8);
    glVertex2f(-1,-.83);
    glVertex2f(1,-.83);
    glVertex2f(1,-.8);

    glVertex2f(-.95,-.83);
    glVertex2f(-.95,-.9);
    glVertex2f(-.9,-.9);
    glVertex2f(-.9,-.83);

    glVertex2f(-.75,-.83);
    glVertex2f(-.75,-.9);
    glVertex2f(-.7,-.9);
    glVertex2f(-.7,-.83);

    glVertex2f(-.55,-.83);
    glVertex2f(-.55,-.9);
    glVertex2f(-.5,-.9);
    glVertex2f(-.5,-.83);

    glVertex2f(-.35,-.83);
    glVertex2f(-.35,-.9);
    glVertex2f(-.3,-.9);
    glVertex2f(-.3,-.83);

    glVertex2f(-.15,-.83);
    glVertex2f(-.15,-.9);
    glVertex2f(-.1,-.9);
    glVertex2f(-.1,-.83);

    glVertex2f(.15,-.83);
    glVertex2f(.15,-.9);
    glVertex2f(.1,-.9);
    glVertex2f(.1,-.83);

     glVertex2f(.35,-.83);
    glVertex2f(.35,-.9);
    glVertex2f(.3,-.9);
    glVertex2f(.3,-.83);


    glVertex2f(.55,-.83);
    glVertex2f(.55,-.9);
    glVertex2f(.5,-.9);
    glVertex2f(.5,-.83);

    glVertex2f(.75,-.83);
    glVertex2f(.75,-.9);
    glVertex2f(.7,-.9);
    glVertex2f(.7,-.83);

    glVertex2f(.95,-.83);
    glVertex2f(.95,-.9);
    glVertex2f(.9,-.9);
    glVertex2f(.9,-.83);            //SESH


    // SECOND LINE
    glVertex2f(-1,-.6);             //SURU
    glVertex2f(-1,-.63);
    glVertex2f(1,-.63);
    glVertex2f(1,-.6);

    glVertex2f(-1,-.5);
    glVertex2f(-1,-.53);
    glVertex2f(1,-.53);
    glVertex2f(1,-.5);

    glVertex2f(-.95,-.53);
    glVertex2f(-.95,-.6);
    glVertex2f(-.9,-.6);
    glVertex2f(-.9,-.53);

    glVertex2f(-.75,-.53);
    glVertex2f(-.75,-.6);
    glVertex2f(-.7,-.6);
    glVertex2f(-.7,-.53);

    glVertex2f(-.55,-.53);
    glVertex2f(-.55,-.6);
    glVertex2f(-.5,-.6);
    glVertex2f(-.5,-.53);

    glVertex2f(-.35,-.53);
    glVertex2f(-.35,-.6);
    glVertex2f(-.3,-.6);
    glVertex2f(-.3,-.53);

    glVertex2f(-.15,-.53);
    glVertex2f(-.15,-.6);
    glVertex2f(-.1,-.6);
    glVertex2f(-.1,-.53);

    glVertex2f(.15,-.53);
    glVertex2f(.15,-.6);
    glVertex2f(.1,-.6);
    glVertex2f(.1,-.53);

     glVertex2f(.35,-.53);
    glVertex2f(.35,-.6);
    glVertex2f(.3,-.6);
    glVertex2f(.3,-.53);


    glVertex2f(.55,-.53);
    glVertex2f(.55,-.6);
    glVertex2f(.5,-.6);
    glVertex2f(.5,-.53);

    glVertex2f(.75,-.53);
    glVertex2f(.75,-.6);
    glVertex2f(.7,-.6);
    glVertex2f(.7,-.53);

    glVertex2f(.95,-.53);
    glVertex2f(.95,-.6);
    glVertex2f(.9,-.6);
    glVertex2f(.9,-.53);
    glEnd();


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

    //TRAIN NO 1
    //BOGI #1
    glLoadIdentity();           //SURU
    glPushMatrix();
    glTranslatef(position,0.0f,0.0f);

    glBegin(GL_QUADS);
    glColor3ub(0,53,102);

    //BOGI #1

    glVertex2f(-.6,-.67);
    glVertex2f(-.6,-.9);
    glVertex2f(-.4,-.9);
    glVertex2f(-.4,-.67);
// BOGI #2


    glColor3ub(0, 53, 102);
    glVertex2f(-.38,-.68);
    glVertex2f(-.38,-.9);
    glVertex2f(0,-.9);
    glVertex2f(0,-.68);

    //BOGI #3
    glVertex2f(.02,-.68);
    glVertex2f(.02,-.9);
    glVertex2f(.4,-.9);
    glVertex2f(.4,-.68);

    // BOGI #4
    glVertex2f(.42,-.68);
    glVertex2f(.42,-.9);
    glVertex2f(.8,-.9);
    glVertex2f(.8,-.68);                 //SESH
    glEnd();

    /*//SMOKE

    glTranslatef(0.0f,position3,0.0f);

    GLfloat xdh1=-.7f; GLfloat ydh1=-.9f; GLfloat radiusd1 =.025f;
	int triangleAmountd1 = 20;
	//GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
    glVertex2f(xdh1, ydh1);
    int idh1;
    for(idh1 = 0; idh1 <= triangleAmountd1;idh1++)
        {
        glVertex2f(xdh1 + (radiusd1 * cos(idh1 *  twicePi / triangleAmountd1)),
                   ydh1 + (radiusd1 * sin(idh1 * twicePi / triangleAmountd1)));
		}
	glEnd();*/

	glLoadIdentity();

	glTranslatef(position,0.0f,0.0f);
    glBegin(GL_QUADS);
    //FRONT
    glColor3ub(0, 38, 77);
    glVertex2f(-.75,-.73);
    glVertex2f(-.6,-.73);
    glVertex2f(-.6,-.9);
    glVertex2f(-.75,-.9);

    glColor3ub(38,38,38);
    glVertex2f(-.72,-.75);
    glVertex2f(-.68,-.75);
    glVertex2f(-.68,-.7);
    glVertex2f(-.72,-.7);

    glColor3ub(38,38,38);
    glVertex2f(-.67,-.7);
    glVertex2f(-.67,-.66);
    glVertex2f(-.73,-.66);
    glVertex2f(-.73,-.7);

    glColor3ub(26,26,26);
    glVertex2f(-.65,-.75);
    glVertex2f(-.62,-.75);
    glVertex2f(-.62,-.72);
    glVertex2f(-.65,-.72);


//HEADLIGHT

    glColor3ub(255,255,0);
    glVertex2f(-.75,-.85);
    glVertex2f(-.77,-.85);
    glVertex2f(-.77,-.87);
    glVertex2f(-.75,-.87);


//TRAIN 1 ER BOGI CONNECTOR
    //BOGI 1-2
    glColor3ub(0,0,0);
    glVertex2f(-.4,-.87);
    glVertex2f(-.4,-.89);
    glVertex2f(-.38,-.89);
    glVertex2f(-.38,-.87);

    //BOGI 2-3
    glVertex2f(0,-.87);
    glVertex2f(0,-.89);
    glVertex2f(.02,-.89);
    glVertex2f(.02,-.87);

    //BOGI 3-4
    glVertex2f(.4,-.87);
    glVertex2f(.4,-.89);
    glVertex2f(.42,-.89);
    glVertex2f(.42,-.87);


    //TRAIN ER MAJHKHAN
    glColor3ub(255, 255, 128);            //SURU
    glVertex2f(-.6,-.75);
    glVertex2f(-.6,-.82);
    glVertex2f(-.4,-.82);
    glVertex2f(-.4,-.75);

    glColor3ub(255, 255, 128);
    glVertex2f(-.38,-.74);
    glVertex2f(-.38,-.81);
    glVertex2f(0,-.81);
    glVertex2f(0,-.74);

    glColor3ub(255, 255, 128);
    glVertex2f(.02,-.74);
    glVertex2f(.02,-.81);
    glVertex2f(.4,-.81);
    glVertex2f(.4,-.74);

    glColor3ub(255, 255, 128);
    glVertex2f(.42,-.74);
    glVertex2f(.42,-.81);
    glVertex2f(.8,-.81);
    glVertex2f(.8,-.74);                 //SESH

    //TRAIN 1 ER WINDOW

    //BOGI 1

    glColor3ub(217, 217, 217);
    glVertex2f(-.55,-.8);
    glVertex2f(-.42,-.8);
    glVertex2f(-.42,-.69);
    glVertex2f(-.55,-.69);

    glVertex2f(-.59,-.85);
    glVertex2f(-.56,-.85);
    glVertex2f(-.56,-.7);
    glVertex2f(-.59,-.7);              //SESH

    //BOGI 2
    //WINDOW
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(-.33,-.8);
    glVertex2f(-.27,-.8);
    glVertex2f(-.27,-.75);
    glVertex2f(-.33,-.75);

   // glColor3ub(255,255,255);
    glVertex2f(-.2,-.8);
    glVertex2f(-.26,-.8);
    glVertex2f(-.26,-.75);
    glVertex2f(-.2,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(-.13,-.8);
    glVertex2f(-.19,-.8);
    glVertex2f(-.19,-.75);
    glVertex2f(-.13,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(-.12,-.8);
    glVertex2f(-.06,-.8);
    glVertex2f(-.06,-.75);
    glVertex2f(-.12,-.75);                  //SESH


    // BOGI 3
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.07,-.8);
    glVertex2f(.13,-.8);
    glVertex2f(.13,-.75);
    glVertex2f(.07,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.14,-.8);
    glVertex2f(.2,-.8);
    glVertex2f(.2,-.75);
    glVertex2f(.14,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.21,-.8);
    glVertex2f(.27,-.8);
    glVertex2f(.27,-.75);
    glVertex2f(.21,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.28,-.8);
    glVertex2f(.34,-.8);
    glVertex2f(.34,-.75);
    glVertex2f(.28,-.75);                  //SESH

    // BOGI 4
    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.47,-.8);
    glVertex2f(.53,-.8);
    glVertex2f(.53,-.75);
    glVertex2f(.47,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.54,-.8);
    glVertex2f(.6,-.8);
    glVertex2f(.6,-.75);
    glVertex2f(.54,-.75);

    //glColor3ub(255,255,255);
    glVertex2f(.61,-.8);
    glVertex2f(.67,-.8);
    glVertex2f(.67,-.75);
    glVertex2f(.61,-.75);

   // glColor3ub(255,255,255);
    glVertex2f(.68,-.8);
    glVertex2f(.74,-.8);
    glVertex2f(.74,-.75);
    glVertex2f(.68,-.75);                  //SESH


    //DOOR BOGI 2

    //glColor3ub(255,255,255);            //SURU
    glVertex2f(-.37,-.86);
    glVertex2f(-.34,-.86);
    glVertex2f(-.34,-.72);
    glVertex2f(-.37,-.72);

    //glColor3ub(255,255,255);
    glVertex2f(-.04,-.86);
    glVertex2f(-.01,-.86);
    glVertex2f(-.01,-.72);
    glVertex2f(-.04,-.72);              //SESH


     //DOOR BOGI 3

    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.06,-.86);
    glVertex2f(.03,-.86);
    glVertex2f(.03,-.72);
    glVertex2f(.06,-.72);

   // glColor3ub(255,255,255);
    glVertex2f(.39,-.86);
    glVertex2f(.36,-.86);
    glVertex2f(.36,-.72);
    glVertex2f(.39,-.72);              //SESH

     //DOOR BOGI 4

    //glColor3ub(255,255,255);            //SURU
    glVertex2f(.46,-.86);
    glVertex2f(.43,-.86);
    glVertex2f(.43,-.72);
    glVertex2f(.46,-.72);

    //glColor3ub(255,255,255);
    glVertex2f(.79,-.86);
    glVertex2f(.76,-.86);
    glVertex2f(.76,-.72);
    glVertex2f(.79,-.72);              //SESH

    glEnd();


    //TRAIN 1 ER WINDOW ER PARTITION
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glLineWidth(3);
    // BOGI W1

    glVertex2f(-.51,-.8);
    glVertex2f(-.51,-.69);

    glVertex2f(-.46,-.8);
    glVertex2f(-.46,-.69);

    glVertex2f(-.75,-.8);
    glVertex2f(-.6,-.8);

    glVertex2f(-.75,-.85);
    glVertex2f(-.6,-.85);

    glVertex2f(-.59,-.84);
    glVertex2f(-.56,-.84);

    //BOGI W2
    glVertex2f(-.3,-.8);
    glVertex2f(-.3,-.75);

    glVertex2f(-.23,-.8);
    glVertex2f(-.23,-.75);

    glVertex2f(-.16,-.8);
    glVertex2f(-.16,-.75);

    glVertex2f(-.09,-.8);
    glVertex2f(-.09,-.75);

    glVertex2f(-.38,-.7);
    glVertex2f(0,-.7);

    glVertex2f(-.37,-.85);
    glVertex2f(-.34,-.85);

    glVertex2f(-.04,-.85);
    glVertex2f(-.01,-.85);

    // BOGI W3
    glVertex2f(.1,-.8);
    glVertex2f(.1,-.75);

    glVertex2f(.17,-.8);
    glVertex2f(.17,-.75);

    glVertex2f(.24,-.8);
    glVertex2f(.24,-.75);

    glVertex2f(.31,-.8);
    glVertex2f(.31,-.75);

    glVertex2f(.02,-.7);
    glVertex2f(.4,-.7);

    glVertex2f(.06,-.85);
    glVertex2f(.03,-.85);

    glVertex2f(.39,-.85);
    glVertex2f(.36,-.85);

    //BOGI W4
    glVertex2f(.5,-.8);
    glVertex2f(.5,-.75);

    glVertex2f(.57,-.8);
    glVertex2f(.57,-.75);

    glVertex2f(.64,-.8);
    glVertex2f(.64,-.75);

    glVertex2f(.71,-.8);
    glVertex2f(.71,-.75);

    glVertex2f(.42,-.7);
    glVertex2f(.8,-.7);

    glVertex2f(.46,-.85);
    glVertex2f(.43,-.85);

    glVertex2f(.79,-.85);
    glVertex2f(.76,-.85);

    glEnd();


    //TRAIN ER WHEEL

    //WHEEL 1


    GLfloat x1=-.72f; GLfloat y1=-.9f; GLfloat radius1 =.025f;
	int triangleAmount1 = 20;
	//GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x1, y1);
    int i1;
    for(i1 = 0; i1 <= triangleAmount1;i1++)
        {
        glVertex2f(x1 + (radius1 * cos(i1 *  twicePi / triangleAmount1)),
                   y1 + (radius1 * sin(i1 * twicePi / triangleAmount1)));
		}
	glEnd();

	//WHEEL 2
    GLfloat x2=-.65f; GLfloat y2=-.9f; GLfloat radius2 =.025f;
	int triangleAmount2 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x2, y2);
    int i2;
    for(i2 = 0; i2 <= triangleAmount2;i2++)
        {
        glVertex2f(x2 + (radius2 * cos(i2 *  twicePi / triangleAmount2)),
                   y2 + (radius2 * sin(i2 * twicePi / triangleAmount2)));
		}
	glEnd();

	//WHEEL 3
    GLfloat x3=-.55f; GLfloat y3=-.9f; GLfloat radius3 =.02f;
	int triangleAmount3 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x3, y3);
    int i3;
    for(i3 = 0; i3 <= triangleAmount3;i3++)
        {
        glVertex2f(x3 + (radius3 * cos(i3 *  twicePi / triangleAmount3)),
                   y3 + (radius3 * sin(i3 * twicePi / triangleAmount3)));
		}
	glEnd();

	//WHEEL 4
    GLfloat x4=-.45f; GLfloat y4=-.9f; GLfloat radius4 =.02f;
	int triangleAmount4 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x4, y4);
    int i4;
    for(i4 = 0; i4 <= triangleAmount4;i4++)
        {
        glVertex2f(x4 + (radius4 * cos(i4 *  twicePi / triangleAmount4)),
                   y4 + (radius4 * sin(i4 * twicePi / triangleAmount4)));
		}
	glEnd();

	//WHEEL 5
    GLfloat x5=-.35f; GLfloat y5=-.9f; GLfloat radius5 =.02f;
	int triangleAmount5 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x5, y5);
    int i5;
    for(i5 = 0; i5 <= triangleAmount5;i5++)
        {
        glVertex2f(x5 + (radius5 * cos(i5 *  twicePi / triangleAmount5)),
                   y5 + (radius5 * sin(i5 * twicePi / triangleAmount5)));
		}
	glEnd();

	//WHEEL 6
    GLfloat x6=-.25f; GLfloat y6=-.9f; GLfloat radius6 =.02f;
	int triangleAmount6 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x6, y6);
    int i6;
    for(i6= 0; i6 <= triangleAmount6;i6++)
        {
        glVertex2f(x6 + (radius6 * cos(i6 *  twicePi / triangleAmount6)),
                   y6 + (radius6 * sin(i6 * twicePi / triangleAmount6)));
		}
	glEnd();

	//WHEEL 7
    GLfloat x7=-.15f; GLfloat y7=-.9f; GLfloat radius7 =.02f;
	int triangleAmount7 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x7, y7);
    int i7;
    for(i7 = 0; i7 <= triangleAmount7;i7++)
        {
        glVertex2f(x7 + (radius7 * cos(i7 *  twicePi / triangleAmount7)),
                   y7 + (radius7 * sin(i7 * twicePi / triangleAmount7)));
		}
	glEnd();

	//WHEEL 8
    GLfloat x8=-.05f; GLfloat y8=-.9f; GLfloat radius8 =.02f;
	int triangleAmount8 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x8, y8);
    int i8;
    for(i8 = 0; i8 <= triangleAmount8;i8++)
        {
        glVertex2f(x8 + (radius8 * cos(i8 *  twicePi / triangleAmount8)),
                   y8 + (radius7 * sin(i8 * twicePi / triangleAmount8)));
		}
	glEnd();

	//WHEEL 9
    GLfloat x9=.05f; GLfloat y9=-.9f; GLfloat radius9 =.02f;
	int triangleAmount9 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x9, y9);
    int i9;
    for(i9 = 0; i9 <= triangleAmount9;i9++)
        {
        glVertex2f(x9 + (radius9 * cos(i9 *  twicePi / triangleAmount9)),
                   y9 + (radius9 * sin(i9 * twicePi / triangleAmount9)));
		}
	glEnd();

	//WHEEL 10
    GLfloat x10=.15f; GLfloat y10=-.9f; GLfloat radius10 =.02f;
	int triangleAmount10 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x10, y10);
    int i10;
    for(i10= 0; i10 <= triangleAmount10;i10++)
        {
        glVertex2f(x10 + (radius10 * cos(i10 *  twicePi / triangleAmount10)),
                   y10 + (radius10 * sin(i10 * twicePi / triangleAmount10)));
		}
	glEnd();

	//WHEEL 11
    GLfloat x11=.25f; GLfloat y11=-.9f; GLfloat radius11 =.02f;
	int triangleAmount11 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x11, y11);
    int i11;
    for(i11 = 0; i11 <= triangleAmount11;i11++)
        {
        glVertex2f(x11 + (radius11 * cos(i11 *  twicePi / triangleAmount11)),
                   y11 + (radius11 * sin(i11* twicePi / triangleAmount11)));
		}
	glEnd();

	//WHEEL 12
    GLfloat x12=.35f; GLfloat y12=-.9f; GLfloat radius12 =.02f;
	int triangleAmount12 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x12, y12);
    int i12;
    for(i12 = 0; i12 <= triangleAmount12;i12++)
        {
        glVertex2f(x12 + (radius12 * cos(i12 *  twicePi / triangleAmount12)),
                   y12 + (radius12* sin(i12 * twicePi / triangleAmount12)));
		}
	glEnd();

	//WHEEL 13
    GLfloat x13=.45f; GLfloat y13=-.9f; GLfloat radius13 =.02f;
	int triangleAmount13 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x13, y13);
    int i13;
    for(i13 = 0; i13 <= triangleAmount13;i13++)
        {
        glVertex2f(x13 + (radius13 * cos(i13 *  twicePi / triangleAmount13)),
                   y13 + (radius13* sin(i13 * twicePi / triangleAmount13)));
		}
	glEnd();

	//WHEEL 14
    GLfloat x14=.55f; GLfloat y14=-.9f; GLfloat radius14 =.02f;
	int triangleAmount14 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x14, y14);
    int i14;
    for(i14 = 0; i14 <= triangleAmount14;i14++)
        {
        glVertex2f(x14 + (radius14 * cos(i14 *  twicePi / triangleAmount14)),
                   y14 + (radius14* sin(i14 * twicePi / triangleAmount14)));
		}
	glEnd();

	//WHEEL 15
    GLfloat x15=.65f; GLfloat y15=-.9f; GLfloat radius15 =.02f;
	int triangleAmount15 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x15, y15);
    int i15;
    for(i15 = 0; i15 <= triangleAmount15;i15++)
        {
        glVertex2f(x15 + (radius15 * cos(i15 *  twicePi / triangleAmount15)),
                   y15 + (radius15* sin(i15 * twicePi / triangleAmount15)));
		}
	glEnd();

	//WHEEL 16
    GLfloat x16=.75f; GLfloat y16=-.9f; GLfloat radius16=.02f;
	int triangleAmount16 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(x16, y16);
    int i16;
    for(i16 = 0; i16 <= triangleAmount16;i16++)
        {
        glVertex2f(x16 + (radius16 * cos(i16* twicePi / triangleAmount16)),
                   y16 + (radius16* sin(i16 * twicePi / triangleAmount16)));
		}
	glEnd();

    glPopMatrix();



//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

    // TRAIN NO 2
    glLoadIdentity();                           //SURU
    glPushMatrix();
    glTranslatef(position2,0.0f,0.0f);

    //BOGI 1
    glBegin(GL_QUADS);
    glColor3ub(0, 53, 102);
    glVertex2f(.6,-.37);
    glVertex2f(.6,-.6);
    glVertex2f(.4,-.6);
    glVertex2f(.4,-.37);

    //BOGI 2
    glVertex2f(.38,-.38);
    glVertex2f(.38,-.6);
    glVertex2f(0,-.6);
    glVertex2f(0,-.38);

    //BOGI 3
    glVertex2f(-.02,-.38);
    glVertex2f(-.02,-.6);
    glVertex2f(-.4,-.6);
    glVertex2f(-.4,-.38);

    //BOGI 4
    glVertex2f(-.42,-.38);
    glVertex2f(-.42,-.6);
    glVertex2f(-.8,-.6);
    glVertex2f(-.8,-.38);

    glEnd();



    //SMOKE




    //glPushMatrix();
	glTranslatef(0.0f,position3,0.0f);
    //1
    GLfloat s1=.7f; GLfloat d1=-.38f; GLfloat radiusdh1 =.03f;
	int triangleAmountdh1 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s1, d1);
    int dh1;
    for(dh1 = 0; dh1 <= triangleAmountdh1;dh1++)
        {
        glVertex2f(s1 + (radiusdh1 * cos(dh1 *  twicePi / triangleAmountdh1)),
                   d1 + (radiusdh1 * sin(dh1 * twicePi / triangleAmountdh1)));
		}
	glEnd();


	//2
	 GLfloat s2=.7f; GLfloat d2=-.45f; GLfloat radiusdh2 =.03f;
	int triangleAmountdh2 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s2, d2);
    int dh2;
    for(dh2 = 0; dh2 <= triangleAmountdh2;dh2++)
        {
        glVertex2f(s2 + (radiusdh2 * cos(dh2 *  twicePi / triangleAmountdh2)),
                   d2 + (radiusdh2 * sin(dh2 * twicePi / triangleAmountdh2)));
		}
	glEnd();


	//3
	 GLfloat s3=.7f; GLfloat d3=-.52f; GLfloat radiusdh3 =.03f;
	int triangleAmountdh3 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(204,204,204);
    glVertex2f(s3, d3);
    int dh3;
    for(dh3 = 0; dh3 <= triangleAmountdh3;dh3++)
        {
        glVertex2f(s3 + (radiusdh3 * cos(dh3 *  twicePi / triangleAmountdh3)),
                   d3 + (radiusdh3 * sin(dh3 * twicePi / triangleAmountdh3)));
		}
	glEnd();

	//glPopMatrix();
	glLoadIdentity();



	glTranslatef(position2,0.0f,0.0f);
    //FRONT
    glBegin(GL_QUADS);
    glColor3ub(0, 38, 77);
    glVertex2f(.6,-.43);
    glVertex2f(.75,-.43);
    glVertex2f(.75,-.6);
    glVertex2f(.6,-.6);


    glColor3ub(38,38,38);
    glVertex2f(.73,-.45);
    glVertex2f(.67,-.45);
    glVertex2f(.67,-.38);
    glVertex2f(.73,-.38);

    glColor3ub(26,26,26);
    glVertex2f(.73,-.38);
    glVertex2f(.67,-.38);
    glVertex2f(.67,-.35);
    glVertex2f(.73,-.35);

    glColor3ub(26,26,26);
    glVertex2f(.65,-.45);
    glVertex2f(.62,-.45);
    glVertex2f(.62,-.42);
    glVertex2f(.65,-.42);              //SESH

    //HEADLIGHT
    glColor3ub(255,255,0);
    glVertex2f(.75,-.55);
    glVertex2f(.77,-.55);
    glVertex2f(.77,-.57);
    glVertex2f(.75,-.57);

    //TRAIN 2 ER BOGI CONNECTOR
    //BOGI 1-2
    glColor3ub(0,0,0);
    glVertex2f(.4,-.57);
    glVertex2f(.4,-.59);
    glVertex2f(.38,-.59);
    glVertex2f(.38,-.57);

    //BOGI 2-3
    glVertex2f(0,-.57);
    glVertex2f(0,-.59);
    glVertex2f(-.02,-.59);
    glVertex2f(-.02,-.57);

    //BOGI 3-4
    glVertex2f(-.4,-.57);
    glVertex2f(-.4,-.59);
    glVertex2f(-.42,-.59);
    glVertex2f(-.42,-.57);


    //TRAIN ER MAJHKHAN
    glColor3ub(255, 255, 128);            //SURU
    glVertex2f(-.8,-.51);
    glVertex2f(-.8,-.44);
    glVertex2f(-.42,-.44);
    glVertex2f(-.42,-.51);

   // glColor3ub(77,77,77);
    glVertex2f(-.4,-.51);
    glVertex2f(-.4,-.44);
    glVertex2f(-.02,-.44);
    glVertex2f(-.02,-.51);

    //glColor3ub(77,77,77);
    glVertex2f(.38,-.51);
    glVertex2f(.38,-.44);
    glVertex2f(0,-.44);
    glVertex2f(0,-.51);

    //glColor3ub(77,77,77);
    glVertex2f(.6,-.51);
    glVertex2f(.6,-.44);
    glVertex2f(.4,-.44);
    glVertex2f(.4,-.51);                 //SESH

    // TRAIN 2 ER WINDOW

    //BOGI 1


    glColor3ub(217, 217, 217);
    glVertex2f(.55,-.5);
    glVertex2f(.42,-.5);
    glVertex2f(.42,-.39);
    glVertex2f(.55,-.39);

    //DOOR
    glColor3ub(217, 217, 217);
    glVertex2f(.59,-.56);
    glVertex2f(.56,-.56);
    glVertex2f(.56,-.42);
    glVertex2f(.59,-.42);                           //SESH


    //BOGI 2
    glColor3ub(217, 217, 217);            //SURU
    glVertex2f(.33,-.5);
    glVertex2f(.27,-.5);
    glVertex2f(.27,-.45);
    glVertex2f(.33,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(.26,-.5);
    glVertex2f(.2,-.5);
    glVertex2f(.2,-.45);
    glVertex2f(.26,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(.19,-.5);
    glVertex2f(.13,-.5);
    glVertex2f(.13,-.45);
    glVertex2f(.19,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(.12,-.5);
    glVertex2f(.06,-.5);
    glVertex2f(.06,-.45);
    glVertex2f(.12,-.45);                  //SESH


    //DOOR

    glColor3ub(217, 217, 217);              //SURU
    glVertex2f(.37,-.56);
    glVertex2f(.34,-.56);
    glVertex2f(.34,-.42);
    glVertex2f(.37,-.42);

    glColor3ub(217, 217, 217);
    glVertex2f(.01,-.56);
    glVertex2f(.04,-.56);
    glVertex2f(.04,-.42);
    glVertex2f(.01,-.42);                       //SHESH

    // BOGI 3
    glColor3ub(217, 217, 217);            //SURU
    glVertex2f(-.07,-.5);
    glVertex2f(-.13,-.5);
    glVertex2f(-.13,-.45);
    glVertex2f(-.07,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.14,-.5);
    glVertex2f(-.2,-.5);
    glVertex2f(-.2,-.45);
    glVertex2f(-.14,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.21,-.5);
    glVertex2f(-.27,-.5);
    glVertex2f(-.27,-.45);
    glVertex2f(-.21,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.28,-.5);
    glVertex2f(-.34,-.5);
    glVertex2f(-.34,-.45);
    glVertex2f(-.28,-.45);                  //SESH


    //DOOR

    glColor3ub(217, 217, 217);              //SURU
    glVertex2f(-.03,-.56);
    glVertex2f(-.06,-.56);
    glVertex2f(-.06,-.42);
    glVertex2f(-.03,-.42);

    glColor3ub(217, 217, 217);
    glVertex2f(-.39,-.56);
    glVertex2f(-.36,-.56);
    glVertex2f(-.36,-.42);
    glVertex2f(-.39,-.42);                       //SHESH


    // BOGI 4
    glColor3ub(217, 217, 217);            //SURU
    glVertex2f(-.47,-.5);
    glVertex2f(-.53,-.5);
    glVertex2f(-.53,-.45);
    glVertex2f(-.47,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.54,-.5);
    glVertex2f(-.6,-.5);
    glVertex2f(-.6,-.45);
    glVertex2f(-.54,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.61,-.5);
    glVertex2f(-.67,-.5);
    glVertex2f(-.67,-.45);
    glVertex2f(-.61,-.45);

    glColor3ub(217, 217, 217);
    glVertex2f(-.68,-.5);
    glVertex2f(-.74,-.5);
    glVertex2f(-.74,-.45);
    glVertex2f(-.68,-.45);                      //SESH


    //DOOR

    glColor3ub(217, 217, 217);              //SURU
    glVertex2f(-.43,-.56);
    glVertex2f(-.46,-.56);
    glVertex2f(-.46,-.42);
    glVertex2f(-.43,-.42);

    glColor3ub(217, 217, 217);
    glVertex2f(-.79,-.56);
    glVertex2f(-.76,-.56);
    glVertex2f(-.76,-.42);
    glVertex2f(-.79,-.42);                       //SHESH



    glEnd();

    //TRAIN 2 ER WINDOW ER PARTITION
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    glLineWidth(3);
    // BOGI W1

    glVertex2f(.51,-.5);
    glVertex2f(.51,-.39);

    glVertex2f(.46,-.5);
    glVertex2f(.46,-.39);

    glVertex2f(.6,-.5);
    glVertex2f(.75,-.5);

    glVertex2f(.6,-.55);
    glVertex2f(.75,-.55);

    glVertex2f(.59,-.55);
    glVertex2f(.56,-.55);

    //BOGI W2
    glVertex2f(.3,-.5);
    glVertex2f(.3,-.45);

    glVertex2f(.23,-.5);
    glVertex2f(.23,-.45);

    glVertex2f(.16,-.5);
    glVertex2f(.16,-.45);

    glVertex2f(.09,-.5);
    glVertex2f(.09,-.45);


    glVertex2f(.38,-.4);
    glVertex2f(0,-.4);

    glVertex2f(.37,-.55);
    glVertex2f(.34,-.55);

    glVertex2f(.01,-.55);
    glVertex2f(.04,-.55);

    // BOGI W3
    glVertex2f(-.1,-.5);
    glVertex2f(-.1,-.45);

    glVertex2f(-.17,-.5);
    glVertex2f(-.17,-.45);

    glVertex2f(-.24,-.5);
    glVertex2f(-.24,-.45);

    glVertex2f(-.31,-.5);
    glVertex2f(-.31,-.45);

    glVertex2f(-.02,-.4);
    glVertex2f(-.4,-.4);

    glVertex2f(-.03,-.55);
    glVertex2f(-.06,-.55);

    glVertex2f(-.39,-.55);
    glVertex2f(-.36,-.55);

    //BOGI W4
    glVertex2f(-.5,-.5);
    glVertex2f(-.5,-.45);

    glVertex2f(-.57,-.5);
    glVertex2f(-.57,-.45);

    glVertex2f(-.64,-.5);
    glVertex2f(-.64,-.45);

    glVertex2f(-.71,-.5);
    glVertex2f(-.71,-.45);

    glVertex2f(-.42,-.4);
    glVertex2f(-.8,-.4);

    glVertex2f(-.43,-.55);
    glVertex2f(-.46,-.55);

     glVertex2f(-.76,-.55);
    glVertex2f(-.79,-.55);


    glEnd();

    //TRAIN 2 ER WHEEL

    //WHEEL 1


    GLfloat a1=-.75f; GLfloat b1=-.6f; GLfloat radiuss1 =.02f;
	int triangleAmounts1 = 20;
	//GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a1, b1);
    int j1;
    for(j1 = 0; j1 <= triangleAmounts1;j1++)
        {
        glVertex2f(a1 + (radiuss1 * cos(j1 *  twicePi / triangleAmounts1)),
                   b1 + (radiuss1 * sin(j1 * twicePi / triangleAmounts1)));
		}
	glEnd();

	//WHEEL 2
    GLfloat a2=-.65f; GLfloat b2=-.6f; GLfloat radiuss2 =.02f;
	int triangleAmounts2 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a2, b2);
    int j2;
    for(j2 = 0; j2 <= triangleAmounts2;j2++)
        {
        glVertex2f(a2 + (radiuss2 * cos(j2 *  twicePi / triangleAmounts2)),
                   b2 + (radiuss2 * sin(j2 * twicePi / triangleAmounts2)));
		}
	glEnd();

	//WHEEL 3
    GLfloat a3=-.55f; GLfloat b3=-.6f; GLfloat radiuss3 =.02f;
	int triangleAmounts3 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a3, b3);
    int j3;
    for(j3 = 0; j3 <= triangleAmounts3;j3++)
        {
        glVertex2f(a3 + (radiuss3 * cos(j3 *  twicePi / triangleAmounts3)),
                   b3 + (radiuss3 * sin(j3 * twicePi / triangleAmounts3)));
		}
	glEnd();

	//WHEEL 4
    GLfloat a4=-.45f; GLfloat b4=-.6f; GLfloat radiuss4 =.02f;
	int triangleAmounts4 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a4, b4);
    int j4;
    for(j4 = 0; j4 <= triangleAmounts4;j4++)
        {
        glVertex2f(a4 + (radiuss4 * cos(j4 *  twicePi / triangleAmounts4)),
                   b4 + (radiuss4 * sin(j4 * twicePi / triangleAmounts4)));
		}
	glEnd();

	//WHEEL 5
    GLfloat a5=-.35f; GLfloat b5=-.6f; GLfloat radiuss5 =.02f;
	int triangleAmounts5 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a5, b5);
    int j5;
    for(j5 = 0; j5 <= triangleAmounts5;j5++)
        {
        glVertex2f(a5 + (radiuss5 * cos(j5 *  twicePi / triangleAmounts5)),
                   b5 + (radiuss5 * sin(j5 * twicePi / triangleAmounts5)));
		}
	glEnd();

	//WHEEL 6
    GLfloat a6=-.25f; GLfloat b6=-.6f; GLfloat radiuss6 =.02f;
	int triangleAmounts6 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a6, b6);
    int j6;
    for(j6= 0; j6 <= triangleAmounts6;j6++)
        {
        glVertex2f(a6 + (radiuss6 * cos(j6 *  twicePi / triangleAmounts6)),
                   b6 + (radiuss6 * sin(j6 * twicePi / triangleAmounts6)));
		}
	glEnd();

	//WHEEL 7
    GLfloat a7=-.15f; GLfloat b7=-.6f; GLfloat radiuss7 =.02f;
	int triangleAmounts7 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a7, b7);
    int j7;
    for(j7 = 0; j7 <= triangleAmounts7;j7++)
        {
        glVertex2f(a7 + (radiuss7 * cos(j7 *  twicePi / triangleAmounts7)),
                   b7 + (radiuss7 * sin(j7 * twicePi / triangleAmounts7)));
		}
	glEnd();

	//WHEEL 8
    GLfloat a8=-.05f; GLfloat b8=-.6f; GLfloat radiuss8 =.02f;
	int triangleAmounts8 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a8, b8);
    int j8;
    for(j8 = 0; j8 <= triangleAmounts8;j8++)
        {
        glVertex2f(a8 + (radiuss8 * cos(j8 *  twicePi / triangleAmounts8)),
                   b8 + (radiuss7 * sin(j8 * twicePi / triangleAmounts8)));
		}
	glEnd();

	//WHEEL 9
    GLfloat a9=.05f; GLfloat b9=-.6f; GLfloat radiuss9 =.02f;
	int triangleAmounts9 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a9, b9);
    int j9;
    for(j9 = 0; j9 <= triangleAmounts9;j9++)
        {
        glVertex2f(a9 + (radiuss9 * cos(j9 *  twicePi / triangleAmounts9)),
                   b9 + (radiuss9 * sin(j9 * twicePi / triangleAmounts9)));
		}
	glEnd();

	//WHEEL 10
    GLfloat a10=.15f; GLfloat b10=-.6f; GLfloat radiuss10 =.02f;
	int triangleAmounts10 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a10, b10);
    int j10;
    for(j10= 0; j10 <= triangleAmounts10;j10++)
        {
        glVertex2f(a10 + (radiuss10 * cos(j10 *  twicePi / triangleAmounts10)),
                   b10 + (radiuss10 * sin(j10 * twicePi / triangleAmounts10)));
		}
	glEnd();

	//WHEEL 11
    GLfloat a11=.25f; GLfloat b11=-.6f; GLfloat radiuss11 =.02f;
	int triangleAmounts11 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a11, b11);
    int j11;
    for(j11 = 0; j11 <= triangleAmounts11;j11++)
        {
        glVertex2f(a11 + (radiuss11 * cos(j11 *  twicePi / triangleAmounts11)),
                   b11 + (radiuss11 * sin(j11* twicePi / triangleAmounts11)));
		}
	glEnd();

	//WHEEL 12
    GLfloat a12=.35f; GLfloat b12=-.6f; GLfloat radiuss12 =.02f;
	int triangleAmounts12 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a12, b12);
    int j12;
    for(j12 = 0; j12 <= triangleAmounts12;j12++)
        {
        glVertex2f(a12 + (radiuss12 * cos(j12 *  twicePi / triangleAmounts12)),
                   b12 + (radiuss12* sin(j12 * twicePi / triangleAmounts12)));
		}
	glEnd();

	//WHEEL 13
    GLfloat a13=.45f; GLfloat b13=-.6f; GLfloat radiuss13 =.02f;
	int triangleAmounts13 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a13, b13);
    int j13;
    for(j13= 0; j13<= triangleAmounts13;j13++)
        {
        glVertex2f(a13 + (radiuss13 * cos(j13 *  twicePi / triangleAmounts13)),
                   b13 + (radiuss13* sin(j13 * twicePi / triangleAmounts13)));
		}
	glEnd();

	//WHEEL 14
    GLfloat a14=.55f; GLfloat b14=-.6f; GLfloat radiuss14 =.02f;
	int triangleAmounts14 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a14, b14);
    int j14;
    for(j14 = 0; j14 <= triangleAmounts14;j14++)
        {
        glVertex2f(a14 + (radiuss14 * cos(j14 *  twicePi / triangleAmounts14)),
                   b14 + (radiuss14* sin(j14 * twicePi / triangleAmounts14)));
		}
	glEnd();

	//WHEEL 15
    GLfloat a15=.65f; GLfloat b15=-.6f; GLfloat radiuss15 =.025f;
	int triangleAmounts15= 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a15, b15);
    int j15;
    for(j15 = 0; j15 <= triangleAmounts15;j15++)
        {
        glVertex2f(a15 + (radiuss15 * cos(j15*  twicePi / triangleAmounts15)),
                   b15 + (radiuss15* sin(j15 * twicePi / triangleAmounts15)));
		}
	glEnd();

	//WHEEL 16
    GLfloat a16=.72f; GLfloat b16=-.6f; GLfloat radiuss16 =.025f;
	int triangleAmounts16 = 20;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0,0,0);
    glVertex2f(a16, b16);
    int j16;
    for(j16 = 0; j16<= triangleAmounts16;j16++)
        {
        glVertex2f(a16+ (radiuss16 * cos(j16 *  twicePi / triangleAmounts16)),
                   b16 + (radiuss16* sin(j16 * twicePi / triangleAmounts16)));
		}
	glEnd();

    glPopMatrix();

    glLoadIdentity();

    glFlush();
    glutTimerFunc(8000,winter,0);
}

void display()
{
    winter(0);
}

int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Railway Station");
    glutInitWindowSize(320,320);
    glutInitWindowPosition(50, 50);
    glutReshapeWindow(720,520);
    glutDisplayFunc(display);
    init();
    glutSpecialFunc(SpecialInput);
    glutKeyboardFunc(handlekeyexpress);
    glutMouseFunc(handleMouse);

    glutMainLoop();
    return 0;
}
