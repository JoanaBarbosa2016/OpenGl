/* IF Sudeste MG - Câmpus Rio Pomba
         Computação Gráfica
     Joana D'arc de Paula Barbosa
   Perspectiva com Dois  Pontos De Fuga
*/


#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

static int slices = 16;
static int stacks = 16;



//  movimentação ma tela, setas esq, dir, p/ cima, p/ baixo
GLfloat X = -0.0f;
GLfloat Y = -0.0f;
// Função callback chamada para fazer o desenho
void desenha(void){
    //Limpa a janela de visualização com a cor de fundo especificada
	glClear(GL_COLOR_BUFFER_BIT);

      //Definimos aqui a cor de fundo da janela
    glClearColor(0.0f,0.1f,0.1f,1.0f);
    glLoadIdentity();
//-------------------------------------------------------------------------------------
    glTranslatef(X, Y, 0.0f);    //para movimentação da tela
    glutPostRedisplay();
//--------------------------------------------------------------------------------------

    glColor3f(0.0,0.1,0.0);
    glLineWidth(8.0f);  // aumenta a espessura das linha
    glBegin(GL_POLYGON);//asfalto
    glVertex3f(-1000, -1000, 0.0);
    glVertex3f(-1000, -700, 0.0);
    glVertex3f(1000, -700, 0.0);
    glVertex3f(1000, -1000, 0.0);
    glEnd();

    glColor3f(0.75,0.75,0.75);//Light gray
    glBegin(GL_POLYGON); // Desenha Predio esquerdo
        glVertex3f(-800, -700, 0.0);
        glVertex3f(-800, 250, 0.0);
        glVertex3f(-100, 750, 0.0);
        glVertex3f(-100, -700, 0.0);
        glEnd();
    glColor3f(0.75,0.75,0.75);//Light gray
    glBegin(GL_POLYGON); // Desenha outra parte do  Predio esquerdo
        glVertex3f(-100, -700, 0.0);
        glVertex3f(-100, 750, 0.0);
        glVertex3f(100, 550, 0.0);
        glVertex3f(100, -700, 0.0);
        glEnd();
        glColor3f(0.1,0.0,0.0);//Red
    glBegin(GL_QUADS); // Desenha janelas do  Predio esquerdo
        glVertex3f(-750, -550, 0.0);
        glVertex3f(-750, -350, 0.0);
        glVertex3f(-600, -350, 0.0);
        glVertex3f(-600, -550, 0.0);
        glEnd();
        glColor3f(0.1,0.0,0.0);//Red
    glBegin(GL_QUADS); // Desenha janelas do  Predio esquerdo
        glVertex3f(-750, -300, 0.0);
        glVertex3f(-750, -100, 0.0);
        glVertex3f(-600, -100, 0.0);
        glVertex3f(-600, -300, 0.0);
        glEnd();
        glColor3f(0.1,0.0,0.0);//Red
    glBegin(GL_QUADS); // Desenha janelas do  Predio esquerdo
        glVertex3f(-750, -50, 0.0);
        glVertex3f(-750, 150, 0.0);
        glVertex3f(-600, 150, 0.0);
        glVertex3f(-600, -50, 0.0);
        glEnd();
        glColor3f(0.1,0.0,0.0);//Red
    glBegin(GL_QUADS); // Desenha janelas do  Predio esquerdo
        glVertex3f(-750, 200, 0.0);
        glVertex3f(-750, 250, 0.0);
        glVertex3f(-600, 370, 0.0);
        glVertex3f(-600, 200, 0.0);
        glEnd();
         glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINE_LOOP); // Desenha contorno do Predio esquerdo
        glVertex3f(-800, -700, 0.0);
        glVertex3f(-800, 250, 0.0);
        glVertex3f(-100, 750, 0.0);
        glVertex3f(-100, -700, 0.0);
        glEnd();
        glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINE_LOOP); // Desenha contorno da  outra parte do  Predio esquerdo
        glVertex3f(-100, -700, 0.0);
        glVertex3f(-100, 750, 0.0);
        glVertex3f(100, 550, 0.0);
        glVertex3f(100, -700, 0.0);
        glEnd();
    glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINES);//Desenha Linhas  do predio esquerdo
    glVertex3f(-500, -700, 0.0);
    glVertex3f(-500, 460, 0.0);
    glVertex3f(-400, -700, 0.0);
    glVertex3f(-400, 550, 0.0);
    glVertex3f(-100, -700, 0.0);
    glVertex3f(-100, 750, 0.0);
    glVertex3f(-50, -700, 0.0);
    glVertex3f(-50, 700, 0.0);
    glVertex3f(60, 600, 0.0);
    glVertex3f(60, -700, 0.0);
    glEnd();
     glColor3f(0.1,0.0,0.0);//Red
    glBegin(GL_QUADS);//Desenha Porta  do predio esquerdo
    glVertex3f(-350, -700, 0.0);
    glVertex3f(-350, 450, 0.0);
    glVertex3f(-150, 600, 0.0);
    glVertex3f(-150, -700, 0.0);
    glEnd();
    glColor3f(0.75,0.75,0.75);//Light Gray
    glBegin(GL_LINES);//Desenha Linhas do telhado
    glVertex3f(-800, 250, 0.0);
    glVertex3f(-880, 250, 0.0);
    glVertex3f(-880, 250, 0.0);
    glVertex3f(-100, 850, 0.0);
    glVertex3f(-100, 850, 0.0);
    glVertex3f(200, 550, 0.0);
    glVertex3f(200, 550, 0.0);
    glVertex3f(100, 500, 0.0);
    glEnd();
        glColor3f(0.75,0.75,0.75);//Light gray
    glBegin(GL_POLYGON); // Desenha Predio central
        glVertex3f(100, -700, 0.0);
        glVertex3f(100, 750, 0.0);
        glVertex3f(300, 950, 0.0);
        glVertex3f(400, 850, 0.0);
        glVertex3f(400, -700, 0.0);
        glEnd();
        glColor3f(0.0,0.0,0.0);//Preto
    glBegin(GL_LINE_LOOP); // Desenha contorno do  Predio central
        glVertex3f(100, -700, 0.0);
        glVertex3f(100, 750, 0.0);
        glVertex3f(300, 950, 0.0);
        glVertex3f(400, 850, 0.0);
        glVertex3f(400, -700, 0.0);
        glEnd();
        glColor3f(0.0,0.0,0.0);//Preto
    glBegin(GL_LINES); // Desenha linha do  Predio central
        glVertex3f(245, -700, 0.0);
        glVertex3f(245, 900, 0.0);
        glEnd();
        glColor3f(0.1,0.0,0.0);//Red
    glBegin(GL_QUADS); // Desenha janelas do  Predio central
        glVertex3f(270, -550, 0.0);
        glVertex3f(270, -350, 0.0);
        glVertex3f(380, -350, 0.0);
        glVertex3f(380, -550, 0.0);
        glEnd();
        glColor3f(0.1,0.0,0.0);//Red
    glBegin(GL_QUADS); // Desenha janelas do  Predio central
        glVertex3f(270, -300, 0.0);
        glVertex3f(270, -100, 0.0);
        glVertex3f(380, -100, 0.0);
        glVertex3f(380, -300, 0.0);
        glEnd();
        glColor3f(0.1,0.0,0.0);//Red
    glBegin(GL_QUADS); // Desenha janelas do  Predio central
        glVertex3f(270, -50, 0.0);
        glVertex3f(270, 150, 0.0);
        glVertex3f(380, 150, 0.0);
        glVertex3f(380, -50, 0.0);
        glEnd();
        glColor3f(0.1,0.0,0.0);//Red
    glBegin(GL_QUADS); // Desenha janelas do  Predio central
        glVertex3f(270, 200, 0.0);
        glVertex3f(270, 400, 0.0);
        glVertex3f(380, 400, 0.0);
        glVertex3f(380, 200, 0.0);
        glEnd();
        glColor3f(0.1,0.0,0.0);//Red
    glBegin(GL_QUADS); // Desenha janelas do  Predio central
        glVertex3f(270, 450, 0.0);
        glVertex3f(270, 650, 0.0);
        glVertex3f(380, 650, 0.0);
        glVertex3f(380, 450, 0.0);
        glEnd();
        glColor3f(0.75,0.75,0.75);//Light gray
    glBegin(GL_POLYGON); // Desenha Predio direito
        glVertex3f(400, -700, 0.0);
        glVertex3f(400, 750, 0.0);
        glVertex3f(580, 880, 0.0);
        glVertex3f(850, 400, 0.0);
        glVertex3f(850, -700, 0.0);
        glEnd();
        glColor3f(0.0,0.0,0.0);//Preto
    glBegin(GL_LINE_LOOP); // Desenha  contorno do Predio direito
        glVertex3f(400, -700, 0.0);
        glVertex3f(400, 750, 0.0);
        glVertex3f(580, 880, 0.0);
        glVertex3f(850, 400, 0.0);
        glVertex3f(850, -700, 0.0);
        glEnd();
    glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_LINES);//Desenha Linhas ao meio do predio direito
        glVertex3f(450, -700, 0.0);
        glVertex3f(450, 550, 0.0);
        glVertex3f(450, 550, 0.0);
        glVertex3f(550, 550, 0.0);
        glVertex3f(550, 550, 0.0);
        glVertex3f(550, -700, 0.0);
        glVertex3f(580, -700, 0.0);
        glVertex3f(580, 880, 0.0);
        glEnd();
        glColor3f(0.1,0.0,0.0);//Red
    glBegin(GL_QUADS);//Desenha Porta do predio direito
        glVertex3f(600, -700, 0.0);
        glVertex3f(600, 550, 0.0);
        glVertex3f(800, 200, 0.0);
        glVertex3f(800, -700, 0.0);
        glEnd();


//-----------------------------------------------------------------------------------------

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
    glutCreateWindow("- Perspectiva com dois pontos de fuga - maio/2016");
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




