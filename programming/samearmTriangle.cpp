#include<windows.h>
#include<GL/glut.h>

void line(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

//    glRotatef(spin,0.0,0.0,1.0);

    glColor3f(0.0,1.0,1.0);

    glBegin(GL_TRIANGLES);
    glVertex3f(0,0,0);
    glVertex3f(50,0,0);
    glVertex3f(25,25,0);
   // glVertex3f(3,5,0);

    glEnd();

    glFlush();
}

void init(void){

glClearColor(1.0,0.0,0.0,0.0);//changing background color of compiling editor

glOrtho(-50,50,-50,50,-1,1);


}

int main()
{
   glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize(500,500);
   glutInitWindowPosition(100,100);
   glutCreateWindow("same arm triangle ");
   init();

   glutDisplayFunc(line);
   glutMainLoop();
   return 0;

}
