#include <Windows.h>
#include <GL\glut.h>
#include <iostream>
#include <cmath>
#define PI 3.14159265359

using namespace std;



void skyback() {
	glColor3f(0.5, 0.8, 0.9);
	glBegin(GL_POLYGON);
	glVertex3f(-2, 1, 0);
	glVertex3f(2, 1, 0);
	glVertex3f(2, -0.3, 0);
	glVertex3f(-2, -0.3, 0);
	glEnd();

}

void lawnback() {
	glColor3f(0, 0.8, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-2, -0.3, 0);
	glVertex3f(2, -0.3, 0);
	glVertex3f(2, -1, 0);
	glVertex3f(-2, -1, 0);
	glEnd();


}


void house() {

	//roof
	glColor3f(1, 0, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.6, 0, 0);
	glVertex3f(0.6, 0, 0);
	glVertex3f(0.6, 0.3, 0);
	glVertex3f(-0.6, 0.3, 0);
	glEnd();

	//roofborder
	glColor3f(0, 0, 0);
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.6, 0, 0);
	glVertex3f(0.6, 0, 0);
	glVertex3f(0.6, 0.3, 0);
	glVertex3f(-0.6, 0.3, 0);
	glEnd();

	//housebod
	glColor3f(1, 0.4, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.4, 0, 0);
	glVertex3f(0.4, 0, 0);
	glVertex3f(0.4, -0.8, 0);
	glVertex3f(-0.4, -0.8, 0);
	glEnd();

	//houseborder
	glColor3f(0, 0, 0);
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.4, 0, 0);
	glVertex3f(0.4, 0, 0);
	glVertex3f(0.4, -0.8, 0);
	glVertex3f(-0.4, -0.8, 0);
	glEnd();

	//window1
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(0.1, -0.1, 0);
	glVertex3f(0.3, -0.1, 0);
	glVertex3f(0.3, -0.3, 0);
	glVertex3f(0.1, -0.3, 0);
	glEnd();

	//window grids 1
	glColor3f(0.6, 0.2, 0.3);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2d(0.2, -0.1);
	glVertex2d(0.2, -0.3);
	glVertex2d(0.1, -0.2);
	glVertex2d(0.3, -0.2);
	glEnd();

	//border
	glColor3f(0, 0, 0);
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.1, -0.1, 0);
	glVertex3f(0.3, -0.1, 0);
	glVertex3f(0.3, -0.3, 0);
	glVertex3f(0.1, -0.3, 0);

	glEnd();

	//window2
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.1, -0.1, 0);
	glVertex3f(-0.3, -0.1, 0);
	glVertex3f(-0.3, -0.3, 0);
	glVertex3f(-0.1, -0.3, 0);
	glEnd();

	//window grids 2
	glColor3f(0.6, 0.2, 0.3);
	glLineWidth(3);
	glBegin(GL_LINES);
	glVertex2d(-0.2, -0.1);
	glVertex2d(-0.2, -0.3);
	glVertex2d(-0.3, -0.2);
	glVertex2d(-0.1, -0.2);
	glEnd();

	//border
	glColor3f(0, 0, 0);
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.1, -0.1, 0);
	glVertex3f(-0.3, -0.1, 0);
	glVertex3f(-0.3, -0.3, 0);
	glVertex3f(-0.1, -0.3, 0);
	glEnd();

	//door
	glColor3f(1, 1, 0);
	glBegin(GL_POLYGON);
	glVertex3f(-0.1, -0.4, 0);
	glVertex3f(0.1, -0.4, 0);
	glVertex3f(0.1, -0.8, 0);
	glVertex3f(-0.1, -0.8, 0);
	glEnd();

	//doorknob
	//int w;
	//float j = 0.05f; float e = 0.6f; float radius = 0.02f;
	//int triangleAmount = 40;

	//float twicePi = 2.0f * PI;
	//glBegin(GL_TRIANGLE_FAN);
	//glColor3f(0, 0, 0);
	//glVertex2f(j, e);
	//for (w = 0; w <= triangleAmount; w++) {
		//glVertex2f(
			//j + (radius * cos(w * twicePi / triangleAmount)),
			//e + (radius * sin(w * twicePi / triangleAmount))
		//);
	//}
	//glEnd();

	//doorborder
	glColor3f(0, 0, 0);
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.1, -0.4, 0);
	glVertex3f(0.1, -0.4, 0);
	glVertex3f(0.1, -0.8, 0);
	glVertex3f(-0.1, -0.8, 0);
	glEnd();

	//
	// First  Circle
	glColor3ub(255, 255, 0); // yellow background
	float i = 0.05f;
	float r = 0.090f;
	float o = 0.6f;
	float x = 0.75f;
	glBegin(GL_TRIANGLE_FAN);
	for (i = 0.0f; i <= 360; i++)
		glVertex2f(r * cos(3.14 * i / 180.0) + x, r * sin(3.14 * i / 180.0) + o);

	glEnd();


	// Second  Circle
	glColor3f(1, 1, 1);  //black background
	float p = 0.05f;
	float q = 0.10f;
	float z = 0.6f;
	float l = 0.79f;
	glBegin(GL_TRIANGLE_FAN);
	for (p = 0.0f; p <= 360; p++)
		glVertex2f(r * cos(3.14 * p / 180.0) + l, q * sin(3.14 * p / 180.0) + z);

	glEnd();


	glColor3f(0.3, 0.5, 0.8);
	float a = 0.0f;
	float b = 1.5f;
	float c = 7.00f;
	float d = 4.00f;
	glBegin(GL_TRIANGLE_FAN);
	for (a = 0.0f; a <= 180; a++)
		glVertex2f(b * cos(3.14 * a / 180.0) + d, b * sin(3.14 * a / 180.0) + c);
	glEnd();

	



	int f;
	float h = 0.0f; float y = 0.3f; float rad = 0.35f;
	int triangleAm = 40;

	
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0, 0, 0);
	glVertex2f(h, y);
	for (f = 0; f <= triangleAm; f++) {
		glVertex2f(
			h + (rad * cos(f * PI / triangleAm)),
			y + (rad * sin(f * PI / triangleAm))
		);
	}
	glEnd();

	glFlush();
	


}


void Display() {

	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	//skyback
	//skyback();
	//glFlush();

	//house
	house();
	glFlush();

	//lawnback
	//lawnback();
	//glFlush();

}

int main(int argc, char* argv[]) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(900, 700);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Assignment 2: House in OpenGL w/ Crescet Moon");
	glutDisplayFunc(Display);
	glutMainLoop();
}

