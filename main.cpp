//header
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
//deklarasi fungsi
void display();
void init();
void reshape(int, int);
void keyboard(unsigned char, int, int); //+1
//main program
int main (int argc, char** argv){
 //inisialisasi
 glutInit(&argc, argv);
 glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH ); //+2 GLUT_DEPTH : mengalokasikan sumbu z
 glutInitWindowPosition(200, 100); //atur sumbu x dan y
 glutInitWindowSize(500, 500); //atur lebar dan tinggi jendela
 glutCreateWindow("Jendela 1");
 glutDisplayFunc(display); //memanggil fungsi display
 glutReshapeFunc(reshape); //memanggil fungsi reshape
 glutKeyboardFunc(keyboard); // +3 memanggil fungsi keyboard
 init();
 glutMainLoop(); //looping program utama
}void init(){
 glEnable(GL_DEPTH_TEST); //+4
 glClearColor(0.0, 0.0, 0.0, 1.0);
}
void display(){
 //reset
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //+5
 //alas
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(184, 178, 178);
    glVertex3f(-15.0, -5.0, 10.0);
    glVertex3f(-15.0, -6.0, 10.0);
    glVertex3f(15.0, -6.0, 10.0);
    glVertex3f(15.0, -5.0, 10.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(204, 196, 196);
    glVertex3f(-15.0, -5.0, -10.0);
    glVertex3f(-15.0, -6.0, -10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glVertex3f(15.0, -5.0, -10.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(204, 196, 196);
    glVertex3f(-15.0, -5.0, -10.0);
    glVertex3f(-15.0, -5.0, 10.0);
    glVertex3f(15.0, -5.0, 10.0);
    glVertex3f(15.0, -5.0, -10.0);
    glEnd();
    //bawah
    glBegin(GL_QUADS); //+8
    glColor3ub(204, 196, 196);
    glVertex3f(-15.0, -6.0, -10.0);
    glVertex3f(-15.0, -6.0, 10.0);
    glVertex3f(15.0, -6.0, 10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(204, 196, 196);
    glVertex3f(15.0, -5.0, 10.0);
    glVertex3f(15.0, -6.0, 10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glVertex3f(15.0, -5.0, -10.0);
    glEnd();

//tembok
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(117, 117, 117);
    glVertex3f(-15.0, 8.0, -10.0);
    glVertex3f(-15.0, -6.0, -10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glVertex3f(15.0, 8.0, -10.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(-15.0, 8.0, -11.0);
    glVertex3f(-15.0, -6.0, -11.0);
    glVertex3f(15.0, -6.0, -11.0);
    glVertex3f(15.0, 8.0, -11.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(-15.0, 8.0, -11.0);
    glVertex3f(-15.0, 8.0, -10.0);
    glVertex3f(15.0, 8.0, -10.0);
    glVertex3f(15.0, 8.0, -11.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, -10.0);
    glVertex3f(15.0, -6.0, -10.0);
    glVertex3f(15.0, -6.0, -11.0);
    glVertex3f(15.0, 8.0, -11.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(-15.0, 8.0, -11.0);
    glVertex3f(-15.0, -6.0, -11.0);
    glVertex3f(-15.0, -6.0, -10.0);
    glVertex3f(-15.0, 8.0, -10.0);
    glEnd();

//tembok kiri
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(117, 117, 117);
    glVertex3f(-15.0, 8.0, -11.0);
    glVertex3f(-15.0, -6.0, -11.0);
    glVertex3f(-15.0, -6.0, 10.0);
    glVertex3f(-15.0, 8.0, 10.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(-16.0, 8.0, -11.0);
    glVertex3f(-16.0, -6.0, -11.0);
    glVertex3f(-16.0, -6.0, 10.0);
    glVertex3f(-16.0, 8.0, 10.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(-16.0, 8.0, -11.0);
    glVertex3f(-15.0, 8.0, -11.0);
    glVertex3f(-15.0, 8.0, 10.0);
    glVertex3f(-16.0, 8.0, 10.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(-15.0, 8.0, -11.0);
    glVertex3f(-15.0, -6.0, -11.0);
    glVertex3f(-16.0, -6.0, -11.0);
    glVertex3f(-16.0, 8.0, -11.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(-15.0, 8.0, 10.0);
    glVertex3f(-15.0, -6.0, 10.0);
    glVertex3f(-16.0, -6.0, 10.0);
    glVertex3f(-16.0, 8.0, 10.0);
    glEnd();

//tembok kanan
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(117, 117, 117);
    glVertex3f(15.0, 8.0, -11.0);
    glVertex3f(15.0, -6.0, -11.0);
    glVertex3f(15.0, -6.0, 0.0);
    glVertex3f(15.0, 8.0, 0.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 8.0, -11.0);
    glVertex3f(16.0, -6.0, -11.0);
    glVertex3f(16.0, -6.0, 0.0);
    glVertex3f(16.0, 8.0, 0.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 8.0, -11.0);
    glVertex3f(15.0, 8.0, -11.0);
    glVertex3f(15.0, 8.0, 0.0);
    glVertex3f(16.0, 8.0, 0.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, -11.0);
    glVertex3f(15.0, -6.0, -11.0);
    glVertex3f(16.0, -6.0, -11.0);
    glVertex3f(16.0, 8.0, -11.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, 0.0);
    glVertex3f(15.0, -6.0, 0.0);
    glVertex3f(16.0, -6.0, 0.0);
    glVertex3f(16.0, 8.0, 0.0);
    glEnd();
    //kanan (kiri)
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(117, 117, 117);
    glVertex3f(15.0, 8.0, 8.0);
    glVertex3f(15.0, -6.0, 8.0);
    glVertex3f(15.0, -6.0, 10.0);
    glVertex3f(15.0, 8.0, 10.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 8.0, 8.0);
    glVertex3f(16.0, -6.0, 8.0);
    glVertex3f(16.0, -6.0, 10.0);
    glVertex3f(16.0, 8.0, 10.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 8.0, 8.0);
    glVertex3f(15.0, 8.0, 8.0);
    glVertex3f(15.0, 8.0, 10.0);
    glVertex3f(16.0, 8.0, 10.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, 8.0);
    glVertex3f(15.0, -6.0, 8.0);
    glVertex3f(16.0, -6.0, 8.0);
    glVertex3f(16.0, 8.0, 8.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, 10.0);
    glVertex3f(15.0, -6.0, 10.0);
    glVertex3f(16.0, -6.0, 10.0);
    glVertex3f(16.0, 8.0, 10.0);
    glEnd();

    //kanan (bawah)
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(117, 117, 117);
    glVertex3f(15.0, 1.0, 0.0);
    glVertex3f(15.0, -6.0, 0.0);
    glVertex3f(15.0, -6.0, 8.0);
    glVertex3f(15.0, 1.0, 8.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 1.0, 0.0);
    glVertex3f(16.0, -6.0, 0.0);
    glVertex3f(16.0, -6.0, 8.0);
    glVertex3f(16.0, 1.0, 8.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(135, 135, 135);
    glVertex3f(16.0, 1.0, 0.0);
    glVertex3f(15.0, 1.0, 0.0);
    glVertex3f(15.0, 1.0, 8.0);
    glVertex3f(16.0, 1.0, 8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 1.0, 8.0);
    glVertex3f(15.0, -6.0, 8.0);
    glVertex3f(16.0, -6.0, 8.0);
    glVertex3f(16.0, 1.0, 8.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 1.0, 0.0);
    glVertex3f(15.0, -6.0, 0.0);
    glVertex3f(16.0, -6.0, 0.0);
    glVertex3f(16.0, 1.0, 0.0);
    glEnd();

    //kanan (atas)
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(117, 117, 117);
    glVertex3f(15.0, 8.0, 0.0);
    glVertex3f(15.0, 5.0, 0.0);
    glVertex3f(15.0, 5.0, 8.0);
    glVertex3f(15.0, 8.0, 8.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 8.0, 0.0);
    glVertex3f(16.0, 5.0, 0.0);
    glVertex3f(16.0, 5.0, 8.0);
    glVertex3f(16.0, 8.0, 8.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(16.0, 8.0, 0.0);
    glVertex3f(15.0, 8.0, 0.0);
    glVertex3f(15.0, 8.0, 8.0);
    glVertex3f(16.0, 8.0, 8.0);
    glEnd();
    //bawah
    glBegin(GL_QUADS); //+8
    glColor3ub(135, 135, 135);
    glVertex3f(16.0, 5.0, 0.0);
    glVertex3f(15.0, 5.0, 0.0);
    glVertex3f(15.0, 5.0, 8.0);
    glVertex3f(16.0, 5.0, 8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, 8.0);
    glVertex3f(15.0, 5.0, 8.0);
    glVertex3f(16.0, 5.0, 8.0);
    glVertex3f(16.0, 8.0, 8.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(143, 143, 143);
    glVertex3f(15.0, 8.0, -1.0);
    glVertex3f(15.0, 5.0, -1.0);
    glVertex3f(16.0, 5.0, -1.0);
    glVertex3f(16.0, 8.0, -1.0);
    glEnd();

//jendela 1
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(186, 186, 186);
    glVertex3f(16.0, 5.0, 8.0);
    glVertex3f(16.0, 1.0, 8.0);
    glVertex3f(16.0, 1.0, 4.0);
    glVertex3f(16.0, 5.0, 4.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(186, 186, 186);
    glVertex3f(15.5, 5.0, 8.0);
    glVertex3f(15.5, 1.0, 8.0);
    glVertex3f(15.5, 1.0, 4.0);
    glVertex3f(15.5, 5.0, 4.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(204, 204, 204);
    glVertex3f(15.5, 5.0, 4.0);
    glVertex3f(15.5, 1.0, 4.0);
    glVertex3f(16.0, 1.0, 4.0);
    glVertex3f(16.0, 5.0, 4.0);
    glEnd();

//jendela 2
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(186, 186, 186);
    glVertex3f(19.0, 5.0, 4.0);
    glVertex3f(19.0, 1.0, 4.0);
    glVertex3f(16.0, 1.0, 0.0);
    glVertex3f(16.0, 5.0, 0.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(186, 186, 186);
    glVertex3f(18.5, 5.0, 4.0);
    glVertex3f(18.5, 1.0, 4.0);
    glVertex3f(15.5, 1.0, 0.0);
    glVertex3f(15.5, 5.0, 0.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(176, 176, 176);
    glVertex3f(18.5, 5.0, 4.0);
    glVertex3f(18.5, 1.0, 4.0);
    glVertex3f(19.0, 1.0, 4.0);
    glVertex3f(19.0, 5.0, 4.0);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(176, 176, 176);
    glVertex3f(15.5, 5.0, 0.0);
    glVertex3f(18.5, 5.0, 4.0);
    glVertex3f(19.0, 5.0, 4.0);
    glVertex3f(16.0, 5.0, 0.0);
    glEnd();

//tempat tidur
  //kayu1
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 8.0);
    glVertex3f(-15.0, -5.0, 8.0);
    glVertex3f(-13.5, -5.0, 8.0);
    glVertex3f(-13.5, 2.0, 8.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 6.5);
    glVertex3f(-15.0, -5.0, 6.5);
    glVertex3f(-13.5, -5.0, 6.5);
    glVertex3f(-13.5, 2.0, 6.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 8.0);
    glVertex3f(-15.0, 2.0, 6.5);
    glVertex3f(-13.5, 2.0, 6.5);
    glVertex3f(-13.5, 2.0, 8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(212, 202, 142);
    glVertex3f(-13.5, 2.0, 8.0);
    glVertex3f(-13.5, -5.0, 8.0);
    glVertex3f(-13.5, -5.0, 6.5);
    glVertex3f(-13.5, 2.0, 6.5);
    glEnd();
    //penyambung
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-13.5, -1.5, 8.0);
    glVertex3f(-13.5, -3.5, 8.0);
    glVertex3f(1.0, -3.5, 8.0);
    glVertex3f(1.0, -1.5, 8.0);
    glEnd();

//kayu2
    //depan
   glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 8.0);
    glVertex3f(1.0, -5.0, 8.0);
    glVertex3f(2.5, -5.0, 8.0);
    glVertex3f(2.5, 2.0, 8.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 6.5);
    glVertex3f(1.0, -5.0, 6.5);
    glVertex3f(2.5, -5.0, 6.5);
    glVertex3f(2.5, 2.0, 6.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 8.0);
    glVertex3f(1.0, 2.0, 6.5);
    glVertex3f(2.5, 2.0, 6.5);
    glVertex3f(2.5, 2.0, 8.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(212, 202, 142);
    glVertex3f(2.5, 2.0, 8.0);
    glVertex3f(2.5, -5.0, 8.0);
    glVertex3f(2.5, -5.0, 6.5);
    glVertex3f(2.5, 2.0, 6.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 8.0);
    glVertex3f(1.0, -5.0, 8.0);
    glVertex3f(1.0, -5.0, 6.5);
    glVertex3f(1.0, 2.0, 6.5);
    glEnd();
    //penyambung
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(2.5, 1.0, 6.5);
    glVertex3f(2.5, -3.5, 6.5);
    glVertex3f(2.5, -3.5, 2.0);
    glVertex3f(2.5, 1.0, 2.0);
    glEnd();
//kayu2
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 2.0);
    glVertex3f(1.0, -5.0, 2.0);
    glVertex3f(2.5, -5.0, 2.0);
    glVertex3f(2.5, 2.0, 2.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 0.5);
    glVertex3f(1.0, -5.0, 0.5);
    glVertex3f(2.5, -5.0, 0.5);
    glVertex3f(2.5, 2.0, 0.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 2.0);
    glVertex3f(1.0, 2.0, 0.5);
    glVertex3f(2.5, 2.0, 0.5);
    glVertex3f(2.5, 2.0, 2.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(2.5, 2.0, 2.0);
    glVertex3f(2.5, -5.0, 2.0);
    glVertex3f(2.5, -5.0, 0.5);
    glVertex3f(2.5, 2.0, 0.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(1.0, 2.0, 2.0);
    glVertex3f(1.0, -5.0, 2.0);
    glVertex3f(1.0, -5.0, 0.5);
    glVertex3f(1.0, 2.0, 0.5);
    glEnd();
    //penyambung
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-13.5, -1.5, 0.5);
    glVertex3f(-13.5, -3.5, 0.5);
    glVertex3f(1.0, -3.5, 0.5);
    glVertex3f(1.0, -1.5, 0.5);
    glEnd();
//kayu3
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 2.0);
    glVertex3f(-15.0, -5.0, 2.0);
    glVertex3f(-13.5, -5.0, 2.0);
    glVertex3f(-13.5, 2.0, 2.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 0.5);
    glVertex3f(-15.0, -5.0, 0.5);
    glVertex3f(-13.5, -5.0, 0.5);
    glVertex3f(-13.5, 2.0, 0.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 2.0, 2.0);
    glVertex3f(-15.0, 2.0, 0.5);
    glVertex3f(-13.5, 2.0, 0.5);
    glVertex3f(-13.5, 2.0, 2.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-13.5, 2.0, 2.0);
    glVertex3f(-13.5, -5.0, 2.0);
    glVertex3f(-13.5, -5.0, 0.5);
    glVertex3f(-13.5, 2.0, 0.5);
    glEnd();
    //penyambung
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 1.0, 6.5);
    glVertex3f(-14.5, -3.5, 6.5);
    glVertex3f(-14.5, -3.5, 2.0);
    glVertex3f(-14.5, 1.0, 2.0);
    glEnd();

//kasur
    //belakang
    //selimut
    glBegin(GL_QUADS);
    glColor3ub(92, 92, 92);
    glVertex3f(-10.0, 0.0, 0.5);
    glVertex3f(-10.0, -1.5, 0.5);
    glVertex3f(1.0, -1.5, 0.5);
    glVertex3f(1.0, 0.0, 0.5);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3ub(92, 92, 92);
    glVertex3f(-10.0, 0.0, 8.0);
    glVertex3f(-10.0, -1.5, 8.0);
    glVertex3f(1.0, -1.5, 8.0);
    glVertex3f(1.0, 0.0, 8.0);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(92, 92, 92);
    glVertex3f(-10.0, 0.0, 0.5);
    glVertex3f(-10.0, 0.0, 8.0);
    glVertex3f(1.0, 0.0, 8.0);
    glVertex3f(1.0, 0.0, 0.5);
    glEnd();
//bantal
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-14.5, 0.0, 0.5);
    glVertex3f(-14.5, -1.5, 0.5);
    glVertex3f(-10.0, -1.5, 0.5);
    glVertex3f(-10.0, 0.0, 0.5);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-14.5, 0.0, 8.0);
    glVertex3f(-14.5, -1.5, 8.0);
    glVertex3f(-10.0, -1.5, 8.0);
    glVertex3f(-10.0, 0.0, 8.0);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(-14.5, 0.0, 0.5);
    glVertex3f(-14.5, 0.0, 8.0);
    glVertex3f(-10.0, 0.0, 8.0);
    glVertex3f(-10.0, 0.0, 0.5);
    glEnd();
//lomari
    //depan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-12.0, -0.5, -1.5);
    glVertex3f(-12.0, -5.5, -1.5);
    glVertex3f(-12.0, -5.5, -5.5);
    glVertex3f(-12.0, -0.5, -5.5);
    glEnd();
    //belakang
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, -0.5, -1.5);
    glVertex3f(-14.5, -5.5, -1.5);
    glVertex3f(-14.5, -5.5, -5.5);
    glVertex3f(-14.5, -0.5, -5.5);
    glEnd();
    //kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-12.0, -0.5, -5.5);
    glVertex3f(-12.0, -5.5, -5.5);
    glVertex3f(-14.5, -5.5, -5.5);
    glVertex3f(-14.5, -0.5, -5.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-12.0, -0.5, -1.5);
    glVertex3f(-12.0, -5.5, -1.5);
    glVertex3f(-14.5, -5.5, -1.5);
    glVertex3f(-14.5, -0.5, -1.5);
    glEnd();
    //atas
    glBegin(GL_QUADS); //+8
    glColor3ub(161, 108, 59);
    glVertex3f(-14.5, -0.5, -1.5);
    glVertex3f(-12.0, -0.5, -1.5);
    glVertex3f(-12.0, -0.5, -5.5);
    glVertex3f(-14.5, -0.5, -5.5);
    glEnd();
    //aksesors1
    glBegin(GL_QUADS); //+8
    glColor3ub(161, 108, 59);
    glVertex3f(-11.8, -1.0, -2.0);
    glVertex3f(-11.8, -2.0, -2.0);
    glVertex3f(-11.8, -2.0, -5.0);
    glVertex3f(-11.8, -1.0, -5.0);
    glEnd();

    glBegin(GL_QUADS); //+8
    glColor3ub(161, 108, 59);
    glVertex3f(-11.8, -2.5, -2.0);
    glVertex3f(-11.8, -4.5, -2.0);
    glVertex3f(-11.8, -4.5, -5.0);
    glVertex3f(-11.8, -2.5, -5.0);
    glEnd();
    //pegangan
    glBegin(GL_QUADS); //+8
    glColor3ub(235, 235, 235);
    glVertex3f(-11.7, -1.5, -3.1);
    glVertex3f(-11.7, -1.8, -3.1);
    glVertex3f(-11.7, -1.8, -4.1);
    glVertex3f(-11.7, -1.5, -4.1);
    glEnd();

//kaca
  //batang kiri
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 5.0, -1.5);
    glVertex3f(-14.5, 1.0, -1.5);
    glVertex3f(-14.5, 1.0, -1.8);
    glVertex3f(-14.5, 5.0, -1.8);
    glEnd();
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 5.0, -1.5);
    glVertex3f(-15.0, 1.0, -1.5);
    glVertex3f(-14.5, 1.0, -1.5);
    glVertex3f(-14.5, 5.0, -1.5);
    glEnd();
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 5.0, -1.8);
    glVertex3f(-15.0, 1.0, -1.8);
    glVertex3f(-14.5, 1.0, -1.8);
    glVertex3f(-14.5, 5.0, -1.8);
    glEnd();
    //batang kanan
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 5.0, -5.0);
    glVertex3f(-14.5, 1.0, -5.0);
    glVertex3f(-14.5, 1.0, -5.3);
    glVertex3f(-14.5, 5.0, -5.3);
    glEnd();
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 5.0, -5.0);
    glVertex3f(-15.0, 1.0, -5.0);
    glVertex3f(-14.5, 1.0, -5.0);
    glVertex3f(-14.5, 5.0, -5.0);
    glEnd();
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 5.0, -5.3);
    glVertex3f(-15.0, 1.0, -5.3);
    glVertex3f(-14.5, 1.0, -5.3);
    glVertex3f(-14.5, 5.0, -5.3);
    glEnd();
    //batang atas
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 5.3, -1.5);
    glVertex3f(-14.5, 5.0, -1.5);
    glVertex3f(-14.5, 5.0, -5.3);
    glVertex3f(-14.5, 5.3, -5.3);
    glEnd();
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 5.3, -1.5);
    glVertex3f(-14.5, 5.3, -1.5);
    glVertex3f(-14.5, 5.3, -5.3);
    glVertex3f(-15.0, 5.3, -5.3);
    glEnd();
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 5.0, -1.5);
    glVertex3f(-14.5, 5.0, -1.5);
    glVertex3f(-14.5, 5.0, -5.3);
    glVertex3f(-15.0, 5.0, -5.3);
    glEnd();
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 5.3, -1.5);
    glVertex3f(-15.0, 5.0, -1.5);
    glVertex3f(-14.5, 5.0, -1.5);
    glVertex3f(-14.5, 5.3, -1.5);
    glEnd();
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 5.3, -5.3);
    glVertex3f(-15.0, 5.0, -5.3);
    glVertex3f(-14.5, 5.0, -5.3);
    glVertex3f(-14.5, 5.3, -5.3);
    glEnd();
    //batang bawah
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 1.0, -1.5);
    glVertex3f(-14.5, 1.3, -1.5);
    glVertex3f(-14.5, 1.3, -5.3);
    glVertex3f(-14.5, 1.0, -5.3);
    glEnd();
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 1.0, -1.5);
    glVertex3f(-14.5, 1.0, -1.5);
    glVertex3f(-14.5, 1.0, -5.3);
    glVertex3f(-15.0, 1.0, -5.3);
    glEnd();
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 1.3, -1.5);
    glVertex3f(-14.5, 1.3, -1.5);
    glVertex3f(-14.5, 1.3, -5.3);
    glVertex3f(-15.0, 1.3, -5.3);
    glEnd();
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 1.3, -1.5);
    glVertex3f(-15.0, 1.0, -1.5);
    glVertex3f(-14.5, 1.0, -1.5);
    glVertex3f(-14.5, 1.3, -1.5);
    glEnd();
    glBegin(GL_QUADS); //+8
    glColor3ub(255, 240, 150);
    glVertex3f(-15.0, 1.3, -5.3);
    glVertex3f(-15.0, 1.0, -5.3);
    glVertex3f(-14.5, 1.0, -5.3);
    glVertex3f(-14.5, 1.3, -5.3);
    glEnd();
    //kaca
    glBegin(GL_QUADS); //+8
    glColor3ub(14, 218, 232);
    glVertex3f(-14.8, 5.3, -1.5);
    glVertex3f(-14.8, 1.2, -1.5);
    glVertex3f(-14.8, 1.2, -5.0);
    glVertex3f(-14.8, 5.3, -5.0);
    glEnd();

//pintu
    //depan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 6.0, -9.5);
    glVertex3f(-14.5, -6.0, -9.5);
    glVertex3f(-9.0, -6.0, -9.5);
    glVertex3f(-9.0, 6.0, -9.5);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(-9.0, 6.0, -9.5);
    glVertex3f(-9.0, -6.0, -9.5);
    glVertex3f(-9.0, -6.0, -10.0);
    glVertex3f(-9.0, 6.0, -10.0);
    glEnd();
     //kiri
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 6.0, -9.5);
    glVertex3f(-14.5, -6.0, -9.5);
    glVertex3f(-14.5, -6.0, -10.0);
    glVertex3f(-14.5, 6.0, -10.0);
    glEnd();
     //atas
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(-14.5, 6.0, -9.5);
    glVertex3f(-14.5, 6.0, -10.0);
    glVertex3f(-9.0, 6.0, -10.0);
    glVertex3f(-9.0, 6.0, -9.5);
    glEnd();
    //aksesoris
    glBegin(GL_QUADS);
    glColor3ub(163, 131, 91);
    glVertex3f(-13.5, 5.0, -9.4);
    glVertex3f(-13.5, 2.0, -9.4);
    glVertex3f(-10.0, 2.0, -9.4);
    glVertex3f(-10.0, 5.0, -9.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(163, 131, 91);
    glVertex3f(-13.5, 0.0, -9.4);
    glVertex3f(-13.5, -4.0, -9.4);
    glVertex3f(-10.0, -4.0, -9.4);
    glVertex3f(-10.0, 0.0, -9.4);
    glEnd();

    //pegangan
    glBegin(GL_QUADS);
    glColor3ub(163, 131, 91);
    glVertex3f(-10.0, 1.5, -9.4);
    glVertex3f(-10.0, 0.5, -9.4);
    glVertex3f(-9.5, 0.5, -9.4);
    glVertex3f(-9.5, 1.5, -9.4);
    glEnd();

//ac
     glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(4.0, 7.0, -8.5);
    glVertex3f(4.0, 4.6, -8.5);
    glVertex3f(-3.0, 4.6, -8.5);
    glVertex3f(-3.0, 7.0, -8.5);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(4.0, 7.0, -10.0);
    glVertex3f(4.0, 7.0, -8.5);
    glVertex3f(-3.0, 7.0, -8.5);
    glVertex3f(-3.0, 7.0, -10.0);
    glEnd();
    //bawah
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(4.0, 4.6, -8.5);
    glVertex3f(4.0, 4.0, -8.9);
    glVertex3f(-3.0, 4.0, -8.9);
    glVertex3f(-3.0, 4.6, -8.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex3f(4.0, 4.0, -10.0);
    glVertex3f(4.0, 4.0, -8.9);
    glVertex3f(-3.0, 4.0, -8.9);
    glVertex3f(-3.0, 4.0, -10.0);
    glEnd();
    //kiri
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex3f(-3.0, 7.0, -10.0);
    glVertex3f(-3.0, 7.0, -8.5);
    glVertex3f(-3.0, 4.6, -8.5);
    glVertex3f(-3.0, 4.0, -8.9);
    glVertex3f(-3.0, 4.0, -10.0);
    glEnd();
    //kanan
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
    glVertex3f(4.0, 7.0, -10.0);
    glVertex3f(4.0, 7.0, -8.5);
    glVertex3f(4.0, 4.6, -8.5);
    glVertex3f(4.0, 4.0, -8.9);
    glVertex3f(4.0, 4.0, -10.0);
    glEnd();
    //aksesoris
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(4.0, 4.6, -8.4);
    glVertex3f(4.0, 4.0, -8.8);
    glVertex3f(3.7, 4.0, -8.8);
    glVertex3f(3.7, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(3.5, 4.6, -8.4);
    glVertex3f(3.5, 4.0, -8.8);
    glVertex3f(3.2, 4.0, -8.8);
    glVertex3f(3.2, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(3.0, 4.6, -8.4);
    glVertex3f(3.0, 4.0, -8.8);
    glVertex3f(2.7, 4.0, -8.8);
    glVertex3f(2.7, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(2.5, 4.6, -8.4);
    glVertex3f(2.5, 4.0, -8.8);
    glVertex3f(2.2, 4.0, -8.8);
    glVertex3f(2.2, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(2.0, 4.6, -8.4);
    glVertex3f(2.0, 4.0, -8.8);
    glVertex3f(1.7, 4.0, -8.8);
    glVertex3f(1.7, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(1.5, 4.6, -8.4);
    glVertex3f(1.5, 4.0, -8.8);
    glVertex3f(1.2, 4.0, -8.8);
    glVertex3f(1.2, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(1.0, 4.6, -8.4);
    glVertex3f(1.0, 4.0, -8.8);
    glVertex3f(0.7, 4.0, -8.8);
    glVertex3f(0.7, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(0.5, 4.6, -8.4);
    glVertex3f(0.5, 4.0, -8.8);
    glVertex3f(0.2, 4.0, -8.8);
    glVertex3f(0.2, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(0.0, 4.6, -8.4);
    glVertex3f(0.0, 4.0, -8.8);
    glVertex3f(-0.3, 4.0, -8.8);
    glVertex3f(-0.3, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(-0.5, 4.6, -8.4);
    glVertex3f(-0.5, 4.0, -8.8);
    glVertex3f(-0.8, 4.0, -8.8);
    glVertex3f(-0.8, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(-1.0, 4.6, -8.4);
    glVertex3f(-1.0, 4.0, -8.8);
    glVertex3f(-1.3, 4.0, -8.8);
    glVertex3f(-1.3, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(-1.5, 4.6, -8.4);
    glVertex3f(-1.5, 4.0, -8.8);
    glVertex3f(-1.8, 4.0, -8.8);
    glVertex3f(-1.8, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(-2.0, 4.6, -8.4);
    glVertex3f(-2.0, 4.0, -8.8);
    glVertex3f(-2.3, 4.0, -8.8);
    glVertex3f(-2.3, 4.6, -8.4);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex3f(-2.5, 4.6, -8.4);
    glVertex3f(-2.5, 4.0, -8.8);
    glVertex3f(-2.8, 4.0, -8.8);
    glVertex3f(-2.8, 4.6, -8.4);
    glEnd();

// meja
    //batang 1
    //depan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(14.5, 1.0, 9.0);
    glVertex3f(14.5, -5.0, 9.0);
    glVertex3f(15.0, -5.0, 9.0);
    glVertex3f(15.0, 1.0, 9.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(14.5, 1.0, 8.5);
    glVertex3f(14.5, -5.0, 8.5);
    glVertex3f(15.0, -5.0, 8.5);
    glVertex3f(15.0, 1.0, 8.5);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(15.0, 1.0, 9.0);
    glVertex3f(15.0, -5.0, 9.0);
    glVertex3f(15.0, -5.0, 8.5);
    glVertex3f(15.0, 1.0, 8.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(14.5, 1.0, 9.0);
    glVertex3f(14.5, -5.0, 9.0);
    glVertex3f(14.5, -5.0, 8.5);
    glVertex3f(14.5, 1.0, 8.5);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(14.5, 1.0, 8.5);
    glVertex3f(14.5, 1.0, 8.5);
    glVertex3f(15.0, 1.0, 9.0);
    glVertex3f(15.0, 1.0, 9.0);
    glEnd();
    //batang 1
    //depan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(10.5, 1.0, 9.0);
    glVertex3f(10.5, -5.0, 9.0);
    glVertex3f(11.0, -5.0, 9.0);
    glVertex3f(11.0, 1.0, 9.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(10.5, 1.0, 8.5);
    glVertex3f(10.5, -5.0, 8.5);
    glVertex3f(11.0, -5.0, 8.5);
    glVertex3f(11.0, 1.0, 8.5);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(11.0, 1.0, 9.0);
    glVertex3f(11.0, -5.0, 9.0);
    glVertex3f(11.0, -5.0, 8.5);
    glVertex3f(11.0, 1.0, 8.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(10.5, 1.0, 9.0);
    glVertex3f(10.5, -5.0, 9.0);
    glVertex3f(10.5, -5.0, 8.5);
    glVertex3f(10.5, 1.0, 8.5);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(10.5, 1.0, 8.5);
    glVertex3f(10.5, 1.0, 8.5);
    glVertex3f(11.0, 1.0, 9.0);
    glVertex3f(11.0, 1.0, 9.0);
    glEnd();
    //batang 3
    //depan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(10.5, 1.0, 0.0);
    glVertex3f(10.5, -5.0, 0.0);
    glVertex3f(11.0, -5.0, 0.0);
    glVertex3f(11.0, 1.0, 0.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(10.5, 1.0, -0.5);
    glVertex3f(10.5, -5.0, -0.5);
    glVertex3f(11.0, -5.0, -0.5);
    glVertex3f(11.0, 1.0, -0.5);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(11.0, 1.0, 0.0);
    glVertex3f(11.0, -5.0, 0.0);
    glVertex3f(11.0, -5.0, -0.5);
    glVertex3f(11.0, 1.0, -0.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(10.5, 1.0, 0.0);
    glVertex3f(10.5, -5.0, 0.0);
    glVertex3f(10.5, -5.0, -0.5);
    glVertex3f(10.5, 1.0, -0.5);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(10.5, 1.0, -0.5);
    glVertex3f(10.5, 1.0, -0.5);
    glVertex3f(11.0, 1.0, 0.0);
    glVertex3f(11.0, 1.0, 0.0);
    glEnd();
    //batang 4
    //depan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(14.5, 1.0, 0.0);
    glVertex3f(14.5, -5.0, 0.0);
    glVertex3f(15.0, -5.0, 0.0);
    glVertex3f(15.0, 1.0, 0.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(14.5, 1.0, -0.5);
    glVertex3f(14.5, -5.0, -0.5);
    glVertex3f(15.0, -5.0, -0.5);
    glVertex3f(15.0, 1.0, -0.5);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(15.0, 1.0, 0.0);
    glVertex3f(15.0, -5.0, 0.0);
    glVertex3f(15.0, -5.0, -0.5);
    glVertex3f(15.0, 1.0, -0.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(14.5, 1.0, 0.0);
    glVertex3f(14.5, -5.0, 0.0);
    glVertex3f(14.5, -5.0, -0.5);
    glVertex3f(14.5, 1.0, -0.5);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(14.5, 1.0, -0.5);
    glVertex3f(14.5, 1.0, -0.5);
    glVertex3f(15.0, 1.0, 0.0);
    glVertex3f(15.0, 1.0, 0.0);
    glEnd();

    //papan
    //atas
    glBegin(GL_QUADS);
    glColor3ub(232, 221, 158);
    glVertex3f(15.0, 1.0, -0.5);
    glVertex3f(10.5, 1.0, -0.5);
    glVertex3f(10.5, 1.0, 9.0);
    glVertex3f(15.0, 1.0, 9.0);
    glEnd();
    //bawah
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(15.0, 0.5, -0.5);
    glVertex3f(10.5, 0.5, -0.5);
    glVertex3f(10.5, 0.5, 9.0);
    glVertex3f(15.0, 0.5, 9.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(10.5, 1.0, 9.0);
    glVertex3f(10.5, 0.5, 9.0);
    glVertex3f(15.0, 0.5, 9.0);
    glVertex3f(15.0, 1.0, 9.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(10.5, 1.0, -0.5);
    glVertex3f(10.5, 0.5, -0.5);
    glVertex3f(15.0, 0.5, -0.5);
    glVertex3f(15.0, 1.0, -0.5);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(10.5, 1.0, -0.5);
    glVertex3f(10.5, 0.5, -0.5);
    glVertex3f(10.5, 0.5, 9.0);
    glVertex3f(10.5, 1.0, 9.0);
    glEnd();

//laptop
    //atas
    glBegin(GL_QUADS);
    glColor3ub(153, 153, 153);
    glVertex3f(14.0, 1.3, 2.5);
    glVertex3f(11.5, 1.3, 2.5);
    glVertex3f(11.5, 1.3, 6.0);
    glVertex3f(14.0, 1.3, 6.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(82, 82, 82);
    glVertex3f(11.5, 1.3, 6.0);
    glVertex3f(11.5, 1.0, 6.0);
    glVertex3f(14.0, 1.0, 6.0);
    glVertex3f(14.0, 1.3, 6.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(82, 82, 82);
    glVertex3f(11.5, 1.3, 2.5);
    glVertex3f(11.5, 1.0, 2.5);
    glVertex3f(14.0, 1.0, 2.5);
    glVertex3f(14.0, 1.3, 2.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(82, 82, 82);
    glVertex3f(11.5, 1.3, 2.5);
    glVertex3f(11.5, 1.0, 2.5);
    glVertex3f(14.0, 1.0, 2.5);
    glVertex3f(14.0, 1.3, 2.5);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(82, 82, 82);
    glVertex3f(11.5, 1.3, 6.0);
    glVertex3f(11.5, 1.0, 6.0);
    glVertex3f(14.0, 1.0, 6.0);
    glVertex3f(14.0, 1.3, 6.0);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3ub(82, 82, 82);
    glVertex3f(11.5, 1.3, 2.5);
    glVertex3f(11.5, 1.0, 2.5);
    glVertex3f(11.5, 1.0, 6.0);
    glVertex3f(11.5, 1.3, 6.0);
    glEnd();
    //layar
    //depan
    glBegin(GL_QUADS);
    glColor3ub(82, 82, 82);
    glVertex3f(14.3, 3.8, 2.5);
    glVertex3f(14.0, 1.3, 2.5);
    glVertex3f(14.0, 1.3, 6.0);
    glVertex3f(14.3, 3.8, 6.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(184, 184, 184);
    glVertex3f(14.2, 3.6, 2.7);
    glVertex3f(13.9, 1.5, 2.7);
    glVertex3f(13.9, 1.5, 5.8);
    glVertex3f(14.2, 3.6, 5.8);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(82, 82, 82);
    glVertex3f(14.5, 3.8, 2.5);
    glVertex3f(14.2, 1.0, 2.5);
    glVertex3f(14.2, 1.0, 6.0);
    glVertex3f(14.5, 3.8, 6.0);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(82, 82, 82);
    glVertex3f(14.3, 3.8, 2.5);
    glVertex3f(14.5, 3.8, 2.5);
    glVertex3f(14.5, 3.8, 6.0);
    glVertex3f(14.3, 3.8, 6.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(82, 82, 82);
    glVertex3f(14.3, 3.8, 6.0);
    glVertex3f(14.0, 1.0, 6.0);
    glVertex3f(14.2, 1.0, 6.0);
    glVertex3f(14.5, 3.8, 6.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(82, 82, 82);
    glVertex3f(14.3, 3.8, 2.5);
    glVertex3f(14.0, 1.0, 2.5);
    glVertex3f(14.2, 1.0, 2.5);
    glVertex3f(14.5, 3.8, 2.5);
    glEnd();

//kursi
    //batang 1
    //depan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(11.5, -2.0, 6.0);
    glVertex3f(11.5, -5.0, 6.0);
    glVertex3f(12.0, -5.0, 6.0);
    glVertex3f(12.0, -2.0, 6.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(11.5, -2.0, 5.5);
    glVertex3f(11.5, -5.0, 5.5);
    glVertex3f(12.0, -5.0, 5.5);
    glVertex3f(12.0, -2.0, 5.5);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(12.0, -2.0, 6.0);
    glVertex3f(12.0, -5.0, 6.0);
    glVertex3f(12.0, -5.0, 5.5);
    glVertex3f(12.0, -2.0, 5.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(11.5, -2.0, 6.0);
    glVertex3f(11.5, -5.0, 6.0);
    glVertex3f(11.5, -5.0, 5.5);
    glVertex3f(11.5, -2.0, 5.5);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(11.5, -2.0, 5.5);
    glVertex3f(11.5, -2.0, 5.5);
    glVertex3f(12.0, -2.0, 6.0);
    glVertex3f(12.0, -2.0, 6.0);
    glEnd();
    //batang 2
    //depan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(8.5, -2.0, 6.0);
    glVertex3f(8.5, -5.0, 6.0);
    glVertex3f(9.0, -5.0, 6.0);
    glVertex3f(9.0, -2.0, 6.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(8.5, -2.0, 5.5);
    glVertex3f(8.5, -5.0, 5.5);
    glVertex3f(9.0, -5.0, 5.5);
    glVertex3f(9.0, -2.0, 5.5);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(9.0, -2.0, 6.0);
    glVertex3f(9.0, -5.0, 6.0);
    glVertex3f(9.0, -5.0, 5.5);
    glVertex3f(9.0, -2.0, 5.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(8.5, -2.0, 6.0);
    glVertex3f(8.5, -5.0, 6.0);
    glVertex3f(8.5, -5.0, 5.5);
    glVertex3f(8.5, -2.0, 5.5);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(8.5, -2.0, 5.5);
    glVertex3f(8.5, -2.0, 5.5);
    glVertex3f(9.0, -2.0, 6.0);
    glVertex3f(9.0, -2.0, 6.0);
    glEnd();
     //batang 3
    //depan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(8.5, -2.0, 3.0);
    glVertex3f(8.5, -5.0, 3.0);
    glVertex3f(9.0, -5.0, 3.0);
    glVertex3f(9.0, -2.0, 3.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(8.5, -2.0, 2.5);
    glVertex3f(8.5, -5.0, 2.5);
    glVertex3f(9.0, -5.0, 2.5);
    glVertex3f(9.0, -2.0, 2.5);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(9.0, -2.0, 3.0);
    glVertex3f(9.0, -5.0, 3.0);
    glVertex3f(9.0, -5.0, 2.5);
    glVertex3f(9.0, -2.0, 2.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(8.5, -2.0, 3.0);
    glVertex3f(8.5, -5.0, 3.0);
    glVertex3f(8.5, -5.0, 2.5);
    glVertex3f(8.5, -2.0, 2.5);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(8.5, -2.0, 2.5);
    glVertex3f(8.5, -2.0, 2.5);
    glVertex3f(9.0, -2.0, 3.0);
    glVertex3f(9.0, -2.0, 3.0);
    glEnd();
    //batang 4
    //depan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(11.5, -2.0, 3.0);
    glVertex3f(11.5, -5.0, 3.0);
    glVertex3f(12.0, -5.0, 3.0);
    glVertex3f(12.0, -2.0, 3.0);
    glEnd();
    //belakang
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(11.5, -2.0, 2.5);
    glVertex3f(11.5, -5.0, 2.5);
    glVertex3f(12.0, -5.0, 2.5);
    glVertex3f(12.0, -2.0, 2.5);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(12.0, -2.0, 3.0);
    glVertex3f(12.0, -5.0, 3.0);
    glVertex3f(12.0, -5.0, 2.5);
    glVertex3f(12.0, -2.0, 2.5);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(11.5, -2.0, 3.0);
    glVertex3f(11.5, -5.0, 3.0);
    glVertex3f(11.5, -5.0, 2.5);
    glVertex3f(11.5, -2.0, 2.5);
    glEnd();
    //atas
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(11.5, -2.0, 2.5);
    glVertex3f(11.5, -2.0, 2.5);
    glVertex3f(12.0, -2.0, 3.0);
    glVertex3f(12.0, -2.0, 3.0);
    glEnd();
    //busa
    //atas
    glBegin(GL_QUADS);
    glColor3ub(78, 83, 92);
    glVertex3f(12.0, -2.0, 2.5);
    glVertex3f(8.5, -2.0, 2.5);
    glVertex3f(8.5, -2.0, 6.0);
    glVertex3f(12.0, -2.0, 6.0);
    glEnd();
    //bawah
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(12.0, -2.5, 2.5);
    glVertex3f(8.5, -2.5, 2.5);
    glVertex3f(8.5, -2.5, 6.0);
    glVertex3f(12.0, -2.5, 6.0);
    glEnd();
    //depan
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(8.5, -2.5, 6.0);
    glVertex3f(8.5, -2.0, 6.0);
    glVertex3f(12.0, -2.0, 6.0);
    glVertex3f(12.0, -2.5, 6.0);
    glEnd();
    //sandaran
    glBegin(GL_QUADS);
    glColor3ub(78, 83, 92);
    glVertex3f(7.5, 2.0, 2.5);
    glVertex3f(8.5, -2.0, 2.5);
    glVertex3f(8.5, -2.0, 6.0);
    glVertex3f(7.5, 2.0, 6.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(78, 83, 92);
    glVertex3f(7.0, 2.0, 2.5);
    glVertex3f(8.0, -2.2, 2.5);
    glVertex3f(8.0, -2.2, 6.0);
    glVertex3f(7.0, 2.0, 6.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(78, 83, 92);
    glVertex3f(8.5, -2.2, 2.5);
    glVertex3f(8.0, -2.2, 2.5);
    glVertex3f(8.0, -2.2, 6.0);
    glVertex3f(8.5, -2.2, 6.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(7.0, 2.0, 6.);
    glVertex3f(8.0, -2.2, 6.0);
    glVertex3f(8.5, -2.2, 6.0);
    glVertex3f(7.5, 2.0, 6.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(48, 52, 59);
    glVertex3f(7.0, 2.0, 2.5);
    glVertex3f(8.0, -2.2, 2.5);
    glVertex3f(8.5, -2.2, 2.5);
    glVertex3f(7.5, 2.0, 2.5);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(78, 83, 92);
    glVertex3f(7.5, 2.1, 2.5);
    glVertex3f(7.0, 2.1, 2.5);
    glVertex3f(7.0, 2.1, 6.0);
    glVertex3f(7.5, 2.1, 6.0);
    glEnd();

//lomari baju
    //depan
    glBegin(GL_QUADS);
    glColor3ub(255, 240, 150);
    glVertex3f(13.0, 6.0, -6.0);
    glVertex3f(13.0, -6.0, -6.0);
    glVertex3f(8.0, -6.0, -6.0);
    glVertex3f(8.0, 6.0, -6.0);
    glEnd();
    //kanan
    glBegin(GL_QUADS);
    glColor3ub(201, 191, 125);
    glVertex3f(13.0, 6.5, -10.0);
    glVertex3f(13.0, -6.0, -10.0);
    glVertex3f(13.0, -6.0, -6.0);
    glVertex3f(13.0, 6.5, -6.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(201, 191, 125);
    glVertex3f(13.3, 6.5, -10.0);
    glVertex3f(13.3, -6.0, -10.0);
    glVertex3f(13.3, -6.0, -6.0);
    glVertex3f(13.3, 6.5, -6.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(201, 191, 125);
    glVertex3f(13.0, 6.5, -10.0);
    glVertex3f(13.0, 6.5, -6.0);
    glVertex3f(13.3, 6.5, -6.0);
    glVertex3f(13.3, 6.5, -10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(201, 191, 125);
    glVertex3f(13.0, 6.5, -6.0);
    glVertex3f(13.0, -6.0, -6.0);
    glVertex3f(13.3, -6.0, -6.0);
    glVertex3f(13.3, 6.5, -6.0);
    glEnd();
    //kiri
    glBegin(GL_QUADS);
    glColor3ub(201, 191, 125);
    glVertex3f(8.0, 6.5, -10.0);
    glVertex3f(8.0, -6.0, -10.0);
    glVertex3f(8.0, -6.0, -6.0);
    glVertex3f(8.0, 6.5, -6.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(201, 191, 125);
    glVertex3f(7.7, 6.5, -10.0);
    glVertex3f(7.7, -6.0, -10.0);
    glVertex3f(7.7, -6.0, -6.0);
    glVertex3f(7.7, 6.5, -6.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(201, 191, 125);
    glVertex3f(8.0, 6.5, -10.0);
    glVertex3f(8.0, 6.5, -6.0);
    glVertex3f(7.7, 6.5, -6.0);
    glVertex3f(7.7, 6.5, -10.0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(201, 191, 125);
    glVertex3f(8.0, 6.5, -6.0);
    glVertex3f(8.0, -6.0, -6.0);
    glVertex3f(7.7, -6.0, -6.0);
    glVertex3f(7.7, 6.5, -6.0);
    glEnd();
    //atas
    //depan
    glBegin(GL_QUADS);
    glColor3ub(166, 159, 118);
    glVertex3f(13.0, 6.0, -10.0);
    glVertex3f(13.0, 6.0, -6.0);
    glVertex3f(8.0, 6.0, -6.0);
    glVertex3f(8.0, 6.0, -10.0);
    glEnd();
    //garis
    glBegin(GL_QUADS);
    glColor3ub(201, 191, 125);
    glVertex3f(9.5, 6.0, -5.9);
    glVertex3f(9.5, -6.0, -5.9);
    glVertex3f(9.2, -6.0, -5.9);
    glVertex3f(9.2, 6.0, -5.9);
    glEnd();
    //pegangan
    glBegin(GL_QUADS);
    glColor3ub(201, 191, 125);
    glVertex3f(10.5, 0.0, -5.9);
    glVertex3f(10.5, 1.0, -5.9);
    glVertex3f(10.2, 1.0, -5.9);
    glVertex3f(10.2, 0.0, -5.9);
    glEnd();

glFlush();
glutSwapBuffers();
}//fungsi untuk setting viewport
void reshape(int w, int h){
 glViewport(0,0, (GLsizei)w, (GLsizei)h); //membuat viewport sesuai ukuran jendela
 glMatrixMode(GL_PROJECTION); //merubah matrix mode menjadi gl_projection
 glLoadIdentity(); //reset transformasi misalnya rotasi pada display
 //gluOrtho2D(-10, 10, -10, 10); //setting spesifikasi proyeksi yang diinginkan (2D)
 //glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0); //+6 proyeksi orthografik 3D
 gluPerspective(30.0, w / h, 1.0, 100.0); //proyeksi perspektif
/* set initial position */
glTranslatef(0.0, -5.0, -100.0);
 glMatrixMode(GL_MODELVIEW); //merubah matrix mode menjadi gl_modelview
}
//+7
void keyboard(unsigned char key, int x, int y)
{
/* this is the keyboard event handler
 the x and y parameters are the mouse
 coordinates when the key was struck */
switch (key)
{
case 'd':
 case 'D':
 glTranslated(-1.0, 0.0, 0.0);//geser kiri
 break;
 case 'a':
 case 'A':
 glTranslated(1.0, 0.0, 0.0);//geser kanan
 break;
 case 's':
 case 'S':
 glTranslated(0.0, 1.0, 0.0);//geser atas
 break;
 case 'w':
 case 'W':
 glTranslated(0.0, -1.0, 0.0);//geser bawah
 break;
 case 'q':
 case 'Q':
 glTranslated(0.0, 0.0, -1.0);//dalam objek
 break;
 case 'e':
 case 'E':
 glTranslated(0.0, 0.0, 1.0);//keluar objek
 break;
 case 'i':
 case 'I':
 glRotatef(2.0, 1.0, 0.0, 0.0);//rotate kanan
 break;
 case 'k':
 case 'K':
 glRotatef(2.0, -1.0, 0.0, 0.0);//rotate kanan
 break;
 case 'j':
 case 'J':
  glRotatef(2.0, 0.0, 1.0, 0.0);//rotate atas
 break;
 case 'l':
 case 'L':
  glRotatef(2.0, 0.0, -1.0, 0.0);//rotate atas
 break;
}
display(); //memanggil fungsi display atau bisa pakai glutPostRedisplay();
}
