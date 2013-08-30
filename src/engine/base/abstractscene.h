/* ABSTRACT SCENE CLASS: This class defines the abstract base class for minecraft scenes to inherit.
// This defines the basee class for glut and GLEW scene setup for app use
*/
#include <string>

class abstractScene{
public:
	abstractScene();
	~abstractScene();

public:
	virtual void initialize() = 0;
	virtual void update() = 0;
	virtual void render() = 0;
	virtual void resize(int w, int h) = 0;

	// Gut Wraper functions
	virtual void glutKeyPressEvent(unsigned char, int, int) = 0;
	virtual void glutKeyReleaseEvent(unsigned char, int, int) = 0;
	virtual void glutMouseMoveEvent() = 0;
	virtual void glutMouseClickEvent() = 0;

protected:

	virtual void keyPressEvent() = 0;
	virtual void keyReleaseEvent() = 0;
	virtual void mousePressEvent() = 0;
	virtual void mouseReleaseEvent() = 0;
	virtual void mouseMoveEvent() = 0;
private:
	// Private Data Members
	string windowtitle;
	bool fullScreen;
}