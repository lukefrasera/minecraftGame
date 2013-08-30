#include "basesglcene.h"
#include <GL/glew.h> // glew must be included before the main gl libs
#include <GL/glut.h> // doing otherwise causes compiler shouting
#include <iostream>

void basicGLScene::initialize(){}
void basicGLScene::update(){}
void basicGLScene::render(){}
void basicGLScene::resize(){}

void basicGLScene::initializeGL(){}
void basicGLScene::resizeGL(){}
void basicGLScene::updateGL(){}
void basicGLScene::drawGL(){}

void basicGLScene::keyPressEvent(){
	std::cout << "keyPressEvent" << endl;
}
void basicGLScene::keyReleaseEvent(){
	std::cout << "keyReleaseEvent" << endl;
}
void basicGLScene::mousePressEvent(){
	std::cout << "mousePressEvent" << endl;
}
void basicGLScene::mouseReleaseEvent(){
	std::cout << "mouseReleaseEvent" << endl;
}