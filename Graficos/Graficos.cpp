// Graficos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#define GLEW_STATIC
#include "GL\glew.h"
#include "GLFW\glfw3.h"

#include <iostream>
using namespace std;
GLfloat red, green, blue;

//Aquí está al cien pa cambiar los valores de las variable de mi programa
void actualizar()
{
	/*
	red += 0.001;
	green += 0.002;
	blue += 0.003;

	if (red > 1) red = 0; 
		if (green > 1) green = 0;
	if (blue > 1) blue = 0;
	*/

}



void dibujar()
{
	glBegin(GL_POLYGON); //CASA

	glColor3f(133.0f / 255.0, 133.0f / 255.0, 133.0f / 255.0);
	glVertex3f(-0.5f, 0.3f, 0.0f);

	glColor3f(133.0f / 255.0, 133.0f / 255.0, 133.0f / 255.0);
	glVertex3f(0.5f, 0.3f, 0.0f);

	glColor3f(133.0f / 255.0, 133.0f / 255.0, 133.0f / 255.0);
	glVertex3f(0.5, -0.8f, 0.0f);

	glColor3f(133.0f / 255.0, 133.0f / 255.0, 133.0f / 255.0);
	glVertex3f(-0.5,-0.8f, 0.0f);

	glEnd(); //Finaliza la rutina.


	glBegin(GL_POLYGON); // Inicia la rituna con un modo de dibujo

	glColor3f(116.0f / 255.0, 116.0f / 255.0, 116.0f / 255.0);
	glVertex3f(-0.5f, 0.3f, 0.0f);

	glColor3f(116.0f / 255.0, 116.0f / 255.0, 116.0f / 255.0);
	glVertex3f(0.5f, 0.3f, 0.0f);

	glColor3f(116.0f / 255.0, 116.0f / 255.0, 116.0f / 255.0);
	glVertex3f(0.0, 0.6f, 0.0f);


	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //ventana1

	glColor3f(188.0f / 255.0, 188.0f / 255.0, 188.0f / 255.0);
	glVertex3f(-0.4f, -0.1f, 0.0f);

	glColor3f(188.0f / 255.0, 188.0f / 255.0, 188.0f / 255.0);
	glVertex3f(-0.4f, 0.1f, 0.0f);

	glColor3f(188.0f / 255.0, 188.0f / 255.0, 188.0f / 255.0);
	glVertex3f(-0.2f, 0.1f, 0.0f);

	glColor3f(188.0f / 255.0, 188.0f / 255.0, 188.0f / 255.0);
	glVertex3f(-0.2f, -0.1f, 0.0f);

	glEnd(); //Finaliza la rutina.

	glBegin(GL_POLYGON); //ventana2

	glColor3f(188.0f / 255.0, 188.0f / 255.0, 188.0f / 255.0);
	glVertex3f(0.4f, 0.1f, 0.0f);

	glColor3f(188.0f / 255.0, 188.0f / 255.0, 188.0f / 255.0);
	glVertex3f(0.4f, -0.1f, 0.0f);

	glColor3f(188.0f / 255.0, 188.0f / 255.0, 188.0f / 255.0);
	glVertex3f(0.2f, -0.1f, 0.0f);

	glColor3f(188.0f / 255.0, 188.0f / 255.0, 188.0f / 255.0);
	glVertex3f(0.2f, 0.1f, 0.0f);

	glEnd(); //Finaliza la rutina.


	glBegin(GL_POLYGON); //puerta

	glColor3f(188.0f / 255.0, 188.0f / 255.0, 188.0f / 255.0);
	glVertex3f(-0.1f, 0.f, 0.0f);

	glColor3f(188.0f / 255.0, 188.0f / 255.0, 188.0f / 255.0);
	glVertex3f(0.1f, -0.3f, 0.0f);

	glColor3f(188.0f / 255.0, 188.0f / 255.0, 188.0f / 255.0);
	glVertex3f(0.1f, -0.3f, 0.0f);

	glColor3f(188.0f / 255.0, 188.0f / 255.0, 188.0f / 255.0);
	glVertex3f(-0.1f, 0.3f, 0.0f);

	glEnd(); //Finaliza la rutina.




}

int main()
{

	//Declaración de ventana.
	GLFWwindow * window;
	//Propiedades de la ventana.
	GLfloat ancho = 1024;
	GLfloat alto = 768;

	//Inicialización de GLFW.
	if (!glfwInit()) 
	{
		//Si no se inició bien, terminar la ejecución.
		exit(EXIT_FAILURE);
	}

	//Inicializar la ventana.
	window = glfwCreateWindow(ancho, alto, "Gráficos", NULL, NULL);
	
	//Verificar si se creó bien la ventana.
	if (!window)
	{
	//Cerrar todos los procesos de GLFW
		glfwTerminate();
		//Terminar ejecución.
		exit(EXIT_FAILURE);
	}

	//Establecer "window" como contexto.
	glfwMakeContextCurrent(window);

	//Se trae las funciones de OpenGL Moderno.
	glewExperimental = true;

	//Inicializar GLEW
	GLenum glewError = glewInit();

	//Verificar que GLEW se inicializó bien.
	if (glewError != GLEW_OK)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	const GLubyte *version = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << version << endl;

	red = green = blue = 0.7f;

	//Ciclo de dibujo.
	while (!glfwWindowShouldClose(window))
	{
		//Establecer el area de render (viewport).
		glViewport(0, 0, ancho, alto);
		//Establecer el color con el que se limpia la pantalla.
		glClearColor(0.0/255.0, 108.0/255.0, 217.0/255.0, 1);

		//Limpiar la pantalla.
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo.
		actualizar();
		dibujar();

		//Intercambio de buffers.
		glfwSwapBuffers(window);

		//Buscar señales de entrada
		glfwPollEvents();

	}

	glfwDestroyWindow(window);
	glfwTerminate();



    return 0;
}

