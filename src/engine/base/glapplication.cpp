#include <GL/glew.h> // glew must be included before the main gl libs
#include <GL/glut.h> // doing otherwise causes compiler shouting
#include <iostream>
#include "glapplication.h"
#include "abstractScene.h"

GLApplication::GLApplication(abstractScene & scene){
	mScene = &scene;

	initializeScene();
	initializeCallbacks();
}

GLApplication::~GLApplication(){
	cleanUpScene();
}

void GLApplication::initializeScene(){
	// Initialize glut
    glutInit();
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(mScene->w, mScene->h);
    // Name and create the Window
    glutCreateWindow("Pass Through Shader Test");

    // Now that the window is created the GL context is fully set up
    // Because of that we can now initialize GLEW to prepare work with shaders
    GLenum status = glewInit();
    if( status != GLEW_OK)
    {
        std::cerr << "[F] GLEW NOT INITIALIZED: ";
        std::cerr << glewGetErrorString(status) << std::endl;
        return -1;
    }

    // Handle All Game Callbacks
    initializeCallbacks();

    // Initialize Scene Object
    bool init = mScene->initialize();
    if(init)
    {
        glutMainLoop();
    }
}

void GLApplication::initializeCallbacks(){
	// Set all of the callbacks to GLUT that we need
    glutDisplayFunc(mScene->render);// Called when its time to display
    glutReshapeFunc(mScene->resize);// Called if the window is resized
    glutIdleFunc(mScene->update);// Called if there is nothing else to do
    glutKeyboardFunc(mScene->glutKeyPressEvent);// Called if there is keyboard input
    glutKeyboardUpFunc(mScene->glutKeyReleaseEvent);
    glutMouseFunc(mScene->glutMousClickEvent);
    glutPassiveMotionFunc(mScene->glutMouseMoveEvent);
}

void GLApplication::cleanUpScene(){
	// Delete all objects and Buffers
}