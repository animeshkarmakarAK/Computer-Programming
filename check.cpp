
#include<bits/stdc++.h>
#include <iostream>
#include<windows.h>

using namespace std;

#include<GL/gl.h>
#include<GLUT/glut.h>
#include<math.h>
float lx=-1435.0f,ly=54,lz=120.0f;
float x=-1435.0f,y=54,z=125.0f;
float red=1.0f, blue=1.0f, green=1.0f;
float angle =0.0f;
float comp_jf_x=0,comp_jf_y=0,comp_jf_z=0,comp_angle=0;
int move=0,comp_plane_view=0;
float call_careem=0,careem_x=0,careem_z=0,careem_angle=0,careem_gear=0;
float dom_x=0,dom_z=0,dom_x2=0,dom_z2=0;
GLfloat dd=0.0,bb=0.0;
float metro_distance_1=0.0 ,metro_speed1=0.0,normal_y=10;
float plane_up_down=0,speed_up_down=0,plane_angle=0,go_forward=0,plane_stat=0;
float air_x=-2521,air_x2=0,air_y2=0,air_rotate=0,air_rotate2=0,air_distance=0,air_x3=-3021;
int air_show=0;
float blink=0,l_switch=0;
void runway();
void road_piece();
void roads();
float watch_col=0,stt=0;
void mymenu(int the_menu_key);
void reshape(int w,int h);
void renderScene();
 void keyboard1(unsigned char key1,int xx1,int yy1);
void keyboard(int key,int xx,int yy);
void mouse(int but,int state,int xxx,int yyy);

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(800,600);
	glutInitWindowPosition(1,1);
	glutCreateWindow("Pride Of Pakistan");

	glutDisplayFunc(renderScene);
	glutSpecialFunc(keyboard);
	//glutCreateMenu(mymenu);
	glutMouseFunc(mouse);
	glutIdleFunc(renderScene);
	glutReshapeFunc(reshape);
	glClearColor(0.56,0.56,0.87,1);
	glutKeyboardFunc(keyboard1);
		glEnable(GL_DEPTH_TEST);

	glDepthFunc(GL_LEQUAL);
	glutMainLoop();
}

void compund()
{
	glColor3f(0.7,0.7,0.7);
	glBegin(GL_TRIANGLES);
	glVertex3f(1,1,0);
	glVertex3f(1,4,0);
	glVertex3f(1,1,-10);

	//t2

	glVertex3f(1,1,-10);
	glVertex3f(1,4,-10);
	glVertex3f(1,4,0);
	 	//t1 t2 wall
	  glColor3f(0.34,0.34,0.34);
	glVertex3f(1,1,-10);
	glVertex3f(1,4,-10);
	glVertex3f(10,1,-10);

	glVertex3f(10,1,-10);
	glVertex3f(10,4,-10);
	glVertex3f(1,4,-10);

	 glColor3f(0.75,0.75,0.75);
	//t3
	glVertex3f(2,6,-10);
	glVertex3f(1,4,-10);
	glVertex3f(1,4,0);
	//t4
	glVertex3f(2,6,0);
	glVertex3f(2,6,-10);
	glVertex3f(1,4,0);
	glColor3f(0.34,0.34,0.34);
	//t3 t4 walls
	glVertex3f(2,6,-10);
	glVertex3f(10,4,-10);
	glVertex3f(1,4,-10);
	glVertex3f(10,6,-10);
	glVertex3f(10,4,-10);
	glVertex3f(2,6,-10);

	glColor3f(0.7,0.7,0.7);

	//t5
	glVertex3f(2,6,0);
	glVertex3f(2,6,-10);
	glVertex3f(5,8,0);
	//t6
	glVertex3f(5,8,0);
	glVertex3f(2,6,-10);
	glVertex3f(5,8,-10);
	glColor3f(0.34,0.34,0.34);
	//t5 t6 walls

	glVertex3f(10,6,-10);
	glVertex3f(2,6,-10);

	glVertex3f(5,8,-10);

	glVertex3f(10,8,-10);
	glVertex3f(10,6,-10);

	glVertex3f(5,8,-10);

	//t7
	 glColor3f(0.75,0.75,0.75);
	glVertex3f(5,8,0);
	glVertex3f(5,8,-10);
	glVertex3f(10,8,0);
	//t8
	glVertex3f(10,8,0);
	glVertex3f(5,8,-10);
	glVertex3f(10,8,-10);

	//farsh
	glColor3f(0.5,0.5,0.5);
	glVertex3f(0,1.01,1);
	glVertex3f(0,1.01,-11);
	glVertex3f(11,1.01,-11);


	 glVertex3f(11,1.01,1);
	glVertex3f(11,1.01,-11);
	glVertex3f(0,1.01,1);
	 	glEnd();
	 //mirror
		glTranslatef(20,0,-10);
		glRotatef(180,0,1,0);
 	glColor3f(0.7,0.7,0.7);
	glBegin(GL_TRIANGLES);
	glVertex3f(1,1,0);
	glVertex3f(1,4,0);
	glVertex3f(1,1,-10);

	//t2

	glVertex3f(1,1,-10);
	glVertex3f(1,4,-10);
	glVertex3f(1,4,0);
	 	//t1 t2 wall
	  glColor3f(0.34,0.34,0.34);
	glVertex3f(1,1,0);
	glVertex3f(1,4,0);
	glVertex3f(10,1,0);

	glVertex3f(10,1,0);
	glVertex3f(10,4,0);
	glVertex3f(1,4,0);

	 glColor3f(0.75,0.75,0.75);
	//t3
	glVertex3f(2,6,-10);
	glVertex3f(1,4,-10);
	glVertex3f(1,4,0);
	//t4
	glVertex3f(2,6,0);
	glVertex3f(2,6,-10);
	glVertex3f(1,4,0);
	glColor3f(0.34,0.34,0.34);
	//t3 t4 walls
	glVertex3f(2,6,0);
	glVertex3f(10,4,0);
	glVertex3f(1,4,0);
	glVertex3f(10,6,0);
	glVertex3f(10,4,0);
	glVertex3f(2,6,0);

	glColor3f(0.7,0.7,0.7);

	//t5
	glVertex3f(2,6,0);
	glVertex3f(2,6,-10);
	glVertex3f(5,8,0);
	//t6
	glVertex3f(5,8,0);
	glVertex3f(2,6,-10);
	glVertex3f(5,8,-10);
	glColor3f(0.34,0.34,0.34);
	//t5 t6 walls

	glVertex3f(10,6,0);
	glVertex3f(2,6,0);

	glVertex3f(5,8,0);

	glVertex3f(10,8,0);
	glVertex3f(10,6,0);

	glVertex3f(5,8,0);

	//t7
	 glColor3f(0.75,0.75,0.75);
	glVertex3f(5,8,0);
	glVertex3f(5,8,-10);
	glVertex3f(10,8,0);
	//t8
	glVertex3f(10,8,0);
	glVertex3f(5,8,-10);
	glVertex3f(10,8,-10);

	//farsh
	glColor3f(0.5,0.5,0.5);
	glVertex3f(0,1.01,1);
	glVertex3f(0,1.01,-11);
	glVertex3f(11,1.01,-11);


	 glVertex3f(11,1.01,1);
	glVertex3f(11,1.01,-11);
	glVertex3f(0,1.01,1);
	 	glEnd();


}
void watch_tower()
{

	glTranslatef(0,1.3,0);
	glColor3f(watch_col,0.5,0.5);
	glBegin(GL_TRIANGLES);
	glVertex3f(0,0,0);
	glVertex3f(0,0,5);
	glVertex3f(-20,0,0);

glVertex3f(-20,0,0);
	glVertex3f(0,0,5);
	glVertex3f(-20,0,5);
	//walls


	glVertex3f(0,0,0);
	glVertex3f(0,5,0);
	glVertex3f(-20,0,0);

glVertex3f(-20,0,0);
	glVertex3f(0,5,0);
	glVertex3f(-20,5,0);
	//w2
	glVertex3f(0,0,5);
	glVertex3f(0,5,5);
	glVertex3f(-20,0,5);

glVertex3f(-20,0,5);
	glVertex3f(0,5,5);
	glVertex3f(-20,5,5);
	//w3
	glVertex3f(0,0,0);
	glVertex3f(0,5,5);
	glVertex3f(0,0,5);

glVertex3f(0,0,0);
	glVertex3f(0,5,0);
	glVertex3f(0,5,5);
	//w5
	glVertex3f(-20,0,0);
	glVertex3f(-20,5,5);
	glVertex3f(-20,0,5);

glVertex3f(-20,0,0);
	glVertex3f(-20,5,0);
	glVertex3f(-20,5,5);
	glEnd();
}
void watch()
{
	watch_col=0.5;
	watch_tower();
	glTranslatef(0,3,0);
	watch_col=0.9;
	watch_tower();

	glTranslatef(0,3,0);
	watch_col=0.5;
	watch_tower();
	glTranslatef(0,3,0);
	watch_col=0.9;
	watch_tower();

}
void watch2()
{
	glColor3f(0.5,0.5,0.5);
	glRotatef(90,1,0,0);
	glTranslatef(-14,-5,-25);
	glutSolidCone(4,50,30,60);
	glColor3f(0.9,0.8,0.8);
	 glTranslatef(0,0,-1);
	glutSolidCone(6,30,30,60);

}

void runway()
{
	glColor3f(0.24,0.24,0.24);
	 glBegin(GL_TRIANGLES);
	 glVertex3f(100,1.2,-100);
	 glVertex3f(100,1.2,-80);
glVertex3f(-100,1.2,-80);

 glVertex3f(-100,1.2,-100);
	 glVertex3f(-100,1.2,-80);
glVertex3f(100,1.2,-100);

glEnd();
glTranslatef(100,2,-99);glRotatef(90,1,0,0);
if(blink<=0)
{
l_switch=1;
}
else if(blink>=1)
{
	l_switch=2;
}
if(l_switch==1)
{
	blink+=0.05;

}
else if(l_switch==2)
{
	blink-=0.05;
}

glColor3f(blink,0.1,0.1);
for(int st_loop=0;st_loop>=-24;st_loop-=2)
{

	glTranslatef(st_loop,0,0);
glutSolidCone(1,2,50,50);


}
glTranslatef(150,18,-0.05);
for(int st_loop2=0;st_loop2>=-24;st_loop2-=2)
{

	glTranslatef(st_loop2,0,0);
glutSolidCone(1,2,50,50);


}

}
void runway_strips()
{
	glColor3f(0.9,0.9,0.9);
	//broken strips
	glBegin(GL_TRIANGLES);
	//s1
	glVertex3f(0,0,0);
	glVertex3f(0,0,2);
	glVertex3f(10,0,2);
	glVertex3f(10,0,2);
	glVertex3f(10,0,0);
	glVertex3f(0,0,0);

	glEnd();



}
void runway_long_strips()
{
	glColor3f(0.9,0.9,0.9);
	//broken strips
	glBegin(GL_TRIANGLES);
	//s1
	glVertex3f(0,0,0);
	glVertex3f(0,0,2);
	glVertex3f(200,0,2);
	glVertex3f(200,0,2);
	glVertex3f(200,0,0);
	glVertex3f(0,0,0);

	glEnd();
	  glTranslatef(0,0,-15);
	  	glBegin(GL_TRIANGLES);
	//s1
	glVertex3f(0,0,0);
	glVertex3f(0,0,2);
	glVertex3f(200,0,2);
	glVertex3f(200,0,2);
	glVertex3f(200,0,0);
	glVertex3f(0,0,0);

	glEnd();


}
void jf17()
{
	glBegin(GL_TRIANGLES);
	//nose 1
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-0.2,0,-3);
	glVertex3f(0,-2,-3);
	glVertex3f(0,-2,0);


	glVertex3f(0,-2,0);
	glVertex3f(-0.2,-1.5,0);
	glVertex3f(-0.2,0,-3);

//n bot
	glColor3f(0.7,0.7,0.7);
	glVertex3f(0.2,-2.2,-3);
	glVertex3f(0,-2,-3);
	glVertex3f(0,-2,0);

	glVertex3f(0.2,-2.2,-3);
	glVertex3f(0.2,-2.2,0);
	glVertex3f(0,-2,0);
	//
	//for cockpit
	glColor3f(0.7,0.7,0.7);
	glVertex3f(0.2,-2.2,-3);
	glVertex3f(0,-2,-3);
	glVertex3f(0.10,-2,-5);

	glVertex3f(0.2,-2.2,-3);
	glVertex3f(0.2,-2.2,-5);
	glVertex3f(0.10,-2,-5);
	//for cockpit 2

	glColor3f(0.7,0.7,0.7);
	glVertex3f(0.20,-2.2,-5);
	glVertex3f(0.10,-2,-5);
	glVertex3f(0.10,-2,-8);

	glVertex3f(0.20,-2.2,-5);
	glVertex3f(0.2,-2.2,-8);
	glVertex3f(0.10,-2,-8);
	//for cockpit 3

	glColor3f(0.7,0.7,0.7);
	glVertex3f(0.20,-2.2,-8);
	glVertex3f(0.10,-2,-8);
	glVertex3f(0.10,-2,-10);

	glVertex3f(0.20,-2.2,-8);
	glVertex3f(0.2,-2.2,-10);
	glVertex3f(0.10,-2,-10);

	//for cockpit 4

	glColor3f(0.7,0.7,0.7);
	glVertex3f(0.20,-2.2,-20);
	glVertex3f(0.10,-1.7,-20);
	glVertex3f(0.10,-2,-10);

	glVertex3f(0.20,-2.2,-20);
	glVertex3f(0.2,-2.2,-10);
	glVertex3f(0.10,-2,-10);

	//for cockpit 5

	glColor3f(0.7,0.7,0.7);
	glVertex3f(0.20,-2.2,-20);
	glVertex3f(0.10,-1.7,-20);
	glVertex3f(0.10,-0.6,-23);

	glVertex3f(0.20,-2.2,-20);
	glVertex3f(0.2,-0.6,-23);
	glVertex3f(0.10,-0.6,-23);

	//n bot 2
	glColor3f(0.5,0.5,0.5);
	glVertex3f(0.2,-2.2,-3);
	glVertex3f(0.2,-2.2,0);
	glVertex3f(0.6,-2.2,0);

	 glVertex3f(0.2,-2.2,-3);
	glVertex3f(0.6,-2.2,-3);
	glVertex3f(0.6,-2.2,0);
	//for cockpit
	glColor3f(0.5,0.5,0.5);
	glVertex3f(0.2,-2.2,-3);
	glVertex3f(0.2,-2.2,-5);
	glVertex3f(0.6,-2.2,-5);

	 glVertex3f(0.2,-2.2,-3);
	glVertex3f(0.6,-2.2,-3);
	glVertex3f(0.6,-2.2,-5);

	//for cockpit 2
	glColor3f(0.5,0.5,0.5);
	glVertex3f(0.2,-2.2,-5);
	glVertex3f(0.2,-2.2,-8);
	glVertex3f(0.6,-2.2,-8);

	 glVertex3f(0.2,-2.2,-5);
	glVertex3f(0.6,-2.2,-5);
	glVertex3f(0.6,-2.2,-8);
		//for cockpit 3
	glColor3f(0.5,0.5,0.5);
	glVertex3f(0.2,-2.2,-8);
	glVertex3f(0.2,-2.2,-10);
	glVertex3f(0.6,-2.2,-10);

	 glVertex3f(0.2,-2.2,-8);
	glVertex3f(0.6,-2.2,-8);
	glVertex3f(0.6,-2.2,-10);

		//for cockpit 4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(0.2,-2.2,-20);
	glVertex3f(0.2,-2.2,-10);
	glVertex3f(0.6,-2.2,-10);

	 glVertex3f(0.2,-2.2,-20);
	glVertex3f(0.6,-2.2,-20);
	glVertex3f(0.6,-2.2,-10);

	//for cockpit 5
	glColor3f(0.5,0.5,0.5);
	glVertex3f(0.2,-2.2,-20);
	glVertex3f(0.2,-0.6,-23);
	glVertex3f(0.6,-0.6,-23);

	 glVertex3f(0.2,-2.2,-20);
	glVertex3f(0.6,-2.2,-20);
	glVertex3f(0.6,-0.6,-23);
	//nose 2
	glColor3f(0.7,0.7,0.7);
	glVertex3f(-0.2,0,-3);
	glVertex3f(0.2,0.5,-3);
	glVertex3f(-0.2,-1.5,0);


	glVertex3f(0.2,0.5,-3);
	glVertex3f(0.2,-0.9,0);
	glVertex3f(-0.2,-1.5,0);
	 //4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(0.2,0.5,-3);
	glVertex3f(0.2,-0.9,0);
	glVertex3f(0.6,-0.7,0);


	glVertex3f(0.6,-0.7,0);
	glVertex3f(0.6,0.5,-3);
	glVertex3f(0.2,0.5,-3);

	 //5

	glEnd();
	//mirror
	glTranslatef(1.2,0,0);
		glBegin(GL_TRIANGLES);
	//nose 1
	glColor3f(0.5,0.5,0.5);
	glVertex3f(0.2,0,-3);
	glVertex3f(0,-2,-3);
	glVertex3f(0,-2,0);


	glVertex3f(0,-2,0);
	glVertex3f(0.2,-1.5,0);
	glVertex3f(0.2,0,-3);

//n bot
	glColor3f(0.7,0.7,0.7);
	glVertex3f(-0.2,-2.2,-3);
	glVertex3f(0,-2,-3);
	glVertex3f(0,-2,0);

	glVertex3f(-0.2,-2.2,-3);
	glVertex3f(-0.2,-2.2,0);
	glVertex3f(0,-2,0);
	//for cockpit
	glColor3f(0.7,0.7,0.7);
	glVertex3f(-0.2,-2.2,-3);
	glVertex3f(0,-2,-3);
	glVertex3f(-0.10,-2,-5);

	glVertex3f(-0.2,-2.2,-3);
	glVertex3f(-0.2,-2.2,-5);
	glVertex3f(-0.10,-2,-5);

	//for cockpit 4

	glColor3f(0.7,0.7,0.7);
	glVertex3f(-0.20,-2.2,-20);
	glVertex3f(-0.10,-1.7,-20);
	glVertex3f(-0.10,-2,-10);

	glVertex3f(-0.20,-2.2,-20);
	glVertex3f(-0.2,-2.2,-10);
	glVertex3f(-0.10,-2,-10);

	//for cockpit 5
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-0.2,-2.2,-20);
	glVertex3f(-0.2,-0.6,-23);
	glVertex3f(-0.6,-0.6,-23);

	 glVertex3f(-0.2,-2.2,-20);
	glVertex3f(-0.6,-2.2,-20);
	glVertex3f(-0.6,-0.6,-23);
	//n bot 2
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-0.2,-2.2,-3);
	glVertex3f(-0.2,-2.2,0);
	glVertex3f(-0.6,-2.2,0);

	 glVertex3f(-0.2,-2.2,-3);
	glVertex3f(-0.6,-2.2,-3);
	glVertex3f(-0.6,-2.2,0);

		//for cockpit
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-0.2,-2.2,-3);
	glVertex3f(-0.2,-2.2,-5);
	glVertex3f(-0.6,-2.2,-5);

	 glVertex3f(-0.2,-2.2,-3);
	glVertex3f(-0.6,-2.2,-3);
	glVertex3f(-0.6,-2.2,-5);

	//for cockpit 2

	glColor3f(0.7,0.7,0.7);
	glVertex3f(-0.20,-2.2,-5);
	glVertex3f(-0.10,-2,-5);
	glVertex3f(-0.10,-2,-8);

	glVertex3f(-0.20,-2.2,-5);
	glVertex3f(-0.2,-2.2,-8);
	glVertex3f(-0.10,-2,-8);
	//for cockpit 3

	glColor3f(0.7,0.7,0.7);
	glVertex3f(-0.20,-2.2,-8);
	glVertex3f(-0.10,-2,-8);
	glVertex3f(-0.10,-2,-10);

	glVertex3f(-0.20,-2.2,-8);
	glVertex3f(-0.2,-2.2,-10);
	glVertex3f(-0.10,-2,-10);
	//for cockpit 4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-0.2,-2.2,-20);
	glVertex3f(-0.2,-2.2,-10);
	glVertex3f(-0.6,-2.2,-10);

	 glVertex3f(-0.2,-2.2,-20);
	glVertex3f(-0.6,-2.2,-20);
	glVertex3f(-0.6,-2.2,-10);
	//for cockpit 5

	glColor3f(0.7,0.7,0.7);
	glVertex3f(-0.20,-2.2,-20);
	glVertex3f(-0.10,-1.7,-20);
	glVertex3f(-0.10,-0.6,-23);

	glVertex3f(-0.20,-2.2,-20);
	glVertex3f(-0.2,-0.6,-23);
	glVertex3f(-0.10,-0.6,-23);
	//for cockpit 3 farsh
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-0.2,-2.2,-5);
	glVertex3f(-0.2,-2.2,-8);
	glVertex3f(-0.6,-2.2,-8);

	 glVertex3f(-0.2,-2.2,-5);
	glVertex3f(-0.6,-2.2,-5);
	glVertex3f(-0.6,-2.2,-8);
	//bot farsh for cockpit 4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-0.2,-2.2,-8);
	glVertex3f(-0.2,-2.2,-10);
	glVertex3f(-0.6,-2.2,-10);

	 glVertex3f(-0.2,-2.2,-8);
	glVertex3f(-0.6,-2.2,-8);
	glVertex3f(-0.6,-2.2,-10);
	//nose 2
	glColor3f(0.7,0.7,0.7);
	glVertex3f(0.2,0,-3);
	glVertex3f(-0.2,0.5,-3);
	glVertex3f(0.2,-1.5,0);


	glVertex3f(-0.2,0.5,-3);
	glVertex3f(-0.2,-0.9,0);
	glVertex3f(0.2,-1.5,0);
	 //4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-0.2,0.5,-3);
	glVertex3f(-0.2,-0.9,0);
	glVertex3f(-0.6,-0.7,0);


	glVertex3f(-0.6,-0.7,0);
	glVertex3f(-0.6,0.5,-3);
	glVertex3f(-0.2,0.5,-3);

	 //5

	glEnd();


	//cockpit

	glBegin(GL_TRIANGLES);
	glVertex3f(0,0,0);
	glVertex3f(1,0,0);
	glVertex3f(2,0,0);
	glEnd();
}
void jf172()
{
	glColor3f(0.5,0.5,0.5);
	glTranslatef(0,3,0);
	glBegin(GL_TRIANGLES);

	glVertex3f(-0.10,-2.5,-5);
	glVertex3f(-0.20,-3.0,-3.0);
	glVertex3f(0.0,-5.0,-3.0);

	//2
 glVertex3f(-0.10,-2.5,-5);
	glVertex3f(0.10,-5.0,-5.0);
	glVertex3f(0.0,-5.0,-3.0);
	 //cockpit 2

		glVertex3f(-0.10,-2.1,-8);
	glVertex3f(-0.10,-2.5,-5.0);
	glVertex3f(0.10,-5.0,-5.0);

	//2
 glVertex3f(-0.10,-2.1,-8);
	glVertex3f(0.10,-5.0,-8.0);
	glVertex3f(0.10,-5.0,-5.0);

	 //cockpit 3

			glVertex3f(-0.10,-2.1,-10);
	glVertex3f(-0.10,-2.1,-8.0);
	glVertex3f(0.10,-5.0,-8.0);

	//2
 glVertex3f(-0.10,-2.1,-10);
	glVertex3f(0.10,-5.0,-10.0);
	glVertex3f(0.10,-5.0,-8.0);
	// 5 / 19 / 17 ------------------------------------------

	//cylendur 1
	glColor3f(0.5,0.5,0.5);
			glVertex3f(-0.10,-2.1,-20);
	glVertex3f(-0.10,-2.1,-10.0);
	glVertex3f(0.10,-5.0,-10.0);

	//2
 glVertex3f(-0.10,-2.1,-20);
	glVertex3f(0.10,-4.8,-20.0);
	glVertex3f(0.10,-5.0,-10.0);

	//cylendur 1 chat
	glColor3f(0.7,0.7,0.7);
			glVertex3f(-0.10,-2.1,-23);
	glVertex3f(-0.10,-2.1,-10.0);
	glVertex3f(0.30,-1.4,-10.0);

	//2
 glVertex3f(-0.10,-2.1,-23);
	glVertex3f(0.70,-2.0,-23.0);
	glVertex3f(0.30,-1.4,-10.0);

	//tower wing 1  curve
	glColor3f(0.4,0.4,0.4);
			glVertex3f(0.70,-2.1,-23);
	glVertex3f(0.65,-2.1,-15.0);
	glVertex3f(0.65,-1.0,-23.0);
	//tower wing 2
	glColor3f(0.7,0.7,0.7);
			glVertex3f(0.65,-2.1,-23);
	glVertex3f(0.65,-2.1,-20.0);
	glVertex3f(0.65,0.90,-23.0);
	//2

			glVertex3f(0.65,0.90,-21.5);
	glVertex3f(0.65,-2.1,-20.0);
	glVertex3f(0.65,0.90,-23.0);

	//tower Flag
	glColor3f(0.2,0.5,0.2);
			glVertex3f(0.70,-0.20,-22.5);
	glVertex3f(0.70,-0.20,-21.5);
	glVertex3f(0.70,0.60,-22.5);
	//2

			glVertex3f(0.70,0.60,-21.5);
	glVertex3f(0.70,-0.20,-21.5);
	glVertex3f(0.70,0.60,-22.5);
	//tower Flag   white part
	glColor3f(0.9,0.9,0.9);
			glVertex3f(0.70,-0.20,-22.8);
	glVertex3f(0.70,-0.20,-22.5);
	glVertex3f(0.70,0.60,-22.8);


	//2

			glVertex3f(0.70,0.60,-22.5);
	glVertex3f(0.70,-0.20,-22.5);
	glVertex3f(0.70,0.60,-22.8);


//tower Flag  2
	glColor3f(0.2,0.5,0.2);
			glVertex3f(0.59,-0.20,-22.5);
	glVertex3f(0.59,-0.20,-21.5);
	glVertex3f(0.59,0.60,-22.5);
	//2

			glVertex3f(0.59,0.60,-21.5);
	glVertex3f(0.59,-0.20,-21.5);
	glVertex3f(0.59,0.60,-22.5);
	//tower Flag   white part
	glColor3f(0.9,0.9,0.9);
			glVertex3f(0.59,-0.20,-22.8);
	glVertex3f(0.59,-0.20,-22.5);
	glVertex3f(0.59,0.60,-22.8);


	//2

			glVertex3f(0.59,0.60,-22.5);
	glVertex3f(0.59,-0.20,-22.5);
	glVertex3f(0.59,0.60,-22.8);




	//cylendur 2
	glColor3f(0.5,0.5,0.5);
			glVertex3f(-0.10,-2.1,-20);
	glVertex3f(-0.10,-2.1,-23.0);
	glVertex3f(0.10,-3.6,-23.0);

	//2
 glVertex3f(-0.10,-2.1,-20);
	glVertex3f(0.10,-4.8,-20.0);
	glVertex3f(0.10,-3.6,-23.0);

 //engine
	glColor3f(0.76,0.76,0.76);
			glVertex3f(-0.10,-2.5,-14);
	glVertex3f(-0.10,-3.1,-8.0);
	glVertex3f(-0.85,-3.45,-8.0);

	//2
 glVertex3f(-0.10,-2.5,-14);
	glVertex3f(0.0,-2.55,-14.0);
	glVertex3f(-0.85,-3.45,-8.0);

	 //engine 2
	glVertex3f(0.10,-4.3,-14);
	glVertex3f(0.10,-4.9,-8.0);
	glVertex3f(-0.85,-4.90,-8.0);

	//2
 glVertex3f(0.10,-4.3,-14);
	glVertex3f(0.0,-4.3,-14.0);
	glVertex3f(-0.85,-4.90,-8.0);

	 //engine 3
	glVertex3f(0.0,-4.3,-14);
	glVertex3f(-0.85,-3.45,-8.0);
	glVertex3f(-0.85,-4.90,-8.0);

	//2
 glVertex3f(0.0,-4.3,-14);
	glVertex3f(-0.05,-2.55,-14.0);
	glVertex3f(-0.85,-3.45,-8.0);
	glColor3f(0.2,0.2,0.2);
	//engine closed
	glColor3f(0.2,0.2,0.2);
			glVertex3f(0.10,-4.95,-8.0);
	glVertex3f(-0.10,-3.10,-8.0);
	glVertex3f(-0.85,-3.45,-8.0);

	//2
 glVertex3f(-0.85,-4.90,-8.0);
glVertex3f(0.10,-4.95,-8.0);
	glVertex3f(-0.85,-3.45,-8.0);
	glColor3f(0.6,0.6,0.6);
	 //wing 1 curve
	glVertex3f(-1.90,-4.0,-9);
	glVertex3f(0.40,-4,-20.0);
	glVertex3f(-0.25,-4,-8.0);
 //2

	 glVertex3f(-1.90,-4.0,-9);
	glVertex3f(-0.70,-4,-9.0);
	glVertex3f(-0.40,-4,-23.0);


	 glVertex3f(-0.40,-4.0,-23);
	glVertex3f(-0.70,-4,-9.0);
	glVertex3f(0.45,-4,-23.0);
	//big wing conrol

	 glVertex3f(-1.90,-4.0,-9);
	glVertex3f(-0.70,-4,-9.0);
	glVertex3f(-1.90,-4,-15.0);

  //big wing

	glVertex3f(-6.90,-4.0,-17);
	glVertex3f(-0.70,-4,-17);
	glVertex3f(-0.85,-4,-12.0);


	glVertex3f(-6.90,-4.0,-17);
	glVertex3f(-0.70,-4,-17);
	glVertex3f(-6.90,-4,-19.0);


	glVertex3f(-0.70,-4.0,-19);
	glVertex3f(-0.70,-4,-17);
	glVertex3f(-6.90,-4,-19.0);
	//small wing
	glVertex3f(-0.70,-4.0,-20);
	glVertex3f(-0.20,-4,-22.2);
	glVertex3f(-2.90,-4,-22.2);

	glVertex3f(-0.70,-4.0,-20);
	glVertex3f(-2.90,-4,-21.2);
	glVertex3f(-2.90,-4,-22.2);
	//ring
	//1
glColor3f(0.75,0.75,0.75);
	glVertex3f(0.30,-2.0,-5);
	glVertex3f(-0.10,-2.5,-5.0);
	glVertex3f(-0.10,-2.60,-4.65);

		glVertex3f(0.30,-2.0,-4.65);
	glVertex3f(0.30,-2.0,-5.0);
	glVertex3f(-0.10,-2.60,-4.65);

	//2
	glVertex3f(0.30,-2.0,-4.65);
	glVertex3f(0.40,-1.9,-5.0);
	glVertex3f(0.40,-1.9,-4.65);

		glVertex3f(0.30,-2.0,-4.65);
	glVertex3f(0.30,-2.0,-5.0);
	glVertex3f(0.40,-1.9,-5.0);
	//3
	 glColor3f(0.5,0.5,0.5);
	glVertex3f(0.40,-1.9,-4.65);
	glVertex3f(0.40,-1.9,-5.0);
	glVertex3f(0.60,-1.7,-5.0);

	glVertex3f(0.60,-1.7,-5.0);
	glVertex3f(0.60,-1.8,-4.65);
	glVertex3f(0.40,-1.9,-4.65);

	//ring 2
	//1
glColor3f(0.75,0.75,0.75);
	glVertex3f(0.20,-1.4,-10);
	glVertex3f(-0.10,-2.1,-9.75);
	glVertex3f(-0.10,-2.1,-10);




	glVertex3f(0.20,-1.4,-9.75);
	glVertex3f(0.20,-1.4,-10);
	glVertex3f(-0.10,-2.1,-9.75);

	//r2
	glVertex3f(0.20,-1.4,-9.75);
	glVertex3f(0.20,-1.4,-10);
	glVertex3f(0.50,-1.1,-9.75);

	 glVertex3f(0.50,-1.1,-10);
	glVertex3f(0.50,-1.1,-9.75);
	glVertex3f(0.20,-1.4,-10);
	//r3

	glVertex3f(0.50,-1.1,-9.75);
	glVertex3f(0.50,-1.1,-10);
	glVertex3f(0.60,-1.1,-9.75);

	glVertex3f(0.60,-1.1,-9.75);
	glVertex3f(0.60,-1.1,-10);
	glVertex3f(0.50,-1.1,-10);


	glEnd();



	//mirror
	glColor3f(0.5,0.5,0.5);
	glRotatef(0,0,0,0);
		glTranslatef(1.20,0,0);
	glBegin(GL_TRIANGLES);

	glVertex3f(0.10,-2.5,-5);
	glVertex3f(0.20,-3.0,-3.0);
	glVertex3f(0.0,-5.0,-3.0);

	//2
 glVertex3f(0.10,-2.5,-5);
	glVertex3f(-0.10,-5.0,-5.0);
	glVertex3f(0.0,-5.0,-3.0);

	 //cockpit 2

		glVertex3f(0.10,-2.1,-8);
	glVertex3f(0.10,-2.5,-5.0);
	glVertex3f(-0.10,-5.0,-5.0);

	//2
 glVertex3f(0.10,-2.1,-8);
	glVertex3f(-0.10,-5.0,-8.0);
	glVertex3f(-0.10,-5.0,-5.0);
	//cockpit 3

			glVertex3f(0.10,-2.1,-10);
	glVertex3f(0.10,-2.1,-8.0);
	glVertex3f(-0.10,-5.0,-8.0);

	//2
 glVertex3f(0.10,-2.1,-10);
	glVertex3f(-0.10,-5.0,-10.0);
	glVertex3f(-0.10,-5.0,-8.0);

	// 5 / 19 / 17 ------------------------------------------

	//cylendur 1
	glColor3f(0.7,0.7,0.7);
			glVertex3f(0.10,-2.1,-20);
	glVertex3f(0.10,-2.1,-10.0);
	glVertex3f(-0.10,-5.0,-10.0);

	//2
 glVertex3f(0.10,-2.1,-20);
	glVertex3f(-0.10,-4.8,-20.0);
	glVertex3f(-0.10,-5.0,-10.0);

	//cylendur 1 chat
	glColor3f(0.7,0.7,0.7);
			glVertex3f(0.10,-2.1,-23);
	glVertex3f(0.10,-2.1,-10.0);
	glVertex3f(-0.30,-1.4,-10.0);

	//2
 glVertex3f(0.10,-2.1,-23);
	glVertex3f(-0.70,-2.0,-23.0);
	glVertex3f(-0.30,-1.4,-10.0);





	//cylendur 2
	glColor3f(0.7,0.7,0.7);
			glVertex3f(0.10,-2.1,-20);
	glVertex3f(0.10,-2.1,-23.0);
	glVertex3f(-0.10,-3.6,-23.0);

	//2
 glVertex3f(0.10,-2.1,-20);
	glVertex3f(-0.10,-4.8,-20.0);
	glVertex3f(-0.10,-3.6,-23.0);

 //engine
	glColor3f(0.6,0.6,0.6);
			glVertex3f(0.10,-2.5,-14);
	glVertex3f(0.10,-3.1,-8.0);
	glVertex3f(0.85,-3.45,-8.0);

	//2
 glVertex3f(0.10,-2.5,-14);
	glVertex3f(0.0,-2.55,-14.0);
	glVertex3f(0.85,-3.45,-8.0);

	 //engine 2
	glVertex3f(-0.10,-4.3,-14);
	glVertex3f(-0.10,-4.9,-8.0);
	glVertex3f(0.85,-4.90,-8.0);

	//2
 glVertex3f(-0.10,-4.3,-14);
	glVertex3f(0.0,-4.3,-14.0);
	glVertex3f(0.85,-4.90,-8.0);

	 //engine 3
	glVertex3f(0.0,-4.3,-14);
	glVertex3f(0.85,-3.45,-8.0);
	glVertex3f(0.85,-4.90,-8.0);

	//2
 glVertex3f(0.0,-4.3,-14);
	glVertex3f(0.05,-2.55,-14.0);
	glVertex3f(0.85,-3.45,-8.0);
	glColor3f(-0.2,0.2,0.2);
	//engine closed
	glColor3f(0.3,0.3,0.3);
			glVertex3f(-0.10,-4.95,-8.0);
	glVertex3f(0.10,-3.10,-8.0);
	glVertex3f(0.85,-3.45,-8.0);

	//2
 glVertex3f(0.85,-4.90,-8.0);
glVertex3f(-0.10,-4.95,-8.0);
	glVertex3f(0.85,-3.45,-8.0);
	glColor3f(0.6,0.6,0.6);
	 //wing 1 curve
	glVertex3f(1.90,-4.0,-9);
	glVertex3f(-0.40,-4,-20.0);
	glVertex3f(0.25,-4,-8.0);
 //2

	 glVertex3f(1.90,-4.0,-9);
	glVertex3f(0.70,-4,-9.0);
	glVertex3f(0.40,-4,-23.0);


	 glVertex3f(0.40,-4.0,-23);
	glVertex3f(0.70,-4,-9.0);
	glVertex3f(-0.45,-4,-23.0);
	//big wing conrol

	 glVertex3f(1.90,-4.0,-9);
	glVertex3f(0.70,-4,-9.0);
	glVertex3f(1.90,-4,-15.0);

  //big wing

	glVertex3f(6.90,-4.0,-17);
	glVertex3f(0.70,-4,-17);
	glVertex3f(0.85,-4,-12.0);


	glVertex3f(6.90,-4.0,-17);
	glVertex3f(0.70,-4,-17);
	glVertex3f(6.90,-4,-19.0);


	glVertex3f(0.70,-4.0,-19);
	glVertex3f(0.70,-4,-17);
	glVertex3f(6.90,-4,-19.0);
	//small wing
	glVertex3f(0.70,-4.0,-20);
	glVertex3f(0.20,-4,-22.2);
	glVertex3f(2.90,-4,-22.2);

	glVertex3f(0.70,-4.0,-20);
	glVertex3f(2.90,-4,-21.2);
	glVertex3f(2.90,-4,-22.2);
	//ring
	//1
	glColor3f(0.75,0.75,0.75);
	glVertex3f(-0.30,-2.0,-5);
	glVertex3f(0.10,-2.5,-5.0);
	glVertex3f(0.10,-2.60,-4.65);

		glVertex3f(-0.30,-2.0,-4.65);
	glVertex3f(-0.30,-2.0,-5.0);
	glVertex3f(0.10,-2.60,-4.65);

	//2
	glVertex3f(-0.30,-2.0,-4.65);
	glVertex3f(-0.40,-1.9,-5.0);
	glVertex3f(-0.40,-1.9,-4.65);

		glVertex3f(-0.30,-2.0,-4.65);
	glVertex3f(-0.30,-2.0,-5.0);
	glVertex3f(-0.40,-1.9,-5.0);
	//3
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-0.40,-1.9,-4.65);
	glVertex3f(-0.40,-1.9,-5.0);
	glVertex3f(-0.60,-1.7,-5.0);

	glVertex3f(-0.60,-1.7,-5.0);
	glVertex3f(-0.60,-1.8,-4.65);
	glVertex3f(-0.40,-1.9,-4.65);

		//ring 2
	//1
glColor3f(0.75,0.75,0.75);
	glVertex3f(-0.20,-1.4,-10);
	glVertex3f(0.10,-2.1,-9.75);
	glVertex3f(0.10,-2.1,-10);




	glVertex3f(-0.20,-1.4,-9.75);
	glVertex3f(-0.20,-1.4,-10);
	glVertex3f(0.10,-2.1,-9.75);

	//r2
	glVertex3f(-0.20,-1.4,-9.75);
	glVertex3f(-0.20,-1.4,-10);
	glVertex3f(-0.50,-1.1,-9.75);

	 glVertex3f(-0.50,-1.1,-10);
	glVertex3f(-0.50,-1.1,-9.75);
	glVertex3f(-0.20,-1.4,-10);
	//r3

	glVertex3f(-0.50,-1.1,-9.75);
	glVertex3f(-0.50,-1.1,-10);
	glVertex3f(-0.60,-1.1,-9.75);

	glVertex3f(-0.60,-1.1,-9.75);
	glVertex3f(-0.60,-1.1,-10);
	glVertex3f(-0.50,-1.1,-10);

	glEnd();
	//cockpit

	glTranslatef(-5,-5,-4.50);
	glBegin(GL_TRIANGLES);
	glColor3f(0.3,0.3,0.3);
	//1
	glVertex3f(4.90,0.10,0);
		glVertex3f(3.85,0.10,-0.20);
			glVertex3f(5.12,2.40,0);

			 glVertex3f(3.70,2.40,0);
		glVertex3f(3.90,0.10,-0.20);
			glVertex3f(5.12,2.40,0);

			//dashboard
			glColor3f(0.2,0.2,0.2);
			   glVertex3f(3.70,2.40,0);
		glVertex3f(3.60,2.00,1.50);//up
			glVertex3f(5.12,2.40,0);


			   glVertex3f(5.12,2.40,0);
		glVertex3f(3.60,2.00,1.50);
			glVertex3f(5.12,2.00,1.50);

			//speed meter


			glColor3f(0.2,0.2,0.2);
			   glVertex3f(4.80,2.50,1.50);
			   glColor3f(0.3,0.8,0.3);
		glVertex3f(3.60,2.00,1.50);
			glVertex3f(5.12,2.00,1.50);

			  glVertex3f(4.00,2.50,1.50);
			glColor3f(0.2,0.2,0.2);

		glVertex3f(3.60,2.00,1.50); glColor3f(0.3,0.8,0.3);
			   glVertex3f(4.80,2.50,1.50);

			 glVertex3f(4.80,2.50,1.50);
			glEnd();
			//cockpit lines
			glColor3f(0.8,0.8,0.8);
			glBegin(GL_LINES);
			glVertex3f(4,2.45,1.6);
			glVertex3f(4.20,3.15,-0.20);

			glVertex3f(4,3.85,-3.3);
			glVertex3f(4.15,3.15,-0.20);

			glVertex3f(4,3.85,-3.3);
			glVertex3f(4.3,3.85,-5.90);




			glVertex3f(4.80,2.45,1.6);
			glVertex3f(4.55,3.15,-0.20);

			glVertex3f(4.80,3.85,-3.3);
			glVertex3f(4.55,3.15,-0.20);

			glVertex3f(4.80,3.85,-3.3);
			glVertex3f(4.50,3.85,-5.90);
			glEnd();
			//chand
			glColor3f(0.9,0.9,0.9);
			glLineWidth(3);
			glBegin(GL_LINES);
			glVertex3f(4.50,5.40,-17.1);
			glVertex3f(4.50,5.4,-17.5);

			glVertex3f(4.50,5.3,-17.7);
			glVertex3f(4.50,5.4,-17.5);
			//center line
			glVertex3f(4.50,5.3,-17.7);
			glVertex3f(4.50,5.1,-17.7);

			glVertex3f(4.50,4.9,-17.5);
			glVertex3f(4.50,5.1,-17.7);


			glVertex3f(4.50,4.9,-17.5);
			glVertex3f(4.50,4.90,-17.1);
			glEnd();
			 	//chand 2
			glColor3f(0.9,0.9,0.9);
			glLineWidth(3);
			glBegin(GL_LINES);
			glVertex3f(4.30,5.40,-17.1);
			glVertex3f(4.30,5.4,-17.5);

			glVertex3f(4.30,5.3,-17.7);
			glVertex3f(4.30,5.4,-17.5);
			//center line
			glVertex3f(4.30,5.3,-17.7);
			glVertex3f(4.30,5.1,-17.7);

			glVertex3f(4.30,4.9,-17.5);
			glVertex3f(4.30,5.1,-17.7);


			glVertex3f(4.30,4.9,-17.5);
			glVertex3f(4.30,4.90,-17.1);
			glEnd();
			//tandoor
			glColor3f(0.4,0.4,0.4);
			glTranslatef(4.40,3.05,-5.40);
			glRotatef(3,0,0,1);
			glScaled(0.80,1.45,1);
			glutSolidCone(0.60,-10,50,50);


			//front cone
			glColor3f(0.40,0.40,0.40);
			glTranslatef(-0.20,-1.75,9.85);
			glRotatef(8,1,0,0);
			 glScaled(1.65,1,1);
			glutSolidCone(0.55,4,50,50);
			//back  cone
			glColor3f(0.40,0.40,0.40);
			glTranslatef(0.10,-2,-23);
			glRotatef(-7,1,0,0);
			 glScaled(1.15,1,1);
			glutSolidCone(0.55,13,50,50);
			glColor3f(0.7,0.3,0.3);
		  glutSolidCone(0.35,1,50,50);
			//back  cone upper
			glColor3f(0.40,0.40,0.40);
			glTranslatef(0.0,0.50
				,0);
			glRotatef(-1.5,1,0,0);
			 glScaled(1.15,1,1);
			glutSolidCone(0.15,7,50,50);

			//tires
			glColor3f(0.2,0.2,0.2);
			glTranslatef(0,-2.7,20);
			glutSolidSphere(0.2,30,30);
		  glTranslatef(0,0,-10);
			glutSolidSphere(0.2,30,30);
}


void grass()
{

	glColor3f(0.54,0.54,0.54);
	 glBegin(GL_TRIANGLES);
	 glVertex3f(-100,0,0);
	 glVertex3f(100,0,0);
glVertex3f(100,5,0);


 glVertex3f(100,5,0);
	 glVertex3f(-100,5,0);
glVertex3f(-100,0,0);
glEnd();
glColor3f(0.44,0.44,0.44);

	 glBegin(GL_TRIANGLES);
	 glVertex3f(100,0,-100);
	 glVertex3f(100,0,0);
glVertex3f(100,5,0);


 glVertex3f(100,5,0);
	 glVertex3f(100,5,-100);
glVertex3f(100,0,-100);
	 glEnd();

	 glColor3f(0.54,0.54,0.54);

	 glBegin(GL_TRIANGLES);
	 glVertex3f(-100,0,-100);
	 glVertex3f(-100,0,0);
glVertex3f(-100,5,0);


 glVertex3f(-100,5,0);
	 glVertex3f(-100,5,-100);
glVertex3f(-100,0,-100);
	 glEnd();


glColor3f(0.44,0.44,0.44);

	 glBegin(GL_TRIANGLES);
	 glVertex3f(-100,0,-100);
	 glVertex3f(100,0,-100);
glVertex3f(100,5,-100);


 glVertex3f(100,5,-100);
	 glVertex3f(-100,5,-100);
glVertex3f(-100,0,-100);
glEnd();


}
void road_piece()
{
	glTranslatef(0,1.3,0);
	glColor3f(0.3,0.3,0.3);
	glBegin(GL_TRIANGLES);
	glVertex3f(0,0,0);
	glVertex3f(0,0,-120);
	glVertex3f(-20,0,0);

glVertex3f(-20,0,0);
	glVertex3f(0,0,-120);
	glVertex3f(-20,0,-120);

	//sides
	glColor3f(1,1,1);
	glVertex3f(-18,0.2,0);
	glVertex3f(-18,0.2,-120);
	glVertex3f(-20,0.2,0);

glVertex3f(-20,0.2,0);
	glVertex3f(-18,0.2,-120);
	glVertex3f(-20,0.2,-120);
	//sides
	glColor3f(1,1,1);
	glVertex3f(-2,0.2,0);
	glVertex3f(-2,0.2,-120);
	glVertex3f(0,0.2,0);

glVertex3f(0,0.2,0);
	glVertex3f(-2,0.2,-120);
	glVertex3f(0,0.2,-120);



	glEnd();
	//r2
	glRotatef(90,0,1,0);
		glTranslatef(120,0,0);
	glColor3f(0.3,0.3,0.3);
	glBegin(GL_TRIANGLES);
	glVertex3f(0,0,0);
	glVertex3f(0,0,-225);
	glVertex3f(-20,0,0);

glVertex3f(-20,0,0);
	glVertex3f(0,0,-225);
	glVertex3f(-20,0,-225);

	//sides
	glColor3f(1,1,1);
	glVertex3f(-18,0.2,0);
	glVertex3f(-18,0.2,-225);
	glVertex3f(-20,0.2,0);

glVertex3f(-20,0.2,0);
	glVertex3f(-18,0.2,-225);
	glVertex3f(-20,0.2,-225);
	//sides
	glColor3f(1,1,1);
	glVertex3f(-2,0.2,0);
	glVertex3f(-2,0.2,-225);
	glVertex3f(0,0.2,0);

glVertex3f(0,0.2,0);
	glVertex3f(-2,0.2,-225);
	glVertex3f(0,0.2,-225);



	glEnd();
	 //r3
	glRotatef(90,0,1,0);
	glTranslatef(240,0,0);
	glColor3f(0.3,0.3,0.3);
	glBegin(GL_TRIANGLES);
	glVertex3f(0,0,0);
	glVertex3f(0,0,-120);
	glVertex3f(-20,0,0);

glVertex3f(-20,0,0);
	glVertex3f(0,0,-120);
	glVertex3f(-20,0,-120);

	//sides
	glColor3f(1,1,1);
	glVertex3f(-18,0.2,0);
	glVertex3f(-18,0.2,-120);
	glVertex3f(-20,0.2,0);

glVertex3f(-20,0.2,0);
	glVertex3f(-18,0.2,-120);
	glVertex3f(-20,0.2,-120);
	//sides
	glColor3f(1,1,1);
	glVertex3f(-2,0.2,0);
	glVertex3f(-2,0.2,-120);
	glVertex3f(0,0.2,0);

glVertex3f(0,0.2,0);
	glVertex3f(-2,0.2,-120);
	glVertex3f(0,0.2,-120);



	glEnd();

	 //r4
	glRotatef(90,0,1,0);
	glTranslatef(120,0,120);
	glColor3f(0.3,0.3,0.3);
	glBegin(GL_TRIANGLES);
	glVertex3f(0,0,1710);
	glVertex3f(0,0,-120);
	glVertex3f(-20,0,1710);

glVertex3f(-20,0,1710);
	glVertex3f(0,0,-120);
	glVertex3f(-20,0,-120);

	//sides
	glColor3f(1,1,1);
	glVertex3f(-18,0.2,1710);
	glVertex3f(-18,0.2,-120);
	glVertex3f(-20,0.2,1710);

glVertex3f(-20,0.2,1710);
	glVertex3f(-18,0.2,-120);
	glVertex3f(-20,0.2,-120);
	//sides
	glColor3f(1,1,1);
	glVertex3f(-2,0.2,1710);
	glVertex3f(-2,0.2,-120);
	glVertex3f(0,0.2,1710);

glVertex3f(0,0.2,1710);
	glVertex3f(-2,0.2,-120);
	glVertex3f(0,0.2,-120);



	glEnd();


}
void roads()
{
	 glTranslatef(0,0,0);

	road_piece();


}

void prade_ground()
{
	glTranslatef(0,1.3,0);
	glColor3f(0.55,0.55,0.55);
	glBegin(GL_TRIANGLES);
	glVertex3f(0,0,0);
		glVertex3f(-250,0,0);
			glVertex3f(-250,0,-250);

			glVertex3f(0,0,0);
		glVertex3f(0,0,-250);
			glVertex3f(-250,0,-250);

			//walls 1
			glColor3f(0.4,0.4,0.4);
			glVertex3f(0,5,0);
		glVertex3f(-100,5,0);
			glVertex3f(-100,0,0);

			glVertex3f(0,0,0);
		glVertex3f(0,5,0);
			glVertex3f(-100,0,0);
			// 2
			glColor3f(-120.4,0.4,0.4);
			glVertex3f(-120,5,0);
		glVertex3f(-250,5,0);
			glVertex3f(-250,0,0);

			glVertex3f(-120,0,0);
		glVertex3f(-120,5,0);
			glVertex3f(-250,0,0);
			//walls b
			glColor3f(0.4,0.4,0.4);
			glVertex3f(0,3,-40);
		glVertex3f(-100,3,-40);
			glVertex3f(-100,0,-40);

			glVertex3f(0,0,-40);
		glVertex3f(0,3,-40);
			glVertex3f(-100,0,-40);

			//2
			glColor3f(0.4,0.4,0.4);
			glVertex3f(-120,3,-40);
		glVertex3f(-250,3,-40);
			glVertex3f(-250,0,-40);

			glVertex3f(-120,0,-40);
		glVertex3f(-120,3,-40);
			glVertex3f(-250,0,-40);

			//entrance walls
			glColor3f(0.4,0.4,0.4);
			glVertex3f(0,23,-70);
		glVertex3f(-100,23,-70);
			glVertex3f(-100,0,-70);

			glVertex3f(0,0,-70);
		glVertex3f(0,23,-70);
			glVertex3f(-100,0,-70);


			//2
			glColor3f(0.4,0.4,0.4);
			glVertex3f(-120,23,-70);
		glVertex3f(-250,23,-70);
			glVertex3f(-250,0,-70);

			glVertex3f(-120,0,-70);
		glVertex3f(-120,23,-70);
			glVertex3f(-250,0,-70);

			//parade parking walls
			glColor3f(0.9,0.6,0.6);
			glVertex3f(-40,2,-190);
		glVertex3f(-100,2,-190);
			glVertex3f(-100,0,-190);

			glVertex3f(-40,0,-190);
		glVertex3f(-40,2,-190);
			glVertex3f(-100,0,-190);


			//2

			glVertex3f(-120,2,-190);
		glVertex3f(-220,2,-190);
			glVertex3f(-220,0,-190);

			glVertex3f(-120,0,-190);
		glVertex3f(-120,2,-190);
			glVertex3f(-220,0,-190);

			//parade parking walls flags pole 1
			glColor3f(0.4,0.3,0.1);
			glVertex3f(-99,15,-190);
		glVertex3f(-100,15,-190);
			glVertex3f(-100,0,-190);

			glVertex3f(-99,0,-190);
		glVertex3f(-99,15,-190);
			glVertex3f(-100,0,-190);

			//parade parking walls flags jhanda 1
			glColor3f(0.8,0.9,0.7);
			glVertex3f(-90,15,-190);
		glVertex3f(-100,15,-190);
			glVertex3f(-100,20,-190);

			glVertex3f(-90,20,-190);
		glVertex3f(-90,15,-190);
			glVertex3f(-100,20,-190);


				//parade parking walls flags pole 2
			glColor3f(0.4,0.3,0.1);
			glVertex3f(-149,15,-190);
		glVertex3f(-150,15,-190);
			glVertex3f(-150,0,-190);

			glVertex3f(-149,0,-190);
		glVertex3f(-149,15,-190);
			glVertex3f(-150,0,-190);

			//parade parking walls flags jhanda 2
			glColor3f(0.8,0.6,0.7);
			glVertex3f(-140,15,-190);
		glVertex3f(-150,15,-190);
			glVertex3f(-150,20,-190);

			glVertex3f(-140,20,-190);
		glVertex3f(-140,15,-190);
			glVertex3f(-150,20,-190);


			//qareeb waly jhandy

				//parade parking walls flags pole 1
			glColor3f(0.4,0.3,0.1);
			glVertex3f(-99,15,-100);
		glVertex3f(-100,15,-100);
			glVertex3f(-100,0,-100);

			glVertex3f(-99,0,-100);
		glVertex3f(-99,15,-100);
			glVertex3f(-100,0,-100);

			//parade parking walls flags jhanda 1
			glColor3f(0.8,0.9,0.7);
			glVertex3f(-90,15,-100);
		glVertex3f(-100,15,-100);
			glVertex3f(-100,20,-100);

			glVertex3f(-90,20,-100);
		glVertex3f(-90,15,-100);
			glVertex3f(-100,20,-100);


				//parade parking walls flags pole 2
			glColor3f(0.4,0.3,0.1);
			glVertex3f(-149,15,-100);
		glVertex3f(-150,15,-100);
			glVertex3f(-150,0,-100);

			glVertex3f(-149,0,-100);
		glVertex3f(-149,15,-100);
			glVertex3f(-150,0,-100);

			//parade parking walls flags jhanda 2
			glColor3f(0.8,0.6,0.7);
			glVertex3f(-140,15,-100);
		glVertex3f(-150,15,-100);
			glVertex3f(-150,20,-100);

			glVertex3f(-140,20,-100);
		glVertex3f(-140,15,-100);
			glVertex3f(-150,20,-100);

				//parade parking walls flags pole 3
			glColor3f(0.4,0.3,0.1);
			glVertex3f(-169,15,-100);
		glVertex3f(-170,15,-100);
			glVertex3f(-170,0,-100);

			glVertex3f(-169,0,-100);
		glVertex3f(-169,15,-100);
			glVertex3f(-170,0,-100);

			//parade parking walls flags jhanda 3
			glColor3f(0.8,0.6,0.4);
			glVertex3f(-160,15,-100);
		glVertex3f(-170,15,-100);
			glVertex3f(-170,20,-100);

			glVertex3f(-160,20,-100);
		glVertex3f(-160,15,-100);
			glVertex3f(-170,20,-100);

				//parade parking walls flags pole 4
			glColor3f(0.4,0.3,0.1);
			glVertex3f(-69,15,-100);
		glVertex3f(-70,15,-100);
			glVertex3f(-70,0,-100);

			glVertex3f(-69,0,-100);
		glVertex3f(-69,15,-100);
			glVertex3f(-70,0,-100);

			//parade parking walls flags jhanda 4
			glColor3f(0.8,0.7,0.7);
			glVertex3f(-60,15,-100);
		glVertex3f(-70,15,-100);
			glVertex3f(-70,20,-100);

			glVertex3f(-60,20,-100);
		glVertex3f(-60,15,-100);
			glVertex3f(-70,20,-100);
//stairs

			//1 a
			glColor3f(0.8,0.8,0.8);
			glVertex3f(0,23,-70);
		glVertex3f(-100,23,-70);
			glVertex3f(-100,23,-75);

			glVertex3f(0,23,-75);
		glVertex3f(0,23,-70);
			glVertex3f(-100,23,-75);

				//2 a
			glColor3f(0.75,0.75,0.75);
			glVertex3f(0,20,-75);
		glVertex3f(-100,20,-75);
			glVertex3f(-100,23,-75);

			glVertex3f(0,23,-75);
		glVertex3f(0,20,-75);
			glVertex3f(-100,23,-75);

			//3 a
			glColor3f(0.6,0.6,0.6);
			glVertex3f(0,20,-80);
		glVertex3f(-100,20,-80);
			glVertex3f(-100,20,-75);

			glVertex3f(0,20,-75);
		glVertex3f(0,20,-80);
			glVertex3f(-100,20,-75);

			//4 a
			glColor3f(0.7,0.7,0.7);
			glVertex3f(0,20,-80);
		glVertex3f(-100,20,-80);
			glVertex3f(-100,15,-80);

			glVertex3f(0,15,-80);
		glVertex3f(0,20,-80);
			glVertex3f(-100,15,-80);
			//5 a
			glColor3f(0.8,0.8,0.8);
			glVertex3f(0,15,-80);
		glVertex3f(-100,15,-80);
			glVertex3f(-100,15,-85);

			glVertex3f(0,15,-85);
		glVertex3f(0,15,-80);
			glVertex3f(-100,15,-85);

			//6 a
			glColor3f(0.75,0.75,0.75);
			glVertex3f(0,15,-85);
		glVertex3f(-100,15,-85);
			glVertex3f(-100,10,-85);

			glVertex3f(0,10,-85);
		glVertex3f(0,15,-85);
			glVertex3f(-100,10,-85);

			//7 a
			glColor3f(0.6,0.6,0.6);
			glVertex3f(0,10,-85);
		glVertex3f(-100,10,-85);
			glVertex3f(-100,10,-90);

			glVertex3f(0,10,-90);
		glVertex3f(0,10,-85);
			glVertex3f(-100,10,-90);
			//8 a
			glColor3f(0.7,0.7,0.7);
			glVertex3f(0,10,-90);
		glVertex3f(-100,10,-90);
			glVertex3f(-100,5,-90);

			glVertex3f(0,5,-90);
		glVertex3f(0,10,-90);
			glVertex3f(-100,5,-90);

			//9 a
			glColor3f(0.8,0.8,0.8);
			glVertex3f(0,5,-90);
		glVertex3f(-100,5,-90);
			glVertex3f(-100,5,-95);

			glVertex3f(0,5,-95);
		glVertex3f(0,5,-90);
			glVertex3f(-100,5,-95);
			//10 a
			glColor3f(0.75,0.75,0.75);
			glVertex3f(0,0,-95);
		glVertex3f(-100,0,-95);
			glVertex3f(-100,5,-95);

			glVertex3f(0,5,-95);
		glVertex3f(0,0,-95);
			glVertex3f(-100,5,-95);


			//1 b
			glColor3f(0.8,0.8,0.8);
			glVertex3f(-120,23,-70);
		glVertex3f(-250,23,-70);
			glVertex3f(-250,23,-75);

			glVertex3f(-120,23,-75);
		glVertex3f(-120,23,-70);
			glVertex3f(-250,23,-75);
			glColor3f(0.4,0.4,0.4);


			//stairs bbbbbbbbbbbbbbb

			//1 a
			glColor3f(0.8,0.8,0.8);
			glVertex3f(-120,23,-70);
		glVertex3f(-250,23,-70);
			glVertex3f(-250,23,-75);

			glVertex3f(-120,23,-75);
		glVertex3f(-120,23,-70);
			glVertex3f(-250,23,-75);

				//2 a
			glColor3f(0.75,0.75,0.75);
			glVertex3f(-120,20,-75);
		glVertex3f(-250,20,-75);
			glVertex3f(-250,23,-75);

			glVertex3f(-120,23,-75);
		glVertex3f(-120,20,-75);
			glVertex3f(-250,23,-75);

			//3 a
			glColor3f(0.6,0.6,0.6);
			glVertex3f(-120,20,-80);
		glVertex3f(-250,20,-80);
			glVertex3f(-250,20,-75);

			glVertex3f(-120,20,-75);
		glVertex3f(-120,20,-80);
			glVertex3f(-250,20,-75);

			//4 a
			glColor3f(0.7,0.7,0.7);
			glVertex3f(-120,20,-80);
		glVertex3f(-250,20,-80);
			glVertex3f(-250,15,-80);

			glVertex3f(-120,15,-80);
		glVertex3f(-120,20,-80);
			glVertex3f(-250,15,-80);
			//5 a
			glColor3f(0.8,0.8,0.8);
			glVertex3f(-120,15,-80);
		glVertex3f(-250,15,-80);
			glVertex3f(-250,15,-85);

			glVertex3f(-120,15,-85);
		glVertex3f(-120,15,-80);
			glVertex3f(-250,15,-85);

			//6 a
			glColor3f(0.75,0.75,0.75);
			glVertex3f(-120,15,-85);
		glVertex3f(-250,15,-85);
			glVertex3f(-250,10,-85);

			glVertex3f(-120,10,-85);
		glVertex3f(-120,15,-85);
			glVertex3f(-250,10,-85);

			//7 a
			glColor3f(0.6,0.6,0.6);
			glVertex3f(-120,10,-85);
		glVertex3f(-250,10,-85);
			glVertex3f(-250,10,-90);

			glVertex3f(-120,10,-90);
		glVertex3f(-120,10,-85);
			glVertex3f(-250,10,-90);
			//8 a
			glColor3f(0.7,0.7,0.7);
			glVertex3f(-120,10,-90);
		glVertex3f(-250,10,-90);
			glVertex3f(-250,5,-90);

			glVertex3f(-120,5,-90);
		glVertex3f(-120,10,-90);
			glVertex3f(-250,5,-90);

			//9 a
			glColor3f(0.8,0.8,0.8);
			glVertex3f(-120,5,-90);
		glVertex3f(-250,5,-90);
			glVertex3f(-250,5,-95);

			glVertex3f(-120,5,-95);
		glVertex3f(-120,5,-90);
			glVertex3f(-250,5,-95);
			//10 a
			glColor3f(0.75,0.75,0.75);
			glVertex3f(-120,0,-95);
		glVertex3f(-250,0,-95);
			glVertex3f(-250,5,-95);

			glVertex3f(-120,5,-95);
		glVertex3f(-120,0,-95);
			glVertex3f(-250,5,-95);
			//w 2
			glVertex3f(0,0,0);
		glVertex3f(0,5,-250);
			glVertex3f(0,0,-250);

			glVertex3f(0,0,0);
		glVertex3f(0,5,0);
			glVertex3f(0,5,-250);

			//w 3
			glVertex3f(-250,0,0);
		glVertex3f(-250,5,-250);
			glVertex3f(-250,0,-250);

			glVertex3f(-250,0,0);
		glVertex3f(-250,5,0);
			glVertex3f(-250,5,-250);

			//walls 4
			glColor3f(0.4,0.4,0.4);
			glVertex3f(0,0,-250);
		glVertex3f(-250,0,-250);
			glVertex3f(-250,5,-250);

			glVertex3f(0,0,-250);
		glVertex3f(0,5,-250);
			glVertex3f(-250,5,-250);
			//quaid potrait
			glColor3f(0.8,0.8,0.8);
			glVertex3f(-120,40,-250);
		glVertex3f(-150,40,-250);
			glVertex3f(-150,5,-250);

			glVertex3f(-120,40,-250);
		glVertex3f(-120,5,-250);
			glVertex3f(-150,5,-250);

			//iqbal potrait
			glColor3f(0.8,0.8,0.8);
			glVertex3f(-80,40,-250);
		glVertex3f(-110,40,-250);
			glVertex3f(-110,5,-250);

			glVertex3f(-80,40,-250);
		glVertex3f(-80,5,-250);
			glVertex3f(-110,5,-250);
			//main road

			glColor3f(0.2,0.2,0.2);
			glVertex3f(0,0.3,-70);
		glVertex3f(-250,0.3,-70);
			glVertex3f(-250,0.3,-40);

			glVertex3f(0,0.3,-40);
		glVertex3f(0,0.3,-70);
			glVertex3f(-250,0.3,-40);
			//white patti
			glColor3f(0.9,0.9,0.9);
			glVertex3f(0,0.4,-57);
		glVertex3f(-250,0.4,-57);
			glVertex3f(-250,0.4,-54);

			glVertex3f(0,0.4,-54);
		glVertex3f(0,0.4,-57);
			glVertex3f(-250,0.4,-54);

			//parade road

			glColor3f(0.2,0.2,0.2);
			glVertex3f(0,0.3,-120);
		glVertex3f(-250,0.3,-120);
			glVertex3f(-250,0.3,-150);

			glVertex3f(0,0.3,-150);
		glVertex3f(0,0.3,-120);
			glVertex3f(-250,0.3,-150);
			//parade road white patti

			glColor3f(0.9,0.9,0.9);
			glVertex3f(0,0.4,-120);
		glVertex3f(-250,0.4,-120);
			glVertex3f(-250,0.4,-122);

			glVertex3f(0,0.4,-122);
		glVertex3f(0,0.4,-120);
			glVertex3f(-250,0.4,-122);
			//turn road

			glColor3f(0.2,0.2,0.2);
			glVertex3f(0,0.3,-160);
		glVertex3f(-250,0.3,-160);
			glVertex3f(-250,0.3,-150);

			glVertex3f(0,0.3,-150);
		glVertex3f(0,0.3,-160);
			glVertex3f(-250,0.3,-150);
			//center grass road

			glColor3f(0.2,0.6,0.2);
			glVertex3f(-40,0.4,-160);
		glVertex3f(-200,0.4,-160);
			glVertex3f(-200,0.4,-150);

			glVertex3f(-40,0.4,-150);
		glVertex3f(-40,0.4,-160);
			glVertex3f(-200,0.4,-150);

			//parade road 2222222

			glColor3f(0.2,0.2,0.2);
			glVertex3f(0,0.3,-180);
		glVertex3f(-250,0.3,-180);
			glVertex3f(-250,0.3,-150);

			glVertex3f(0,0.3,-150);
		glVertex3f(0,0.3,-180);
			glVertex3f(-250,0.3,-150);
			//parade 2222 road white patti

			glColor3f(0.9,0.9,0.9);
			glVertex3f(0,0.4,-180);
		glVertex3f(-250,0.4,-180);
			glVertex3f(-250,0.4,-182);

			glVertex3f(0,0.4,-182);
		glVertex3f(0,0.4,-180);
			glVertex3f(-250,0.4,-182);

			//parade road parking side

			glColor3f(0.2,0.2,0.2);
			glVertex3f(0,0.3,-190);
		glVertex3f(-250,0.3,-190);
			glVertex3f(-250,0.3,-250);

			glVertex3f(0,0.3,-250);
		glVertex3f(0,0.3,-190);
			glVertex3f(-250,0.3,-250);

	glEnd();
}
void careem()
{
	glTranslatef(0,0,0);
	glScaled(0.7,1,0.9);
	glBegin(GL_TRIANGLES);
	//base
		glColor3f(0.14,0.14,0.14);
	glVertex3f(10,-0.40,-26);
	glVertex3f(10,-0.40,-10);
	glVertex3f(20,-0.40,-10);

	glVertex3f(10,-0.40,-26);
	glVertex3f(20,-0.40,-26);
	glVertex3f(20,-0.40,-10);

	//front base
		glColor3f(0.16,0.16,0.16);
	glVertex3f(10,1.40,-10);
	glVertex3f(10,-0.40,-10);
	glVertex3f(20,-0.40,-10);

	glVertex3f(20,1.40,-10);
	glVertex3f(10,1.40,-10);
	glVertex3f(20,-0.40,-10);
	//front base 2
		glColor3f(0.66,0.66,0.66);
	glVertex3f(10,2.3,-14);
	glVertex3f(10,-0.40,-14);
	glVertex3f(20,-0.40,-14);

	glVertex3f(20,2.3,-14);
	glVertex3f(10,2.3,-14);
	glVertex3f(20,-0.40,-14);
	//front base 3
		glColor3f(0.66,0.66,0.66);
	glVertex3f(10,2.4,-19);
	glVertex3f(10,-0.40,-19);
	glVertex3f(20,-0.40,-19);

	glVertex3f(20,2.4,-19);
	glVertex3f(10,2.4,-19);
	glVertex3f(20,-0.40,-19);

	//front lights base
		glColor3f(0.66,0.66,0.66);
	glVertex3f(10.3,1.20,-9.99);
	glVertex3f(10.3,0.45,-9.99);
	glVertex3f(19.3,0.45,-9.99);

	glVertex3f(19.3,1.20,-9.99);
	glVertex3f(10.3,1.20,-9.99);
	glVertex3f(19.3,0.45,-9.99);
	//left lights
		glColor3f(1,1,0);
	glVertex3f(10.4,1.18,-9.98);
	glVertex3f(10.4,0.45,-9.98);
	glVertex3f(11.4,0.45,-9.98);

	glVertex3f(11.4,1.18,-9.98);
	glVertex3f(10.4,1.18,-9.98);
	glVertex3f(11.4,0.45,-9.98);

	//left indicator lights
		glColor3f(0.8,0.2,0.2);
	glVertex3f(10.4,0.1,-9.98);
	glVertex3f(10.4,0.40,-9.98);
	glVertex3f(11.4,0.40,-9.98);

	glVertex3f(11.4,0.1,-9.98);
	glVertex3f(10.4,0.1,-9.98);
	glVertex3f(11.4,0.40,-9.98);

	//right lights
		glColor3f(1,1,0);
	glVertex3f(18.4,1.18,-9.98);
	glVertex3f(18.4,0.45,-9.98);
	glVertex3f(19.4,0.45,-9.98);

	glVertex3f(19.4,1.18,-9.98);
	glVertex3f(18.4,1.18,-9.98);
	glVertex3f(19.4,0.45,-9.98);

	//right indicator lights
		glColor3f(0.8,0.2,0.2);
	glVertex3f(18.4,0.1,-9.98);
	glVertex3f(18.4,0.40,-9.98);
	glVertex3f(19.4,0.40,-9.98);

	glVertex3f(19.4,0.1,-9.98);
	glVertex3f(18.4,0.1,-9.98);
	glVertex3f(19.4,0.40,-9.98);

	//center engine lights
		glColor3f(0.1,0.1,0.1);
	glVertex3f(12,1.18,-9.98);
	glVertex3f(12,0.45,-9.98);
	glVertex3f(18,0.45,-9.98);

	glVertex3f(18,1.18,-9.98);
	glVertex3f(12,1.18,-9.98);
	glVertex3f(18,0.45,-9.98);

	//numb plate
		glColor3f(0.9,0.9,0.9);
	glVertex3f(14,0.1,-9.98);
	glVertex3f(14,0.40,-9.98);
	glVertex3f(16,0.40,-9.98);

	glVertex3f(16,0.1,-9.98);
	glVertex3f(14,0.1,-9.98);
	glVertex3f(16,0.40,-9.98);



//BACK LIGHTS


	//front lights base
		glColor3f(0.66,0.66,0.66);
	glVertex3f(10.3,1.20,-26.60);
	glVertex3f(10.3,0.45,-26.60);
	glVertex3f(19.3,0.45,-26.60);

	glVertex3f(19.3,1.20,-26.60);
	glVertex3f(10.3,1.20,-26.60);
	glVertex3f(19.3,0.45,-26.60);
	//left lights
		glColor3f(1,0.5,0.5);
	glVertex3f(10.4,1.18,-26.66);
	glVertex3f(10.4,0.45,-26.66);
	glVertex3f(11.4,0.45,-26.66);

	glVertex3f(11.4,1.18,-26.66);
	glVertex3f(10.4,1.18,-26.66);
	glVertex3f(11.4,0.45,-26.66);

	//left indicator lights
		glColor3f(0.8,0.2,0.2);
	glVertex3f(10.4,0.1,-26.66);
	glVertex3f(10.4,0.40,-26.66);
	glVertex3f(11.4,0.40,-26.66);

	glVertex3f(11.4,0.1,-26.66);
	glVertex3f(10.4,0.1,-26.66);
	glVertex3f(11.4,0.40,-26.66);

	//right lights
		glColor3f(1,0.5,0.5);
	glVertex3f(18.4,1.18,-26.66);
	glVertex3f(18.4,0.45,-26.66);
	glVertex3f(19.4,0.45,-26.66);

	glVertex3f(19.4,1.18,-26.66);
	glVertex3f(18.4,1.18,-26.66);
	glVertex3f(19.4,0.45,-26.66);

	//right indicator lights
		glColor3f(0.8,0.2,0.2);
	glVertex3f(18.4,0.1,-26.66);
	glVertex3f(18.4,0.40,-26.66);
	glVertex3f(19.4,0.40,-26.66);

	glVertex3f(19.4,0.1,-9.98);
	glVertex3f(18.4,0.1,-9.98);
	glVertex3f(19.4,0.40,-9.98);

	//center engine lights
		glColor3f(0.1,0.1,0.1);
	glVertex3f(12,1.18,-9.98);
	glVertex3f(12,0.45,-9.98);
	glVertex3f(18,0.45,-9.98);

	glVertex3f(18,1.18,-9.98);
	glVertex3f(12,1.18,-9.98);
	glVertex3f(18,0.45,-9.98);

	//numb plate
		glColor3f(0.9,0.9,0.9);
	glVertex3f(14,0.1,-9.98);
	glVertex3f(14,0.40,-9.98);
	glVertex3f(16,0.40,-9.98);

	glVertex3f(16,0.1,-9.98);
	glVertex3f(14,0.1,-9.98);
	glVertex3f(16,0.40,-9.98);

	//BACK LIGHTS END
	//front engine base
		glColor3f(0.76,0.76,0.76);
	glVertex3f(10,1.40,-10);
	glVertex3f(10,2.15,-13.8);
	glVertex3f(20,2.15,-13.8);

	glVertex3f(20,1.40,-10);
	glVertex3f(10,1.40,-10);
	glVertex3f(20,2.15,-13.8);

	//front engine base top
		glColor3f(0.36,0.36,0.36);
	glVertex3f(10.2,1.55,-10.3);
	glVertex3f(10.2,2.05,-13.0);
	glVertex3f(19.5,2.05,-13.0);

	glVertex3f(19.5,1.55,-10.3);
	glVertex3f(10.2,1.55,-10.3);
	glVertex3f(19.5,2.05,-13.0);

	//front engine AC parnala
			glColor3f(0.36,0.36,0.36);
	glVertex3f(10,2.20,-13.8);
	glVertex3f(10,2.10,-13.3);
	glVertex3f(20,2.10,-13.3);

	glVertex3f(20,2.20,-13.8);
	glVertex3f(10,2.20,-13.8);
	glVertex3f(20,2.10,-13.3);

	//front mirror frame
		 //t

		glColor3f(0.76,0.76,0.76);
	glVertex3f(10,3.85,-15.4);
	glVertex3f(10,3.80,-15.5);
	glVertex3f(20,3.80,-15.5);

	glVertex3f(20,3.85,-15.4);
	glVertex3f(10,3.85,-15.4);
	glVertex3f(20,3.80,-15.5);
	//l
		glColor3f(0.76,0.76,0.76);
	glVertex3f(10,2.15,-13.8);
	glVertex3f(10,3.95,-15.5);
	glVertex3f(11,3.95,-15.5);

	glVertex3f(11,2.15,-13.8);
	glVertex3f(10,2.15,-13.8);
	glVertex3f(11,3.95,-15.5);

	//r
		glColor3f(0.76,0.76,0.76);
	glVertex3f(19,2.15,-13.8);
	glVertex3f(19,3.95,-15.5);
	glVertex3f(20,3.95,-15.5);

	glVertex3f(20,2.15,-13.8);
	glVertex3f(19,2.15,-13.8);
	glVertex3f(20,3.95,-15.5);

	//roof
		glColor3f(0.16,0.16,0.16);
	glVertex3f(10,3.95,-25);
	glVertex3f(10,3.95,-15.5);
	glVertex3f(20,3.95,-15.5);

	glVertex3f(20,3.95,-25);
	glVertex3f(10,3.95,-25);
	glVertex3f(20,3.95,-15.5);

	//back mirror base
		glColor3f(0.46,0.46,0.46);
	glVertex3f(10,3.95,-25);
	glVertex3f(10,2,-26.5);
	glVertex3f(20,2,-26.5);

	glVertex3f(20,3.95,-25);
	glVertex3f(10,3.95,-25);
	glVertex3f(20,2,-26.5);
	//back mirror top
		glColor3f(0.86,0.86,0.86);
	glVertex3f(10.5,3.90,-25.05);
	glVertex3f(10.5,2.1,-26.5);
	glVertex3f(19.5,2.1,-26.5);

	glVertex3f(19.5,3.90,-25.05);
	glVertex3f(10.5,3.90,-25.05);
	glVertex3f(19.5,2.1,-26.5);
	//back lights base
		glColor3f(0.46,0.46,0.46);
	glVertex3f(10,0.45,-26.5);
	glVertex3f(10,2,-26.5);
	glVertex3f(20,2,-26.5);

	glVertex3f(20,0.45,-26.5);
	glVertex3f(10,0.45,-26.5);
	glVertex3f(20,2,-26.5);
	//back bolnet base
		glColor3f(0.16,0.16,0.16);
	glVertex3f(10,0.45,-26.5);
	glVertex3f(10,-0.45,-26);
	glVertex3f(20,-0.45,-26);

	glVertex3f(20,0.45,-26.5);
	glVertex3f(10,0.45,-26.5);
	glVertex3f(20,-0.45,-26);

	//left door base
		glColor3f(0.86,0.86,0.86);
	glVertex3f(10,1.40,-10);
	glVertex3f(10,-0.40,-10);
	glVertex3f(10,-0.40,-26);

	glVertex3f(10,1.40,-26);
	glVertex3f(10,1.40,-10);
	glVertex3f(10,-0.40,-26);
		//left door base missing areas
		glColor3f(0.86,0.86,0.86);
	glVertex3f(10,1.40,-26.5);
	glVertex3f(10,0.40,-26.5);
	glVertex3f(10,-0.40,-26);

	glVertex3f(10,1.40,-26);
	glVertex3f(10,1.40,-26.5);
	glVertex3f(10,-0.40,-26);
	//left door base missing areas 4

		glColor3f(0.86,0.86,0.86);
	glVertex3f(10,2,-13.8);
	glVertex3f(10,0.90,-13.8);
	glVertex3f(10,0.90,-26.5);

	glVertex3f(10,2,-26.5);
	glVertex3f(10,2,-13.8);
	glVertex3f(10,0.90,-26.5);
	//left door base missing areas 5

		glColor3f(0.86,0.86,0.86);
	glVertex3f(10,4,-18.8);
	glVertex3f(10,0.90,-18.8);
	glVertex3f(10,0.90,-19.5);

	glVertex3f(10,4,-19.5);
	glVertex3f(10,4,-18.8);
	glVertex3f(10,0.90,-19.5);
	//left door base missing areas 6

		glColor3f(0.86,0.86,0.86);
	glVertex3f(10,4,-24.8);
	glVertex3f(10,0.90,-24.8);
	glVertex3f(10,0.90,-23.5);

	glVertex3f(10,4,-23.5);
	glVertex3f(10,4,-24.8);
	glVertex3f(10,0.90,-23.5);
	//left patrol tank

		glColor3f(0.16,0.16,0.16);
	glVertex3f(9.9,2,-24.8);
	glVertex3f(9.9,0.90,-24.8);
	glVertex3f(9.9,0.90,-25.9);

	glVertex3f(9.9,2,-25.9);
	glVertex3f(9.9,2,-24.8);
	glVertex3f(9.9,0.90,-25.9);

	//left door 1

		glColor3f(0.16,0.16,0.16);
	glVertex3f(9.9,2,-23);
	glVertex3f(9.9,0.0,-23);
	glVertex3f(9.9,0.0,-20);

	glVertex3f(9.9,2,-20);
	glVertex3f(9.9,2,-23);
	glVertex3f(9.9,0.0,-20);
	//left door 2

		glColor3f(0.16,0.16,0.16);
	glVertex3f(9.9,2,-14);
	glVertex3f(9.9,0.0,-14);
	glVertex3f(9.9,0.0,-18.5);

	glVertex3f(9.9,2,-18.5);
	glVertex3f(9.9,2,-14);
	glVertex3f(9.9,0.0,-18.5);
	//left door 2 b

		glColor3f(0.16,0.16,0.16);
	glVertex3f(9.9,1,-13.5);
	glVertex3f(9.9,0.0,-13.5);
	glVertex3f(9.9,0.0,-14);

	glVertex3f(9.9,2,-14);
	glVertex3f(9.9,1,-13.5);
	glVertex3f(9.9,0.0,-14);

	//left door base missing areas 2 front
		//front engine base
		//front engine base
		glColor3f(0.76,0.76,0.76);
	glVertex3f(10,0.40,-10);
	glVertex3f(10,2.15,-13.8);
	glVertex3f(10,2.15,-13.8);

	glVertex3f(10,1.40,-10);
	glVertex3f(10,0.80,-13.8);
	glVertex3f(10,2.15,-13.8);
	//RIGHT DOOR !ALERT! RIGHT DOOR
	//Right door base
		glColor3f(0.86,0.86,0.86);
	glVertex3f(20,1.40,-10);
	glVertex3f(20,-0.40,-10);
	glVertex3f(20,-0.40,-26);

	glVertex3f(20,1.40,-26);
	glVertex3f(20,1.40,-10);
	glVertex3f(20,-0.40,-26);
		//left door base missing areas
		glColor3f(0.86,0.86,0.86);
	glVertex3f(20,1.40,-26.5);
	glVertex3f(20,0.40,-26.5);
	glVertex3f(20,-0.40,-26);

	glVertex3f(20,1.40,-26);
	glVertex3f(20,1.40,-26.5);
	glVertex3f(20,-0.40,-26);
	//left door base missing areas 4

		glColor3f(0.86,0.86,0.86);
	glVertex3f(20,2,-13.8);
	glVertex3f(20,0.90,-13.8);
	glVertex3f(20,0.90,-26.5);

	glVertex3f(20,2,-26.5);
	glVertex3f(20,2,-13.8);
	glVertex3f(20,0.90,-26.5);
	//left door base missing areas 5

		glColor3f(0.86,0.86,0.86);
	glVertex3f(20,4,-18.8);
	glVertex3f(20,0.90,-18.8);
	glVertex3f(20,0.90,-19.5);

	glVertex3f(20,4,-19.5);
	glVertex3f(20,4,-18.8);
	glVertex3f(20,0.90,-19.5);
	//left door base missing areas 6

		glColor3f(0.86,0.86,0.86);
	glVertex3f(20,4,-24.8);
	glVertex3f(20,0.90,-24.8);
	glVertex3f(20,0.90,-23.5);

	glVertex3f(20,4,-23.5);
	glVertex3f(20,4,-24.8);
	glVertex3f(20,0.90,-23.5);
	//left patrol tank

		glColor3f(0.16,0.16,0.16);
	glVertex3f(20.1,2,-24.8);
	glVertex3f(20.1,0.90,-24.8);
	glVertex3f(20.1,0.90,-25.9);

	glVertex3f(20.1,2,-25.9);
	glVertex3f(20.1,2,-24.8);
	glVertex3f(20.1,0.90,-25.9);

	//left door 1

		glColor3f(0.16,0.16,0.16);
	glVertex3f(20.1,2,-23);
	glVertex3f(20.1,0.0,-23);
	glVertex3f(20.1,0.0,-20);

	glVertex3f(20.1,2,-20);
	glVertex3f(20.1,2,-23);
	glVertex3f(20.1,0.0,-20);
	//left door 2

		glColor3f(0.16,0.16,0.16);
	glVertex3f(20.1,2,-14);
	glVertex3f(20.1,0.0,-14);
	glVertex3f(20.1,0.0,-18.5);

	glVertex3f(20.1,2,-18.5);
	glVertex3f(20.1,2,-14);
	glVertex3f(20.1,0.0,-18.5);
	//left door 2 b

		glColor3f(0.16,0.16,0.16);
	glVertex3f(20.1,1,-13.5);
	glVertex3f(20.1,0.0,-13.5);
	glVertex3f(20.1,0.0,-14);

	glVertex3f(20.1,2,-14);
	glVertex3f(20.1,1,-13.5);
	glVertex3f(20.1,0.0,-14);

	//left door base missing areas 2 front
		//front engine base
		//front engine base
		glColor3f(0.76,0.76,0.76);
	glVertex3f(20,0.40,-10);
	glVertex3f(20,2.15,-13.8);
	glVertex3f(20,2.15,-13.8);

	glVertex3f(20,1.40,-10);
	glVertex3f(20,0.80,-13.8);
	glVertex3f(20,2.15,-13.8);
	glEnd();
	glColor3f(0.2,0.2,0.2);
	glTranslatef(9.8,0,-12);
	glScaled(0.7,0.7,0.7);


	glutSolidTorus(1,0.2,20,20);
	glTranslatef(14.5,0,0);
	glutSolidTorus(1,0.2,20,20);
	glTranslatef(0,0,-18);

	glutSolidTorus(1,0.2,20,20);
	glTranslatef(-14,0,0);

	glutSolidTorus(1,0.2,20,20);
}
void metro()
{
	glTranslatef(0,20,0);
	glColor3f(0.72,0.72,0.72);
	glBegin(GL_TRIANGLES);
	//BASE
	glVertex3f(0,0,0);
	glVertex3f(0,0,200);
	glVertex3f(-40,0,200);

	glVertex3f(-40,0,200);
	glVertex3f(0,0,0);
	glVertex3f(-40,0,0);
	//roof
	glColor3f(0.52,0.52,0.52);
	glVertex3f(0,20,0);
	glVertex3f(0,20,200);
	glVertex3f(-40,20,200);

	glVertex3f(-40,20,200);
	glVertex3f(0,20,0);
	glVertex3f(-40,20,0);
	//Main elevator
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-10,20,0);
	glVertex3f(-10,20,-20);
	glVertex3f(-30,20,-20);

	glVertex3f(-30,20,-20);
	glVertex3f(-10,20,0);
	glVertex3f(-30,20,0);
		//Main elevator ground
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-10,-20,0);
	glVertex3f(-10,-20,-20);
	glVertex3f(-30,-20,-20);

	glVertex3f(-30,-20,-20);
	glVertex3f(-10,-20,0);
	glVertex3f(-30,-20,0);
		//Main elevator left wall
	glColor3f(0.82,0.42,0.42);
	glVertex3f(-30,-20,0);
	glVertex3f(-30,-20,-20);
	glVertex3f(-30,20,-20);

	glVertex3f(-30,20,-20);
	glVertex3f(-30,-20,0);
	glVertex3f(-30,20,0);
		//Main elevator right wall

	glVertex3f(-10,-20,0);
	glVertex3f(-10,-20,-20);
	glVertex3f(-10,20,-20);

	glVertex3f(-10,20,-20);
	glVertex3f(-10,-20,0);
	glVertex3f(-10,20,0);
	//Main elevator back wall
	glColor3f(0.85,0.55,0.55);
	glVertex3f(-10,-20,-20);
	glVertex3f(-10,20,-20);
	glVertex3f(-30,20,-20);

	glVertex3f(-30,20,-20);
	glVertex3f(-10,-20,-20);
	glVertex3f(-30,-20,-20);
		//Main elevator front wall
	glColor3f(0.82,0.62,0.62);
	glVertex3f(-10,-10,0);
	glVertex3f(-10,0,0);
	glVertex3f(-30,0,0);

	glVertex3f(-30,0,0);
	glVertex3f(-10,-10,0);
	glVertex3f(-30,-10,0);
		//Main elevator  door l
	glColor3f(0.82,0.62,0.62);
	glVertex3f(-10,-20,0);
	glVertex3f(-10,20,0);
	glVertex3f(-13,20,0);
	//Main elevator front wall r
	glColor3f(0.82,0.62,0.62);
	glVertex3f(-20,-20,0);
	glVertex3f(-20,20,0);
	glVertex3f(-30,20,0);

	glVertex3f(-30,20,0);
	glVertex3f(-20,-20,0);
	glVertex3f(-30,-20,0);

	glVertex3f(-13,20,0);
	glVertex3f(-10,-20,0);
	glVertex3f(-13,-20,0);
		//Main elevator other side
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-10,20,200);
	glVertex3f(-10,20,220);
	glVertex3f(-30,20,220);

	glVertex3f(-30,20,220);
	glVertex3f(-10,20,200);
	glVertex3f(-30,20,200);
		//Main elevator ground
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-10,-20,200);
	glVertex3f(-10,-20,220);
	glVertex3f(-30,-20,220);

	glVertex3f(-30,-20,220);
	glVertex3f(-10,-20,200);
	glVertex3f(-30,-20,200);
		//Main elevator left wall
	glColor3f(0.82,0.42,0.42);
	glVertex3f(-30,-20,200);
	glVertex3f(-30,-20,220);
	glVertex3f(-30,20,220);

	glVertex3f(-30,20,220);
	glVertex3f(-30,-20,200);
	glVertex3f(-30,20,200);
		//Main elevator right wall

	glVertex3f(-10,-20,200);
	glVertex3f(-10,-20,220);
	glVertex3f(-10,20,220);

	glVertex3f(-10,20,220);
	glVertex3f(-10,-20,200);
	glVertex3f(-10,20,200);
	//Main elevator back wall
	glColor3f(0.85,0.55,0.55);
	glVertex3f(-10,-20,220);
	glVertex3f(-10,20,220);
	glVertex3f(-30,20,220);

	glVertex3f(-30,20,220);
	glVertex3f(-10,-20,220);
	glVertex3f(-30,-20,220);
		//Main elevator front wall
	glColor3f(0.82,0.62,0.62);
	glVertex3f(-10,-10,200);
	glVertex3f(-10,0,200);
	glVertex3f(-30,0,200);

	glVertex3f(-30,0,200);
	glVertex3f(-10,-10,200);
	glVertex3f(-30,-10,200);
		//Main elevator  door l
	glColor3f(0.82,0.62,0.62);
	glVertex3f(-10,-20,200);
	glVertex3f(-10,20,200);
	glVertex3f(-13,20,200);
	//Main elevator front wall r
	glColor3f(0.82,0.62,0.62);
	glVertex3f(-20,-20,200);
	glVertex3f(-20,20,200);
	glVertex3f(-30,20,200);

	glVertex3f(-30,20,200);
	glVertex3f(-20,-20,200);
	glVertex3f(-30,-20,200);

	glVertex3f(-13,20,200);
	glVertex3f(-10,-20,200);
	glVertex3f(-13,-20,200);
	//entrance roof 1
	glColor3f(0.82,0.32,0.32);
	glVertex3f(-50,20,0);
	glVertex3f(-50,20,50);
	glVertex3f(-40,20,50);

	glVertex3f(-40,20,50);
	glVertex3f(-50,20,0);
	glVertex3f(-40,20,0);
	//entrance roof 1 pillar
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-47,20,0);
	glVertex3f(-47,-20,0);
	glVertex3f(-45,-20,0);

	glVertex3f(-45,-20,0);
	glVertex3f(-47,20,0);
	glVertex3f(-45,20,0);
	//entrance roof 1 pillar 2
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-47,20,50);
	glVertex3f(-47,-20,50);
	glVertex3f(-45,-20,50);

	glVertex3f(-45,-20,50);
	glVertex3f(-47,20,50);
	glVertex3f(-45,20,50);
	//entrance roof 2 curve
	glColor3f(0.62,0.22,0.22);
	glVertex3f(-50,20,0);
	glVertex3f(-50,20,50);
	glVertex3f(-90,0,50);

	glVertex3f(-90,0,50);
	glVertex3f(-50,20,0);
	glVertex3f(-90,0,0);

	//entrance roof 2 curve pillar
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-90,0,0);
	glVertex3f(-90,0,5);
	glVertex3f(-90,-20,5);

	glVertex3f(-90,-20,5);
	glVertex3f(-90,0,0);
	glVertex3f(-90,-20,0);

	//entrance roof 2 curve pillar 2
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-90,0,50);
	glVertex3f(-90,0,45);
	glVertex3f(-90,-20,45);

	glVertex3f(-90,-20,45);
	glVertex3f(-90,0,50);
	glVertex3f(-90,-20,50);
	//entrance roof 1
	glColor3f(0.82,0.32,0.32);
	glVertex3f(-50,20,150);
	glVertex3f(-50,20,200);
	glVertex3f(-40,20,200);

	glVertex3f(-40,20,200);
	glVertex3f(-50,20,150);
	glVertex3f(-40,20,150);
	//entrance roof 1 pillar
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-47,20,150);
	glVertex3f(-47,-20,150);
	glVertex3f(-45,-20,150);

	glVertex3f(-45,-20,150);
	glVertex3f(-47,20,150);
	glVertex3f(-45,20,150);
	//entrance roof 1 pillar 2
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-47,20,200);
	glVertex3f(-47,-20,200);
	glVertex3f(-45,-20,200);

	glVertex3f(-45,-20,200);
	glVertex3f(-47,20,200);
	glVertex3f(-45,20,200);
	//entrance roof 2 curve
	glColor3f(0.62,0.22,0.22);
	glVertex3f(-50,20,200);
	glVertex3f(-50,20,150);
	glVertex3f(-90,0,200);

	glVertex3f(-90,0,200);
	glVertex3f(-50,20,150);
	glVertex3f(-90,0,150);

	//entrance roof 2 curve pillar
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-90,0,150);
	glVertex3f(-90,0,155);
	glVertex3f(-90,-20,155);

	glVertex3f(-90,-20,155);
	glVertex3f(-90,0,150);
	glVertex3f(-90,-20,150);

	//entrance roof 2 curve pillar 2
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-90,0,200);
	glVertex3f(-90,0,195);
	glVertex3f(-90,-20,195);

	glVertex3f(-90,-20,195);
	glVertex3f(-90,0,200);
	glVertex3f(-90,-20,200);
	//station roof 2222
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-80,40,70);
	glVertex3f(-80,40,120);
	glVertex3f(-40,40,120);

	glVertex3f(-40,40,120);
	glVertex3f(-80,40,70);
	glVertex3f(-40,40,70);
 	//station roof 3 start curve
	glColor3f(0.72,0.22,0.22);
	glVertex3f(-80,40,70);
	glVertex3f(-80,40,120);
	glVertex3f(-90,50,120);

	glVertex3f(-90,50,120);
	glVertex3f(-80,40,70);
	glVertex3f(-90,50,70);
	//station roof 4   curve
glColor3f(0.72,0.42,0.42);
	glVertex3f(-110,60,70);
	glVertex3f(-110,60,120);
	glVertex3f(-90,50,120);

	glVertex3f(-90,50,120);
	glVertex3f(-110,60,70);
	glVertex3f(-90,50,70);
	//station roof 5   curve
glColor3f(0.72,0.22,0.22);
	glVertex3f(-110,60,70);
	glVertex3f(-110,60,120);
	glVertex3f(-130,60,120);

	glVertex3f(-130,60,120);
	glVertex3f(-110,60,70);
	glVertex3f(-130,60,70);
	//station roof 6 curve
	glColor3f(0.72,0.42,0.42);
	glVertex3f(-150,50,70);
	glVertex3f(-150,50,120);
	glVertex3f(-130,60,120);

	glVertex3f(-130,60,120);
	glVertex3f(-150,50,70);
	glVertex3f(-130,60,70);
	//station roof 6 curve
	glColor3f(0.72,0.22,0.22);
	glVertex3f(-150,50,70);
	glVertex3f(-150,50,120);
	glVertex3f(-170,50,120);

	glVertex3f(-170,50,120);
	glVertex3f(-150,50,70);
	glVertex3f(-170,50,70);
	//station roof 7 curve
	glColor3f(0.72,0.42,0.42);
	glVertex3f(-180,60,70);
	glVertex3f(-180,60,120);
	glVertex3f(-170,50,120);

	glVertex3f(-170,50,120);
	glVertex3f(-180,60,70);
	glVertex3f(-170,50,70);
	//station roof 8 curve
glColor3f(0.72,0.22,0.22);
	glVertex3f(-180,60,70);
	glVertex3f(-180,60,120);
	glVertex3f(-200,70,120);

	glVertex3f(-200,70,120);
	glVertex3f(-180,60,70);
	glVertex3f(-200,70,70);
	//station roof 8 curve
	glColor3f(0.72,0.42,0.42);
	glVertex3f(-210,75,70);
	glVertex3f(-210,75,120);
	glVertex3f(-200,70,120);

	glVertex3f(-200,70,120);
	glVertex3f(-210,75,70);
	glVertex3f(-200,70,70);
	//station roof 9 curve
	glColor3f(0.72,0.22,0.22);
	glVertex3f(-210,75,70);
	glVertex3f(-210,75,120);
	glVertex3f(-230,75,120);

	glVertex3f(-230,75,120);
	glVertex3f(-210,75,70);
	glVertex3f(-230,75,70);
	//station roof 10 curve
glColor3f(0.72,0.42,0.42);
	glVertex3f(-240,70,70);
	glVertex3f(-240,70,120);
	glVertex3f(-230,75,120);

	glVertex3f(-230,75,120);
	glVertex3f(-240,70,70);
	glVertex3f(-230,75,70);
	//station roof 11 curve
	glColor3f(0.72,0.22,0.22);
	glVertex3f(-240,70,70);
	glVertex3f(-240,70,120);
	glVertex3f(-260,60,120);

	glVertex3f(-260,60,120);
	glVertex3f(-240,70,70);
	glVertex3f(-260,60,70);
	//station roof 12 curve end pillar A
	glColor3f(0.82,0.82,0.82);
	glVertex3f(-260,60,70);
	glVertex3f(-260,60,72);
	glVertex3f(-260,-20,72);

	glVertex3f(-260,-20,72);
	glVertex3f(-260,60,70);
	glVertex3f(-260,-20,70);
	//station roof 12 curve end pillar B
	glColor3f(0.82,0.82,0.82);
	glVertex3f(-260,60,120);
	glVertex3f(-260,60,118);
	glVertex3f(-260,-20,118);

	glVertex3f(-260,-20,118);
	glVertex3f(-260,60,120);
	glVertex3f(-260,-20,120);

	//station roof 12 curve end CROSS 1
	glColor3f(0.82,0.82,0.82);
	glVertex3f(-260,50,120);
	glVertex3f(-260,50,72);
	glVertex3f(-260,55,72);

	glVertex3f(-260,55,72);
	glVertex3f(-260,50,120);
	glVertex3f(-260,55,120);

	//station roof 12 curve end CROSS 2
	glColor3f(0.82,0.82,0.82);
	glVertex3f(-260,37,120);
	glVertex3f(-260,37,72);
	glVertex3f(-260,39,72);

	glVertex3f(-260,39,72);
	glVertex3f(-260,37,120);
	glVertex3f(-260,39,120);
	//station roof center pillar A
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-160,50,70);
	glVertex3f(-160,-20,70);
	glVertex3f(-162,-20,70);

	glVertex3f(-162,-20,70);
	glVertex3f(-160,50,70);
	glVertex3f(-162,50,70);
	//station roof center pillar B

	glVertex3f(-160,50,120);
	glVertex3f(-160,-20,120);
	glVertex3f(-162,-20,120);

	glVertex3f(-162,-20,120);
	glVertex3f(-160,50,120);
	glVertex3f(-162,50,120);
	//station roof bebore center pillar A

	glVertex3f(-120,60,70);
	glVertex3f(-120,-20,70);
	glVertex3f(-122,-20,70);

	glVertex3f(-122,-20,70);
	glVertex3f(-120,60,70);
	glVertex3f(-122,60,70);
	//station roof bebore center pillar B

	glVertex3f(-120,60,120);
	glVertex3f(-120,-20,120);
	glVertex3f(-122,-20,120);

	glVertex3f(-122,-20,120);
	glVertex3f(-120,60,120);
	glVertex3f(-122,60,120);
	//station roof after center pillar A

	glVertex3f(-220,75,70);
	glVertex3f(-220,-20,70);
	glVertex3f(-222,-20,70);

	glVertex3f(-222,-20,70);
	glVertex3f(-220,75,70);
	glVertex3f(-222,75,70);
	//station roof after center pillar B

	glVertex3f(-220,75,120);
	glVertex3f(-220,-20,120);
	glVertex3f(-222,-20,120);

	glVertex3f(-222,-20,120);
	glVertex3f(-220,75,120);
	glVertex3f(-222,75,120);
	//station roof after center pillar A Cross 1

	glVertex3f(-190,25,70);
	glVertex3f(-190,23,70);
	glVertex3f(-260,23,70);

	glVertex3f(-260,23,70);
	glVertex3f(-190,25,70);
	glVertex3f(-260,25,70);
	//station roof after center pillar B Cross 1

	glVertex3f(-190,25,120);
	glVertex3f(-190,23,120);
	glVertex3f(-260,23,120);

	glVertex3f(-260,23,120);
	glVertex3f(-190,25,120);
	glVertex3f(-260,25,120);
	//station roof after center pillar A Cross 2

	glVertex3f(-170,25,70);
	glVertex3f(-170,23,70);
	glVertex3f(-82,23,70);

	glVertex3f(-82,23,70);
	glVertex3f(-170,25,70);
	glVertex3f(-82,25,70);
	//station roof after center pillar B Cross 2

	glVertex3f(-170,25,120);
	glVertex3f(-170,23,120);
	glVertex3f(-82,23,120);

	glVertex3f(-82,23,120);
	glVertex3f(-170,25,120);
	glVertex3f(-82,25,120);
	//FINAL CROSS  A

	glVertex3f(-80,45,120);
	glVertex3f(-80,43,120);
	glVertex3f(-260,43,120);

	glVertex3f(-260,43,120);
	glVertex3f(-80,45,120);
	glVertex3f(-260,45,120);
	//FINAL CROSS  B

	glVertex3f(-80,45,70);
	glVertex3f(-80,43,70);
	glVertex3f(-260,43,70);

	glVertex3f(-260,43,70);
	glVertex3f(-80,45,70);
	glVertex3f(-260,45,70);
	//roof 333 cash counter
	glColor3f(0.52,0.52,0.52);
	glVertex3f(0,20,70);
	glVertex3f(0,20,120);
	glVertex3f(40,20,120);

	glVertex3f(40,20,120);
	glVertex3f(0,20,70);
	glVertex3f(40,20,70);

	//roof 333 cash counter boottom
	glColor3f(0.52,0.52,0.52);
	glVertex3f(0,0,70);
	glVertex3f(0,0,120);
	glVertex3f(40,0,120);

	glVertex3f(40,0,120);
	glVertex3f(0,0,70);
	glVertex3f(40,0,70);

	//roof 333 cash counter wall back
	glColor3f(0.92,0.42,0.42);
	glVertex3f(40,-20,70);
	glVertex3f(40,-20,120);
	glVertex3f(40,20,120);

	glVertex3f(40,20,120);
	glVertex3f(40,-20,70);
	glVertex3f(40,20,70);
	//roof 333 cash counter wall RIGHT
	 glColor3f(0.82,0.42,0.42);
	glVertex3f(40,-20,70);
	glVertex3f(0,-20,70);
	glVertex3f(0,20,70);

	glVertex3f(0,20,70);
	glVertex3f(40,-20,70);
	glVertex3f(40,20,70);
	//roof 333 cash counter wall LEFT

	glVertex3f(40,-20,120);
	glVertex3f(0,-20,120);
	glVertex3f(0,20,120);

	glVertex3f(0,20,120);
	glVertex3f(40,-20,120);
	glVertex3f(40,20,120);
	//roof 333 cash counter wall forward
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-0.2,-20,70);
	glVertex3f(-0.2,-20,120);
	glVertex3f(-0.2,3,120);

	glVertex3f(-0.2,3,120);
	glVertex3f(-0.2,-20,70);
	glVertex3f(-0.2,3,70);

	//roof 333 cash counter wall forward PILLAR L
	glColor3f(0.92,0.92,0.92);
	glVertex3f(0.2,20,70);
	glVertex3f(0.2,20,72);
	glVertex3f(0.2,3,72);

	glVertex3f(0.2,3,72);
	glVertex3f(0.2,20,70);
	glVertex3f(0.2,3,70);
	//roof 333 cash counter wall forward PILLAR R
	glColor3f(0.92,0.92,0.92);
	glVertex3f(0.2,20,118);
	glVertex3f(0.2,20,120);
	glVertex3f(0.2,3,120);

	glVertex3f(0.2,3,120);
	glVertex3f(0.2,20,118);
	glVertex3f(0.2,3,118);
	//roof 333 cash counter wall forward PILLAR C
	glColor3f(0.92,0.92,0.92);
	glVertex3f(0.2,20,90);
	glVertex3f(0.2,20,92);
	glVertex3f(0.2,3,92);

	glVertex3f(0.2,3,92);
	glVertex3f(0.2,20,90);
	glVertex3f(0.2,3,90);
	//roof 333 cash counter wall forward 2
	glColor3f(0.72,0.72,0.72);
	glVertex3f(0,20,70);
	glVertex3f(0,20,120);
	glVertex3f(0,14,120);

	glVertex3f(0,14,120);
	glVertex3f(0,20,70);
	glVertex3f(0,14,70);
	//roof 2222 bottom
	glColor3f(0.32,0.32,0.32);
	glVertex3f(-60,0,70);
	glVertex3f(-60,0,120);
	glVertex3f(-40,0,120);

	glVertex3f(-40,0,120);
	glVertex3f(-60,0,70);
	glVertex3f(-40,0,70);
	//wall up
	glColor3f(0.92,0.32,0.32);
	glVertex3f(0,0,0);
	glVertex3f(0,0,200);
	glVertex3f(0,3,200);

	glVertex3f(0,3,200);
	glVertex3f(0,0,0);
	glVertex3f(0,3,0);
	//wall up b with roof
	glColor3f(0.92,0.32,0.32);
	glVertex3f(0,18,0);
	glVertex3f(0,18,200);
	glVertex3f(0,20,200);

	glVertex3f(0,20,200);
	glVertex3f(0,18,0);
	glVertex3f(0,20,0);
	//wall up l pillar
	glColor3f(0.90,0.90,0.90);
	glVertex3f(0,-20,0);
	glVertex3f(0,-20,2);
	glVertex3f(0,20,2);

	glVertex3f(0,20,2);
	glVertex3f(0,-20,0);
	glVertex3f(0,20,0);
	//wall up r pillar
	glColor3f(0.92,0.92,0.92);
	glVertex3f(0,-20,198);
	glVertex3f(0,-20,200);
	glVertex3f(0,20,200);

	glVertex3f(0,20,200);
	glVertex3f(0,-20,198);
	glVertex3f(0,20,198);

	//wall left
	glColor3f(0.92,0.32,0.32);
	glVertex3f(0,0,0);
	glVertex3f(-40,0,0);
	glVertex3f(-40,3,0);

	glVertex3f(-40,3,0);
	glVertex3f(0,0,0);
	glVertex3f(0,3,0);
	//wall  left l pillar
	glColor3f(0.92,0.92,0.92);
	glVertex3f(0,-20,0);
	glVertex3f(-2,-20,0);
	glVertex3f(-2,20,0);

	glVertex3f(-2,20,0);
	glVertex3f(0,-20,0);
	glVertex3f(0,20,0);
	//wall  left r pillar
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-38,-20,0);
	glVertex3f(-40,-20,0);
	glVertex3f(-40,20,0);

	glVertex3f(-40,20,0);
	glVertex3f(-38,-20,0);
	glVertex3f(-38,20,0);
	//right wall
	//wall right top with roof
	glColor3f(0.92,0.32,0.32);
	glVertex3f(0,18,200);
	glVertex3f(-40,18,200);
	glVertex3f(-40,20,200);

	glVertex3f(-40,20,200);
	glVertex3f(0,18,200);
	glVertex3f(0,20,200);
	//wall right
	glColor3f(0.92,0.32,0.32);
	glVertex3f(0,0,200);
	glVertex3f(-40,0,200);
	glVertex3f(-40,3,200);

	glVertex3f(-40,3,200);
	glVertex3f(0,0,200);
	glVertex3f(0,3,200);
	//wall  right l pillar
	glColor3f(0.90,0.90,0.90);
	glVertex3f(0,-20,200);
	glVertex3f(-2,-20,200);
	glVertex3f(-2,20,200);

	glVertex3f(-2,20,200);
	glVertex3f(0,-20,200);
	glVertex3f(0,20,200);
	//wall  right r pillar
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-38,-20,200);
	glVertex3f(-40,-20,200);
	glVertex3f(-40,20,200);

	glVertex3f(-40,20,200);
	glVertex3f(-38,-20,200);
	glVertex3f(-38,20,200);
	//wall right top with roof
	glColor3f(0.92,0.32,0.32);
	glVertex3f(0,18,200);
	glVertex3f(-40,18,200);
	glVertex3f(-40,20,200);

	glVertex3f(-40,20,200);
	glVertex3f(0,18,200);
	glVertex3f(0,20,200);
	//wall  down entrance top roof
	glColor3f(0.92,0.32,0.32);
	glVertex3f(-40,18,0);
	glVertex3f(-40,18,200);
	glVertex3f(-40,20,200);

	glVertex3f(-40,20,200);
	glVertex3f(-40,18,0);
	glVertex3f(-40,20,0);

	//wall  down entrance l
	glColor3f(0.92,0.32,0.32);
	glVertex3f(-40,0,50);
	glVertex3f(-40,0,70);
	glVertex3f(-40,3,70);

	glVertex3f(-40,3,70);
	glVertex3f(-40,0,50);
	glVertex3f(-40,3,50);
	//wall  down entrance l 2 horizontal
	glColor3f(0.92,0.32,0.32);
	glVertex3f(-40,0,70);
	glVertex3f(-60,0,70);
	glVertex3f(-60,3,70);

	glVertex3f(-60,3,70);
	glVertex3f(-40,0,70);
	glVertex3f(-40,3,70);
	//wall  down entrance l 2 horizontal up
	glColor3f(0.92,0.32,0.32);
	glVertex3f(-40,18,70);
	glVertex3f(-60,18,70);
	glVertex3f(-60,20,70);

	glVertex3f(-60,20,70);
	glVertex3f(-40,18,70);
	glVertex3f(-40,20,70);
	//wall  down entrance l 2 horizontal pillar
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-40,-20,70);
	glVertex3f(-42,-20,70);
	glVertex3f(-42,40,70);

	glVertex3f(-42,40,70);
	glVertex3f(-40,-20,70);
	glVertex3f(-40,40,70);
	//wall  down entrance l 2 horizontal pillar 2
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-58,-20,70);
	glVertex3f(-60,-20,70);
	glVertex3f(-60,40,70);

	glVertex3f(-60,40,70);
	glVertex3f(-58,-20,70);
	glVertex3f(-58,40,70);
	//wall  down entrance l 2 horizontal pillar 3
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-80,-20,70);
	glVertex3f(-82,-20,70);
	glVertex3f(-80,40,70);

	glVertex3f(-80,40,70);
	glVertex3f(-82,-20,70);
	glVertex3f(-82,40,70);
	//wall  down entrance l 2 horizontal pillar 3 B right
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-80,-20,120);
	glVertex3f(-82,-20,120);
	glVertex3f(-80,40,120);

	glVertex3f(-80,40,120);
	glVertex3f(-82,-20,120);
	glVertex3f(-82,40,120);
	//wall  down entrance l 2 horizontal pillar 2 XXX
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-60,-20,105);
	glVertex3f(-60,-20,100);
	glVertex3f(-60,20,100);

	glVertex3f(-60,20,100);
	glVertex3f(-60,-20,105);
	glVertex3f(-60,20,105);


	//wall  down entrance r
	glColor3f(0.92,0.32,0.32);
	glVertex3f(-40,0,120);
	glVertex3f(-40,0,150);
	glVertex3f(-40,3,150);

	glVertex3f(-40,3,150);
	glVertex3f(-40,0,120);
	glVertex3f(-40,3,120);
	//wall  down entrance l 2 horizontal
	glColor3f(0.92,0.32,0.32);
	glVertex3f(-40,0,120);
	glVertex3f(-60,0,120);
	glVertex3f(-60,3,120);

	glVertex3f(-60,3,120);
	glVertex3f(-40,0,120);
	glVertex3f(-40,3,120);
	//wall  down entrance l 2 horizontal up 222
	glColor3f(0.92,0.32,0.32);
	glVertex3f(-40,18,120);
	glVertex3f(-60,18,120);
	glVertex3f(-60,20,120);

	glVertex3f(-60,20,120);
	glVertex3f(-40,18,120);
	glVertex3f(-40,20,120);
	//wall  down entrance l 2 horizontal pillar 222
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-40,-20,120);
	glVertex3f(-42,-20,120);
	glVertex3f(-42,40,120);

	glVertex3f(-42,40,120);
	glVertex3f(-40,-20,120);
	glVertex3f(-40,40,120);
	//wall  down entrance l 2 horizontal pillar 2 222
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-58,-20,120);
	glVertex3f(-60,-20,120);
	glVertex3f(-60,40,120);

	glVertex3f(-60,40,120);
	glVertex3f(-58,-20,120);
	glVertex3f(-58,40,120);

	//wall  down entrance l pillar
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-40,-20,50);
	glVertex3f(-40,-20,52);
	glVertex3f(-40,20,52);

	glVertex3f(-40,20,52);
	glVertex3f(-40,-20,50);
	glVertex3f(-40,20,50);
	//wall  down entrance r pillar
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-40,-20,150);
	glVertex3f(-40,-20,148);
	glVertex3f(-40,20,148);

	glVertex3f(-40,20,148);
	glVertex3f(-40,-20,150);
	glVertex3f(-40,20,150);

	//wall  down entrance l pillar 22222222222
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-40,-20,70);
	glVertex3f(-40,-20,72);
	glVertex3f(-40,40,72);

	glVertex3f(-40,40,72);
	glVertex3f(-40,-20,70);
	glVertex3f(-40,40,70);
	//station statiss back wall
	glColor3f(0.72,0.52,0.52);
	glVertex3f(-40,20,70);
	glVertex3f(-40,20,120);
	glVertex3f(-40,40,120);

	glVertex3f(-40,40,120);
	glVertex3f(-40,20,70);
	glVertex3f(-40,40,70);

	//wall  down entrance r pillar 22222222222222
	glColor3f(0.92,0.92,0.92);
	glVertex3f(-40,-20,120);
	glVertex3f(-40,-20,122);
	glVertex3f(-40,40,122);

	glVertex3f(-40,40,122);
	glVertex3f(-40,-20,120);
	glVertex3f(-40,40,120);

	// STAIRS TO BUS
	//1
	glColor3f(0.82,0.82,0.82);
	glVertex3f(-62,0,70);
	glVertex3f(-62,0,100);
	glVertex3f(-60,0,100);

	glVertex3f(-60,0,100);
	glVertex3f(-62,0,70);
	glVertex3f(-60,0,70);
	//2
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-62,2,70);
	glVertex3f(-62,2,100);
	glVertex3f(-62,0,100);

	glVertex3f(-62,0,100);
	glVertex3f(-62,2,70);
	glVertex3f(-62,0,70);
	//3
	glColor3f(0.72,0.72,0.72);
	glVertex3f(-62,2,70);
	glVertex3f(-62,2,100);
	glVertex3f(-64,2,100);

	glVertex3f(-64,2,100);
	glVertex3f(-62,2,70);
	glVertex3f(-64,2,70);

	//4
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-64,4,70);
	glVertex3f(-64,4,100);
	glVertex3f(-64,2,100);

	glVertex3f(-64,2,100);
	glVertex3f(-64,4,70);
	glVertex3f(-64,2,70);

	//5
	glColor3f(0.72,0.72,0.72);
	glVertex3f(-64,4,70);
	glVertex3f(-64,4,100);
	glVertex3f(-66,4,100);

	glVertex3f(-66,4,100);
	glVertex3f(-64,4,70);
	glVertex3f(-66,4,70);
	//6
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-66,4,70);
	glVertex3f(-66,4,100);
	glVertex3f(-66,6,100);

	glVertex3f(-66,6,100);
	glVertex3f(-66,4,70);
	glVertex3f(-66,6,70);
	//7
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-68,6,70);
	glVertex3f(-68,6,100);
	glVertex3f(-66,6,100);

	glVertex3f(-66,6,100);
	glVertex3f(-68,6,70);
	glVertex3f(-66,6,70);
	//8
	glColor3f(0.72,0.72,0.72);
	glVertex3f(-68,6,70);
	glVertex3f(-68,6,100);
	glVertex3f(-68,8,100);

	glVertex3f(-68,8,100);
	glVertex3f(-68,6,70);
	glVertex3f(-68,8,70);
	//9
	glColor3f(0.42,0.42,0.42);
	glVertex3f(-70,8,70);
	glVertex3f(-70,8,100);
	glVertex3f(-68,8,100);

	glVertex3f(-68,8,100);
	glVertex3f(-70,8,70);
	glVertex3f(-68,8,70);
	//9
	glColor3f(0.72,0.72,0.72);
	glVertex3f(-70,8,70);
	glVertex3f(-70,8,100);
	glVertex3f(-70,10,100);

	glVertex3f(-70,10,100);
	glVertex3f(-70,8,70);
	glVertex3f(-70,10,70);
	//10
	glColor3f(0.44,0.44,0.44);
	glVertex3f(-72,10,70);
	glVertex3f(-72,10,100);
	glVertex3f(-70,10,100);

	glVertex3f(-70,10,100);
	glVertex3f(-72,10,70);
	glVertex3f(-70,10,70);
	//11
	glColor3f(0.55,0.55,0.55);
	glVertex3f(-72,12,70);
	glVertex3f(-72,12,100);
	glVertex3f(-72,10,100);

	glVertex3f(-72,10,100);
	glVertex3f(-72,12,70);
	glVertex3f(-72,10,70);
	//12
	glColor3f(0.45,0.45,0.45);
	glVertex3f(-72,12,70);
	glVertex3f(-72,12,100);
	glVertex3f(-74,12,100);

	glVertex3f(-74,12,100);
	glVertex3f(-72,12,70);
	glVertex3f(-74,12,70);
	//13
	glColor3f(0.55,0.55,0.55);
	glVertex3f(-74,14,70);
	glVertex3f(-74,14,100);
	glVertex3f(-74,12,100);

	glVertex3f(-74,12,100);
	glVertex3f(-74,14,70);
	glVertex3f(-74,12,70);
	//14
	glColor3f(0.45,0.45,0.45);
	glVertex3f(-74,14,70);
	glVertex3f(-74,14,100);
	glVertex3f(-76,14,100);

	glVertex3f(-76,14,100);
	glVertex3f(-74,14,70);
	glVertex3f(-76,14,70);
	//15
	glColor3f(0.65,0.65,0.65);
	glVertex3f(-76,16,70);
	glVertex3f(-76,16,100);
	glVertex3f(-76,14,100);

	glVertex3f(-76,14,100);
	glVertex3f(-76,16,70);
	glVertex3f(-76,14,70);
	//16
	glColor3f(0.45,0.45,0.45);
	glVertex3f(-76,16,70);
	glVertex3f(-76,16,100);
	glVertex3f(-78,16,100);

	glVertex3f(-78,16,100);
	glVertex3f(-76,16,70);
	glVertex3f(-78,16,70);
	//17
	glColor3f(0.55,0.55,0.55);
	glVertex3f(-78,16,70);
	glVertex3f(-78,16,100);
	glVertex3f(-78,18,100);

	glVertex3f(-78,18,100);
	glVertex3f(-78,16,70);
	glVertex3f(-78,18,70);
	//18
	glColor3f(0.45,0.45,0.45);
	glVertex3f(-80,18,70);
	glVertex3f(-80,18,100);
	glVertex3f(-78,18,100);

	glVertex3f(-78,18,100);
	glVertex3f(-80,18,70);
	glVertex3f(-78,18,70);
	//19
	glColor3f(0.85,0.85,0.85);
	glVertex3f(-80,18,70);
	glVertex3f(-80,18,100);
	glVertex3f(-80,20,100);

	glVertex3f(-80,20,100);
	glVertex3f(-80,18,70);
	glVertex3f(-80,20,70);
	//20
	glColor3f(0.45,0.45,0.45);
	glVertex3f(-82,20,70);
	glVertex3f(-82,20,100);
	glVertex3f(-80,20,100);

	glVertex3f(-80,20,100);
	glVertex3f(-82,20,70);
	glVertex3f(-80,20,70);
	//21
	glColor3f(0.75,0.75,0.75);
	glVertex3f(-82,20,70);
	glVertex3f(-82,20,100);
	glVertex3f(-82,22,100);

	glVertex3f(-82,22,100);
	glVertex3f(-82,20,70);
	glVertex3f(-82,22,70);
	//  stairs holder l
	glColor3f(0.82,0.82,0.82);
	glVertex3f(-82,25,70);
	glVertex3f(-82,20,70);
	glVertex3f(-60,5,70);

	glVertex3f(-60,5,70);
	glVertex3f(-82,20,70);
	glVertex3f(-60,-2,70);
	//  stairs holder r
	glColor3f(0.82,0.82,0.82);
	glVertex3f(-82,25,100);
	glVertex3f(-82,20,100);
	glVertex3f(-60,5,100);

	glVertex3f(-60,5,100);
	glVertex3f(-82,20,100);
	glVertex3f(-60,-2,100);

	//  ELEVATOR STAIRS TO BUS
	//1
	glColor3f(0.82,0.82,0.82);
	glVertex3f(-62,0,120);
	glVertex3f(-62,0,105);
	glVertex3f(-60,0,105);

	glVertex3f(-60,0,105);
	glVertex3f(-62,0,120);
	glVertex3f(-60,0,120);
	//2
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-62,2,120);
	glVertex3f(-62,2,105);
	glVertex3f(-62,0,105);

	glVertex3f(-62,0,105);
	glVertex3f(-62,2,120);
	glVertex3f(-62,0,120);
	//3
	glColor3f(0.72,0.72,0.72);
	glVertex3f(-62,2,120);
	glVertex3f(-62,2,105);
	glVertex3f(-64,2,105);

	glVertex3f(-64,2,105);
	glVertex3f(-62,2,120);
	glVertex3f(-64,2,120);

	//4
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-64,4,120);
	glVertex3f(-64,4,105);
	glVertex3f(-64,2,105);

	glVertex3f(-64,2,105);
	glVertex3f(-64,4,120);
	glVertex3f(-64,2,120);

	//5
	glColor3f(0.72,0.72,0.72);
	glVertex3f(-64,4,120);
	glVertex3f(-64,4,105);
	glVertex3f(-66,4,105);

	glVertex3f(-66,4,105);
	glVertex3f(-64,4,120);
	glVertex3f(-66,4,120);
	//6
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-66,4,120);
	glVertex3f(-66,4,105);
	glVertex3f(-66,6,105);

	glVertex3f(-66,6,105);
	glVertex3f(-66,4,120);
	glVertex3f(-66,6,120);
	//7
	glColor3f(0.52,0.52,0.52);
	glVertex3f(-68,6,120);
	glVertex3f(-68,6,105);
	glVertex3f(-66,6,105);

	glVertex3f(-66,6,105);
	glVertex3f(-68,6,120);
	glVertex3f(-66,6,120);
	//8
	glColor3f(0.72,0.72,0.72);
	glVertex3f(-68,6,120);
	glVertex3f(-68,6,105);
	glVertex3f(-68,8,105);

	glVertex3f(-68,8,105);
	glVertex3f(-68,6,120);
	glVertex3f(-68,8,120);
	//9
	glColor3f(0.42,0.42,0.42);
	glVertex3f(-70,8,120);
	glVertex3f(-70,8,105);
	glVertex3f(-68,8,105);

	glVertex3f(-68,8,105);
	glVertex3f(-70,8,120);
	glVertex3f(-68,8,120);
	//9
	glColor3f(0.72,0.72,0.72);
	glVertex3f(-70,8,120);
	glVertex3f(-70,8,105);
	glVertex3f(-70,10,105);

	glVertex3f(-70,10,105);
	glVertex3f(-70,8,120);
	glVertex3f(-70,10,120);
	//10
	glColor3f(0.44,0.44,0.44);
	glVertex3f(-72,10,120);
	glVertex3f(-72,10,105);
	glVertex3f(-70,10,105);

	glVertex3f(-70,10,105);
	glVertex3f(-72,10,120);
	glVertex3f(-70,10,120);
	//11
	glColor3f(0.55,0.55,0.55);
	glVertex3f(-72,12,120);
	glVertex3f(-72,12,105);
	glVertex3f(-72,10,105);

	glVertex3f(-72,10,105);
	glVertex3f(-72,12,120);
	glVertex3f(-72,10,120);
	//12
	glColor3f(0.45,0.45,0.45);
	glVertex3f(-72,12,120);
	glVertex3f(-72,12,105);
	glVertex3f(-74,12,105);

	glVertex3f(-74,12,105);
	glVertex3f(-72,12,120);
	glVertex3f(-74,12,120);
	//13
	glColor3f(0.55,0.55,0.55);
	glVertex3f(-74,14,120);
	glVertex3f(-74,14,105);
	glVertex3f(-74,12,105);

	glVertex3f(-74,12,105);
	glVertex3f(-74,14,120);
	glVertex3f(-74,12,120);
	//14
	glColor3f(0.45,0.45,0.45);
	glVertex3f(-74,14,120);
	glVertex3f(-74,14,105);
	glVertex3f(-76,14,105);

	glVertex3f(-76,14,105);
	glVertex3f(-74,14,120);
	glVertex3f(-76,14,120);
	//15
	glColor3f(0.65,0.65,0.65);
	glVertex3f(-76,16,120);
	glVertex3f(-76,16,105);
	glVertex3f(-76,14,105);

	glVertex3f(-76,14,105);
	glVertex3f(-76,16,120);
	glVertex3f(-76,14,120);
	//16
	glColor3f(0.45,0.45,0.45);
	glVertex3f(-76,16,120);
	glVertex3f(-76,16,105);
	glVertex3f(-78,16,105);

	glVertex3f(-78,16,105);
	glVertex3f(-76,16,120);
	glVertex3f(-78,16,120);
	//17
	glColor3f(0.55,0.55,0.55);
	glVertex3f(-78,16,120);
	glVertex3f(-78,16,105);
	glVertex3f(-78,18,105);

	glVertex3f(-78,18,105);
	glVertex3f(-78,16,120);
	glVertex3f(-78,18,120);
	//18
	glColor3f(0.45,0.45,0.45);
	glVertex3f(-80,18,120);
	glVertex3f(-80,18,105);
	glVertex3f(-78,18,105);

	glVertex3f(-78,18,105);
	glVertex3f(-80,18,120);
	glVertex3f(-78,18,120);
	//19
	glColor3f(0.85,0.85,0.85);
	glVertex3f(-80,18,120);
	glVertex3f(-80,18,105);
	glVertex3f(-80,20,105);

	glVertex3f(-80,20,105);
	glVertex3f(-80,18,120);
	glVertex3f(-80,20,120);
	//20
	glColor3f(0.45,0.45,0.45);
	glVertex3f(-82,20,120);
	glVertex3f(-82,20,105);
	glVertex3f(-80,20,105);

	glVertex3f(-80,20,105);
	glVertex3f(-82,20,120);
	glVertex3f(-80,20,120);
	//21
	glColor3f(0.75,0.75,0.75);
	glVertex3f(-82,20,120);
	glVertex3f(-82,20,105);
	glVertex3f(-82,22,105);

	glVertex3f(-82,22,105);
	glVertex3f(-82,20,120);
	glVertex3f(-82,22,120);
	//  stairs holder l
	glColor3f(0.82,0.82,0.82);
	glVertex3f(-82,25,120);
	glVertex3f(-82,20,120);
	glVertex3f(-60,5,120);

	glVertex3f(-60,5,120);
	glVertex3f(-82,20,120);
	glVertex3f(-60,-2,120);
	//  stairs holder r
	glColor3f(0.82,0.82,0.82);
	glVertex3f(-82,25,105);
	glVertex3f(-82,20,105);
	glVertex3f(-60,5,105);

	glVertex3f(-60,5,105);
	glVertex3f(-82,20,105);
	glVertex3f(-60,-2,105);


	//farsh top bus stand
	glColor3f(0.65,0.65,0.65);
	glVertex3f(-82,22,70);
	glVertex3f(-82,22,120);
	glVertex3f(-270,22,120);

	glVertex3f(-270,22,120);
	glVertex3f(-82,22,70);
	glVertex3f(-270,22,70);


	//main stairs
	//main stairs 1
	glVertex3f(-42,0,0);
	glVertex3f(-42,0,30);
	glVertex3f(-40,0,30);

	glVertex3f(-40,0,30);
	glVertex3f(-42,0,0);
	glVertex3f(-40,0,0);
	//main stairs 2
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-42,-2,0);
	glVertex3f(-42,-2,30);
	glVertex3f(-42,0,30);

	glVertex3f(-42,0,30);
	glVertex3f(-42,-2,0);
	glVertex3f(-42,0,0);
	//main stairs 3
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-42,-2,0);
	glVertex3f(-42,-2,30);
	glVertex3f(-44,-2,30);

	glVertex3f(-44,-2,30);
	glVertex3f(-42,-2,0);
	glVertex3f(-44,-2,0);
	//main stairs 4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-44,-2,0);
	glVertex3f(-44,-2,30);
	glVertex3f(-44,-4,30);

	glVertex3f(-44,-4,30);
	glVertex3f(-44,-2,0);
	glVertex3f(-44,-4,0);
	//main stairs 4
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-44,-4,0);
	glVertex3f(-44,-4,30);
	glVertex3f(-46,-4,30);

	glVertex3f(-46,-4,30);
	glVertex3f(-44,-4,0);
	glVertex3f(-46,-4,0);
	//main stairs 4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-46,-4,0);
	glVertex3f(-46,-4,30);
	glVertex3f(-46,-6,30);

	glVertex3f(-46,-6,30);
	glVertex3f(-46,-4,0);
	glVertex3f(-46,-6,0);
	//main stairs 5
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-46,-6,0);
	glVertex3f(-46,-6,30);
	glVertex3f(-48,-6,30);

	glVertex3f(-48,-6,30);
	glVertex3f(-46,-6,0);
	glVertex3f(-48,-6,0);
		//main stairs 6
	glColor3f(0.8,0.8,0.8);
	glVertex3f(-48,-6,0);
	glVertex3f(-48,-6,30);
	glVertex3f(-48,-8,30);

	glVertex3f(-48,-8,30);
	glVertex3f(-48,-6,0);
	glVertex3f(-48,-8,0);
	//main stairs 7
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-48,-8,0);
	glVertex3f(-48,-8,30);
	glVertex3f(-60,-8,30);

	glVertex3f(-60,-8,30);
	glVertex3f(-48,-8,0);
	glVertex3f(-60,-8,0);
	//main stairs 8
	glColor3f(0.3,0.3,0.3);
	glVertex3f(-60,-8,0);
	glVertex3f(-60,-8,30);
	glVertex3f(-60,-10,30);

	glVertex3f(-60,-10,30);
	glVertex3f(-60,-8,0);
	glVertex3f(-60,-10,0);
	//main stairs 9
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-60,-10,0);
	glVertex3f(-60,-10,30);
	glVertex3f(-62,-10,30);

	glVertex3f(-62,-10,30);
	glVertex3f(-60,-10,0);
	glVertex3f(-62,-10,0);
	//main stairs 10
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-62,-10,0);
	glVertex3f(-62,-10,30);
	glVertex3f(-62,-12,30);

	glVertex3f(-62,-12,30);
	glVertex3f(-62,-10,0);
	glVertex3f(-62,-12,0);
	//main stairs 11
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-62,-12,0);
	glVertex3f(-62,-12,30);
	glVertex3f(-64,-12,30);

	glVertex3f(-64,-12,30);
	glVertex3f(-62,-12,0);
	glVertex3f(-64,-12,0);
	//main stairs 12
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-64,-12,0);
	glVertex3f(-64,-12,30);
	glVertex3f(-64,-14,30);

	glVertex3f(-64,-14,30);
	glVertex3f(-64,-12,0);
	glVertex3f(-64,-14,0);
	//main stairs 12
	glColor3f(0.7,0.7,0.7);
	glVertex3f(-64,-14,0);
	glVertex3f(-64,-14,30);
	glVertex3f(-68,-14,30);

	glVertex3f(-68,-14,30);
	glVertex3f(-64,-14,0);
	glVertex3f(-68,-14,0);
	//main stairs 13
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-68,-14,0);
	glVertex3f(-68,-14,30);
	glVertex3f(-68,-16,30);

	glVertex3f(-68,-16,30);
	glVertex3f(-68,-14,0);
	glVertex3f(-68,-16,0);
//main stairs 14
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-68,-16,0);
	glVertex3f(-68,-16,30);
	glVertex3f(-70,-16,30);

	glVertex3f(-70,-16,30);
	glVertex3f(-68,-16,0);
	glVertex3f(-70,-16,0);
//main stairs 15
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-70,-16,0);
	glVertex3f(-70,-16,30);
	glVertex3f(-70,-18,30);

	glVertex3f(-70,-18,30);
	glVertex3f(-70,-16,0);
	glVertex3f(-70,-18,0);
	//main stairs 16
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-70,-18,0);
	glVertex3f(-70,-18,30);
	glVertex3f(-72,-18,30);

	glVertex3f(-72,-18,30);
	glVertex3f(-70,-18,0);
	glVertex3f(-72,-18,0);
	//main stairs 17
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-72,-18,0);
	glVertex3f(-72,-18,30);
	glVertex3f(-72,-20,30);

	glVertex3f(-72,-20,30);
	glVertex3f(-72,-18,0);
	glVertex3f(-72,-20,0);
	//main stairs 222
	//main stairs 1
	glVertex3f(-42,0,50);
	glVertex3f(-42,0,35);
	glVertex3f(-40,0,35);

	glVertex3f(-40,0,35);
	glVertex3f(-42,0,50);
	glVertex3f(-40,0,50);
	//main stairs 2
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-42,-2,50);
	glVertex3f(-42,-2,35);
	glVertex3f(-42,0,35);

	glVertex3f(-42,0,35);
	glVertex3f(-42,-2,50);
	glVertex3f(-42,0,50);
	//main stairs 3
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-42,-2,50);
	glVertex3f(-42,-2,35);
	glVertex3f(-44,-2,35);

	glVertex3f(-44,-2,35);
	glVertex3f(-42,-2,50);
	glVertex3f(-44,-2,50);
	//main stairs 4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-44,-2,50);
	glVertex3f(-44,-2,35);
	glVertex3f(-44,-4,35);

	glVertex3f(-44,-4,35);
	glVertex3f(-44,-2,50);
	glVertex3f(-44,-4,50);
	//main stairs 4
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-44,-4,50);
	glVertex3f(-44,-4,35);
	glVertex3f(-46,-4,35);

	glVertex3f(-46,-4,35);
	glVertex3f(-44,-4,50);
	glVertex3f(-46,-4,50);
	//main stairs 4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-46,-4,50);
	glVertex3f(-46,-4,35);
	glVertex3f(-46,-6,35);

	glVertex3f(-46,-6,35);
	glVertex3f(-46,-4,50);
	glVertex3f(-46,-6,50);
	//main stairs 5
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-46,-6,50);
	glVertex3f(-46,-6,35);
	glVertex3f(-48,-6,35);

	glVertex3f(-48,-6,35);
	glVertex3f(-46,-6,50);
	glVertex3f(-48,-6,50);
		//main stairs 6
	glColor3f(0.8,0.8,0.8);
	glVertex3f(-48,-6,50);
	glVertex3f(-48,-6,35);
	glVertex3f(-48,-8,35);

	glVertex3f(-48,-8,35);
	glVertex3f(-48,-6,50);
	glVertex3f(-48,-8,50);
	//main stairs 7
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-48,-8,50);
	glVertex3f(-48,-8,35);
	glVertex3f(-60,-8,35);

	glVertex3f(-60,-8,35);
	glVertex3f(-48,-8,50);
	glVertex3f(-60,-8,50);
	//main stairs 8
	glColor3f(0.3,0.3,0.3);
	glVertex3f(-60,-8,50);
	glVertex3f(-60,-8,35);
	glVertex3f(-60,-10,35);

	glVertex3f(-60,-10,35);
	glVertex3f(-60,-8,50);
	glVertex3f(-60,-10,50);
	//main stairs 9
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-60,-10,50);
	glVertex3f(-60,-10,35);
	glVertex3f(-62,-10,35);

	glVertex3f(-62,-10,35);
	glVertex3f(-60,-10,50);
	glVertex3f(-62,-10,50);
	//main stairs 10
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-62,-10,50);
	glVertex3f(-62,-10,35);
	glVertex3f(-62,-12,35);

	glVertex3f(-62,-12,35);
	glVertex3f(-62,-10,50);
	glVertex3f(-62,-12,50);
	//main stairs 11
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-62,-12,50);
	glVertex3f(-62,-12,35);
	glVertex3f(-64,-12,35);

	glVertex3f(-64,-12,35);
	glVertex3f(-62,-12,50);
	glVertex3f(-64,-12,50);
	//main stairs 12
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-64,-12,50);
	glVertex3f(-64,-12,35);
	glVertex3f(-64,-14,35);

	glVertex3f(-64,-14,35);
	glVertex3f(-64,-12,50);
	glVertex3f(-64,-14,50);
	//main stairs 12
	glColor3f(0.7,0.7,0.7);
	glVertex3f(-64,-14,50);
	glVertex3f(-64,-14,35);
	glVertex3f(-68,-14,35);

	glVertex3f(-68,-14,35);
	glVertex3f(-64,-14,50);
	glVertex3f(-68,-14,50);
	//main stairs 13
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-68,-14,50);
	glVertex3f(-68,-14,35);
	glVertex3f(-68,-16,35);

	glVertex3f(-68,-16,35);
	glVertex3f(-68,-14,50);
	glVertex3f(-68,-16,50);
//main stairs 14
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-68,-16,50);
	glVertex3f(-68,-16,35);
	glVertex3f(-70,-16,35);

	glVertex3f(-70,-16,35);
	glVertex3f(-68,-16,50);
	glVertex3f(-70,-16,50);
//main stairs 15
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-70,-16,50);
	glVertex3f(-70,-16,35);
	glVertex3f(-70,-18,35);

	glVertex3f(-70,-18,35);
	glVertex3f(-70,-16,50);
	glVertex3f(-70,-18,50);
	//main stairs 16
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-70,-18,50);
	glVertex3f(-70,-18,35);
	glVertex3f(-72,-18,35);

	glVertex3f(-72,-18,35);
	glVertex3f(-70,-18,50);
	glVertex3f(-72,-18,50);
	//main stairs 17
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-72,-18,50);
	glVertex3f(-72,-18,35);
	glVertex3f(-72,-20,35);

	glVertex3f(-72,-20,35);
	glVertex3f(-72,-18,50);
	glVertex3f(-72,-20,50);
	//main stairs
	//main stairs 1
	glVertex3f(-42,0,150);
	glVertex3f(-42,0,175);
	glVertex3f(-40,0,175);

	glVertex3f(-40,0,175);
	glVertex3f(-42,0,150);
	glVertex3f(-40,0,150);
	//main stairs 2
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-42,-2,150);
	glVertex3f(-42,-2,175);
	glVertex3f(-42,0,175);

	glVertex3f(-42,0,175);
	glVertex3f(-42,-2,150);
	glVertex3f(-42,0,150);
	//main stairs 3
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-42,-2,150);
	glVertex3f(-42,-2,175);
	glVertex3f(-44,-2,175);

	glVertex3f(-44,-2,175);
	glVertex3f(-42,-2,150);
	glVertex3f(-44,-2,150);
	//main stairs 4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-44,-2,150);
	glVertex3f(-44,-2,175);
	glVertex3f(-44,-4,175);

	glVertex3f(-44,-4,175);
	glVertex3f(-44,-2,150);
	glVertex3f(-44,-4,150);
	//main stairs 4
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-44,-4,150);
	glVertex3f(-44,-4,175);
	glVertex3f(-46,-4,175);

	glVertex3f(-46,-4,175);
	glVertex3f(-44,-4,150);
	glVertex3f(-46,-4,150);
	//main stairs 4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-46,-4,150);
	glVertex3f(-46,-4,175);
	glVertex3f(-46,-6,175);

	glVertex3f(-46,-6,175);
	glVertex3f(-46,-4,150);
	glVertex3f(-46,-6,150);
	//main stairs 5
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-46,-6,150);
	glVertex3f(-46,-6,175);
	glVertex3f(-48,-6,175);

	glVertex3f(-48,-6,175);
	glVertex3f(-46,-6,150);
	glVertex3f(-48,-6,150);
		//main stairs 6
	glColor3f(0.8,0.8,0.8);
	glVertex3f(-48,-6,150);
	glVertex3f(-48,-6,175);
	glVertex3f(-48,-8,175);

	glVertex3f(-48,-8,175);
	glVertex3f(-48,-6,150);
	glVertex3f(-48,-8,150);
	//main stairs 7
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-48,-8,150);
	glVertex3f(-48,-8,175);
	glVertex3f(-60,-8,175);

	glVertex3f(-60,-8,175);
	glVertex3f(-48,-8,150);
	glVertex3f(-60,-8,150);
	//main stairs 8
	glColor3f(0.3,0.3,0.3);
	glVertex3f(-60,-8,150);
	glVertex3f(-60,-8,175);
	glVertex3f(-60,-10,175);

	glVertex3f(-60,-10,175);
	glVertex3f(-60,-8,150);
	glVertex3f(-60,-10,150);
	//main stairs 9
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-60,-10,150);
	glVertex3f(-60,-10,175);
	glVertex3f(-62,-10,175);

	glVertex3f(-62,-10,175);
	glVertex3f(-60,-10,150);
	glVertex3f(-62,-10,150);
	//main stairs 10
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-62,-10,150);
	glVertex3f(-62,-10,175);
	glVertex3f(-62,-12,175);

	glVertex3f(-62,-12,175);
	glVertex3f(-62,-10,150);
	glVertex3f(-62,-12,150);
	//main stairs 11
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-62,-12,150);
	glVertex3f(-62,-12,175);
	glVertex3f(-64,-12,175);

	glVertex3f(-64,-12,175);
	glVertex3f(-62,-12,150);
	glVertex3f(-64,-12,150);
	//main stairs 12
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-64,-12,150);
	glVertex3f(-64,-12,175);
	glVertex3f(-64,-14,175);

	glVertex3f(-64,-14,175);
	glVertex3f(-64,-12,150);
	glVertex3f(-64,-14,150);
	//main stairs 12
	glColor3f(0.7,0.7,0.7);
	glVertex3f(-64,-14,150);
	glVertex3f(-64,-14,175);
	glVertex3f(-68,-14,175);

	glVertex3f(-68,-14,175);
	glVertex3f(-64,-14,150);
	glVertex3f(-68,-14,150);
	//main stairs 13
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-68,-14,150);
	glVertex3f(-68,-14,175);
	glVertex3f(-68,-16,175);

	glVertex3f(-68,-16,175);
	glVertex3f(-68,-14,150);
	glVertex3f(-68,-16,150);
//main stairs 14
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-68,-16,150);
	glVertex3f(-68,-16,175);
	glVertex3f(-70,-16,175);

	glVertex3f(-70,-16,175);
	glVertex3f(-68,-16,150);
	glVertex3f(-70,-16,150);
//main stairs 15
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-70,-16,150);
	glVertex3f(-70,-16,175);
	glVertex3f(-70,-18,175);

	glVertex3f(-70,-18,175);
	glVertex3f(-70,-16,150);
	glVertex3f(-70,-18,150);
	//main stairs 16
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-70,-18,150);
	glVertex3f(-70,-18,175);
	glVertex3f(-72,-18,175);

	glVertex3f(-72,-18,175);
	glVertex3f(-70,-18,150);
	glVertex3f(-72,-18,150);
	//main stairs 17
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-72,-18,150);
	glVertex3f(-72,-18,175);
	glVertex3f(-72,-20,175);

	glVertex3f(-72,-20,175);
	glVertex3f(-72,-18,150);
	glVertex3f(-72,-20,150);
	//main stairs 222
	//main stairs 1
	glVertex3f(-42,0,200);
	glVertex3f(-42,0,180);
	glVertex3f(-40,0,180);

	glVertex3f(-40,0,180);
	glVertex3f(-42,0,200);
	glVertex3f(-40,0,200);
	//main stairs 2
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-42,-2,200);
	glVertex3f(-42,-2,180);
	glVertex3f(-42,0,180);

	glVertex3f(-42,0,180);
	glVertex3f(-42,-2,200);
	glVertex3f(-42,0,200);
	//main stairs 3
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-42,-2,200);
	glVertex3f(-42,-2,180);
	glVertex3f(-44,-2,180);

	glVertex3f(-44,-2,180);
	glVertex3f(-42,-2,200);
	glVertex3f(-44,-2,200);
	//main stairs 4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-44,-2,200);
	glVertex3f(-44,-2,180);
	glVertex3f(-44,-4,180);

	glVertex3f(-44,-4,180);
	glVertex3f(-44,-2,200);
	glVertex3f(-44,-4,200);
	//main stairs 4
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-44,-4,200);
	glVertex3f(-44,-4,180);
	glVertex3f(-46,-4,180);

	glVertex3f(-46,-4,180);
	glVertex3f(-44,-4,200);
	glVertex3f(-46,-4,200);
	//main stairs 4
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-46,-4,200);
	glVertex3f(-46,-4,180);
	glVertex3f(-46,-6,180);

	glVertex3f(-46,-6,180);
	glVertex3f(-46,-4,200);
	glVertex3f(-46,-6,200);
	//main stairs 5
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-46,-6,200);
	glVertex3f(-46,-6,180);
	glVertex3f(-48,-6,180);

	glVertex3f(-48,-6,180);
	glVertex3f(-46,-6,200);
	glVertex3f(-48,-6,200);
		//main stairs 6
	glColor3f(0.8,0.8,0.8);
	glVertex3f(-48,-6,200);
	glVertex3f(-48,-6,180);
	glVertex3f(-48,-8,180);

	glVertex3f(-48,-8,180);
	glVertex3f(-48,-6,200);
	glVertex3f(-48,-8,200);
	//main stairs 7
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-48,-8,200);
	glVertex3f(-48,-8,180);
	glVertex3f(-60,-8,180);

	glVertex3f(-60,-8,180);
	glVertex3f(-48,-8,200);
	glVertex3f(-60,-8,200);
	//main stairs 8
	glColor3f(0.3,0.3,0.3);
	glVertex3f(-60,-8,200);
	glVertex3f(-60,-8,180);
	glVertex3f(-60,-10,180);

	glVertex3f(-60,-10,180);
	glVertex3f(-60,-8,200);
	glVertex3f(-60,-10,200);
	//main stairs 9
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-60,-10,200);
	glVertex3f(-60,-10,180);
	glVertex3f(-62,-10,180);

	glVertex3f(-62,-10,180);
	glVertex3f(-60,-10,200);
	glVertex3f(-62,-10,200);
	//main stairs 10
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-62,-10,200);
	glVertex3f(-62,-10,180);
	glVertex3f(-62,-12,180);

	glVertex3f(-62,-12,180);
	glVertex3f(-62,-10,200);
	glVertex3f(-62,-12,200);
	//main stairs 11
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-62,-12,200);
	glVertex3f(-62,-12,180);
	glVertex3f(-64,-12,180);

	glVertex3f(-64,-12,180);
	glVertex3f(-62,-12,200);
	glVertex3f(-64,-12,200);
	//main stairs 12
	glColor3f(0.6,0.6,0.6);
	glVertex3f(-64,-12,200);
	glVertex3f(-64,-12,180);
	glVertex3f(-64,-14,180);

	glVertex3f(-64,-14,180);
	glVertex3f(-64,-12,200);
	glVertex3f(-64,-14,200);
	//main stairs 12
	glColor3f(0.7,0.7,0.7);
	glVertex3f(-64,-14,200);
	glVertex3f(-64,-14,180);
	glVertex3f(-68,-14,180);

	glVertex3f(-68,-14,180);
	glVertex3f(-64,-14,200);
	glVertex3f(-68,-14,200);
	//main stairs 13
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-68,-14,200);
	glVertex3f(-68,-14,180);
	glVertex3f(-68,-16,180);

	glVertex3f(-68,-16,180);
	glVertex3f(-68,-14,200);
	glVertex3f(-68,-16,200);
//main stairs 14
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-68,-16,200);
	glVertex3f(-68,-16,180);
	glVertex3f(-70,-16,180);

	glVertex3f(-70,-16,180);
	glVertex3f(-68,-16,200);
	glVertex3f(-70,-16,200);
//main stairs 15
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-70,-16,200);
	glVertex3f(-70,-16,180);
	glVertex3f(-70,-18,180);

	glVertex3f(-70,-18,180);
	glVertex3f(-70,-16,200);
	glVertex3f(-70,-18,200);
	//main stairs 16
	glColor3f(0.2,0.2,0.2);
	glVertex3f(-70,-18,200);
	glVertex3f(-70,-18,180);
	glVertex3f(-72,-18,180);

	glVertex3f(-72,-18,180);
	glVertex3f(-70,-18,200);
	glVertex3f(-72,-18,200);
	//main stairs 17
	glColor3f(0.5,0.5,0.5);
	glVertex3f(-72,-18,200);
	glVertex3f(-72,-18,180);
	glVertex3f(-72,-20,180);

	glVertex3f(-72,-20,180);
	glVertex3f(-72,-18,200);
	glVertex3f(-72,-20,200);
	//ground all structure

	glColor3f(0.14,0.14,0.14);
	glVertex3f(50,-21,-20);
	glVertex3f(50,-21, 250);
	glVertex3f(-270,-21,250);

	glVertex3f(-270,-21,250);
	glVertex3f(50,-21,-20);
	glVertex3f(-270,-21,-20);
	glEnd();
}
void metros()
{
	glTranslatef(0,0,0);
	metro();
		glTranslatef(-540,-20,0);
	metro();
	glTranslatef(-580,-20,0);
	metro();
}
void masjid_e_nabvi()
{
	glTranslatef(0,20,0);
	glColor3f(0.82,0.82,0.82);
	glBegin(GL_TRIANGLES);
	//BASE
	glVertex3f(40,-21,-20);
	glVertex3f(40,-21, 300);
	glVertex3f(-300,-21,300);

	glVertex3f(-300,-21,300);
	glVertex3f(40,-21,-20);
	glVertex3f(-300,-21,-20);



	//main building base
		glColor3f(0.62,0.62,0.62);
	glVertex3f(0,-19.9,50);
	glVertex3f(0,-19.9, 300);
	glVertex3f(-200,-19.9,300);

	glVertex3f(-200,-19.9,300);
	glVertex3f(0,-19.9,50);
	glVertex3f(-200,-19.9,50);
		//main building roof
		glColor3f(0.62,0.62,0.62);
	glVertex3f(0,40,50);
	glVertex3f(0,40, 300);
	glVertex3f(-200,40,300);

	glVertex3f(-200,40,300);
	glVertex3f(0,40,50);
	glVertex3f(-200,40,50);


	//main building left wall
		glColor3f(0.83,0.83,0.83);
	glVertex3f(0,-19.9,50);
	glVertex3f(0,-19.9, 300);
	glVertex3f(0,40,300);

	glVertex3f(0,40,300);
	glVertex3f(0,-19.9,50);
	glVertex3f(0,40,50);
	//main building right wall
		glColor3f(0.83,0.83,0.83);
	glVertex3f(-200,-19.9,50);
	glVertex3f(-200,-19.9, 300);
	glVertex3f(-200,40,300);

	glVertex3f(-200,40,300);
	glVertex3f(-200,-19.9,50);
	glVertex3f(-200,40,50);
	//main building duur wall
		glColor3f(0.88,0.88,0.88);
	glVertex3f(0,-19.9,300);
	glVertex3f(-200,-19.9, 300);
	glVertex3f(-200,40,300);

	glVertex3f(-200,40,300);
	glVertex3f(0,-19.9,300);
	glVertex3f(0,40,300);
		//main building qareeb wall
		glColor3f(0.88,0.88,0.88);
	glVertex3f(0,-19.9,50);
	glVertex3f(-200,-19.9, 50);
	glVertex3f(-200,40,50);

	glVertex3f(-200,40,50);
	glVertex3f(0,-19.9,50);
	glVertex3f(0,40,50);
	//minaar base

		glColor3f(0.92,0.92,0.92);
	glVertex3f(-100,40,220);
	glVertex3f(-100,40, 270);
	glVertex3f(-150,40,270);

	glVertex3f(-150,40,270);
	glVertex3f(-100,40,220);
	glVertex3f(-150,40,220);
	//minaar wall 1

		glColor3f(0.92,0.92,0.92);
	glVertex3f(-150,200,220);//
	glVertex3f(-150,200, 270);//
	glVertex3f(-150,40,270);

	glVertex3f(-150,40,270);
	glVertex3f(-150,200,220);//
	glVertex3f(-150,40,220);
	//minaar wall 2

		glColor3f(0.82,0.82,0.82);
	glVertex3f(-100,200,220);//
	glVertex3f(-100,200, 270);//
	glVertex3f(-100,40,270);

	glVertex3f(-100,40,270);
	glVertex3f(-100,200,220);//
	glVertex3f(-100,40,220);
	//minaar 3


		glColor3f(0.92,0.92,0.92);
	glVertex3f(-100,40,220);
	glVertex3f(-100,200, 220);//
	glVertex3f(-150,200,220);//

	glVertex3f(-150,200,220);//
	glVertex3f(-100,40,220);
	glVertex3f(-150,40,220);
	//minaar 4


		glColor3f(0.82,0.82,0.82);
	glVertex3f(-100,40,270);
	glVertex3f(-100,200, 270);//
	glVertex3f(-150,200,270);//

	glVertex3f(-150,280,270);//
	glVertex3f(-100,40,270);
	glVertex3f(-150,40,270);
	//minaar roof

		glColor3f(0.42,0.42,0.42);
	glVertex3f(-90,200,210);
	glVertex3f(-90,200, 280);
	glVertex3f(-160,200,280);

	glVertex3f(-160,200,280);
	glVertex3f(-90,200,210);
	glVertex3f(-160,200,210);
	//minaar window 1

		glColor3f(0.47,0.47,0.47);
	glVertex3f(-90,250,280);
	glVertex3f(-90,200, 280);
	glVertex3f(-160,200,280);

	glVertex3f(-160,200,280);
	glVertex3f(-90,250,280);
	glVertex3f(-160,250,280);
		//minaar window 2

		glColor3f(0.52,0.52,0.52);
	glVertex3f(-90,250,210);
	glVertex3f(-90,200, 210);
	glVertex3f(-160,200,210);

	glVertex3f(-160,200,210);
	glVertex3f(-90,250,210);
	glVertex3f(-160,250,210);
		//minaar window 3

		glColor3f(0.47,0.47,0.47);
	glVertex3f(-90,200,210);
	glVertex3f(-90,200, 280);
	glVertex3f(-90,250,280);

	glVertex3f(-90,250,280);
	glVertex3f(-90,250,210);
	glVertex3f(-90,200,210);
	//minaar window 4

		glColor3f(0.47,0.47,0.47);
	glVertex3f(-160,200,210);
	glVertex3f(-160,200, 280);
	glVertex3f(-160,250,280);

	glVertex3f(-160,250,280);
	glVertex3f(-160,250,210);
	glVertex3f(-160,200,210);
	//minaar Window roof

		glColor3f(0.42,0.42,0.42);
	glVertex3f(-90,250,210);
	glVertex3f(-90,250, 280);
	glVertex3f(-160,250,280);

	glVertex3f(-160,250,280);
	glVertex3f(-90,250,210);
	glVertex3f(-160,250,210);
	//round minaar
	//minaar window 1

		glColor3f(0.77,0.77,0.77);
	glVertex3f(-110,250,270);
	glVertex3f(-110,400, 270);
	glVertex3f(-140,400,270);

	glVertex3f(-140,400,270);
	glVertex3f(-110,250,270);
	glVertex3f(-140,250,270);
		//minaar window 2

		glColor3f(0.72,0.72,0.72);
	glVertex3f(-110,250,220);
	glVertex3f(-110,400, 220);
	glVertex3f(-140,400,220);

	glVertex3f(-140,400,220);
	glVertex3f(-110,250,220);
	glVertex3f(-140,250,220);
		//minaar window 3

		glColor3f(0.67,0.67,0.67);
	glVertex3f(-100,400,230);
	glVertex3f(-100,400, 260);
	glVertex3f(-100,250,260);

	glVertex3f(-100,250,260);
	glVertex3f(-100,250,230);
	glVertex3f(-100,400,230);
	//minaar window 4

		glColor3f(0.67,0.67,0.67);
	glVertex3f(-150,400,230);
	glVertex3f(-150,400, 260);
	glVertex3f(-150,250,260);

	glVertex3f(-150,250,260);
	glVertex3f(-150,250,230);
	glVertex3f(-150,400,230);
	//link 1
		glColor3f(0.37,0.37,0.37);
	glVertex3f(-150,250,260);
	glVertex3f(-150,400, 260);
	glVertex3f(-140,400,270);

	glVertex3f(-140,400,270);
	glVertex3f(-150,250,260);
	glVertex3f(-140,250,270);

	//link 2
	glVertex3f(-150,250,230);
	glVertex3f(-150,400, 230);
	glVertex3f(-140,400,220);

	glVertex3f(-140,400,220);
	glVertex3f(-150,250,230);
	glVertex3f(-140,250,220);
	//link 3
	glVertex3f(-110,400,270);
	glVertex3f(-100,400, 260);
	glVertex3f(-100,250,260);

	glVertex3f(-100,250,260);
	glVertex3f(-110,250,270);
	glVertex3f(-110,400,270);
	//link 4


	glVertex3f(-110,250,220);
	glVertex3f(-110,400, 220);
	glVertex3f(-100,400,230);

	glVertex3f(-100,400,230);
	glVertex3f(-110,250,220);
	glVertex3f(-100,250,230);
	//first base
	glColor3f(0.23,0.30,0.23);

	//1

	glVertex3f(-80,0,60);
	glVertex3f(-165,0, 60);
	glVertex3f(-165,50,60);

	glVertex3f(-165,50,60);
	glVertex3f(-80,0,60);
	glVertex3f(-80,50,60);
	//1 roof


	glVertex3f(-80,50,200);//
	glVertex3f(-165,50, 200);//
	glVertex3f(-165,50,60);

	glVertex3f(-165,50,60);
	glVertex3f(-80,50,200);//
	glVertex3f(-80,50,60);

	//2

	glVertex3f(-80,0,200);
	glVertex3f(-165,0, 200);
	glVertex3f(-165,50,200);

	glVertex3f(-165,50,200);
	glVertex3f(-80,0,200);
	glVertex3f(-80,50,200);

	//3

	glVertex3f(-190,0,100);
	glVertex3f(-165,0, 60);
	glVertex3f(-165,50,60);

	glVertex3f(-165,50,60);
	glVertex3f(-190,0,100);
	glVertex3f(-190,50,100);
	//3 rooof


	glVertex3f(-190,50,150);//
	glVertex3f(-165,50, 110);//
	glVertex3f(-165,50,60);

	glVertex3f(-165,50,60);
	glVertex3f(-190,50,150);//
	glVertex3f(-190,50,100);

	//4

	glVertex3f(-190,0,160);
	glVertex3f(-165,0, 200);
	glVertex3f(-165,50,200);

	glVertex3f(-165,50,200);
	glVertex3f(-190,0,160);
	glVertex3f(-190,50,160);
	//4 roof
	glVertex3f(-190,50,100);//
	glVertex3f(-165,50, 150);//
	glVertex3f(-165,50,200);

	glVertex3f(-165,50,200);
	glVertex3f(-190,50,100);//
	glVertex3f(-190,50,160);
	//5

	glVertex3f(-190,0,160);
	glVertex3f(-190,0, 100);
	glVertex3f(-190,50,100);

	glVertex3f(-190,50,100);
	glVertex3f(-190,0,160);
	glVertex3f(-190,50,160);

	//6

	glVertex3f(-40,0,100);
	glVertex3f(-80,0, 60);
	glVertex3f(-80,50,60);

	glVertex3f(-80,50,60);
	glVertex3f(-40,0,100);
	glVertex3f(-40,50,100);
	//6 roof


	glVertex3f(-40,50,160);//
	glVertex3f(-80,50, 110);//
	glVertex3f(-80,50,60);

	glVertex3f(-80,50,60);
	glVertex3f(-40,50,160);//
	glVertex3f(-40,50,100);
	//7


	glVertex3f(-40,0,160);
	glVertex3f(-40,0, 100);
	glVertex3f(-40,50,100);

	glVertex3f(-40,50,100);
	glVertex3f(-40,0,160);
	glVertex3f(-40,50,160);
	 //7 roof



	glVertex3f(-190,50,160);//
	glVertex3f(-190,50, 100);//
	glVertex3f(-40,50,100);

	glVertex3f(-40,50,100);
	glVertex3f(-190,50,160);//
	glVertex3f(-40,50,160);
	 //8


	glVertex3f(-40,0,160);
	glVertex3f(-80,0, 200);
	glVertex3f(-80,50,200);

	glVertex3f(-80,50,200);
	glVertex3f(-40,0,160);
	glVertex3f(-40,50,160);
	//8roof
	  //8


		glVertex3f(-40,50,100);//
	glVertex3f(-80,50, 140);//
	glVertex3f(-80,50,200);

	glVertex3f(-80,50,200);
	glVertex3f(-40,50,100);//
	glVertex3f(-40,50,160);


	glColor3f(0.23,0.40,0.23);
		//base curve
	//1

	glVertex3f(-120,70,75);
	glVertex3f(-125,70, 75);
	glVertex3f(-125,50,75);

	glVertex3f(-125,50,75);
	glVertex3f(-120,70,75);
	glVertex3f(-120,50,75);

//1 B
	glVertex3f(-120,100,80);
	glVertex3f(-125,100, 80);
	glVertex3f(-125,70,75);

	glVertex3f(-125,70,75);
	glVertex3f(-120,100,80);
	glVertex3f(-120,70,75);


	//2

	glVertex3f(-115,70,75.1);
	glVertex3f(-120,70, 75);
	glVertex3f(-120,50,75);

	glVertex3f(-120,50,75);
	glVertex3f(-115,70,75.1);
	glVertex3f(-115,50,75.1);
	//2B
	glVertex3f(-115,100,80.1);
	glVertex3f(-120,100, 80);
	glVertex3f(-120,70,75);

	glVertex3f(-120,70,75);
	glVertex3f(-115,100,80.1);
	glVertex3f(-115,70,75.1);

	//3


	glVertex3f(-110,70,76);
	glVertex3f(-115,70, 75.1);
	glVertex3f(-115,50,75.1);

	glVertex3f(-115,50,75.1);
	glVertex3f(-110,70,76);
	glVertex3f(-110,50,76);
	//3B
	glVertex3f(-110,100,81);
	glVertex3f(-115,100, 80.1);
	glVertex3f(-115,70,75.1);

	glVertex3f(-115,70,75.1);
	glVertex3f(-110,100,81);
	glVertex3f(-110,70,76);


	//4


	glVertex3f(-105,70,77);
	glVertex3f(-110,70, 76);
	glVertex3f(-110,50,76);

	glVertex3f(-110,50,76);
	glVertex3f(-105,70,77);
	glVertex3f(-105,50,77);
	//4b
	glVertex3f(-105,100,82.5);
	glVertex3f(-110,100, 81);
	glVertex3f(-110,70,76);

	glVertex3f(-110,70,76);
	glVertex3f(-105,100,82.5);
	glVertex3f(-105,70,77);

	//5


	glVertex3f(-100,70,79);
	glVertex3f(-105,70, 77);
	glVertex3f(-105,50,77);

	glVertex3f(-105,50,77);
	glVertex3f(-100,70,79);
	glVertex3f(-100,50,79);
	//5b

		glVertex3f(-100,100,84.5);
	glVertex3f(-105,100, 82.5);
	glVertex3f(-105,70,77);

	glVertex3f(-105,70,77);
	glVertex3f(-100,100,84.5);
	glVertex3f(-100,70,79);

	//6


	glVertex3f(-95,70,81);
	glVertex3f(-100,70, 79);
	glVertex3f(-100,50,79);

	glVertex3f(-100,50,79);
	glVertex3f(-95,70,81);
	glVertex3f(-95,50,81);
	//6 b
		glVertex3f(-95,100,87.5);
	glVertex3f(-100,100, 84.5);
	glVertex3f(-100,70,79);

	glVertex3f(-100,70,79);
	glVertex3f(-95,100,87.5);
	glVertex3f(-95,70,81);

	//7


	glVertex3f(-90,70,84);
	glVertex3f(-95,70, 81);
	glVertex3f(-95,50,81);

	glVertex3f(-95,50,81);
	glVertex3f(-90,70,84);
	glVertex3f(-90,50,84);

	//7b

		glVertex3f(-90,100,91);
	glVertex3f(-95,100, 87.5);
	glVertex3f(-95,70,81);

	glVertex3f(-95,70,81);
	glVertex3f(-90,100,91);
	glVertex3f(-90,70,84);

	//8

	glVertex3f(-85,70,88);
	glVertex3f(-90,70, 84);
	glVertex3f(-90,50,84);

	glVertex3f(-90,50,84);
	glVertex3f(-85,70,88);
	glVertex3f(-85,50,88);
	//8 b
	glVertex3f(-85,100,96.5);
	glVertex3f(-90,100, 91);
	glVertex3f(-90,70,84);

	glVertex3f(-90,70,84);
	glVertex3f(-85,100,96.5);
	glVertex3f(-85,70,88);

	//9


	glVertex3f(-80,70,94);
	glVertex3f(-85,70, 88);
	glVertex3f(-85,50,88);

	glVertex3f(-85,50,88);
	glVertex3f(-80,70,94);
	glVertex3f(-80,50,94);
	//9 b

	glVertex3f(-80,100,104);
	glVertex3f(-85,100, 96.4);
	glVertex3f(-85,70,88);

	glVertex3f(-85,70,88);
	glVertex3f(-80,100,104);
	glVertex3f(-80,70,94);

	//10


	glVertex3f(-75,70,102);
	glVertex3f(-80,70, 94);
	glVertex3f(-80,50,94);

	glVertex3f(-80,50,94);
	glVertex3f(-75,70,102);
	glVertex3f(-75,50,102);
	//10 b
	glVertex3f(-77,100,111);
	glVertex3f(-80,100, 104);
	glVertex3f(-80,70,94);

	glVertex3f(-80,70,94);
	glVertex3f(-77,100,111);
	glVertex3f(-75,70,102);

	//11

	glVertex3f(-70,70,115);
	glVertex3f(-75,70, 102);
	glVertex3f(-75,50,102);

	glVertex3f(-75,50,102);
	glVertex3f(-70,70,115);
	glVertex3f(-70,50,115);

	//11b
	glVertex3f(-76,100,115);
	glVertex3f(-77,100, 111);
	glVertex3f(-75,70,102);

	glVertex3f(-75,70,102);
	glVertex3f(-76,100,115);
	glVertex3f(-70,70,115);
	//12


	glVertex3f(-69,70,120);
	glVertex3f(-70,70, 115);
	glVertex3f(-70,50,115);

	glVertex3f(-70,50,115);
	glVertex3f(-69,70,120);
	glVertex3f(-69,50,120);
	//12 b
	glVertex3f(-75.4,100,119);
	glVertex3f(-76,100, 115);
	glVertex3f(-70,70,115);

	glVertex3f(-70,70,115);
	glVertex3f(-75.4,100,119);
	glVertex3f(-69,70,120);

	//13


	glVertex3f(-69,70,125);
	glVertex3f(-69,70, 120);
	glVertex3f(-69,50,120);

	glVertex3f(-69,50,120);
	glVertex3f(-69,70,125);
	glVertex3f(-69,50,125);
	//13 b
	glVertex3f(-75.5,100,122);
	glVertex3f(-75.4,100, 119);
	glVertex3f(-69,70,120);

	glVertex3f(-69,70,120);
	glVertex3f(-75.5,100,122);
	glVertex3f(-69,70,125);

	//14


	glVertex3f(-69.5,70,130);
	glVertex3f(-69,70, 125);
	glVertex3f(-69,50,125);

	glVertex3f(-69,50,125);
	glVertex3f(-69.5,70,130);
	glVertex3f(-69.5,50,130);
	//14 b
	glVertex3f(-75.5,100,130);
	glVertex3f(-75.5,100, 122);
	glVertex3f(-69,70,125);

	glVertex3f(-69,70,125);
	glVertex3f(-75.5,100,130);
	glVertex3f(-69.5,70,130);

	//15


	glVertex3f(-70.5,70,135);
	glVertex3f(-69.5,70, 130);
	glVertex3f(-69.5,50,130);

	glVertex3f(-69.5,50,130);
	glVertex3f(-70.5,70,135);
	glVertex3f(-70.5,50,135);
	 //15 b
	glVertex3f(-76.5,100,137);
	glVertex3f(-75.5,100, 130);
	glVertex3f(-69.5,70,130);

	glVertex3f(-69.5,70,130);
	glVertex3f(-76.5,100,137);
	glVertex3f(-70.5,70,135);


	//16


	glVertex3f(-72,70,140);
	glVertex3f(-70.5,70, 135);
	glVertex3f(-70.5,50,135);

	glVertex3f(-70.5,50,135);
	glVertex3f(-72,70,140);
	glVertex3f(-72,50,140);
	//16 b
	glVertex3f(-77.5,100,140);
	glVertex3f(-76.5,100, 137);
	glVertex3f(-70.5,70,135);

	glVertex3f(-70.5,70,135);
	glVertex3f(-77.5,100,140);
	glVertex3f(-72,70,140);

	//17


	glVertex3f(-74,70,145);
	glVertex3f(-72,70, 140);
	glVertex3f(-72,50,140);

	glVertex3f(-72,50,140);
	glVertex3f(-74,70,145);
	glVertex3f(-74,50,145);

 //17 b
	glVertex3f(-79.5,100,145);
	glVertex3f(-77.5,100, 140);
	glVertex3f(-72,70,140);

	glVertex3f(-72,70,140);
	glVertex3f(-79.5,100,145);
	glVertex3f(-74,70,145);



	//18


	glVertex3f(-76,70,150);
	glVertex3f(-74,70, 145);
	glVertex3f(-74,50,145);

	glVertex3f(-74,50,145);
	glVertex3f(-76,70,150);
	glVertex3f(-76,50,150);
	//18 b
	glVertex3f(-82.5,100,150);
	glVertex3f(-79.5,100, 145);
	glVertex3f(-74,70,145);

	glVertex3f(-74,70,145);
	glVertex3f(-82.5,100,150);
	glVertex3f(-76,70,150);


	//19


	glVertex3f(-79,70,155);
	glVertex3f(-76,70, 150);
	glVertex3f(-76,50,150);

	glVertex3f(-76,50,150);
	glVertex3f(-79,70,155);
	glVertex3f(-79,50,155);

	 //19 b
	glVertex3f(-86.5,100,155);
	glVertex3f(-82.5,100, 150);
	glVertex3f(-76,70,150);

	glVertex3f(-76,70,150);
	glVertex3f(-86.5,100,155);
	glVertex3f(-79,70,155);

	//20


	glVertex3f(-81,70,158);
	glVertex3f(-79,70, 155);
	glVertex3f(-79,50,155);

	glVertex3f(-79,50,155);
	glVertex3f(-81,70,158);
	glVertex3f(-81,50,158);
	//20 b
		glVertex3f(-89.5,100,158);
	glVertex3f(-86.5,100, 155);
	glVertex3f(-79,70,155);

	glVertex3f(-79,70,155);
	glVertex3f(-89.5,100,158);
	glVertex3f(-81,70,158);

	//21

	glVertex3f(-83,70,160);
	glVertex3f(-81,70, 158);
	glVertex3f(-81,50,158);

	glVertex3f(-81,50,158);
	glVertex3f(-83,70,160);
	glVertex3f(-83,50,160);
 //21 b
	glVertex3f(-91.5,100,160);
	glVertex3f(-89.5,100, 158);
	glVertex3f(-81,70,158);

	glVertex3f(-81,70,158);
	glVertex3f(-91.5,100,160);
	glVertex3f(-83,70,160);
	//22

	glVertex3f(-87,70,164);
	glVertex3f(-83,70, 160);
	glVertex3f(-83,50,160);

	glVertex3f(-83,50,160);
	glVertex3f(-87,70,164);
	glVertex3f(-87,50,164);
	//22 b
	glVertex3f(-95,100,162.5);
	glVertex3f(-91.5,100, 160);
	glVertex3f(-83,70,160);

	glVertex3f(-83,70,160);
	glVertex3f(-95,100,162.5);
	glVertex3f(-87,70,164);

	//23


	glVertex3f(-92,70,168);
	glVertex3f(-87,70, 164);
	glVertex3f(-87,50,164);

	glVertex3f(-87,50,164);
	glVertex3f(-92,70,168);
	glVertex3f(-92,50,168);
	//23 b
		glVertex3f(-95.5,100,162.5);
	glVertex3f(-95,100, 162.5);
	glVertex3f(-87,70,164);

	glVertex3f(-87,70,164);
	glVertex3f(-95.5,100,162.5);
	glVertex3f(-92,70,168);

	//24


	glVertex3f(-98,70,171);
	glVertex3f(-92,70, 168);
	glVertex3f(-92,50,168);

	glVertex3f(-92,50,168);
	glVertex3f(-98,70,171);
	glVertex3f(-98,50,171);

 //24 b
	glVertex3f(-97.5,100,163);
	glVertex3f(-95.5,100, 162.5);
	glVertex3f(-92,70,168);

	glVertex3f(-92,70,168);
	glVertex3f(-97.5,100,163);
	glVertex3f(-98,70,171);
	//25


	glVertex3f(-106,70,174);
	glVertex3f(-98,70, 171);
	glVertex3f(-98,50,171);

	glVertex3f(-98,50,171);
	glVertex3f(-106,70,174);
	glVertex3f(-106,50,174);
	//25 b

	glVertex3f(-102.5,100,166);
	glVertex3f(-97.5,100, 163);
	glVertex3f(-98,70,171);

	glVertex3f(-98,70,171);
	glVertex3f(-102.5,100,166);
	glVertex3f(-106,70,174);


	//26

	glVertex3f(-112,70,175);
	glVertex3f(-106,70, 174);
	glVertex3f(-106,50,174);

	glVertex3f(-106,50,174);
	glVertex3f(-112,70,175);
	glVertex3f(-112,50,175);

	 //26 b
	glVertex3f(-107,100,168);
	glVertex3f(-102.5,100, 166);
	glVertex3f(-106,70,174);

	glVertex3f(-106,70,174);
	glVertex3f(-107,100,168);
	glVertex3f(-112,70,175);

	//27


	glVertex3f(-120,70,176);
	glVertex3f(-112,70, 175);
	glVertex3f(-112,50,175);

	glVertex3f(-112,50,175);
	glVertex3f(-120,70,176);
	glVertex3f(-120,50,176);
	//27 b

	glVertex3f(-115,100,169.5);
	glVertex3f(-107,100, 168);
	glVertex3f(-112,70,175);

	glVertex3f(-112,70,175);
	glVertex3f(-115,100,169.5);
	glVertex3f(-120,70,176);
		//28


	glVertex3f(-126,70,176.5);
	glVertex3f(-120,70, 176);
	glVertex3f(-120,50,176);

	glVertex3f(-120,50,176);
	glVertex3f(-126,70,176.5);
	glVertex3f(-126,50,176.5);

	 //28 b
	glVertex3f(-120,100,170);
	glVertex3f(-115,100, 169.5);
	glVertex3f(-120,70,176);

	glVertex3f(-120,70,176);
	glVertex3f(-120,100,170);
	glVertex3f(-126,70,176.5);

	//29


	glVertex3f(-134,70,174);
	glVertex3f(-126,70, 176.5);
	glVertex3f(-126,50,176.5);

	glVertex3f(-126,50,176.5);
	glVertex3f(-134,70,174);
	glVertex3f(-134,50,174);

	//29 b

	glVertex3f(-125,100,170.5);
	glVertex3f(-120,100, 170);
	glVertex3f(-126,70,176.5);

	glVertex3f(-126,70,176.5);
	glVertex3f(-125,100,170.5);
	glVertex3f(-134,70,174);
	//from herreeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee
	//30


	glVertex3f(-142,70,171);
	glVertex3f(-134,70, 174);
	glVertex3f(-134,50,174);

	glVertex3f(-134,50,174);
	glVertex3f(-142,70,171);
	glVertex3f(-142,50,171);
	//30 b
		glVertex3f(-135,100,167.5);
	glVertex3f(-125,100, 170.5);
	glVertex3f(-134,70,174);

	glVertex3f(-134,70,174);
	glVertex3f(-135,100,167.5);
	glVertex3f(-142,70,171);
	//31


	glVertex3f(-148,70,168);
	glVertex3f(-142,70, 171);
	glVertex3f(-142,50,171);

	glVertex3f(-142,50,171);
	glVertex3f(-148,70,168);
	glVertex3f(-148,50,168);
	//31 b
	glVertex3f(-140,100,165.5);
	glVertex3f(-135,100, 167.5);
	glVertex3f(-142,70,171);

	glVertex3f(-142,70,171);
	glVertex3f(-140,100,165.5);
	glVertex3f(-148,70,168);

	 //32

 glVertex3f(-156,70,161);
	glVertex3f(-148,70, 168);
	glVertex3f(-148,50,168);

	glVertex3f(-148,50,168);
	glVertex3f(-156,70,161);
	glVertex3f(-156,50,161);
 //32 b
	glVertex3f(-145,100,162.5);
	glVertex3f(-140,100, 165.5);
	glVertex3f(-148,70,168);

	glVertex3f(-148,70,168);
	glVertex3f(-145,100,162.5);
	glVertex3f(-156,70,161);
	 //33

 glVertex3f(-160,70,156);
	glVertex3f(-156,70, 161);
	glVertex3f(-156,50,161);

	glVertex3f(-156,50,161);
	glVertex3f(-160,70,156);
	glVertex3f(-160,50,156);
	//33 b
	 glVertex3f(-154,100,155);
	glVertex3f(-145,100,162.5);
	glVertex3f(-156,70,161);

	glVertex3f(-156,70,161);
	glVertex3f(-154,100,155);
	glVertex3f(-160,70,156);

	//34

 glVertex3f(-166,70,148);
	glVertex3f(-160,70, 156);
	glVertex3f(-160,50,156);

	glVertex3f(-160,50,156);
	glVertex3f(-166,70,148);
	glVertex3f(-166,50,148);

	//34 b
	glVertex3f(-160,100,147.5);
	glVertex3f(-154,100,155);
	glVertex3f(-160,70,156);

	glVertex3f(-160,70,156);
	glVertex3f(-160,100,147.5);
	glVertex3f(-166,70,148);
	//35

 glVertex3f(-170,70,139);
	glVertex3f(-166,70, 148);
	glVertex3f(-166,50,148);

	glVertex3f(-166,50,148);
	glVertex3f(-170,70,139);
	glVertex3f(-170,50,139);
	//35 b
	 glVertex3f(-165,100,133);
	glVertex3f(-160,100,147.5);
	glVertex3f(-166,70,148);

	glVertex3f(-166,70,148);
	glVertex3f(-165,100,133);
	glVertex3f(-170,70,139);
	//36

 glVertex3f(-172,70,120);
	glVertex3f(-170,70, 139);
	glVertex3f(-170,50,139);

	glVertex3f(-170,50,139);
	glVertex3f(-172,70,120);
	glVertex3f(-172,50,120);
	//36 b
	 glVertex3f(-165,100,120);
	glVertex3f(-165,100,133);
	glVertex3f(-170,70,139);

	glVertex3f(-170,70,139);
	glVertex3f(-165,100,120);
	glVertex3f(-172,70,120);
	//37

 glVertex3f(-171,70,110);
	glVertex3f(-172,70, 120);
	glVertex3f(-172,50,120);

	glVertex3f(-172,50,120);
	glVertex3f(-171,70,110);
	glVertex3f(-171,50,110);
	//37 b
	 glVertex3f(-163,100,110);
	glVertex3f(-165,100,120);
	glVertex3f(-172,70,120);

	glVertex3f(-172,70,120);
	glVertex3f(-163,100,110);
	glVertex3f(-171,70,110);
	//38

 glVertex3f(-168,70,100);
	glVertex3f(-171,70, 110);
	glVertex3f(-171,50,110);

	glVertex3f(-171,50,110);
	glVertex3f(-168,70,100);
	glVertex3f(-168,50,100);
	//38 b
	glVertex3f(-157.5,100,100);
	glVertex3f(-163,100,110);
	glVertex3f(-171,70,110);

	glVertex3f(-171,70,110);
	glVertex3f(-157.5,100,100);
	glVertex3f(-168,70,100);
//39

 glVertex3f(-162,70,93);
	glVertex3f(-168,70, 100);
	glVertex3f(-168,50,100);

	glVertex3f(-168,50,100);
	glVertex3f(-162,70,93);
	glVertex3f(-162,50,93);
	//39 b
	glVertex3f(-151.5,100,93);
	glVertex3f(-157.5,100, 100);
	glVertex3f(-168,70,100);

	glVertex3f(-168,70,100);
	glVertex3f(-151.5,100,93);
	glVertex3f(-162,70,93);
	//40

 glVertex3f(-154,70,85);
	glVertex3f(-162,70, 93);
	glVertex3f(-162,50,93);

	glVertex3f(-162,50,93);
	glVertex3f(-154,70,85);
	glVertex3f(-154,50,85);
	//40 b
	glVertex3f(-140.5,100,85);
	glVertex3f(-151.5,100,93);
	glVertex3f(-162,70,93);

	glVertex3f(-162,70,93);
	glVertex3f(-140.5,100,85);
	glVertex3f(-154,70,85);
	//41

 glVertex3f(-150,70,82);
	glVertex3f(-154,70, 85);
	glVertex3f(-154,50,85);

	glVertex3f(-154,50,85);
	glVertex3f(-150,70,82);
	glVertex3f(-150,50,82);
	//41 b
	glVertex3f(-135,100,83);
	glVertex3f(-140.5,100,85);
	glVertex3f(-154,70,85);

	glVertex3f(-154,70,85);
	glVertex3f(-135,100,83);
	glVertex3f(-150,70,82);
	//42

 glVertex3f(-130,70,75);
	glVertex3f(-150,70, 82);
	glVertex3f(-150,50,82);

	glVertex3f(-150,50,82);
	glVertex3f(-130,70,75);
	glVertex3f(-130,50,75);
	//42 b
	 glVertex3f(-130,100,81);
	glVertex3f(-135,100,83);
	glVertex3f(-150,70,82);

	glVertex3f(-150,70,82);
	glVertex3f(-130,100,81);
	glVertex3f(-130,70,75);
	//42

 glVertex3f(-125,70,75);
	glVertex3f(-130,70, 75);
	glVertex3f(-130,50,75);

	glVertex3f(-130,50,75);
	glVertex3f(-125,70,75);
	glVertex3f(-125,50,75);
	//42 b

	 glVertex3f(-125,100, 80);
	glVertex3f(-130,100,81);
	glVertex3f(-130,70,75);

	glVertex3f(-130,70,75);
	glVertex3f(-125,100, 80);
	glVertex3f(-125,70,75);



	// BASE 2 CURVE


	glEnd();
glColor3f(0.23,0.40,0.23);
	glRotatef(90,1,0,0);
	glTranslatef(-120,125,-100);

	glutSolidCone(45,-40,50,50);
	glTranslatef(0,0,30);
	 glColor3f(0.93,0.93,0.93);
	glutSolidCone(10,-85,50,50);
	glTranslatef(-5,120,-330);
	 glColor3f(0.43,0.43,0.43);
	glutSolidCone(26,-35,50,50);

	glTranslatef(0,0,0);
	 glColor3f(0.93,0.93,0.93);
	glutSolidCone(5,-55,50,50);

	}

	void metro_bus_road()
{
	glTranslatef(500,45,0);
	glColor3f(0.22,0.22,0.22);
	glBegin(GL_TRIANGLES);
	//Road 1
	glVertex3f(0,0,60);
	glVertex3f(0,0,125);
	glVertex3f(-1940,0,125);

	glVertex3f(-1940,0,125);
	glVertex3f(0,0,60);
	glVertex3f(-1940,0,60);
	//Road 2

	glVertex3f(0,0,245);
	glVertex3f(0,0,185);
	glVertex3f(-1940,0,185);

	glVertex3f(-1940,0,185);
	glVertex3f(0,0,245);
	glVertex3f(-1940,0,245);

	glEnd();
}
void metro_bus()
{
	glTranslatef(0,47.3,0);
	glColor3f(0.34,0.34,0.34);
	glBegin(GL_TRIANGLES);
	//BASE
	glVertex3f(0,0,0);
	glVertex3f(0,0,200);
	glVertex3f(-40,0,200);

	glVertex3f(-40,0,200);
	glVertex3f(0,0,0);
	glVertex3f(-40,0,0);
	//roof
	glColor3f(0.7,0.4,0.4);
	glVertex3f(0,25,0);
	glVertex3f(0,25,200);
	glVertex3f(-40,25,200);

	glVertex3f(-40,25,200);
	glVertex3f(0,25,0);
	glVertex3f(-40,25,0);

	//FORWARD PART FRONT
	//F1
	glVertex3f(0,20,200);
	glVertex3f(0,25,200);
	glVertex3f(-40,25,200);

	glVertex3f(-40,25,200);
	glVertex3f(0,20,200);
	glVertex3f(-40,20,200);
	//F2
	glVertex3f(0,0,200);
	glVertex3f(0,5,200);
	glVertex3f(-40,5,200);

	glVertex3f(-40,5,200);
	glVertex3f(0,0,200);
	glVertex3f(-40,0,200);
	//fpillar

	glVertex3f(-20,0,200);
	glVertex3f(-20,25,200);
	glVertex3f(-22,25,200);

	glVertex3f(-22,25,200);
	glVertex3f(-20,0,200);
	glVertex3f(-22,0,200);
		//BACKWARD PART FRONT
	//F1
	glVertex3f(0,20,0);
	glVertex3f(0,25,0);
	glVertex3f(-40,25,0);

	glVertex3f(-40,25,0);
	glVertex3f(0,20,0);
	glVertex3f(-40,20,0);
	//F2
	glVertex3f(0,0,0);
	glVertex3f(0,10,0);
	glVertex3f(-40,10,0);

	glVertex3f(-40,10,0);
	glVertex3f(0,0,0);
	glVertex3f(-40,0,0);
	//bpillar

	glVertex3f(-20,0,0);
	glVertex3f(-20,25,0);
	glVertex3f(-22,25,0);
	glVertex3f(-22,25,0);
	glVertex3f(-20,0,0);
	glVertex3f(-22,0,0);
//roof below wall

	glColor3f(0.8,0.4,0.4);
	glVertex3f(-40,25,0);
	glVertex3f(-40,25,200);
	glVertex3f(-40,20,200);

	glVertex3f(-40,20,200);
	glVertex3f(-40,25,0);
	glVertex3f(-40,20,0);
	//Pillars
	//p1
	glColor3f(0.6,0.3,0.3);
	glVertex3f(-40,20,0);
	glVertex3f(-40,20,2);
	glVertex3f(-40,5,2);

	glVertex3f(-40,5,2);
	glVertex3f(-40,20,0);
	glVertex3f(-40,5,0);

		//p2
	glColor3f(0.6,0.3,0.3);
	glVertex3f(-40,20,20);
	glVertex3f(-40,20,22);
	glVertex3f(-40,5,22);

	glVertex3f(-40,5,22);
	glVertex3f(-40,20,20);
	glVertex3f(-40,5,20);
	//p3

	glVertex3f(-40,20,40);
	glVertex3f(-40,20,42);
	glVertex3f(-40,5,42);

	glVertex3f(-40,5,42);
	glVertex3f(-40,20,40);
	glVertex3f(-40,5,40);
	//p4

	glVertex3f(-40,20,60);
	glVertex3f(-40,20,62);
	glVertex3f(-40,5,62);

	glVertex3f(-40,5,62);
	glVertex3f(-40,20,60);
	glVertex3f(-40,5,60);
	//p5

	glVertex3f(-40,20,80);
	glVertex3f(-40,20,78);
	glVertex3f(-40,5,78);

	glVertex3f(-40,5,78);
	glVertex3f(-40,20,80);
	glVertex3f(-40,5,80);
		//p6

	glVertex3f(-40,20,90);
	glVertex3f(-40,20,92);
	glVertex3f(-40,5,92);

	glVertex3f(-40,5,92);
	glVertex3f(-40,20,90);
	glVertex3f(-40,5,90);
	//p7

	glVertex3f(-40,20,140);
	glVertex3f(-40,20,138);
	glVertex3f(-40,5,138);

	glVertex3f(-40,5,138);
	glVertex3f(-40,20,140);
	glVertex3f(-40,5,140);
	//p8

	glVertex3f(-40,20,150);
	glVertex3f(-40,20,152);
	glVertex3f(-40,5,152);

	glVertex3f(-40,5,152);
	glVertex3f(-40,20,150);
	glVertex3f(-40,5,150);

	//p9

	glVertex3f(-40,20,170);
	glVertex3f(-40,20,168);
	glVertex3f(-40,5,168);

	glVertex3f(-40,5,168);
	glVertex3f(-40,20,170);
	glVertex3f(-40,5,170);
	//p10

	glVertex3f(-40,20,180);
	glVertex3f(-40,20,182);
	glVertex3f(-40,5,182);

	glVertex3f(-40,5,182);
	glVertex3f(-40,20,180);
	glVertex3f(-40,5,180);
		//p11

	glVertex3f(-40,20,200);
	glVertex3f(-40,20,198);
	glVertex3f(-40,5,198);

	glVertex3f(-40,5,198);
	glVertex3f(-40,20,200);
	glVertex3f(-40,5,200);
	//2
	glColor3f(0.8,0.4,0.4);
	glVertex3f(-40,5,0);
	glVertex3f(-40,5,80);
	glVertex3f(-40,0,80);

	glVertex3f(-40,0,80);
	glVertex3f(-40,5,0);
	glVertex3f(-40,0,0);

	//3


	glVertex3f(-40,5,140);
	glVertex3f(-40,5,90);
	glVertex3f(-40,0,90);

	glVertex3f(-40,0,90);
	glVertex3f(-40,5,140);
	glVertex3f(-40,0,140);
	//3 b
	glColor3f(0.4,0.4,0.4);

	glVertex3f(-40.1,25,130);
	glVertex3f(-40.1,25,100);
	glVertex3f(-40.1,0,100);

	glVertex3f(-40.1,0,100);
	glVertex3f(-40.1,25,130);
	glVertex3f(-40.1,0,130);
	glColor3f(0.8,0.4,0.4);
	//4


	glVertex3f(-40,5,170);
	glVertex3f(-40,5,150);
	glVertex3f(-40,0,150);

	glVertex3f(-40,0,150);
	glVertex3f(-40,5,170);
	glVertex3f(-40,0,170);
	//5


	glVertex3f(-40,5,180);
	glVertex3f(-40,5,200);
	glVertex3f(-40,0,200);

	glVertex3f(-40,0,200);
	glVertex3f(-40,5,180);
	glVertex3f(-40,0,180);
	//MIRROR RIGHT WALL AND STUFF
	//roof below wall

	glColor3f(0.8,0.4,0.4);
	glVertex3f(0,25,0);
	glVertex3f(0,25,200);
	glVertex3f(0,20,200);

	glVertex3f(0,20,200);
	glVertex3f(0,25,0);
	glVertex3f(0,20,0);
	//Pillars
	//p1
	glColor3f(0.6,0.3,0.3);
	glVertex3f(0,20,0);
	glVertex3f(0,20,2);
	glVertex3f(0,5,2);

	glVertex3f(0,5,2);
	glVertex3f(0,20,0);
	glVertex3f(0,5,0);

		//p2
	glColor3f(0.6,0.3,0.3);
	glVertex3f(0,20,20);
	glVertex3f(0,20,22);
	glVertex3f(0,5,22);

	glVertex3f(0,5,22);
	glVertex3f(0,20,20);
	glVertex3f(0,5,20);
	//p3

	glVertex3f(0,20,40);
	glVertex3f(0,20,42);
	glVertex3f(0,5,42);

	glVertex3f(0,5,42);
	glVertex3f(0,20,40);
	glVertex3f(0,5,40);
	//p4

	glVertex3f(0,20,60);
	glVertex3f(0,20,62);
	glVertex3f(0,5,62);

	glVertex3f(0,5,62);
	glVertex3f(0,20,60);
	glVertex3f(0,5,60);
	//p5

	glVertex3f(0,20,80);
	glVertex3f(0,20,78);
	glVertex3f(0,5,78);

	glVertex3f(0,5,78);
	glVertex3f(0,20,80);
	glVertex3f(0,5,80);
		//p6

	glVertex3f(0,20,90);
	glVertex3f(0,20,92);
	glVertex3f(0,5,92);

	glVertex3f(0,5,92);
	glVertex3f(0,20,90);
	glVertex3f(0,5,90);
	//p7

	glVertex3f(0,20,140);
	glVertex3f(0,20,138);
	glVertex3f(0,5,138);

	glVertex3f(0,5,138);
	glVertex3f(0,20,140);
	glVertex3f(0,5,140);
	//p8

	glVertex3f(0,20,150);
	glVertex3f(0,20,152);
	glVertex3f(0,5,152);

	glVertex3f(0,5,152);
	glVertex3f(0,20,150);
	glVertex3f(0,5,150);

	//p9

	glVertex3f(0,20,170);
	glVertex3f(0,20,168);
	glVertex3f(0,5,168);

	glVertex3f(0,5,168);
	glVertex3f(0,20,170);
	glVertex3f(0,5,170);
	//p10

	glVertex3f(0,20,180);
	glVertex3f(0,20,182);
	glVertex3f(0,5,182);

	glVertex3f(0,5,182);
	glVertex3f(0,20,180);
	glVertex3f(0,5,180);
		//p11

	glVertex3f(0,20,200);
	glVertex3f(0,20,198);
	glVertex3f(0,5,198);

	glVertex3f(0,5,198);
	glVertex3f(0,20,200);
	glVertex3f(0,5,200);
	//2
	glColor3f(0.8,0.4,0.4);
	glVertex3f(0,5,0);
	glVertex3f(0,5,80);
	glVertex3f(0,0,80);

	glVertex3f(0,0,80);
	glVertex3f(0,5,0);
	glVertex3f(0,0,0);

	//3


	glVertex3f(0,5,140);
	glVertex3f(0,5,90);
	glVertex3f(0,0,90);

	glVertex3f(0,0,90);
	glVertex3f(0,5,140);
	glVertex3f(0,0,140);
	//3 b
	glColor3f(0.4,0.4,0.4);

	glVertex3f(0.1,25,130);
	glVertex3f(0.1,25,100);
	glVertex3f(0.1,0,100);

	glVertex3f(0.1,0,100);
	glVertex3f(0.1,25,130);
	glVertex3f(0.1,0,130);
	glColor3f(0.8,0.4,0.4);
	//4


	glVertex3f(0,5,170);
	glVertex3f(0,5,150);
	glVertex3f(0,0,150);

	glVertex3f(0,0,150);
	glVertex3f(0,5,170);
	glVertex3f(0,0,170);
	//5


	glVertex3f(0,5,180);
	glVertex3f(0,5,200);
	glVertex3f(0,0,200);

	glVertex3f(0,0,200);
	glVertex3f(0,5,180);
	glVertex3f(0,0,180);
	glEnd();
	glColor3f(0,0,0);
	glTranslatef(0,1,10);

	glutSolidSphere(3.4,40,40);
	glTranslatef(0,0,50);

	glutSolidSphere(3.4,40,40);
		glTranslatef(0,0,100);

	glutSolidSphere(3.4,40,40);
	glTranslatef(0,0,30);

	glutSolidSphere(3.4,40,40);
	glTranslatef(-40,0,0);

	glutSolidSphere(3.4,40,40);
	glTranslatef(0,0,-30);

	glutSolidSphere(3.4,40,40);
	glTranslatef(0,0,-100);

	glutSolidSphere(3.4,40,40);
		glTranslatef(0,0,-50);

	glutSolidSphere(3.4,40,40);
}

void renderScene()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);





	glLoadIdentity();
		gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up
	glTranslatef(0,0,0);
//land
	glColor3f(0.84,0.84,0.84);

	glBegin(GL_TRIANGLES);
	glVertex3f(-100,-1.0,0.0);
	glVertex3f(100,-1.0,0);
	glVertex3f(100,-1.0,-100.0);

	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex3f(-100,-1.0,0.0);
	glVertex3f(100,-1.0,-100.0);
	glVertex3f(-100,-1.0,-100.0);

	glEnd();
	//grass
	glTranslatef(0,-1,0);
	glColor3f(0.3,0.5,0.3);
	glBegin(GL_TRIANGLES);
	glVertex3f(-3500,-1.05,2500);
	glVertex3f(2500,-1.05,2500);
	glVertex3f(2500,-1.05,-3500.0);

	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex3f(-3500,-1.05,2500);
	glVertex3f(2500,-1.05,-3500);
	glVertex3f(-3500,-1.05,-3500);

	glEnd();
	glTranslatef(0,-1,0);

	grass();
	glTranslatef(50,-2.0,-55);
	glScalef(2,2,3.5);
		 glPushMatrix();
		 compund();

		 glPopMatrix();
		  glPushMatrix();
		  glTranslatef(-25,0,0);

		 compund(); glPopMatrix();
		  glPushMatrix();
		  glTranslatef(-30,0,-5);

		 watch();
		 glTranslatef(20,0,22);
		 watch2();
		 glPopMatrix();
		 glLoadIdentity();
		gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up

		 glTranslatef(0,-2.1,55);
		 glPushMatrix();
		 runway();

		 glPopMatrix();




		 	 glLoadIdentity();
		gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up

		 glTranslatef(-100,-0.8,-37);

		 glPushMatrix();
		 for(int loop=0;loop<=40;loop+=5)
		 {
			 glTranslatef(loop,0,0);
		 runway_strips();
		 }
		 glPopMatrix();
			 glLoadIdentity();
		gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up

		 glTranslatef(-100,-0.8,-28);



		 runway_long_strips();


		 glPopMatrix();

		 	 glLoadIdentity();
			 //MERA JAHAAAAAAAAAAAAAAAAAAAAAAAAAAAZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ
		if(comp_plane_view==7)
		{

			 if(plane_stat==2)
			 {
			  if(plane_angle>=0 )
			 {
				 plane_angle-=4;
			 }



			 }
			 if(plane_stat==1)
			 {
			  if(plane_angle<=0 )
			 {
				 plane_angle+=4;
			 }



			 }
			 if(go_forward>=0.5 && y>=3)
			 {

				 y+=plane_up_down;ly+=plane_up_down;

				 }
			float fraction = go_forward;
					x+=lx*fraction;z+=lz*fraction;
					glLoadIdentity();

		 glTranslatef(0,-1.9,-40);
		 glScaled(1.8,1.3,1.2);
		   glRotatef(180,0,1,0);
	 glRotatef(plane_angle,0,0,1);
		 glPushMatrix();
		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();
		}
		else
		{
			gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up
		glColor3f(1,1,0);
		 glTranslatef(70,2.9,-57);
		 glScaled(1.8,1.3,1.2);
		 glPushMatrix();
		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();
		}
		 //COMPUTER JF --------------------------
		    glLoadIdentity();

	  gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up
	  glTranslatef(0,0,0);



		 glTranslatef(70,2.6,-35);
		 glRotatef(-90,0,1,0);


		glTranslatef(comp_jf_x,comp_jf_y,comp_jf_z);
		if(comp_jf_z<=0)
		{
			move=1;
		}
		else if(comp_jf_z>=1600)
		{

			move=2;
		}
		if(move==1)
		{
			if(comp_plane_view==1)
			{

			 x=-comp_jf_z+75;
	 z=-34.0;
	    ly=comp_jf_y+4;
		 y=comp_jf_y+4;
			}


			comp_jf_z+=0.9;
			if(comp_jf_z>=80)
			{
			comp_jf_y+=0.09;
			}
			}
		else if(move==2)
		{


		if(comp_plane_view==1)
			{	x=-comp_jf_z+63;
	 z=-36.0;
	    ly=comp_jf_y+4;
		 y=comp_jf_y+4;

		}
			glRotatef(180,0,1,0);

			if(comp_jf_z>=80)
			{
			comp_jf_y-=0.09;
			comp_jf_z-=0.9;
			}
		else if(comp_jf_z<=80 && comp_jf_z>=20)
			{
				comp_jf_z-=0.9;
			}
			else if(comp_jf_z<=20)
			{

				comp_jf_z-=0.03;

			}
		}
		glScaled(1.8,1.3,1.2);
		 glPushMatrix();

		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();
		    	 glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up
				 glTranslatef(121,-2.28,-5);
				roads();

				 glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up
				 glTranslatef(-625,-6,-85);
				 glScaled(8,4,7);
				prade_ground();

				if(call_careem==1)
				{
					float fraction=careem_gear;
					x+=lx*fraction;z+=lz*fraction;
					glLoadIdentity();

				 glTranslatef(10,-3,-17);

				   glRotatef(180,0,1,0);


				 glPushMatrix();
				careem();
				glPopMatrix();
				 careem_x=x;careem_z=z;
				}

				else if(call_careem==4)
				{
					float fraction=careem_gear;
					x+=lx*fraction;z+=lz*fraction;
					glLoadIdentity();

				 glTranslatef(10,-2,-39);

				   glRotatef(180,0,1,0);


				 glPushMatrix();
				careem();
				glPopMatrix();
				 careem_x=x;careem_z=z;
				}
				else if(call_careem==2){
				 glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up


				 glTranslatef(careem_x,0,careem_z);
				 glPushMatrix();
				careem();
				glPopMatrix();
				}
				else{
				 glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up
				  glRotatef(180,0,1,0);
				 glTranslatef(-120,0.10,77);
				 glTranslatef(careem_x,0,careem_z);
				 glPushMatrix();
				careem();
				glPopMatrix();
				}


		 glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up
				 glTranslatef(1,0.28,55);
				metros();


		 glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up

		  glTranslatef(-241,0.28,-355);
		  masjid_e_nabvi();
		   glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up

		  glTranslatef(-41,0.28,105);
		  glRotatef(-90,0,1,0);
		  metro_distance_1+=0.81;
		  if(metro_distance_1>=0 && metro_distance_1 <=240)
		  {
		  metro_speed1+=0;
		  }
		  else if(metro_distance_1>=750 && metro_distance_1 <=990)
		  {
		  metro_speed1+=0;
		  }
		   else if(metro_distance_1>=1650 && metro_distance_1 <=1890)
		  {
		  metro_speed1+=0;
		  }
		   else if(metro_distance_1>=1900)
		  {
		  metro_speed1=0;
		  metro_distance_1=0;
		  }
		  else
		  {
			    metro_speed1+=0.81;
		  }
		   glTranslatef(0,0,metro_speed1);
		  metro_bus();
		  //bus 2

		   glLoadIdentity();
				 gluLookAt( x,y,z , //eyes set cam
		x+lx,ly,z+lz , // look
		0.0f,1.0f,0.0f); //rotate  ..up
if(comp_plane_view==5)
{
x=-metro_speed1-70;
z=85;
y=60;
ly=60;
}
else if(comp_plane_view==6)
{
x=metro_speed1-1270;
z=215;
y=60;
ly=60;
}


glTranslatef(-1400,0.28,190);
		  glRotatef(90,0,1,0);

		  glTranslatef(0,0,metro_speed1);
		  metro_bus();


		  glLoadIdentity();
		   gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up

		  glTranslatef(-1,0.28,-5);
		  metro_bus_road();
		  //AIRSHOWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW AIR SHOW AIR SHOW AIR SHOW
		if(air_show==1)
			{
				glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up
				 if(air_x<=3170)
				 {
					 air_x+=5;
				 }
				 else if(air_x>=3170)
				 {

					 air_x=-2521;
				 }
				 glTranslatef(-1221,192.28,-1145);
				 glRotatef(-90,0,1,0);

				 glScaled(3,3,3);
				  glTranslatef(0,0,air_x);
		 glPushMatrix();

		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();

		 glTranslatef(10,-10,10);
		  glPushMatrix();

		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();

		 glTranslatef(-20,0,0);
		  glPushMatrix();

		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();

		  glTranslatef(0,0,220);
		  glPushMatrix();

		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();
		 glTranslatef(0,0,-420);
		  glPushMatrix();

		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();
		}

		  //AIRSHOWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW AIR SHOW AIR SHOW AIR SHOW
		if(air_show==2)
			{
				glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up

				 glTranslatef(841,202.28,-1145);
				 glRotatef(-90,0,1,0);
				 air_distance+=4;
				 air_x2+=6;
			if(air_distance>=1000 && air_distance<=1800)
			{
				if(air_rotate<=180)
				{
				air_rotate+=4;
				}
			}
			else if(air_distance>=1800)
			{
				if(air_rotate<=360)
				{
				air_rotate+=4;
				}
			}



			glTranslatef(0,0,air_x2);
			glRotatef(air_rotate,0,0,1);
			glScaled(3,3,3);

		 glPushMatrix();

		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();

		}

		if(air_show==3)
			{
		glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up

				 glTranslatef(841,102.28,-1145);
				 glRotatef(-90,0,1,0);
				 air_distance+=4;

			if(air_distance>=1200)
			{
				if(air_rotate>=-90)
				{
				air_rotate-=0.5;
				 air_x2+=6;
				 air_y2+=3;
				}
				else
				{
				air_y2+=3;
				air_rotate2-=3;
				}
			}
			else
			{
				 air_x2+=6;
				 air_y2+=0;

			}

			glTranslatef(0,air_y2,air_x2);
			glRotatef(air_rotate,1,0,0);
			glRotatef(air_rotate2,0,0,1);
			glScaled(3,3,3);

		 glPushMatrix();

		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();

		}

		if(air_show==4)
			{
				glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up

				 glTranslatef(841,202.28,-1145);
				 glRotatef(-90,0,1,0);
				 air_distance+=4;
				 air_x2+=2;
			if(air_distance>=2500 && air_distance<=6200)
			{
				if(air_rotate>=-30)
				{
				air_rotate-=2;
				air_y2+=0.5;
				}
			}
			else if(air_distance>=6200)
			{
				if(air_rotate<=0)
				{
				air_rotate+=2;
				}
			}



			glTranslatef(0,air_y2,air_x2);
			glRotatef(air_rotate,1,0,0);
			glScaled(3,3,3);

		 glPushMatrix();

		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();

		}

		if(air_show==5)
			{
				glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f); //rotate  ..up
				 if(air_x<=2170)
				 {
					 air_x+=5;
				 }
				 else if(air_x>=2170)
				 {

					 air_x=-821;
				 }
				 if(air_x>=120 && air_x<=320)
				 {
					  if(air_rotate<=90)
					 {
					 air_rotate+=5;
					 }
				 }
				  if(air_x>=320 )
				 {
					  if(air_rotate>=0)
					 {
					 air_rotate-=5;
					 }
				 }
				 glTranslatef(-821,192.28,-1195);
				 glRotatef(-90,0,1,0);
				 glRotatef(air_rotate,0,0,1);
				 glScaled(3,3,3);
				  glTranslatef(0,0,air_x);
		 glPushMatrix();

		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();


		 //2
		glLoadIdentity();
				 gluLookAt( x,y,z, //eyes set cam
		x+lx,ly,z+lz, // look
		0.0f,1.0f,0.0f);
				 if(air_x3<=2170)
				 {
					 air_x3+=5;
				 }
				 else if(air_x3>=2170)
				 {

					 air_x3=-821;
				 }
				 if(air_x3>=-370 && air_x3<=-100)
				 {
					 if(air_rotate2<=90)
					 {
					 air_rotate2+=5;
					 }
					 }
				   if(air_x3>=-100)
				 {
					 if(air_rotate2>=0)
					 {
					 air_rotate2-=5;
					 }
					 }
				 glTranslatef(-821,192.28,-1145);
				 glRotatef(90,0,1,0);
				 glRotatef(air_rotate2,0,0,1);
				 glScaled(3,3,3);
				  glTranslatef(0,0,air_x3);
		 glPushMatrix();

		 jf17();
		 glPopMatrix();

		  glPushMatrix();
		 jf172();
		 glPopMatrix();
		}


		   glutSwapBuffers();
}

void reshape(int w,int h)
{
	glViewport(0,0,w,h);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(65.0f,(float)w/(float)h,0.1f,2400.0f);
	glMatrixMode(GL_MODELVIEW);
}
void keyboard(int key,int xx,int yy)
{
	float fraction;
	if(comp_plane_view!=7)
	{
	 fraction=4.6f;
	}
	else
	{
		fraction=0.6f;
	}
	switch(key)
	{
	case GLUT_KEY_LEFT:
		if(comp_plane_view==7)
	{ angle-=0.02f;
		}
		else if(call_careem==1 || call_careem==4)
	{ angle-=0.03f;
		}
		else
		{angle-=0.09f;

		}


		lx=sin(angle);
		lz=-cos(angle); break;
	case GLUT_KEY_RIGHT:
	if(comp_plane_view==7)
	{ angle+=0.02f;
		}
		else if(call_careem==1 || call_careem==4)
	{ angle+=0.03f;
		}
		else
		{angle+=0.09f;

		}
		lx=sin(angle);
		lz=-cos(angle);break;
	case GLUT_KEY_UP:
		x+=lx*fraction;z+=lz*fraction;break;
	case GLUT_KEY_DOWN:
		x-=lx*fraction;z-=lz*fraction;break;
		case GLUT_KEY_HOME:
		y-=0.1*fraction;z-=lz*fraction;break;
		case GLUT_KEY_END:
		y+=0.1*fraction;z+=lz*fraction;break;
	}
}
void keyboard1(unsigned char key1,int xx1,int yy1)
{

	switch(key1)
	{
	case 'r': dd+=1;break;
		case 't': bb+=1;break;
	}

	if(key1=='0')
		{
			comp_plane_view=1;
		}
	else if(key1=='x')
		{
			comp_plane_view=0;
			call_careem=2;
			y=2;ly=2;

		}
	else if(key1=='z')
		{
			comp_plane_view=0;
			call_careem=2;


		}

	else if(key1=='c')
		{
			call_careem=1;
			y=3;ly=3;

	}

	else if(key1=='v')
		{
			call_careem=4;
			y=3;ly=3;

	}
		else if(key1=='.')
		{
			careem_gear+=0.05;


	}
		else if(key1==',')
		{
			careem_gear-=0.05;

	}
		else if(key1=='m')
		{
			comp_plane_view=5;

	}
		else if(key1=='n')
		{
			comp_plane_view=6;

	}
		else if(key1=='a')
		{
			y+=1;ly+=1;

	}
			else if(key1=='z')
		{
			y-=1;ly-=1;

	}
		else if(key1=='9')
		{
			comp_plane_view=7;
			x=70;z=-57;y=3;ly=3;

	}
		else if(key1=='y')
		{
			go_forward+=0.03;

		}
			else if(key1=='h')
		{
			go_forward-=0.01;

		}
		else if(key1=='g')
		{plane_stat=2;
			angle-=0.09f;
		lx=sin(angle);
		lz=-cos(angle);
		if(plane_angle>=-40){
		plane_angle-=4;
	}
	else
	{
		plane_angle-=0;
	}

		}
			else if(key1=='j')
		{
			plane_stat=1;
			angle+=0.09f;
		lx=sin(angle);
		lz=-cos(angle);
	if(plane_angle<=40){
		plane_angle+=4;
	}
	else
	{
		plane_angle+=0;
	}
		}

		if(key1=='u')
		{

			plane_up_down=0.4;

			}
		else if(key1=='t')
		{

			plane_up_down=-0.4;

		}
		else if(key1!='t')
		{
			plane_up_down=0;
		}
		if(key1=='1')
		{

			air_show=0;
			air_rotate=0;
				air_rotate2=0;
				 air_x2=0;
				 air_y2=0;air_distance=0;
				 air_x=-2521,air_x2=0,air_y2=0,air_rotate=0,air_rotate2=0,air_distance=0,air_x3=-3021;
			}
		else if(key1=='2')
		{

			air_show=1;

			}
			 else if(key1=='3')
		{

			air_show=2;

			}
		 else if(key1=='4')
		{

			air_show=3;

			}
			  else if(key1=='5')
		{

			air_show=4;

			}
		 else if(key1=='6')
		{

			air_show=5;

			}

			  if(key1=='+')
			  {
				  y+=2;ly+=2;
			  }
			  else if(key1=='-')
			  {
				  y-=2;ly-=2;
			  }

}
void mouse(int but,int state,int xxx,int yyy)
{
	switch(but)
	{
	case 3: y+=1;ly+=1;break;
			case 4: y-=1;ly-=1;break;
	}
}

/*#include<bits/stdc++.h>


using namespace std;
/*typedef bool (*comp)(int,int);
bool compare(int a,int b){
return (a>b);
}

int main()
{
  /* priority_queue<int,vector<int>,comp > pq(compare);

     int n=5;

     while(n)
     {
         int a;
         cin>>a;
         pq.push(a);
         --n;
     }
     n=5;
     while(n)
     {
         cout<<pq.top();
         pq.pop();
         --n;
     }

     priority_queue<int>pq(compare);
     int n;
     cin>>n;

     while(n){
            int a;
        cin>>a;
     pq.push(a);
     --n;
     }

      n=5;
     while(n)
     {
         cout<<pq.top();
         pq.pop();
         --n;
     }
}


%{

#include<stdio.h>

int count=0;

%}

op [+-]

letter [a-zA-Z]

digitt [0-9]

id {letter}*|({letter}{digitt})+

notid ({digitt}{letter})+

%%



("int")|("float")|("char")|("case")|("default")| ("if")|("for")|("printf")|("scanf") {printf("%s is a keyword\n", yytext);}

{id} {printf("%s is an identifier\n", yytext); count++;}

{notid} {printf("%s is not an identifier\n", yytext);}

%%

int main()

{

FILE *fp;

char file[10];

printf("\nEnter the filename: ");

scanf("%s", file);

fp=fopen(file,"r");

yyin=fp;

yylex();

printf("Total identifiers are: %d\n", count);

return 0;

}
*/

//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
void keyw(char *p);
int i=0,id=0,kw=0,num=0,op=0;
char keys[32][10]={"auto","break","case","char","const","continue","default",
"do","double","else","enum","extern","float","for","goto",
"if","int","long","register","return","short","signed",
"sizeof","static","struct","switch","typedef","union",
"unsigned","void","volatile","while"};
main()


    {
    	char ch;
    	char str[25];
    	char seps[25]="\t\n,;(){}[]#\"<>";
    	char oper[20]="!%^&*-+=~|.<>/?";
    	int j;
    	char fname[50];
    	FILE *f1;

    printf("enter file path (drive:\\folder_name\\filename)\n");
    scanf("%s",fname);
    f1 = fopen(fname,"r");

    	if(f1==NULL)


        	{
        	 printf("file not found");
        	 exit(0);
        	}
        	while((ch=fgetc(f1))!=EOF)


            	{
            for(j=0;j<=14;j++)


                {
                if(ch==oper[j])


                    {

                    op++;
                    str[i]='\0';
                    keyw(str);
                }
            }
            for(j=0;j<=14;j++)


                {
                if(i==-1)
                break;
                if(ch==seps[j])


                    {
                    if(ch=='#')


                        {
                        while(ch!='>')


                            {
                            printf("%c",ch);
                            ch=fgetc(f1);
                        }

                        i=-1;
                        break;
                    }
                    if(ch=='"')


                        {
                        do


                            {
                            ch=fgetc(f1);
                            printf("%c",ch);
                        }while(ch!='"');

                        i=-1;
                        break;
                    }
                    str[i]='\0';
                    keyw(str);
                }
            }
            if(i!=-1)


                {
                str[i]=ch;
                i++;
            }
            else
            i=0;
            	}
            printf("Keywords: %d\nIdentifiers: %d\nconstant: %d\n",kw,id,num);

        }
        void keyw(char *p)


            {
            int k,flag=0;
            for(k=0;k<=31;k++)


                {
                if(strcmp(keys[k],p)==0)


                    {
                    printf("%s is a keyword\n",p);
                    kw++;
                    flag=1;
                    break;
                }
            }
            if(flag==0)


                {
                if(isdigit(p[0]))


                    {
                    printf("%s is a constant\n",p);
                    num++;
                }
                else


                    {

                    if(p[0]!='\0')


                        {
                        printf("%s is an identifier\n",p);
                        id++;
                    }
                }
            }
            i=-1;
        }

*/
