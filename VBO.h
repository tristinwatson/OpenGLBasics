#ifndef VBO_CLASS_H
#define VBO_CLASS_H

#include <glad/glad.h>

class VBO {
	public:
		GLuint ID;
		// VBO perameters
		VBO(GLfloat* vertices, GLsizeiptr size);

		// VBO cleanup
		void Bind();
		void Unbind();
		void Delete();
};

#endif
