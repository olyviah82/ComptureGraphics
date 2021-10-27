#include <stdio.h>
#include <GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT); //it indicates which buffer to be cleared -
	//glColor3f(0.0, 1.0, 0.0);//it takes float arguements
	glColor3d(255, 0, 0); //it takes double arguments 
	glBegin(GL_POLYGON);//used to identify the kind of output primitive that is to be displayed.
	//glVertex3f(2.0, 4.0, 0.0);//specifies all the three coodinates
	//glVertex3f(8.0, 4.0, 0.0);
	//glVertex3f(8.0, 6.0, 0.0);
	//glVertex3f(2.0, 6.0, 0.0);
	glVertex2f(0.0, 0.0);//specifies the x and y coordinates of the vertex  and the z coordinates is set to zero
	glVertex2f(5.0, 2.0);
	glVertex2f(2.0, -5.0);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-5.0, -2.0);
	glVertex2f(-3.0, 6.0);

	glEnd();
	glFlush();//forces or guarantees the commands made up to that point wil complete exceutions in a finite amount of time
}

int main(int argc, char** argv) 
{
	printf("hello world\n");
	glutInit(&argc, argv);//initializes  the glut library and process any command line options related to the glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);//decides the depth of the buffers associated with the winow
	//creates the window
	glutInitWindowPosition(100, 100);//assigns the initial position of the window
	glutInitWindowSize(300, 300);//assigns the initial size of the window
	glutCreateWindow("polygon");// assigns the name of the window 

	glClearColor(0.0, 0.0, 0.0, 1.0);         // black background
	glMatrixMode(GL_PROJECTION);              // setup viewing projection
	glLoadIdentity();                           // start with identity matrix
	glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);   // setup a 10x10x2 viewing world

	glutDisplayFunc(display);//specifies the name of the function that you would like to have been calles
	glutMainLoop();//hands execution control over to the glut library

	return 0;
}