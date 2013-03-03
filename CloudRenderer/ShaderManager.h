// Abstracts the GLSL shaders. Also stores the shaders.

#ifndef SHADERMANAGER_H
#define SHADERMANAGER_H

class ShaderManager {
public:
	GLuint createFromFile( char* vertexFile, char* fragmentFile );
	void terminate();
private:
	GLuint vertexShader;
	GLuint fragmentShader;
};

#endif
