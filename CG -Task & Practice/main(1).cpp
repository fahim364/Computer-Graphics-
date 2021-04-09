#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>


using namespace std;

float car1_speed = 0.0f;
float car2_speed = 0.0f;
float cloud_x=0;
float cloud_y=0;
float cloud_x2=0;
float cloud_y2=0;
int cloudeStatus=1;
float boat_speed = 0.0f;
float boat2_speed = 0.0f;
float boat3_speed = 0.0f;


void init()
{
    glClearColor(0.0,0.5,0.8,1.0);
	glColor3f(0.0,0.0,0.5);
	glPointSize(4.0);
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
}

void sky()
{
    glBegin(GL_QUADS);
    glColor3ub(174,214,241);
	glVertex2i(0,550);
    glVertex2i(1000,550);
    glVertex2i(1000,1000);
    glVertex2i(0,1000);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(214,234,248);
	glVertex2i(0,650);
    glVertex2i(1000,640);
    glVertex2i(1000,690);
    glVertex2i(0,720);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214,234,248);
	glVertex2i(0,850);
    glVertex2i(1000,800);
    glVertex2i(1000,820);
    glVertex2i(0,905);
    glEnd();


}
void DrawCircle(float cx,float cy,float r ,int num_segment)
{
glBegin(GL_POLYGON);
for(int k=0; k<num_segment;k++)
{  float theta =2.0f*3.1416f*float(k)/float(num_segment);
   float x=r*cosf(theta);
    float y=r*sinf(theta);
    glVertex2f(x+cx ,y+cy);
}
  glEnd();
}

void Hill()
{
    glPushMatrix();

  glColor3ub(51, 153, 51);



   glBegin(GL_TRIANGLES);
 glVertex2i(48,850);
  glVertex2i(-135,500);
    glVertex2i(100,500);
  glEnd();
 DrawCircle(79,847,31,1000);//
  glBegin(GL_TRIANGLES);
 glVertex2i(47,848);
  glVertex2i(110,848);
    glVertex2i(90,500);
  glEnd();
   glBegin(GL_TRIANGLES);
 glVertex2i(110,848);
  glVertex2i(70,400);
    glVertex2i(280,400);
  glEnd();




   glBegin(GL_TRIANGLES);
 glVertex2i(230,758);
  glVertex2i(90,500);
    glVertex2i(250,500);
  glEnd();

glBegin(GL_TRIANGLES);
 glVertex2i(240,500);
  glVertex2i(390,500);
    glVertex2i(277,755);
  glEnd();

  glBegin(GL_TRIANGLES);
 glVertex2i(230,758);
  glVertex2i(277,758);
    glVertex2i(250,500);
  glEnd();
   DrawCircle(252.5,755,23,1000);//




















glBegin(GL_TRIANGLES);
 glVertex2i(600,500);
  glVertex2i(750,500);
    glVertex2i(700,790);
  glEnd();
glBegin(GL_TRIANGLES);
 glVertex2i(690,500);
  glVertex2i(880,500);
    glVertex2i(772,790);
  glEnd();

glBegin(GL_TRIANGLES);
 glVertex2i(700,790);
  glVertex2i(773,790);
    glVertex2i(720,500);
  glEnd();
  DrawCircle(736,789,35,1000);//

    glBegin(GL_TRIANGLES);
 glVertex2i(800,500);
  glVertex2i(1000,500);
    glVertex2i(1000,890);
  glEnd();
  glPopMatrix();












    //glColor3f(.46,.322,.176);
    //glColor3ub(51, 153, 51);
    //glBegin(GL_QUADS);
    //glVertex2i(0,550);
    //glVertex2i(0,660);
    //glVertex2i(90,750);
    //glVertex2i(200,550);
    //glEnd();


    //glBegin(GL_TRIANGLES);
    //glVertex2i(400,550);
    //glVertex2i(500,650);
    //glVertex2i(600,550);
    //glEnd();

    //glBegin(GL_TRIANGLES);
    //glVertex2i(60,550);
    //glVertex2i(200,750);
    //glVertex2i(250,550);
    //glEnd();




//    glBegin(GL_TRIANGLES);
//    glVertex2i(600,550);
//    glVertex2i(700,650);
//    glVertex2i(800,550);
//    glEnd();


//    glBegin(GL_TRIANGLES);
//    glVertex2i(800,550);
//    glVertex2i(1000,650);
//    glVertex2i(1000,550);
//    glEnd();

//    glBegin(GL_TRIANGLES);
//    glVertex2i(700,550);
//    glVertex2i(900,650);
//    glVertex2i(1000,550);
//    glEnd();

}

void   drawcloud()
{ glPushMatrix();

   glColor3ub(251,252,252);
  DrawCircle(200,900,25,1000);//1st cloud
  DrawCircle(230,910,25,1000);
  DrawCircle(180,910,25,1000);
  DrawCircle(210,930,25,1000);



 glColor3ub(251,252,252);
  DrawCircle(600,690,25,1000);//2nd cloud
  DrawCircle(630,700,25,1000);
  DrawCircle(580,700,25,1000);
  DrawCircle(610,720,25,1000);

   glColor3ub(251,252,252);
  DrawCircle(800,880,25,1000);//3rd cloud
  DrawCircle(830,870,25,1000);
  DrawCircle(780,870,25,1000);
  DrawCircle(810,910,25,1000);


  glPopMatrix();


}

void sun()
{
    glPushMatrix();
    glTranslatef(480,800, 0);



    glBegin(GL_POLYGON);
    glColor3ub(249,215,28);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=45;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();

}

void land()
{
	glColor3ub(224, 181, 79);
	glBegin(GL_QUADS);
    glVertex2i(0, 120);
    glVertex2i(1000, 120);
	glVertex2i(1000, 550);
	glVertex2i(0, 550);
	glEnd();
}

void River()
{
    glColor3ub(0, 255, 255);
    glBegin(GL_QUADS);
    glVertex2i(0, 120);
    glVertex2i(1000, 120);
	glVertex2i(1000, 0);
	glVertex2i(0, 0);
	glEnd();

    glBegin(GL_POLYGON);
	glVertex2i(200, 120);
	glVertex2i(400, 120);
	glVertex2i(300, 140);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(600-150, 120);
	glVertex2i(800-150, 120);
	glVertex2i(700-150, 140);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(750, 120);
	glVertex2i(800, 120);
	glVertex2i(850, 140);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(850, 120);
	glVertex2i(900, 120);
	glVertex2i(950, 140);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(900, 120);
	glVertex2i(970, 120);
	glVertex2i(1000, 140);
	glEnd();
}

void road()
{
    glColor3ub(66, 66, 49);
	glBegin(GL_QUADS);
	glVertex2i(0,330);
	glVertex2i(1000,330);
	glVertex2i(1000,280);
	glVertex2i(0,280);
	glEnd();

	//fild middle road
//	glColor3ub(66, 66, 49);
//	glBegin(GL_QUADS);
//	glVertex2i(840,390);
//	glVertex2i(860,390);
//	glVertex2i(860,320);
//	glVertex2i(840,320);
//	glEnd();
//
	//House side road

	glColor3ub(66, 66, 49);
	glBegin(GL_QUADS);
	glVertex2i(300,330);
	glVertex2i(330-10,330);
	glVertex2i(300-10,550);
	glVertex2i(270,550);
	glEnd();
     //White line
	glColor3ub(255, 255, 255);
	glBegin(GL_LINES);
	glVertex2i(0,304);
	glVertex2i(1000,304);
	glVertex2i(0,307);
	glVertex2i(1000,307);
	glEnd();
}

void car1()
{
    glPushMatrix();
    glTranslatef(car1_speed, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(88,320, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(70,320, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();

    glColor3f(255,0,255);
    glBegin(GL_QUADS);
    glVertex2i(30-20+50, 317);
    glVertex2i(30+40-20+50, 317);
    glVertex2i(30+40-20+50, 325);
    glVertex2i(30-20+50, 325);
    glVertex2i(30+5-20+50, 325);
    glVertex2i(30+35-5-20+50, 325);
    glVertex2i(30+35-10-20+50, 317+20);
    glVertex2i(30+5+3-20+50, 317+20);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_LINES);
    glVertex2i(30-20+50, 317+4);
    glVertex2i(30+40-20+50, 317+4);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_QUADS);
    glVertex2i(30+5-20+3+50, 325);
    glVertex2i(30+35-5-20-14+50, 325);
    glVertex2i(30+35-5-20-14+50, 317+20-4);
    glVertex2i(30+5+3-20+2+50, 317+20-4);
    glVertex2i(30+35-5-20-14+2+50, 325);
    glVertex2i(30+35-5-20-14+11+50, 325);
    glVertex2i(30+35-5-20-14+10-2+50, 317+20-4);
    glVertex2i(30+35-5-20-14+2+50, 317+20-4);
    glEnd();
    glPopMatrix();
///
    glPushMatrix();
    glTranslatef(car2_speed, 0.0, 0.0);


    glPushMatrix();
    glTranslatef(20,320, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(38,320, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();

    glColor3f(255,0,0);
    glBegin(GL_QUADS);
    glVertex2i(30-20, 317);
    glVertex2i(30+40-20, 317);
    glVertex2i(30+40-20, 325);
    glVertex2i(30-20, 325);
    glVertex2i(30+5-20, 325);
    glVertex2i(30+35-5-20, 325);
    glVertex2i(30+35-10-20, 317+20);
    glVertex2i(30+5+3-20, 317+20);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_LINES);
    glVertex2i(30-20, 317+4);
    glVertex2i(30+40-20, 317+4);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_QUADS);
    glVertex2i(30+5-20+3, 325);
    glVertex2i(30+35-5-20-14, 325);
    glVertex2i(30+35-5-20-14, 317+20-4);
    glVertex2i(30+5+3-20+2, 317+20-4);
    glVertex2i(30+35-5-20-14+2, 325);
    glVertex2i(30+35-5-20-14+11, 325);
    glVertex2i(30+35-5-20-14+10-2, 317+20-4);
    glVertex2i(30+35-5-20-14+2, 317+20-4);
    glEnd();
    glPopMatrix();

}

void car2()
{
    glPushMatrix();
    glTranslatef(-car1_speed, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(923,295, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(941,295, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();

    glColor3f(255,0,0);
    glBegin(GL_QUADS);
    glVertex2i(10+900, 317-25);
    glVertex2i(10+40+900, 317-25);
    glVertex2i(10+40+900, 325-25);
    glVertex2i(10+900, 325-25);
    glVertex2i(10+10+900, 325-25);
    glVertex2i(10+40-5+900, 325-25);
    glVertex2i(10+40-8+900, 317+20-25);
    glVertex2i(10+15+900, 317+20-25);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_LINES);
    glVertex2i(30-20+50-50+900, 317+4-25);
    glVertex2i(30+40-20+50-50+900, 317+4-25);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_QUADS);
    glVertex2i(10+10+3+900, 325-25);
    glVertex2i(10+40-5-12+900, 325-25);
    glVertex2i(10+40-5-12+900, 317+20-25-4);
    glVertex2i(10+15+1+900, 317+20-25-4);
    glVertex2i(10+40-5-12+2+900, 325-25);
    glVertex2i(10+40-5-12+10+900, 325-25);
    glVertex2i(10+40-5-12+10-2+900, 317+20-25-4);
    glVertex2i(10+40-5-12+2+900, 317+20-25-4);
    glEnd();
    glPopMatrix();
///
    glPushMatrix();
    glTranslatef(-car2_speed, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(1003,295, 0);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
   glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(1003+18,295, 0);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
   glEnd();
   glPopMatrix();

    glColor3f(0,0,255);
    glBegin(GL_QUADS);
    glVertex2i(10+900+80, 317-25);
    glVertex2i(10+40+900+80, 317-25);
    glVertex2i(10+40+900+80, 325-25);
    glVertex2i(10+900+80, 325-25);
    glVertex2i(10+10+900+80, 325-25);
    glVertex2i(10+40-5+900+80, 325-25);
    glVertex2i(10+40-8+900+80, 317+20-25);
    glVertex2i(10+15+900+80, 317+20-25);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_LINES);
    glVertex2i(30-20+50-50+900+80, 317+4-25);
    glVertex2i(30+40-20+50-50+900+80, 317+4-25);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_QUADS);
    glVertex2i(10+10+3+900+80, 325-25);
    glVertex2i(10+40-5-12+900+80, 325-25);
    glVertex2i(10+40-5-12+900+80, 317+20-25-4);
    glVertex2i(10+15+1+900+80, 317+20-25-4);
    glVertex2i(10+40-5-12+2+900+80, 325-25);
    glVertex2i(10+40-5-12+10+900+80, 325-25);
    glVertex2i(10+40-5-12+10-2+900+80, 317+20-25-4);
    glVertex2i(10+40-5-12+2+900+80, 317+20-25-4);
    glEnd();
    glPopMatrix();
}

void house1()
{
    glColor3ub(102, 0, 0);
	glBegin(GL_QUADS);
    glVertex2i(100, 520);
    glVertex2i(180, 520);
	glVertex2i(170, 530);
	glVertex2i(110, 530);
	glEnd();
	glColor3ub(0, 204, 204);
	glBegin(GL_QUADS);
    glVertex2i(115, 520);
    glVertex2i(165, 520);
	glVertex2i(165, 480);
	glVertex2i(115, 480);
	glEnd();
	glColor3ub(66, 66, 49);
	glBegin(GL_QUADS);
    glVertex2i(105, 480);
    glVertex2i(175, 480);
	glVertex2i(175, 475);
	glVertex2i(105, 475);
	glEnd();
///Door
	glColor3ub(1, 51, 102);
	glBegin(GL_QUADS);
    glVertex2i(115+20, 480);
    glVertex2i(165-20, 480);
	glVertex2i(165-20, 510);
	glVertex2i(115+20, 510);
	glEnd();
///window
    glColor3ub(1, 51, 102);
	glBegin(GL_QUADS);
    glVertex2i(115+5, 495);
    glVertex2i(115+5+8, 495);
	glVertex2i(115+5+8, 513);
	glVertex2i(115+5, 513);
	glEnd();
	glBegin(GL_QUADS);
    glVertex2i(120, 495);
    glVertex2i(128, 495);
	glVertex2i(128, 513);
	glVertex2i(120, 513);
	glEnd();
	glBegin(GL_QUADS);
    glVertex2i(120+30, 495);
    glVertex2i(128+30, 495);
	glVertex2i(128+30, 513);
	glVertex2i(120+30, 513);
	glEnd();
///HomeSiteTree
    glColor3ub(204, 0, 0);
	glBegin(GL_LINES);
//	glVertex2i(107, 470);
//	glVertex2i(112, 470);
//	glVertex2i(109, 470);
//	glVertex2i(109, 495);
//	glVertex2i(105, 485);
//	glVertex2i(114, 485);
//	glVertex2i(109, 485);
//	glVertex2i(113, 495);
//	glVertex2i(109, 485);
//	glVertex2i(105, 495);
//
//	glVertex2i(107+61, 470);
//	glVertex2i(112+61, 470);
//	glVertex2i(109+61, 470);
//	glVertex2i(109+61, 495);
//	glVertex2i(105+61, 485);
//	glVertex2i(114+61, 485);
//	glVertex2i(109+61, 485);
//	glVertex2i(113+61, 495);
//	glVertex2i(109+61, 485);
//	glVertex2i(105+61, 495);
	glEnd();
}

void house4()
{
    glColor3ub(102, 0, 0);
	glBegin(GL_POLYGON);
    glVertex2i(220, 470);
    glVertex2i(260, 470);
	glVertex2i(240, 490);
	glEnd();
	glColor3ub(0, 204, 204);
	glBegin(GL_QUADS);
	glVertex2i(220+8, 470);
	glVertex2i(260-8, 470);
	glVertex2i(260-8, 440);
    glVertex2i(220+8, 440);
	glEnd();
	glColor3ub(102, 0, 0);
	glBegin(GL_QUADS);
    glVertex2i(220+4, 440);
    glVertex2i(260-4, 440);
    glVertex2i(260-4, 435);
    glVertex2i(220+4, 435);
	glEnd();
///Door
    glColor3ub(1, 51, 102);
	glBegin(GL_QUADS);
    glVertex2i(220+8+8, 460);
	glVertex2i(260-8-8, 460);
	glVertex2i(260-8-8, 440);
    glVertex2i(220+8+8, 440);
	glEnd();
}

void house3()
{
    glColor3ub(102, 0, 0);
	glBegin(GL_POLYGON);
    glVertex2i(190, 520);
    glVertex2i(230, 520);
	glVertex2i(210, 540);
	glEnd();
	glColor3ub(0, 204, 204);
	glBegin(GL_QUADS);
	glVertex2i(198, 520);
	glVertex2i(222, 520);
	glVertex2i(222, 490);
    glVertex2i(198, 490);
	glEnd();
	glColor3ub(102, 0, 0);
	glBegin(GL_QUADS);
    glVertex2i(194, 520-30);
    glVertex2i(230-4, 520-30);
	glVertex2i(230-4, 520-30-5);
	glVertex2i(194, 520-30-5);
	glEnd();
///Door
    glColor3ub(1, 51, 102);
	glBegin(GL_QUADS);
    glVertex2i(198+8, 490);
    glVertex2i(222-8, 490);
	glVertex2i(222-8, 510);
	glVertex2i(198+8, 510);
	glEnd();
}

void house5()
{
    glColor3ub(102, 0, 0);
	glBegin(GL_POLYGON);
    glVertex2i(20, 545);
    glVertex2i(40, 545);
	glVertex2i(30, 560);
	glEnd();
	glColor3ub(0, 204, 204);
	glBegin(GL_QUADS);
	glVertex2i(25, 545);
	glVertex2i(35, 545);
	glVertex2i(35, 530);
    glVertex2i(25, 530);
	glEnd();
	glColor3ub(102, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(22, 530);
	glVertex2i(40-2, 530);
	glVertex2i(40-2, 525);
    glVertex2i(22, 525);
	glEnd();
///Door
    glColor3ub(1, 51, 102);
	glBegin(GL_QUADS);
    glVertex2i(25+3, 540);
	glVertex2i(35-3, 540);
	glVertex2i(35-3, 530);
    glVertex2i(25+3, 530);
	glEnd();
}

void house6()
{
    glColor3ub(102, 0, 0);
	glBegin(GL_POLYGON);
    glVertex2i(20+25, 545);
    glVertex2i(40+25, 545);
	glVertex2i(30+25, 560);
	glEnd();
	glColor3ub(0, 204, 204);
	glBegin(GL_QUADS);
	glVertex2i(25+25, 545);
	glVertex2i(35+25, 545);
	glVertex2i(35+25, 530);
    glVertex2i(25+25, 530);
	glEnd();
	glColor3ub(102, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(22+25, 530);
	glVertex2i(40-2+25, 530);
	glVertex2i(40-2+25, 525);
    glVertex2i(22+25, 525);
	glEnd();
///Door
    glColor3ub(1, 51, 102);
	glBegin(GL_QUADS);
    glVertex2i(25+3+25, 540);
	glVertex2i(35-3+25, 540);
	glVertex2i(35-3+25, 530);
    glVertex2i(25+3+25, 530);
	glEnd();
}
void house7()
{
    glColor3ub(102, 0, 0);
	glBegin(GL_POLYGON);
    glVertex2i(20-20, 545-40);
    glVertex2i(40-20, 545-40);
	glVertex2i(30-20, 560-40);
	glEnd();
	glColor3ub(0, 204, 204);
	glBegin(GL_QUADS);
	glVertex2i(25-20, 545-40);
	glVertex2i(35-20, 545-40);
	glVertex2i(35-20, 530-40);
    glVertex2i(25-20, 530-40);
	glEnd();
	glColor3ub(102, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(22-20, 530-40);
	glVertex2i(40-2-20, 530-40);
	glVertex2i(40-2-20, 525-40);
    glVertex2i(22-20, 525-40);
	glEnd();
///Door
    glColor3ub(1, 51, 102);
	glBegin(GL_QUADS);
    glVertex2i(25+3-20, 540-40);
	glVertex2i(35-3-20, 540-40);
	glVertex2i(35-3-20, 530-40);
    glVertex2i(25+3-20, 530-40);
	glEnd();
}
void house8()
{
    glColor3ub(102, 0, 0);
	glBegin(GL_POLYGON);
    glVertex2i((20-20)*2+60, (545-40)+10);
    glVertex2i((40-20)*2+60, (545-40)+10);
	glVertex2i((30-20)*2+60, (560-40)+10);
	glEnd();
	glColor3ub(0, 204, 204);
	glBegin(GL_QUADS);
	glVertex2i((25-20)*2+60, (545-40)+10);
	glVertex2i((35-20)*2+60, (545-40)+10);
	glVertex2i((35-20)*2+60, (530-40)+10);
    glVertex2i((25-20)*2+60, (530-40)+10);
	glEnd();
	glColor3ub(102, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i((22-20)*2+60, (530-40)+10);
	glVertex2i((40-2-20)*2+60, (530-40)+10);
	glVertex2i((40-2-20)*2+60, (525-40)+10);
    glVertex2i((22-20)*2+60, (525-40)+10);
	glEnd();
///Door
    glColor3ub(1, 51, 102);
	glBegin(GL_QUADS);
    glVertex2i((25+3-20)*2+60, (540-40)+10);
	glVertex2i((35-3-20)*2+60, (540-40)+10);
	glVertex2i((35-3-20)*2+60, (530-40)+10);
    glVertex2i((25+3-20)*2+60, (530-40)+10);
	glEnd();
}
void house10()
{
    glColor3ub(102, 0, 0);
	glBegin(GL_POLYGON);
    glVertex2i(220, 470-70);
    glVertex2i(260, 470-70);
	glVertex2i(240, 490-70);
	glEnd();
	glColor3ub(0, 204, 204);
	glBegin(GL_QUADS);
	glVertex2i(220+8, 470-70);
	glVertex2i(260-8, 470-70);
	glVertex2i(260-8, 440-70);
    glVertex2i(220+8, 440-70);
	glEnd();
	glColor3ub(102, 0, 0);
	glBegin(GL_QUADS);
    glVertex2i(220+4, 440-70);
    glVertex2i(260-4, 440-70);
    glVertex2i(260-4, 435-70);
    glVertex2i(220+4, 435-70);
	glEnd();
///Door
    glColor3ub(1, 51, 102);
	glBegin(GL_QUADS);
    glVertex2i(220+8+8, 460-70);
	glVertex2i(260-8-8, 460-70);
	glVertex2i(260-8-8, 440-70);
    glVertex2i(220+8+8, 440-70);
	glEnd();
}
void house9()
{
    glColor3ub(102, 0, 0);
	glBegin(GL_POLYGON);
    glVertex2i(220-40, 470-20);
    glVertex2i(260-40, 470-20);
	glVertex2i(240-40, 490-20);
	glEnd();
	glColor3ub(0, 204, 204);
	glBegin(GL_QUADS);
	glVertex2i(220+8-40, 470-20);
	glVertex2i(260-8-40, 470-20);
	glVertex2i(260-8-40, 440-20);
    glVertex2i(220+8-40, 440-20);
	glEnd();
	glColor3ub(102, 0, 0);
	glBegin(GL_QUADS);
    glVertex2i(220+4-40, 440-20);
    glVertex2i(260-4-40, 440-20);
    glVertex2i(260-4-40, 435-20);
    glVertex2i(220+4-40, 435-20);
	glEnd();
///Door
    glColor3ub(1, 51, 102);
	glBegin(GL_QUADS);
    glVertex2i(220+8+8-40, 460-20);
	glVertex2i(260-8-8-40, 460-20);
	glVertex2i(260-8-8-40, 440-20);
    glVertex2i(220+8+8-40, 440-20);
	glEnd();
}
void house2()
{
    glColor3ub(102, 0, 0);
	glBegin(GL_POLYGON);
    glVertex2i(50, 450);
    glVertex2i(80, 445);
	glVertex2i(65, 470);
	glEnd();
	glColor3ub(255, 255, 255);
	glBegin(GL_LINES);
    glVertex2i(80, 445);
	glVertex2i(65, 470);
	glVertex2i(80, 446);
	glVertex2i(65, 471);
	glEnd();
	glColor3ub(102, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(80, 445);
	glVertex2i(100, 470-10);
	glVertex2i(90, 480);
    glVertex2i(65, 470);
	glEnd();


	glColor3ub(0, 204, 204);
	glBegin(GL_QUADS);
    glVertex2i(50, 450);
    glVertex2i(80, 445);
	glVertex2i(80, 420);
	glVertex2i(50, 430);
	glEnd();
	glColor3ub(0, 0, 0);
	glBegin(GL_QUADS);
    glVertex2i(48, 430);
    glVertex2i(80, 420);
	glVertex2i(80, 420-5);
	glVertex2i(48, 430-5);
	glEnd();


	glColor3ub(0, 204, 204);
	glBegin(GL_QUADS);
    glVertex2i(80, 445);
    glVertex2i(100, 460);
	glVertex2i(100, 435);
	glVertex2i(80, 420);
	glEnd();
	glColor3ub(0, 0, 0);
	glBegin(GL_QUADS);
    glVertex2i(80, 420);
    glVertex2i(100+2, 435+2);
	glVertex2i(100+2, 430+2);
	glVertex2i(80, 415);
	glEnd();


	glColor3ub(102, 0, 0);
	glBegin(GL_LINES);
    glVertex2i(80, 445);
    glVertex2i(80, 420);
    glVertex2i(81, 420);
    glVertex2i(81, 420);
	glEnd();
///Door
    glColor3ub(1, 51, 102);
	glBegin(GL_QUADS);
    glVertex2i(50+10, 425);
    glVertex2i(80-10, 420);
	glVertex2i(80-10, 437);
	glVertex2i(50+10, 440);
	glEnd();

	glColor3ub(1, 51, 102);
	glBegin(GL_QUADS);
    glVertex2i(80+7, 445-4);
    glVertex2i(100-7, 460-13);
	glVertex2i(100-7, 435-5);
	glVertex2i(80+7, 420+5);
	glEnd();
}

void HillTree()
{
    float a;
    for(a=0;a<1000;a+=100)
    {
        float b=a+2;
        glColor3ub(0, 0, 0);
        glBegin(GL_QUADS);
        glVertex2i(a, 545);
        glVertex2i(b, 545);
        glVertex2i(b, 560);
        glVertex2i(a, 560);
        glEnd();
        glColor3ub(102, 204, 0);
        glBegin(GL_POLYGON);
        glVertex2i(a-5, 560);
        glVertex2i(b+5, 560);
        glVertex2i(a+1,570);
        glEnd();
        glColor3ub(102, 204, 0);
        glBegin(GL_POLYGON);
        glVertex2i(a-5, 560+4);
        glVertex2i(b+5, 560+4);
        glVertex2i(a+1,570+4);
        glEnd();
    }
}
void HillTree2()
{
    float a;
    for(a=10;a<1000;a+=120)
    {
        float b=a+2;
        glColor3ub(0, 0, 0);
        glBegin(GL_QUADS);
        glVertex2i(a, 545);
        glVertex2i(b, 545);
        glVertex2i(b, 580);
        glVertex2i(a, 580);
        glEnd();
        glColor3ub(102, 204, 0);
        glBegin(GL_POLYGON);
        glVertex2i(a-8, 580);
        glVertex2i(b+8, 580);
        glVertex2i(a+1,590);
        glEnd();
        glColor3ub(102, 204, 0);
        glBegin(GL_POLYGON);
        glVertex2i(a-8, 580+5);
        glVertex2i(b+8, 580+5);
        glVertex2i(a+1,590+10);
        glEnd();

    }
}
void HillTree3()
{
    float a;
    for(a=10;a<1000;a+=160)
    {
        float b=a+2;
        glColor3ub(0, 0, 0);
        glBegin(GL_QUADS);
        glVertex2i(a, 545);
        glVertex2i(b, 545);
        glVertex2i(b, 580);
        glVertex2i(a, 580);
        glEnd();
        glColor3ub(102, 204, 0);
        glBegin(GL_POLYGON);
        glVertex2i(a-4, 560-2);
        glVertex2i(b+4, 560-2);
        glVertex2i(a+1,590+4);
        glEnd();
    }
}

void tree1()
{
    glColor3ub(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(20, 380);
    glVertex2i(25, 380);
    glVertex2i(25, 420);
	glVertex2i(20, 420);
	glEnd();
	glColor3ub(102, 204, 0);
	glBegin(GL_POLYGON);
	glVertex2i(20, 420);
    glVertex2i(20-15, 410);
    glVertex2i(20, 450);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2i(20, 420);
    glVertex2i(25, 420);
    glVertex2i(25, 450);
	glVertex2i(20, 450);
	glEnd();

	glColor3ub(102, 204, 0);
	glBegin(GL_POLYGON);
	glVertex2i(25, 420);
    glVertex2i(20+15+5, 410);
    glVertex2i(25, 450);
	glEnd();
}

void tree2()
{
   glPushMatrix();
   glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(169, 390);
    glVertex2i(171, 390);
    glVertex2i(171, 400+20);
    glVertex2i(169, 400+20);
   glEnd();
   glPopMatrix();

   glPushMatrix();
    glTranslatef(170,430, 0);
    glBegin(GL_POLYGON);
    glColor3ub(50,205,50);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=8;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
   glEnd();
   glPopMatrix();

   glPushMatrix();
    glTranslatef(170,420, 0);
    glBegin(GL_POLYGON);
    glColor3ub(50,205,50);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=8;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
   glEnd();
   glPopMatrix();
}

void moon()
{
    glPushMatrix();
    glTranslatef(500,850, 0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y);
	}
   glEnd();
   glPopMatrix();
   glPopMatrix();


}

void star1()
{
    glColor3f(1.0f,1.0f,1.0f) ;
glBegin(GL_POLYGON);

glVertex2i (70,880);
glVertex2i (70,885);

glVertex2i(70,885);
glVertex2i(75,885);

glVertex2i(75,885);
glVertex2i(75,880);

glVertex2i(75,880);
glVertex2i(70,880);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(70,880);
glVertex2i(72,875);

glVertex2i(75,880);
glVertex2i(72,875);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(75,880);
glVertex2i(80,883);

glVertex2i(75,885);
glVertex2i(80,883);
glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(75,885);
glVertex2i(72,890);

glVertex2i(70,885);
glVertex2i(72,890);
glEnd();


glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(70,885);
glVertex2i(65,883);


glVertex2i(70,880);
glVertex2i(65,883);
glEnd();
}

void star2()
{
    glColor3f(1.0f,1.0f,1.0f) ;
glBegin(GL_POLYGON);

glVertex2i (170,880);
glVertex2i (170,885);

glVertex2i(170,885);
glVertex2i(175,885);

glVertex2i(175,885);
glVertex2i(175,880);

glVertex2i(175,880);
glVertex2i(170,880);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(170,880);
glVertex2i(172,875);

glVertex2i(175,880);
glVertex2i(172,875);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(175,880);
glVertex2i(180,883);

glVertex2i(175,885);
glVertex2i(180,883);
glEnd();

glColor3f(11.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(175,885);
glVertex2i(172,890);

glVertex2i(170,885);
glVertex2i(172,890);
glEnd();


glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(170,885);
glVertex2i(165,883);


glVertex2i(170,880);
glVertex2i(165,883);
glEnd();
}

void star3()
{
    glColor3f(1.0f,1.0f,1.0f) ;
glBegin(GL_POLYGON);

glVertex2i (70,980);
glVertex2i (70,985);

glVertex2i(70,985);
glVertex2i(75,985);

glVertex2i(75,985);
glVertex2i(75,980);

glVertex2i(75,980);
glVertex2i(70,980);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(70,980);
glVertex2i(72,975);

glVertex2i(75,980);
glVertex2i(72,975);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(75,980);
glVertex2i(80,983);

glVertex2i(75,985);
glVertex2i(80,983);
glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(75,985);
glVertex2i(72,990);

glVertex2i(70,985);
glVertex2i(72,990);
glEnd();


glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(70,985);
glVertex2i(65,983);


glVertex2i(70,980);
glVertex2i(65,983);
glEnd();
}

void star4()
{
    glColor3f(1.0f,1.0f,1.0f) ;
glBegin(GL_POLYGON);

glVertex2i (570,880);
glVertex2i (570,885);

glVertex2i(570,885);
glVertex2i(575,885);

glVertex2i(575,885);
glVertex2i(575,880);

glVertex2i(575,880);
glVertex2i(570,880);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(570,880);
glVertex2i(572,875);

glVertex2i(575,880);
glVertex2i(572,875);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(575,880);
glVertex2i(580,883);

glVertex2i(575,885);
glVertex2i(580,883);
glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(575,885);
glVertex2i(572,890);

glVertex2i(570,885);
glVertex2i(572,890);
glEnd();


glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(570,885);
glVertex2i(565,883);


glVertex2i(570,880);
glVertex2i(565,883);
glEnd();
}

void star5()
{
    glColor3f(1.0f,1.0f,1.0f) ;
glBegin(GL_POLYGON);

glVertex2i (970,880);
glVertex2i (970,885);

glVertex2i(970,885);
glVertex2i(975,885);

glVertex2i(975,885);
glVertex2i(975,880);

glVertex2i(975,880);
glVertex2i(970,880);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(970,880);
glVertex2i(972,875);

glVertex2i(975,880);
glVertex2i(972,875);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(975,880);
glVertex2i(980,883);

glVertex2i(975,885);
glVertex2i(980,883);
glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(975,885);
glVertex2i(972,890);

glVertex2i(970,885);
glVertex2i(972,890);
glEnd();


glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(970,885);
glVertex2i(965,883);


glVertex2i(970,880);
glVertex2i(965,883);
glEnd();
}
void star6()
{
    glColor3f(1.0f,1.0f,1.0f) ;
glBegin(GL_POLYGON);

glVertex2i (470,680);
glVertex2i (470,685);

glVertex2i(470,685);
glVertex2i(475,685);

glVertex2i(475,685);
glVertex2i(475,680);

glVertex2i(475,680);
glVertex2i(470,680);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(470,680);
glVertex2i(472,675);

glVertex2i(475,680);
glVertex2i(472,675);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(475,680);
glVertex2i(480,683);

glVertex2i(475,685);
glVertex2i(480,683);
glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(475,685);
glVertex2i(472,690);

glVertex2i(470,685);
glVertex2i(472,690);
glEnd();


glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(470,685);
glVertex2i(465,683);


glVertex2i(470,680);
glVertex2i(465,683);
glEnd();
}

void LeftRoadTree()
{
    ///1st
    glColor3ub(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(282, 345);
    glVertex2i(285, 345);
    glVertex2i(285, 370);
	glVertex2i(282, 370);
	glEnd();
	glColor3ub(102, 204, 0);
	glBegin(GL_POLYGON);
	glVertex2i(282-9, 370);
    glVertex2i(285+9, 370);
    glVertex2i(284, 390);
	glEnd();
	glColor3ub(0, 204, 0);
	glBegin(GL_POLYGON);
	glVertex2i(282-9, 370+6);
    glVertex2i(285+9, 370+6);
    glVertex2i(284, 390+6);
	glEnd();

///2nd
	glColor3ub(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(275, 345+50);
    glVertex2i(278, 345+50);
    glVertex2i(278, 370+50);
	glVertex2i(275, 370+50);
	glEnd();
    glColor3ub(102, 204, 0);
	glBegin(GL_POLYGON);
	glVertex2i(282-9-7, 370+50);
    glVertex2i(285+9-7, 370+50);
    glVertex2i(284-7, 390+50);
	glEnd();
    glColor3ub(0, 204, 0);
    glBegin(GL_POLYGON);
	glVertex2i(282-9-7, 370+50+6);
    glVertex2i(285+9-7, 370+50+6);
    glVertex2i(284-7, 390+50+6);
	glEnd();
///3rd
	glColor3ub(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(275-7, 345+50+50);
    glVertex2i(278-7, 345+50+50);
    glVertex2i(278-7, 370+50+50);
	glVertex2i(275-7, 370+50+50);
	glEnd();
    glColor3ub(102, 204, 0);
	glBegin(GL_POLYGON);
	glVertex2i(282-9-7-7, 370+50+50);
    glVertex2i(285+9-7-7, 370+50+50);
    glVertex2i(284-7-7, 390+50+50);
	glEnd();
    glColor3ub(0, 204, 0);
    glBegin(GL_POLYGON);
	glVertex2i(282-9-7-7, 370+50+50+6);
    glVertex2i(285+9-7-7, 370+50+50+6);
    glVertex2i(284-7-7, 390+50+50+6);
	glEnd();
///4th
	glColor3ub(0, 0, 0);
	glBegin(GL_QUADS);
	glVertex2i(275-7-7, 345+50+50+50);
    glVertex2i(278-7-7, 345+50+50+50);
    glVertex2i(278-7-7, 370+50+50+50);
	glVertex2i(275-7-7, 370+50+50+50);
	glEnd();
	glColor3ub(102, 204, 0);
	glBegin(GL_POLYGON);
	glVertex2i(282-9-7-7-7, 370+50+50+50);
    glVertex2i(285+9-7-7-7, 370+50+50+50);
    glVertex2i(284-7-7-7, 390+50+50+50);
	glEnd();
    glColor3ub(0, 204, 0);
    glBegin(GL_POLYGON);
	glVertex2i(282-9-7-7-7, 370+50+50+50+6);
    glVertex2i(285+9-7-7-7, 370+50+50+50+6);
    glVertex2i(284-7-7-7, 390+50+50+50+6);
	glEnd();
}



void RoadLeftLamp()
{


	float a;
	for(a=0; a<=1000; a+=70)
    {
        float b=a+3;
        glColor3ub(66, 66, 49);
        glBegin(GL_QUADS);
        glVertex2i(a,332);
        glVertex2i(b,332);
        glVertex2i(b,350);
        glVertex2i(a,350);
        glEnd();
        glColor3ub(255, 255, 255);
        glBegin(GL_QUADS);
        glVertex2i(a,350);
        glVertex2i(b,350);
        glVertex2i(b,355);
        glVertex2i(a,355);
        glEnd();
    }
}
void RoadRightLamp()
{
    float a;
	for(a=0; a<=1000; a+=70)
    {
        float b=a+3;
        glColor3ub(66, 66, 49);
        glBegin(GL_QUADS);
        glVertex2i(a,278);
        glVertex2i(b,278);
        glVertex2i(b,296);
        glVertex2i(a,296);
        glEnd();
        glColor3ub(255, 255, 255);
        glBegin(GL_QUADS);
        glVertex2i(a,296);
        glVertex2i(b,296);
        glVertex2i(b,301);
        glVertex2i(a,301);
        glEnd();
    }
}


void night_color()
{
    //glEnable(GL_BLEND);
    //glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4ub(0, 0, 0, 950);
    glBegin(GL_QUADS);
    glVertex2i(0, 0);
    glVertex2i(1000, 0);
    glVertex2i(1000, 1000);
    glVertex2i(0, 1000);
    glEnd();
}


void boat()
{
glPushMatrix();
glTranslatef(boat_speed,0.0f, 0.0f);
     glColor3ub(255, 0, 0);
     glBegin(GL_POLYGON);
     glVertex2i(35,0);
     glVertex2i(95,0);
     glVertex2i(130,20);
     glVertex2i(0,20);
     glEnd();
  //glColor3ub(255,51,113);*/
     glBegin(GL_POLYGON);
     glVertex2i(25,20);
     glVertex2i(105,20);
     glVertex2i(105,40);
     glVertex2i(25,40);
     glEnd();

     glBegin(GL_POLYGON);
     glVertex2i(35,40);
     glVertex2i(95,40);
     glVertex2i(95,60);
     glVertex2i(35,60);
glEnd();
      glBegin(GL_POLYGON);
     glVertex2i(45,60);
     glVertex2i(85,60);
     glVertex2i(85,80);
     glVertex2i(45,80);
     glEnd();
      glBegin(GL_POLYGON);
     glVertex2i(35,80);
     glVertex2i(95,80);
     glVertex2i(90,90);
     glVertex2i(40,90);
     glEnd();

     //window11
     glColor3ub(204, 255, 255);
       glBegin(GL_POLYGON);
     glVertex2i(31.25,25);
     glVertex2i(46.25,25);
     glVertex2i(46.25,35);
     glVertex2i(31.25,35);
     glEnd();

     //window12
     glBegin(GL_POLYGON);
     glVertex2f(48.75,25);
      glVertex2f(63.75,25);
       glVertex2f(63.75,35);
        glVertex2f(48.75,35);
     glEnd();

     //window13
       glBegin(GL_POLYGON);
     glVertex2f(66.25,25);
      glVertex2f(81.25,25);
       glVertex2f(81.25,35);
        glVertex2f(66.25,35);
     glEnd();

     //w14
       glBegin(GL_POLYGON);
     glVertex2f(83.75,25);
      glVertex2f(98.75,25);
       glVertex2f(98.75,35);
        glVertex2f(83.75,35);
     glEnd();
//w21
  glBegin(GL_POLYGON);
     glVertex2f(40,45);
      glVertex2f(55,45);
       glVertex2f(55,55);
        glVertex2f(40,55);
     glEnd();
//w22
     glBegin(GL_POLYGON);
     glVertex2f(57.5,45);
      glVertex2f(72,45);
       glVertex2f(72.5,55);
        glVertex2f(57,55);
     glEnd();
//w23
glBegin(GL_POLYGON);
     glVertex2f(75,45);
      glVertex2f(90,45);
       glVertex2f(90,55);
        glVertex2f(75,55);
     glEnd();

     //w31
     glBegin(GL_POLYGON);
     glVertex2f(50,65);
      glVertex2f(62.5,65);
       glVertex2f(62.5,75);
        glVertex2f(50,75);
     glEnd();

     //w32
     glBegin(GL_POLYGON);
     glVertex2f(67.5,65);
      glVertex2f(80,65);
       glVertex2f(80,75);
        glVertex2f(67.5,75);
     glEnd();
glPopMatrix();

glFlush();


}
void boat2()
{
    glPushMatrix();
    glTranslatef(boat2_speed,0.0f, 0.0f);
    glColor3ub(82, 122, 122);
     glBegin(GL_POLYGON);
     glVertex2i(20,30);
     glVertex2i(80,30);
     glVertex2i(97,50);
     glVertex2i(5,50);
     glEnd();

      glBegin(GL_POLYGON);
     glVertex2i(10,50);
     glVertex2i(90,50);
     glVertex2i(75,70);
     glVertex2i(25,70);
     glEnd();

       glBegin(GL_POLYGON);
     glVertex2i(25,70);
     glVertex2i(75,70);
     glVertex2i(60,90);
     glVertex2i(40,90);
     glEnd();
      glBegin(GL_TRIANGLES);
     glVertex2i(50,104);
     glVertex2i(60,90);
     glVertex2i(40,90);
     glEnd();

    glBegin(GL_POLYGON);
     glVertex2i(50,104);
     glVertex2i(51,104);
     glVertex2i(51,124);
     glVertex2i(50,124);
     glEnd();

      glColor3ub(255, 0, 0);
      glBegin(GL_TRIANGLES);
     glVertex2f(57,113);
     glVertex2f(51,118);
     glVertex2f(51,109);
     glEnd();

     glColor3ub(255, 255, 204);
        glBegin(GL_LINES);
        glVertex2i(97,50);
        glVertex2i(5,50);
        glVertex2i(10,50);
        glVertex2i(90,50);
        glVertex2i(25,70);
        glVertex2i(75,70);
        glVertex2i(40,90);
        glVertex2i(60,90);
        glEnd();

        //w11
         glColor3ub(204, 255, 255);
        glBegin(GL_POLYGON);
     glVertex2i(17,55);
     glVertex2i(40,55);
     glVertex2i(40,65);
     glVertex2i(25,65);
     glEnd();

     //w12
      glBegin(GL_POLYGON);
     glVertex2f(42.5,55);
     glVertex2f(57.5,55);
     glVertex2f(57.5,65);
     glVertex2f(42.5,65);
     glEnd();

  //w13
     glBegin(GL_POLYGON);
     glVertex2i(60,55);
     glVertex2i(83,55);
     glVertex2i(75,65);
     glVertex2i(60,65);
     glEnd();
     //w21

  glBegin(GL_POLYGON);
     glVertex2f(31,75);
     glVertex2f(48.5,75);
     glVertex2f(48.5,85);
     glVertex2f(40,85);
     glEnd();

     //w22

  glBegin(GL_POLYGON);
     glVertex2f(51.5,75);
     glVertex2f(69,75);
     glVertex2f(60.5,85);
     glVertex2f(51.5,85);
     glEnd();


  glBegin(GL_TRIANGLES);
     glVertex2f(50,100);
     glVertex2f(45,95);
     glVertex2f(55,95);
     glEnd();


glPopMatrix();

glFlush();

}

void boat3()
{
    glPushMatrix();
    glTranslatef(boat3_speed,0.0f, 0.0f);
    glColor3ub(0, 51, 153);

        glBegin(GL_POLYGON);
     glVertex2i(1120,50);
     glVertex2i(1180,50);
     glVertex2i(1200,80);
     glVertex2i(1100,80);
     glEnd();

         glBegin(GL_POLYGON);
     glVertex2i(1115,80);
     glVertex2i(1185,80);
     glVertex2i(1185,100);
     glVertex2i(1115,100);
     glEnd();

         glBegin(GL_POLYGON);
     glVertex2i(1115,100);
     glVertex2i(1185,100);
     glVertex2i(1175,110);
     glVertex2i(1125,110);
     glEnd();

         glBegin(GL_POLYGON);
     glVertex2i(1148,110);
     glVertex2i(1152,110);
     glVertex2i(1152,128);
     glVertex2i(1148,120);
     glEnd();

     glColor3ub(255, 255, 153);

     glBegin(GL_LINES);
     glVertex2i(1115,100);
     glVertex2i(1185,100);
      glVertex2i(1116,100);
      glVertex2i(1116,80);
      glVertex2i(1184,100);
       glVertex2i(1184,80);
       glVertex2i(1116,80);
       glVertex2i(1184,80);
      glEnd();

    //w1
    glColor3ub(204, 255, 255);
          glBegin(GL_POLYGON);
     glVertex2i(1120,85);
     glVertex2i(1135,85);
     glVertex2i(1135,95);
     glVertex2i(1120,95);
     glEnd();
//w2
         glBegin(GL_POLYGON);
     glVertex2i(1180,85);
     glVertex2i(1165,85);
     glVertex2i(1165,95);
     glVertex2i(1180,95);
     glEnd();


     glPopMatrix();
     glFlush();



}


void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3b(1,0,0);
    sky();
    Hill();
    sun();
    land();
    River();
    road();
    car1();
    car2();
    LeftRoadTree();
    house1();
    house4();
    house3();
    house5();
    house2();
    house6();
    house7();
    house8();
    house9();
    house10();
    HillTree();
    HillTree2();
    HillTree3();
    tree1();
    tree2();
    RoadLeftLamp();
    RoadRightLamp();
    drawcloud();
    boat3();
    boat2();
    boat();
    glFlush();
}

void Night_Display()
{
	glClear(GL_COLOR_BUFFER_BIT);
    glColor3b(1,0,0);
    sky();
    land();
    River();
    LeftRoadTree();
    Hill();
    house1();
    house4();
    house3();
    house5();
    house2();
    house6();
    house7();
    house8();
    house9();
    house10();
    HillTree();
    HillTree2();
    HillTree3();
    tree1();
    tree2();
    road();
    car1();
    car2();
    RoadLeftLamp();
    RoadRightLamp();
    moon();
    star1();
    star2();
    star3();
    star4();
    star5();
    star6();



    night_color();

    glFlush();
}



void update(int value)
{
     car1_speed += 1.8f;
	if (car1_speed > 1000)
    {
        car1_speed -= 1100;
    }

    car2_speed += 2.5f;
	if (car2_speed > 1000)
    {
        car2_speed -= 1100;
    }
    car1_speed += 1.5f;

     boat3_speed -= 1.1f;
	if (boat3_speed <-1500)
    {
        boat3_speed += 2000;
    }


     boat2_speed += 2.75f;
	if (boat2_speed > 1100)
    {
        boat2_speed -= 1500;
    }

    boat_speed += 1.0f;
	if (boat_speed > 1100)
    {
        boat_speed -= 1300;
    }

    glutPostRedisplay();
	glutTimerFunc(25, update, 0);

}

void myKeyboard(unsigned char key, int x, int y)
{
    switch (key)
	{
	    case 'n':
         ///Night
        glutDisplayFunc(Night_Display);
        break;

    case 'b':
               ///Day
       glutDisplayFunc(display);
        break;

        case 27:     /// Exit key
        exit(0);
        break;


    default:
	break;
	}

}

int main(int argc,char **argv)

{
     cout<<endl << "*********** Hill Side View  ********************" << endl << endl;
       cout<< "Press n : For Night"<<endl<<endl;
       cout<<"Press b : For Day"<<endl<<endl;
        cout<<"Press Esc : For Exit Windows"<<endl<<endl;


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1200, 600);
	glutCreateWindow("Hill Side View ");

	glutDisplayFunc(display);
	glutTimerFunc(25, update, 0);
    glutKeyboardFunc(myKeyboard);


    init();

	glutMainLoop();
	return 0;
}

