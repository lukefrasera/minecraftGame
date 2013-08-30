class abstractScene;

class GLApplication{
public:
	GLApplication(abstractScene & scene);
	~GLApplication();

protected:
	void initializeScene();
	void cleanUpScene();

	// Setup Callbacks
	void initializeCallbacks();

private:
	abstractScene * mScene;
}