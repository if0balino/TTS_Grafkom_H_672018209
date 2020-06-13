#include <stdio.h>
#include <GL/freeglut.h>
#include <iostream>
#include <math.h>
#include <Windows.h>


/*
float r, g, b, x, y;
bool check = true;

void mouse(int button, int state, int xx, int yy) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) { //membuat objek titik-tittk
		std::cout << "KLIK KIRI" << " = anda menekan tombol " << GLUT_LEFT_BUTTON << std::endl;
		check = true;
		x = xx;
		y = 480 - yy;

		r = (rand() % 9);
		g = (rand() % 9) / 8;
		b = (rand());
	}

	else if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) { //menghapus objek titik-titik
		std::cout << "KLIK KANAN" << " = anda menekan tombol " << GLUT_RIGHT_BUTTON << std::endl;
		check = false;
		glClearColor(0.0, 0.0, 0.0, 0.0);
		glClear(GL_COLOR_BUFFER_BIT);

	}
	glutPostRedisplay();
}

void keyboard(unsigned char KEY, int x, int y) {

	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	std::cout << KEY << " = anda menekan tombol " << KEY << std::endl;

	if (KEY == 'a' || KEY == 'A') {
		//kotak kiri
		glColor3f(0.0, 1.0, 1.0);
		glBegin(GL_POLYGON);
		glVertex2d(149.0, 199.0);
		glVertex2d(249.0, 199.0);
		glVertex2d(249.0, 299.0);
		glVertex2d(149.0, 299.0);
		glEnd();

		//segitga tengah
		glColor3f(1.0, 1.0, 0.0);
		glBegin(GL_TRIANGLES);
		glVertex2d(299.0, 199.0);
		glVertex2d(399.0, 199.0);
		glVertex2d(349.0, 299.0);
		glEnd();

		//kotak kanan
		glColor3f(1.0, 0.0, 1.0);
		glBegin(GL_POLYGON);
		glVertex2d(449.0, 199.0);
		glVertex2d(549.0, 199.0);
		glVertex2d(549.0, 299.0);
		glVertex2d(449.0, 299.0);
		glEnd();
		glFlush();
	}

	else if (KEY == 's' || KEY == 'S') {
		//kotak kiri
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_POLYGON);
		glVertex2d(149.0, 199.0);
		glVertex2d(249.0, 199.0);
		glVertex2d(249.0, 299.0);
		glVertex2d(149.0, 299.0);
		glEnd();

		//segitga tengah
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_TRIANGLES);
		glVertex2d(299.0, 199.0);
		glVertex2d(399.0, 199.0);
		glVertex2d(349.0, 299.0);
		glEnd();

		//kotak kanan
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_POLYGON);
		glVertex2d(449.0, 199.0);
		glVertex2d(549.0, 199.0);
		glVertex2d(549.0, 299.0);
		glVertex2d(449.0, 299.0);
		glEnd();
		glFlush();
	}

	else if (KEY == 'd' || KEY == 'D') {
		//kotak kiri
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_LINE_STRIP);
		glVertex2d(149.0, 199.0);
		glVertex2d(249.0, 199.0);
		glVertex2d(249.0, 299.0);
		glVertex2d(149.0, 299.0);
		glVertex2d(149.0, 199.0);
		glEnd();

		//segitga tengah
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_LINE_STRIP);
		glVertex2d(299.0, 199.0);
		glVertex2d(399.0, 199.0);
		glVertex2d(349.0, 299.0);
		glVertex2d(299.0, 199.0);
		glEnd();

		//kotak kanan
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_LINE_STRIP);
		glVertex2d(449.0, 199.0);
		glVertex2d(549.0, 199.0);
		glVertex2d(549.0, 299.0);
		glVertex2d(449.0, 299.0);
		glVertex2d(449.0, 199.0);
		glEnd();
		glFlush();
	}
}

void display() {
	//points
	if (check) {
		glColor3f(r, g, b);
		glBegin(GL_POINTS); // writes pixels on the frame buffer with the current drawing color
		glVertex2f(x, y);   // sets vertex
		glEnd();
	}
	glFlush();
}
*/

void display() {

	float a1x = 50, a1y = 50; //kuning bawah
	float a2x = 50, a2y = 200; //biru atas
	float a3x = 100, a3y = 50; //hijau bawah
	float a4x = 100, a4y = 200; //merah atas

	float b1x = 150, b1y = 200; //kuning atas
	float b2x = 150, b2y = 50; //biru bawah
	float b3x = 200, b3y = 200; //hijau atas
	float b4x = 200, b4y = 50; //merah bawah

	float Ma1b1, Ma2b2, Ma3b3, Ma4b4, Ca1b1, Ca2b2, Ca3b3, Ca4b4;
	float pw, px, py, pz, pi, pj, pk, pl;

	//garis
	glColor3f(1.0, 1.0, 0.0); //garis kuning
	glBegin(GL_LINES);
	glVertex2f(a1x, a1y);
	glVertex2f(b1x, b1y);
	glEnd();

	glColor3f(0.0, 0.0, 1.0); //garis biru
	glBegin(GL_LINES);
	glVertex2f(a2x, a2y);
	glVertex2f(b2x, b2y);
	glEnd();

	glColor3f(0.0, 1.0, 0.0); //garis hijau
	glBegin(GL_LINES);
	glVertex2f(a3x, a3y);
	glVertex2f(b3x, b3y);
	glEnd();

	glColor3f(1.0, 0.0, 0.0); //garis merah
	glBegin(GL_LINES);
	glVertex2f(a4x, a4y);
	glVertex2f(b4x, b4y);
	glEnd();

	//rumus perpotongan
	Ma1b1 = (b1y - a1y) / (b1x - a1x); //kuning
	Ma2b2 = (b2y - a2y) / (b2x - a2x); //biru
	Ma3b3 = (b3y - a3y) / (b3x - a3x); //hijau
	Ma4b4 = (b4y - a4y) / (b4x - a4x); //merah

	Ca1b1 = a1y - (a1x * Ma1b1);
	Ca2b2 = a2y - (a2x * Ma2b2);
	Ca3b3 = a3y - (a3x * Ma3b3);
	Ca4b4 = a4y - (a4x * Ma4b4);

	//titit potong
	px = (Ca2b2 - Ca1b1) / (Ma1b1 - Ma2b2); //kuning-biru
	py = (Ma1b1 * px) + Ca1b1;

	pw = (Ca4b4 - Ca1b1) / (Ma1b1 - Ma4b4); //kuning-merah
	pz = (Ma4b4 * pw) + Ca4b4;

	pi = (Ca2b2 - Ca3b3) / (Ma3b3 - Ma2b2); //hijau-biru
	pj = (Ma3b3 * pi) + Ca3b3;

	pk = (Ca4b4 - Ca3b3) / (Ma3b3 - Ma4b4); //hijau-merah
	pl = (Ma4b4 * pk) + Ca4b4;


	//hasil
	glBegin(GL_POINTS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(px, py);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(pw, pz);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(pi, pj);
	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex2f(pk, pl);
	glEnd();

	//kotak
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(a1x, a1y);
	glVertex2f(a2x, a2y);
	glVertex2f(b3x, b3y);
	glVertex2f(b4x, b4y);
	glEnd();


	glFlush();
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //single buffer unutk menampilkan window | warna rgb
	glutInitWindowSize(640, 480); //size, 640px x 480px
	glutInitWindowPosition(10, 10); //posisi windows
	glutCreateWindow("Titik Perpotongan by IFbalino");

	//inisialisasi glut
	glClearColor(0.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10);
	glLineWidth(4.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity(); // dihitung dengan matrix identitas
	gluOrtho2D(0.0, 640.0, 0.0, 480.0); // untuk memberikan sistem koordinat kepada windows yang kita buat

	glutDisplayFunc(display);
	//glutMouseFunc(mouse);
	//glutKeyboardFunc(keyboard);
	glutMainLoop();
	return 0;
}