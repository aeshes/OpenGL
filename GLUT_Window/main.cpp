#include <windows.h>
#include <gl\GL.h>
#include <gl\GLU.h>
#include <glut.h>

void RenderScene()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void SetupRC()
{
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
}

int main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutCreateWindow("OpenGL");
	glutDisplayFunc(RenderScene);
	SetupRC();
	glutMainLoop();
}