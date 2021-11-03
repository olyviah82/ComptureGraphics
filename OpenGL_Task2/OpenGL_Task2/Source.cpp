#include <Windows.h>
#include <GL\glut.h>
#include <iostream>

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

	//doorborder
	glColor3f(0, 0, 0);
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.1, -0.4, 0);
	glVertex3f(0.1, -0.4, 0);
	glVertex3f(0.1, -0.8, 0);
	glVertex3f(-0.1, -0.8, 0);
	glEnd();



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

