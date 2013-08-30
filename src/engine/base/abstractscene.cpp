#include "abstractscene.h"

abstractScene::abstractScene(){}
abstractScene::~abstractScene(){}

void abstractScene::glutKeyPressEvent(unsigned char key, int x, int y){
	std::cout << "glutKeyPressEvent" << endl;
	keyPressEvent();
}

void abstractScene::glutKeyReleaseEvent(unsigned char key, int x, int y){
	std::cout << "glutKeyReleaseEvent" << endl;
	keyReleaseEvent();
}

void abstractScene::glutMouseMoveEvent(int x, int y){
	std::cout << "glutMouseMoveEvent" << endl;
	mouseMoveEvent();
}

void abstractScene::glutMouseClickEvent(int button, int state, int x, int y){
	std::cout << "glutMouseClickEvent" << endl;
	mouseClickEvent();
}