
/* IF Sudeste MG - Câmpus Rio Pomba
         Computação Gráfica
     Joana D'arc de Paula Barbosa
   Perspectiva com Três Pontos De Fuga
*/

#include <windows.h>
#include <stdlib.h>
#include<GL/glut.h>

//  movimentação ma tela, setas esq, dir, p/ cima, p/ baixo
GLfloat X = -0.0f;
GLfloat Y = -0.0f;
// Função callback chamada para fazer o desenho
void desenha(void){
      //Definimos aqui a cor de fundo da janela e a limpamos.
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glLoadIdentity();
//-------------------------------------------------------------------------------------
    glTranslatef(X, Y, 0.0f);    //para movimentação da tela
    glutPostRedisplay();
//--------------------------------------------------------------------------------------
    glColor3f(0.0,0.0,0.0);// preto
    glLineWidth(5.0f);  // aumenta a espessura das linha
    glColor3f(0.75,0.75,0.75);//Light gray
    glBegin(GL_POLYGON); // Desenha Predio esquerdo
        glVertex3f(0, -1000, 0.0);
        glVertex3f(-900, -500, 0.0);
        glVertex3f(-1000, 500, 0.0);
        glVertex3f(0, 450, 0.0);
    glEnd();
     glColor3f(0.0,0.0,0.0);//black
    glBegin(GL_LINE_LOOP); // Desenha  contorno do Predio esquerdo
        glVertex3f(0, -1000, 0.0);
        glVertex3f(-900, -500, 0.0);
        glVertex3f(-1000, 500, 0.0);
        glVertex3f(0, 450, 0.0);
    glEnd();

//-----------------------------------------------------------------------------------------

    glColor3f(0.75,0.75,0.75);//Light gray
    glBegin(GL_POLYGON); // Desenha a parte superior do predio
        glVertex3f(0, 450, 0.0);
        glVertex3f(-1000, 500, 0.0);
        glVertex3f(-200, 900, 0.0);
        glVertex3f(1000, 500, 0.0);
    glEnd();

    glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINE_LOOP); // Desenha as linhas da  parte superior do predio
        glVertex3f(0, 450, 0.0);
        glVertex3f(-1000, 500, 0.0);
        glVertex3f(-200, 900, 0.0);
        glVertex3f(1000, 500, 0.0);
    glEnd();


//-----------------------------------------------------------------------------------------


    glColor3f(0.75,0.75,0.75);//Light gray
    glBegin(GL_POLYGON); // Desenha predio direito
        glVertex3f(0, -1000, 0.0);
        glVertex3f(0, 450, 0.0);
        glVertex3f(1000, 500, 0.0);
        glVertex3f(900, -500, 0.0);
    glEnd();

    glColor3f(0.0,0.0,0.0);//black
    glBegin(GL_LINE_LOOP); // Desenha contorno do predio direito
        glVertex3f(0, -1000, 0.0);
        glVertex3f(0, 450, 0.0);
        glVertex3f(1000, 500, 0.0);
        glVertex3f(900, -500, 0.0);
    glEnd();


    glColor3f(0.25,0.25,1.0);//branco
    glBegin(GL_POLYGON); // Desenha da porta esquerda
        glVertex3f(-500, -710, 0.0);
        glVertex3f(-500, 0, 0.0);
        glVertex3f(-700, 0, 0.0);
        glVertex3f(-700, -600, 0.0);
    glEnd();


    glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINE_LOOP); // Desenha contorno da porta esquerda
        glVertex3f(-500, -700, 0.0);
        glVertex3f(-500, 0, 0.0);
        glVertex3f(-700, 0, 0.0);
        glVertex3f(-700, -600, 0.0);
    glEnd();


    glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINES); // Desenha centro da porta esquerda
        glVertex3f(-500, -100, 0.0);
        glVertex3f(-700, -100, 0.0);
        glVertex3f(-600, -100, 0.0);
        glVertex3f(-600, -650, 0.0);
    glEnd();


//-----------------------------------------------------------------------------------------

    glColor3f(0.25,0.25,1.0);//branco
    glBegin(GL_POLYGON); // Desenha da porta direita
        glVertex3f(500, -710, 0.0);
        glVertex3f(500, 0, 0.0);
        glVertex3f(700, 0, 0.0);
        glVertex3f(700, -600, 0.0);
    glEnd();

    glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINE_LOOP); // Desenha contorno da porta direita
        glVertex3f(500, -700, 0.0);
        glVertex3f(500, 0, 0.0);
        glVertex3f(700, 0, 0.0);
        glVertex3f(700, -600, 0.0);
    glEnd();

    glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINES); // Desenha centro da porta direita
        glVertex3f(500, -100, 0.0);
        glVertex3f(700, -100, 0.0);
        glVertex3f(600, -100, 0.0);
        glVertex3f(600, -650, 0.0);
    glEnd();
    glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINES); // Desenha a lateral do predio
        glVertex3f(0, -1000, 0.0);
        glVertex3f(0, 450, 0.0);
    glEnd();


//------------------------------DESENHA JANELAS------------------------------
    glColor3f(1.0,1.0,1.0);//branco
    glBegin(GL_POLYGON); // Desenha A janela esquerda
        glVertex3f(-150, 380, 0.0);
        glVertex3f(-900, 340, 0.0);
        glVertex3f(-900, 200, 0.0);
        glVertex3f(-150, 100, 0.0);
    glEnd();
    glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINE_LOOP); // Desenha o contorno da janela esquerda
        glVertex3f(-150, 380, 0.0);
        glVertex3f(-900, 340, 0.0);
        glVertex3f(-900, 200, 0.0);
        glVertex3f(-150, 100, 0.0);
    glEnd();

    glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINES); // Desenha centro da janela esquerda
        glVertex3f(-300, 380, 0.0);
        glVertex3f(-300, 125, 0.0);
        glVertex3f(-450, 370, 0.0);
        glVertex3f(-450, 130, 0.0);
        glVertex3f(-600, 360, 0.0);
        glVertex3f(-600, 150, 0.0);
        glVertex3f(-750, 350, 0.0);
        glVertex3f(-750, 170, 0.0);
    glEnd();
         glColor3f(1.0,1.0,1.0);//branco
    glBegin(GL_POLYGON); // Desenha A janela esquerda
        glVertex3f(150, 380, 0.0);
        glVertex3f(900, 340, 0.0);
        glVertex3f(900, 200, 0.0);
        glVertex3f(150, 100, 0.0);
    glEnd();
    glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINE_LOOP); // Desenha o contorno da janela esquerda
        glVertex3f(150, 380, 0.0);
        glVertex3f(900, 340, 0.0);
        glVertex3f(900, 200, 0.0);
        glVertex3f(150, 100, 0.0);
    glEnd();
        glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINES); // Desenha centro da janela direita
        glVertex3f(300, 380, 0.0);
        glVertex3f(300, 125, 0.0);
        glVertex3f(450, 370, 0.0);
        glVertex3f(450, 130, 0.0);
        glVertex3f(600, 360, 0.0);
        glVertex3f(600, 150, 0.0);
        glVertex3f(750, 350, 0.0);
        glVertex3f(750, 170, 0.0);

    glEnd();

    glEnd();

        glFlush();
}

void key(unsigned char key, int x, int y)
{
    if( key == 'M' || key == 'm')
        exit(0);
}


// movimentar a tela
void specialKey(int key, int x, int y) {
    switch(key) {
        case GLUT_KEY_LEFT :
            X -= 0.1f;
          break;
        case GLUT_KEY_RIGHT :
            X +=  0.1f;
          break;
        case GLUT_KEY_UP :
            Y += 0.1f;
          break;
        case GLUT_KEY_DOWN :
            Y -= 0.1f;
          break;
    }
}

void resize(int w, int h)
{
    // Especifica as dimensões da Viewport
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    // Define a janela de visualização 2D
    // Inicializa o sistema de coordenadas
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D (-1000, 1000 , -1000 , 1000);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
// Programa Principa
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    // Define do modo de operação da GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // Especifica o tamanho inicial em pixels da janela GLUT
    glutInitWindowSize(1000,1000);
    glutInitWindowPosition(100,100);
    // Cria a janela passando como argumento o título da mesma
    glutCreateWindow("- Perspectiva com tres pontos de fuga - maio/2016");
    glutDisplayFunc(desenha);
    glutSpecialFunc(specialKey);
    glutReshapeFunc(resize);
    glutKeyboardFunc(key);
/*
Inicia a execução do programa OpenGL.
O programa irá executar num loop infinito devendo
o desenvolvedor especificar as condições de saída do mesmo
através de interrupções no próprio programa ou através
de comandos de mouse ou teclado como funções de callback
*/
glutMainLoop();
    return 0;
}




