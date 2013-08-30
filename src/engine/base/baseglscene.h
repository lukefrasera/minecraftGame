#include "abstractScene.h"

struct keyEvent{
	char key;
	int x,y;
};
struct mouseEvent{
	int x,y;
};

class basicGLScene : public abstractScene{
public:
	basicScene();
	~basicScene();

public:
	virtual void initialize();
	virtual void update();
	virtual void render();
	virtual void resize(int w, int h);

	virtual void initializeGL();
	virtual void resizeGL(int w , int h);
	virtual void updateGL();
	virtual void drawGL();

	virtual void keyPressEvent();
	virtual void keyReleaseEvent();
	virtual void mousePressEvent();
	virtual void mouseReleaseEvent();
	virtual void mouseMoveEvent();

private:
	// Add openGL Variables to Scene

	// ARRAY OF OBJECTS IN SCENE

}