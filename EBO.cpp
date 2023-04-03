#include "EBO.h"

EBO::EBO(GLuint* indices, GLsizeiptr size) {
	glGenBuffers(1, &ID);
	// bind ID by its array buffer
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
	// introduce triangle verticies to ID
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, size, indices, GL_STATIC_DRAW);
}

void EBO::Bind() {
	// makes ebo current element array
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ID);
}

void EBO::Unbind() {
	// unbind ebo
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}

void EBO::Delete() {
	// deletes EBO
	glDeleteBuffers(1, &ID);
}