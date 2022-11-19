//memanggil library
//#include <stdlib.h>
//#include <string.h>
//#include <stdarg.h>
//#include <glut.h>
//
//deklarasi variable
//float z_pos = -10.0f;
//float rot = 0.0f;
//
//membuat method resize
//void resize(int width, int height)
//{
//	glviewport(0, 0, width, height);
//	glmatrixmode(gl_projection);
//	glloadidentity();
//	gluperspective(45.0, (float)width / (float)height, 1.0, 300.0);
//	glmatrixmode(gl_modelview);
//	glloadidentity();
//}
//
//membuat method timeout
//void mytimeout(int id)
//{
//	 called if timer event
//	 ...advance the state of animation incrementally...
//	rot += 1;
//	glutpostredisplay(); // request redisplay
//	gluttimerfunc(100, mytimeout, 0); // request next timer event
//}
//
//membuat method keyboard
//void mykeyboard(unsigned char key, int x, int y)
//{
//	if ((key == '<') || (key == ',')) z_pos -= 0.1f;
//	if ((key == '>') || (key == '.')) z_pos += 0.1f;
//}
//
//membuat method display
//void mydisplay(void)
//{
//	glclear(gl_color_buffer_bit | gl_depth_buffer_bit);
//	glloadidentity();
//	gltranslatef(0.0, 0.0f, z_pos);
//	glrotatef(rot, 0, 1, 0);
//	glbegin(gl_quads);
//
//	 front face, red
//	glcolor3f(1.0, 0.0, 0.0);
//	glvertex3f(-1.0f, -1.0f, 1.0f);
//	glvertex3f(1.0f, -1.0f, 1.0f);
//	glvertex3f(1.0f, 1.0f, 1.0f);
//	glvertex3f(-1.0f, 1.0f, 1.0f);
//
//	 back face, green
//	glcolor3f(0.0, 1.0, 0.0);
//	glvertex3f(1.0f, -1.0f, -1.0f);
//	glvertex3f(1.0f, 1.0f, -1.0f);
//	glvertex3f(-1.0f, 1.0f, -1.0f);
//	glvertex3f(-1.0f, -1.0f, -1.0f);
//
//	 top face, blue
//	glcolor3f(0.0, 0.0, 1.0);
//	glvertex3f(-1.0f, 1.0f, -1.0f);
//	glvertex3f(-1.0f, 1.0f, 1.0f);
//	glvertex3f(1.0f, 1.0f, 1.0f);
//	glvertex3f(1.0f, 1.0f, -1.0f);
//
//	 bottom face, yellow
//	glcolor3f(1.0, 1.0, 0.0);
//	glvertex3f(-1.0f, -1.0f, -1.0f);
//	glvertex3f(1.0f, -1.0f, -1.0f);
//	glvertex3f(1.0f, -1.0f, 1.0f);
//	glvertex3f(-1.0f, -1.0f, 1.0f);
//
//	 right face, cyan
//	glcolor3f(0.0, 1.0, 1.0);
//	glvertex3f(1.0f, -1.0f, -1.0f);
//	glvertex3f(1.0f, 1.0f, -1.0f);
//	glvertex3f(1.0f, 1.0f, 1.0f);
//	glvertex3f(1.0f, -1.0f, 1.0f);
//
//	 left face, magenta
//	glcolor3f(1.0, 0.0, 1.0);
//	glvertex3f(-1.0f, -1.0f, -1.0f);
//	glvertex3f(-1.0f, -1.0f, 1.0f);
//	glvertex3f(-1.0f, 1.0f, 1.0f);
//	glvertex3f(-1.0f, 1.0f, -1.0f);
//
//	glend();
//	glflush();
//	glutswapbuffers();
//}
//
//membuat method inisialisasi
//void init()
//{
//	glenable(gl_depth_test);
//	glclearcolor(0.0, 0.0, 0.0, 1.0); // a background clear color
//	glmatrixmode(gl_projection);
//	glloadidentity();
//	gluperspective(45, (gldouble)500.0 / (gldouble)500.0, 0, 100);
//	glmatrixmode(gl_modelview);
//	return;
//}
//
//program utama
//int main(int argc, char** argv)
//{
//	glutinit(&argc, argv);
//	glutinitdisplaymode( glut_double /*| glut_depth*/ );
//	glutinitdisplaymode(glut_double | glut_depth);
//	glutinitwindowsize(500, 500);
//	glutinitwindowposition(0, 0);
//	glutcreatewindow("3d");
//	 callbacks
//	glutdisplayfunc(mydisplay);
//	glutkeyboardfunc(mykeyboard);
//	gluttimerfunc(100, mytimeout, 0);
//	glutreshapefunc(resize);
//	init();
//	glutmainloop();
//	return 0;
//}


//#include<stdlib.h>
//#include<glut.h>
//float w = 480, h = 480;
//float sudut = 0, sx = 0, sy = 0, sz = 0;
//void cube(){
//	glcolor3d(0, 0, 1);
//	glutwirecube(10); // fungsi disamping adalah bentuk pendeklarasian fungsi “cube”
//}
//void display(){
//	glclear(gl_color_buffer_bit | gl_depth_buffer_bit);
//	glloadidentity();
//	gltranslatef(0, 0, -40);
//	glrotatef(sudut, sx, sy, sz);
//	cube();
//	glutswapbuffers();
//}
//void resize(int w1, int h1){
//	glviewport(0, 0, w1, h1);
//	glmatrixmode(gl_projection);
//	glloadidentity();
//	gluperspective(45.0, (float)w1 / (float)h1,
//		1.0, 300.0);
//	glmatrixmode(gl_modelview);
//	glloadidentity();
//}
//void init(){
//	glclearcolor(0.0, 0.0, 0.0, 1.0);
//	glenable(gl_depth_test);
//	glmatrixmode(gl_projection);
//	glloadidentity();
//	gluperspective(45., (gldouble)w / (gldouble)h,
//		1., 300.);
//	glmatrixmode(gl_modelview);
//}
//void mykeyboard(unsigned char key, int x, int y){
//	if (key == 'x'){
//		sx = 1;
//		sy = 0;
//		sz = 0;
//		sudut += 10;
//	}
//	else if (key == 'y'){
//		sx = 0;
//		sy = 1;
//		sz = 0;
//		sudut += 10;
//	}
//	else if (key == 'z'){
//		sx = 0;
//		sy = 0;
//		sz = 1;
//	}
//}
//void update(int value){
//	glutpostredisplay();
//	gluttimerfunc(50, update, 0);
//}
//void main(int argc, char **argv){
//	glutinit(&argc, argv);
//	glutinitdisplaymode(glut_double | glut_depth | glut_rgba);
//	glutinitwindowposition(100, 100);
//	glutinitwindowsize(w, h);
//	glutcreatewindow("cube");
//	glutdisplayfunc(display);
//	glutreshapefunc(resize);
//	init();
//	gluttimerfunc(50, update, 0);
//	glutkeyboardfunc(mykeyboard);
//	glutmainloop();
//}

//#include<stdlib.h>
//#include<glut.h>
//float w = 480, h = 480;
//float sudut = 0, sx = 0, sy = 0, sz = 0, z = -320;
//void sphere(){
//	glColor3d(1, 1, 1);
//	glutWireSphere(100, 150, 150); //fungsi disamping adalah bentuk pendeklarasian fungsi “Sphere”
//}
//void display(){
//	glClear(GL_COLOR_BUFFER_BIT |
//		GL_DEPTH_BUFFER_BIT);
//	glLoadIdentity();
//	glTranslatef(0, 0, z);
//	glRotatef(sudut, sx, sy, sz);
//	sphere();
//	glutSwapBuffers();
//}
//void resize(int w1, int h1){
//	glViewport(0, 0, w1, h1);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45.0, (float)w1 / (float)h1,
//		1.0, 300.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//void init(){
//	glClearColor(0.0, 0.0, 0.0, 1.0);
//	glEnable(GL_DEPTH_TEST);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45., (GLdouble)w / (GLdouble)h,
//		1., 300.);
//	glMatrixMode(GL_MODELVIEW);
//}
//void myKeyboard(unsigned char key, int x, int y){
//	if (key == 'y'){
//		sy = 1;
//		sudut += 10;
//	}
//}
//void update(int value){
//	glutPostRedisplay();
//	glutTimerFunc(50, update, 0);
//}
//void main(int argc, char **argv){
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE |
//		GLUT_DEPTH | GLUT_RGBA);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(w, h);
//	glutCreateWindow("WireSphere");
//	glutDisplayFunc(display);
//	glutReshapeFunc(resize);
//	init();
//	glutTimerFunc(50, update, 0);
//	glutKeyboardFunc(myKeyboard);
//	glutMainLoop();
//}

//#include<stdlib.h>
//#include<glut.h>
//float w = 480, h = 480;
//float sudut = 0, sx = 0, sy = 0, sz = 0, zz = -70;
//int t = 20;
//void WireCone(){
//	glColor3d(0, 1, 1);
//	glutWireCone(10, t, 50, 50); // fungsi disamping adalah bentuk pendeklarasian fungsi “Cone”
//}
//void display(){
//	glClear(GL_COLOR_BUFFER_BIT |
//		GL_DEPTH_BUFFER_BIT);
//	glLoadIdentity();
//	glTranslatef(0, 0, zz);
//	glRotatef(sudut, sx, sy, sz);
//	WireCone();
//	glutSwapBuffers();
//}
//void resize(int w1, int h1){
//	glViewport(0, 0, w1, h1);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45.0, (float)w1 / (float)h1,
//		1.0, 300.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//void init(){
//	glClearColor(0.0, 0.0, 0.0, 1.0);
//	glEnable(GL_DEPTH_TEST);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45., (GLdouble)w / (GLdouble)h,
//		1., 300.);
//	glMatrixMode(GL_MODELVIEW);
//}
//void myKeyboard(unsigned char key, int x, int y){
//	if (key == 'x'){
//		sx = 1;
//		sy = 0;
//		sz = 0;
//		sudut += 10;
//	}
//	else if (key == 'y'){
//		sx = 0;
//		sy = 1;
//		sz = 0;
//		sudut += 10;
//	}
//	else if (key == 'z'){
//		sx = 0;
//		sy = 0;
//		sz = 1;
//	}
//}
//void update(int value){
//	glutPostRedisplay();
//	glutTimerFunc(50, update, 0);
//}
//void main(int argc, char **argv){
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE |
//		GLUT_DEPTH | GLUT_RGBA);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(w, h);
//	glutCreateWindow("Wire Cone");
//	glutDisplayFunc(display);
//	glutReshapeFunc(resize);
//	init();
//	glutTimerFunc(50, update, 0);
//	glutKeyboardFunc(myKeyboard);
//	glutMainLoop();
//}

//#include<stdlib.h>
//#include<glut.h>
//float w = 480, h = 480;
//float
//sudut = 0, sx = 0, sy = 0, sz = 0, dalam = 20, luar = 50, sides = 50, rings = 50;
//void torus(){
//	glColor3d(0, 1, 1);
//	glutWireTorus(dalam, luar, sides, rings); //fungsi disamping adalah bentuk pendeklarasian fungsi “Torus”
//}
//void display(){
//	glClear(GL_COLOR_BUFFER_BIT |
//		GL_DEPTH_BUFFER_BIT);
//	glLoadIdentity();
//	glTranslatef(0, 0, -200);
//	glRotatef(sudut, sx, sy, sz);
//	torus();
//	glutSwapBuffers();
//}
//void resize(int w1, int h1){
//	glViewport(0, 0, w1, h1);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45.0, (float)w1 / (float)h1,
//		1.0, 300.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//void init(){
//	glClearColor(0.0, 0.0, 0.0, 1.0);
//	glEnable(GL_DEPTH_TEST);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45., (GLdouble)w / (GLdouble)h,
//		1., 300.);
//	glMatrixMode(GL_MODELVIEW);
//}
//void myKeyboard(unsigned char key, int x, int y){
//	if (key == 'x'){
//		sx = 1;
//		sy = 0;
//		sz = 0;
//		sudut += 10;
//	}
//	else if (key == 'y'){
//		sx = 0;
//		sy = 1;
//		sz = 0;
//		sudut += 10;
//	}
//	else if (key == 'z'){
//		sx = 0;
//		sy = 0;
//		sz = 1;
//		sudut += 10;
//	}
//}
//void update(int value){
//	glutPostRedisplay();
//	glutTimerFunc(50, update, 0);
//}
//void main(int argc, char **argv){
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE |
//		GLUT_DEPTH | GLUT_RGBA);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(w, h);
//	glutCreateWindow("Torus");
//	glutDisplayFunc(display);
//	glutReshapeFunc(resize);
//	init();
//	glutTimerFunc(50, update, 0);
//	glutKeyboardFunc(myKeyboard);
//	glutMainLoop();
//}

//#include<stdlib.h>
//#include<glut.h>
//float w = 480, h = 480;
//float sudut = 0, sx = 0, sy = 0, sz = 0, t = -100, tepot = 10;
//void teapot(){
//	glColor3d(1, 1, 1);
//	glutWireTeapot(tepot); // fungsi disamping adalah bentuk pendeklarasian fungsi “Teapot”
//}
//void display(){
//	glClear(GL_COLOR_BUFFER_BIT |
//		GL_DEPTH_BUFFER_BIT);
//	glLoadIdentity();
//	glTranslatef(0, 0, t);
//	glRotatef(sudut, sx, sy, sz);
//	teapot();
//	glutSwapBuffers();
//}
//void resize(int w1, int h1){
//	glViewport(0, 0, w1, h1);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45.0, (float)w1 / (float)h1,
//		1.0, 300.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//void init(){
//	glClearColor(0.0, 0.0, 0.0, 1.0);
//	glEnable(GL_DEPTH_TEST);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45., (GLdouble)w / (GLdouble)h,
//		1., 300.);
//	glMatrixMode(GL_MODELVIEW);
//}
//void myKeyboard(unsigned char key, int x, int y){
//	if (key == 'x'){
//		sx = 1;
//		sy = 0;
//		sz = 0;
//		sudut += 10;
//	}
//	else if (key == 'y'){
//		sx = 0;
//		sy = 1;
//		sz = 0;
//		sudut += 10;
//	}
//	else if (key == 'z'){
//		sx = 0;
//		sy = 0;
//		sz = 1;
//		sudut += 10;
//	}
//}
//void mySpecialKeyboard(int key, int x, int y){
//	switch (key){
//	case GLUT_KEY_UP:
//		tepot += 1;
//		break;
//	case GLUT_KEY_DOWN:
//		tepot -= 1;
//		break;
//	}
//}
//void update(int value){
//	glutPostRedisplay();
//	glutTimerFunc(50, update, 0);
//}
//void main(int argc, char **argv){
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE |
//		GLUT_DEPTH | GLUT_RGBA);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(w, h);
//	glutCreateWindow("Teapot");
//	glutDisplayFunc(display);
//	glutReshapeFunc(resize);
//	init();
//	glutTimerFunc(50, update, 0);
//	glutKeyboardFunc(myKeyboard);
//	glutMainLoop();
//}


//#include<stdlib.h>
//#include<glut.h>
//float w = 480, h = 480;
//float sudut = 0, sx = 0, sy = 0, sz = 0, t = -7;
//void wireDode(){
//	glColor3d(0, 1, 0);
//	glutWireDodecahedron(); // fungsi disamping adalah bentuk pendeklarasian fungsi “Dode”
//}
//void display(){
//	glClear(GL_COLOR_BUFFER_BIT |
//		GL_DEPTH_BUFFER_BIT);
//	glLoadIdentity();
//	glTranslatef(0, 0, t);
//	glRotatef(sudut, sx, sy, sz);
//	wireDode();
//	glutSwapBuffers();
//}
//void resize(int w1, int h1){
//	glViewport(0, 0, w1, h1);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45.0, (float)w1 / (float)h1,
//		1.0, 300.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//void init(){
//	glClearColor(0.0, 0.0, 0.0, 1.0);
//	glEnable(GL_DEPTH_TEST);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(45., (GLdouble)w / (GLdouble)h,
//		1., 300.);
//	glMatrixMode(GL_MODELVIEW);
//}
//void myKeyboard(unsigned char key, int x, int y){
//	if (key == 'x'){
//		sx = 1;
//		sy = 0;
//		sz = 0;
//		sudut += 10;
//	}
//	else if (key == 'y'){
//		sx = 0;
//		sy = 1;
//		sz = 0;
//		sudut += 10;
//	}
//	else if (key == 'z'){
//		sx = 0;
//		sy = 0;
//		sz = 1;
//		sudut += 10;
//	}
//}
//void update(int value){
//	glutPostRedisplay();
//	glutTimerFunc(50, update, 0);
//}
//void main(int argc, char **argv){
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE |
//		GLUT_DEPTH | GLUT_RGBA);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(w, h);
//	glutCreateWindow("Dose");
//	glutDisplayFunc(display);
//	glutReshapeFunc(resize);
//	init();
//	glutTimerFunc(50, update, 0);
//	glutKeyboardFunc(myKeyboard);
//	glutMainLoop();
//}
