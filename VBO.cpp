#include "VBO.h"

VBO::VBO(GLfloat* vertices, GLsizeiptr size) {
	glGenBuffers(1, &ID);
	// bind ID by its array buffer
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	// introduce triangle verticies to ID
	glBufferData(GL_ARRAY_BUFFER, size, vertices, GL_STATIC_DRAW);
}

void VBO::Bind() {
	// makes VBO current array buffer
	glBindBuffer(GL_ARRAY_BUFFER, ID);
}

void VBO::Unbind() {
	// unbinds VBO
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void VBO::Delete() {
	// deletes VBO
	glDeleteBuffers(1, &ID);
}