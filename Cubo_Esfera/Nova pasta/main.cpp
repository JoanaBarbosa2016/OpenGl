/*JOANA D'ARC DE PAULA BARBOSA
    COMPUTAÇÃO GRÁFICA - 2016*/

#include <windows.h>
#include <gl/glut.h>

GLfloat angle, fAspect;


// Função callback chamada para fazer o desenho
void Desenha(void)
{
    //limpa a janela  e o depth buffer
	glClear(GL_COLOR_BUFFER_BIT);
	//habilita o uso de iluminação
	glEnable(GL_LIGHTING);
	//aplico uma cor no ambiente da figura mudando a cor da figura
	const GLfloat LuzAmbiente[]={0.33,0.33,0.33,1.0};
	//Ativo o uso da luz ambiente
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, LuzAmbiente);
    //habilita a definição da cor da figura a partir  da cor corrente
	glEnable(GL_COLOR_MATERIAL);

	// Desenha um cubo
	glBegin(GL_POLYGON);
        // Face posterior
        glColor3f(1.0f, 0.0f, 0.94f);
		glNormal3f(0.0, 0.0, 1.0);
		glVertex3f(60.0, 60.0, 60.0);
		glVertex3f(-60.0, 60.0, 60.0);
		glVertex3f(-60.0, -60.0, 60.0);
		glVertex3f(60.0, -60.0, 60.0);
		glEnd();
		// Face frontal
		glBegin(GL_POLYGON);
		glColor3f(0.0f, 1.0f, 0.0f);
		glNormal3f(0.0, 0.0, -1.0);
		glVertex3f(60.0, 60.0, -60.0);
		glVertex3f(60.0, -60.0, -60.0);
		glVertex3f(-60.0, -60.0, -60.0);
		glVertex3f(-60.0, 60.0, -60.0);
		glEnd();
		// Face lateral esquerda
		glBegin(GL_POLYGON);
		glColor3f(0.0f, 0.0f, 1.0f);
		glNormal3f(-1.0, 0.0, 0.0);
		glVertex3f(-60.0, 60.0, 60.0);
		glVertex3f(-60.0, 60.0, -60.0);
		glVertex3f(-60.0, -60.0, -60.0);
		glVertex3f(-60.0, -60.0, 60.0);
		glEnd();
		// Face lateral direita
		glBegin(GL_POLYGON);
		glColor3f(0.85f, 0.75f, 0.85f);
		glNormal3f(1.0, 0.0, 0.0);
		glVertex3f(60.0, 60.0, 60.0);
		glVertex3f(60.0, -60.0, 60.0);
		glVertex3f(60.0, -60.0, -60.0);
		glVertex3f(60.0, 60.0, -60.0);
		glEnd();
		// Face superior
		glBegin(GL_POLYGON);
		glColor3f(0.73f, 0.33f, 0.83f);
		glNormal3f(0.0, 1.0, 0.0);
		glVertex3f(-60.0, 60.0, -60.0);
		glVertex3f(-60.0, 60.0, 60.0);
		glVertex3f(60.0, 60.0, 60.0);
		glVertex3f(60.0, 60.0, -60.0);
		glEnd();
		// Face inferior
		glBegin(GL_POLYGON);
		glColor3f(0.69f, 0.93f, 0.93f);
		glNormal3f(0.0, -1.0, 0.0);
		glVertex3f(-60.0, -60.0, -60.0);
		glVertex3f(60.0, -60.0, -60.0);
		glVertex3f(60.0, -60.0, 60.0);
		glVertex3f(-60.0, -60.0, 60.0);
	glEnd();
	glColor3f(1.0f, 0.0f, 0.0f);
	glutWireSphere(40,50,50);
	glutSwapBuffers();
}

// Inicializa parâmetros de rendering
void Inicializa (void)
{
    //define a cor da janela com a cor corrente(preta)
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    angle=35;
}

// Função usada para especificar o volume de visualização
void EspecificaParametrosVisualizacao(void)
{
	// Especifica sistema de coordenadas de projeção
	glMatrixMode(GL_PROJECTION);
	// Inicializa sistema de coordenadas de projeção
	glLoadIdentity();

	// Especifica a projeção perspectiva
	gluPerspective(angle,fAspect,0.1,500);

	// Especifica sistema de coordenadas do modelo
	glMatrixMode(GL_MODELVIEW);
	// Inicializa sistema de coordenadas do modelo
	glLoadIdentity();

	// Especifica posição do observado e do alvo
    //posição câmera, 1 gira horizontal 2 giro vertical 3 zoom
	//posição alvo, 1 translação de câmera eixo x esquerda 2 translação de câmera eixo y 3 translação de câmera eixo x esquerda
    //vista de cima, 1 rotação anti-horária 2  2 inclinação 3d
    gluLookAt(100,100,300, 0,0,0, 0,1,0);
}

// Função callback chamada quando o tamanho da janela é alterado
void AlteraTamanhoJanela(GLsizei w, GLsizei h)
{
	// Para previnir uma divisão por zero
	if ( h == 0 ) h = 1;

	// Especifica o tamanho da viewport
	glViewport(0, 0, w, h);

	// Calcula a correção de aspecto
	fAspect = (GLfloat)w/(GLfloat)h;

	EspecificaParametrosVisualizacao();
}

// Função callback chamada para gerenciar eventos do mouse
void GerenciaMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
		if (state == GLUT_DOWN) {  // Zoom-in
			if (angle >= 10) angle -= 5;
		}
	if (button == GLUT_RIGHT_BUTTON)
		if (state == GLUT_DOWN) {  // Zoom-out
			if (angle <= 130) angle += 5;
		}
	EspecificaParametrosVisualizacao();
	glutPostRedisplay();
}

// Programa Principal
int main(void)
{
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1000,1000);
	glutCreateWindow("Cubo 3D com uma Esfera");
	glutDisplayFunc(Desenha);
	glutReshapeFunc(AlteraTamanhoJanela);
	glutMouseFunc(GerenciaMouse);
	Inicializa();
	glutMainLoop();
}
