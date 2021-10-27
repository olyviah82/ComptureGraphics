#include<GL/glut.h>
#include<Windows.h>

void init() {
	//window
	glClearColor(0.6, 0.7, 0.4, 0.0);
	//projection param
	glMatrixMode(GL_PROJECTION);
	//2D-Transform
	gluOrtho2D(0.0, 800, 0.0, 600);
}

void home()
{
	//roof of hse
	glClear(GL_COLOR_BUFFER_BIT);

	//roof clr
	glColor3f(0.3, 0.0, 0.0);
	glBegin(GL_POLYGON);

	glVertex2i(200, 500);
	glVertex2i(600, 500);
	glVertex2i(700, 350);
	glVertex2i(300, 350);
	glEnd();

	//roof top of front wall
	glColor3f(0.6, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2i(200, 500);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glEnd();

	//front wall
	glColor3f(0.1, 0.2, 0.3);
	glBegin(GL_POLYGON);
	glVertex2i(100, 350);
	glVertex2i(300, 350);
	glVertex2i(300, 100);
	glVertex2i(100, 100);
	glEnd();

	//front door
	glColor3f(0.0, 0.2, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(150, 250);
	glVertex2i(250, 250);
	glVertex2i(250, 100);
	glVertex2i(150, 100);
	glEnd();

	//door handle
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(4);
	glBegin(GL_LINES);
	glVertex2i(240, 175);
	glVertex2i(240, 185);
	glEnd();


	//wall(side)

	glColor3f(0.1, 0.1, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(300, 350);
	glVertex2i(700, 350);
	glVertex2i(700, 100);
	glVertex2i(300, 100);
	glEnd();

	//window 1
	glColor3f(0.4, 0.4, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(330, 320);
	glVertex2i(450, 320);
	glVertex2i(450, 230);
	glVertex2i(330, 230);
	glEnd();

	//line(w1)
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(6);
	glBegin(GL_LINES);
	glVertex2i(390, 320);
	glVertex2i(390, 230);
	glVertex2i(330, 273);
	glVertex2i(450, 273);
	glEnd();

	//window 2
	glColor3f(0.4, 0.4, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(530, 320);
	glVertex2i(650, 320);
	glVertex2i(650, 230);
	glVertex2i(530, 230);
	glEnd();

	//line(w2)
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2i(590, 320);
	glVertex2i(590, 230);
	glVertex2i(530, 273);
	glVertex2i(650, 273);
	glEnd();

	//Routine Process
	glFlush();



}

int main(int argc, char** argv) {
	//Init GLUT
	glutInit(&argc, argv);
	//display
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	//Set window pos
	glutInitWindowPosition(100, 100);
	//Set display window w & h
	glutInitWindowSize(1000, 600);
	//window w. title
	glutCreateWindow("Asignment 1: House in 2D with OpenGL");
	//exec init
	init();
	//graphics to display
	glutDisplayFunc(home);
	
	glutMainLoop();

}