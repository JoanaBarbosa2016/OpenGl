
/* IF Sudeste MG - Câmpus Rio Pomba
         Computação Gráfica
     Joana D'arc de Paula Barbosa
   Perspectiva com Um Ponto De Fuga
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
    glLoadIdentity();
//-------------------------------------------------------------------------------------
    glTranslatef(X, Y, 0.0f);    //para movimentação da tela
    glutPostRedisplay();
//--------------------------------------------------------------------------------------
    glColor3f(0.0,0.0,0.0);// preto
    glLineWidth(3.0f);  // aumenta a espessura das linha
    glColor3f(0.75,0.75,0.75);//branco
    glBegin(GL_POLYGON); // Desenha quadrado superior
        glVertex3f(-1000, 1000, 0.0);
        glVertex3f(1000, 1000, 0.0);
        glVertex3f(1000, -1000, 0.0);
        glVertex3f(-1000, -1000, 0.0);
    glEnd();
//-----------------------------------------------------------------------------------------
    glColor3f(0.0,0.0,0.);// preto
    glBegin(GL_POLYGON);// Desenha quadredo inferior
        glVertex3f(-100, 100, 0.0);
        glVertex3f(100, 100, 0.0);
        glVertex3f(100, -100, 0.0);
        glVertex3f(-100, -100, 0.0);
    glEnd();
//------------------------------------------------------------------------------------------
    //linhas que darão uma ideia de espaço
    glColor3f(0.0,0.0,0.0);// preto
    glBegin(GL_LINES);
        glVertex3f(-1000, -1000, 0.0);
        glVertex3f(-100, -100, 0.0);
        glVertex3f(1000, -1000, 0.0);
        glVertex3f(100, -100, 0.0);
    glEnd();
//--------------------------------------------------------------------------------------------
    glColor3f(0.0,0.0,0.0);// preto
    glBegin(GL_LINES);
        glVertex3f(-1000, 1000, 0.0);
        glVertex3f(-100, 100, 0.0);
        glVertex3f(1000, 1000, 0.0);
        glVertex3f(100, 100, 0.0);
    glEnd();
//-----------------------------------------------------------------------------------
    glColor3f(0.0,0.0,1.0);// azul
    glBegin(GL_POLYGON); //desenhar janela
        glVertex3f(-550, -350, 0.0);
        glVertex3f(-550,  350, 0.0);
        glVertex3f(-250, 100, 0.0);
        glVertex3f(-250, -100, 0.0);
    glEnd();

    glColor3f(0.0,0.0,0.0);// preto
    glBegin(GL_LINE_LOOP); //desenhar contorno da janela
        glVertex3f(-550, -350, 0.0);
        glVertex3f(-550,  350, 0.0);
        glVertex3f(-250, 100, 0.0);
        glVertex3f(-250, -100, 0.0);
    glEnd();
//-----------------------------------------------------------------------------------
    glColor3f(0.0,0.0,0.0);//branco
    glBegin(GL_LINES); //desenha linha vertical da janela
        glVertex3f(-400, -225, 0);
        glVertex3f(-400, 225, 0);
        glVertex3f(-410, -235, 0);
        glVertex3f(-410, 235, 0);
    glEnd();
//-----------------------------------------------------------------------------------
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON); //desenhar porta
        glVertex3f(900, -900, 0.0);
        glVertex3f(900,  700, 0.0);
        glVertex3f(600, 400, 0.0);
        glVertex3f(600, -600, 0.0);
    glEnd();
//------------------------------------------------------------------------------------
     glColor3f(0.0,0.0,0.0);// preto
     glBegin(GL_LINE_LOOP);//desenhar contorno da porta
        glVertex3f(900, -900, 0.0);
        glVertex3f(900,  700, 0.0);
        glVertex3f(600, 400, 0.0);
        glVertex3f(600, -600, 0.0);
    glEnd();
//-------------------------------------------------------------------------------------
    glColor3f(0.0,0.0,0.0);//preto
    glBegin(GL_POLYGON);// Desenha maçaneta
        glVertex3f(855, 10, 0.0);
        glVertex3f(855, -10, 0.0);
        glVertex3f(870, -15, 0.0);
        glVertex3f(870, 15, 0.0);
    glEnd();
//---------------------------------------------------------------------------------------
    glColor3f(1.0,0.6,0.2);//laranja
    glBegin(GL_POLYGON); //Desenha o teto
        glVertex3f(-1000, 1000, 0.0);
        glVertex3f(-100, 100, 0.0);
        glVertex3f(100, 100, 0.0);
        glVertex3f(1000, 1000, 0.0);
    glEnd();
//----------------------------------------------------------------------------------------
    glColor3f(1.0,1.0,1.0);//branco
    glBegin(GL_POLYGON); //Desenha uma lampada
       glVertex3f(-200, 950, 0.0);
        glVertex3f(200, 950, 0.0);
        glVertex3f(200, 950, 0.0);
        glVertex3f(50, 150, 0.0);
        glEnd();
    glColor3f(1.0,1.0,1.0);//branco
    glBegin(GL_POLYGON); //Desenha uma lampada
       glVertex3f(50, 150, 0.0);
        glVertex3f(-50, 150, 0.0);
        glVertex3f(-50, 150, 0.0);
        glVertex3f(-200, 950, 0.0);
        glEnd();
//----------------------------------------------------------------------------------------

    glColor3f(0.0,0.0,0.0);// preto
        float x=0,y=0;
        while(x <=1000){
        glBegin(GL_LINES);//exibe uma linha a cada dois comandos glVertex;
            glVertex3f(-x, -y, 0.0);
            glVertex3f(x, -y, 0.0);
        glEnd();
        glBegin(GL_LINES);//exibe uma linha a cada dois comandos glVertex;
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(x, -1000, 0.0);
        glEnd();
        glBegin(GL_LINES);//exibe uma linha a cada dois comandos glVertex;
            glVertex3f(0.0, 0.0, 0.0);
            glVertex3f(-x, -1000, 0.0);
        glEnd();
        x+=70;
        y+=70;
    }

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
    glutCreateWindow("- Perspectiva com um ponto de fuga - maio/2016");
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




