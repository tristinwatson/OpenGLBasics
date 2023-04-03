#include "VAO.h"

VAO::VAO() {
	glGenVertexArrays(1, &ID);
}

void VAO::LinkAttrib(VBO& VBO, GLuint layout, GLuint numComponents, GLenum type, GLsizeiptr stride, void* offset) {
	VBO.Bind();
	// configure the vertex attributes for opengl to read VBO
	glVertexAttribPointer(layout, numComponents, type, GL_FALSE, stride, offset);
	// enables vertex arrayattribute for opengl
	glEnableVertexAttribArray(layout);
	VBO.Unbind();
}

void VAO::Bind() {
	// makes VAO the current vertex array object
	glBindVertexArray(ID);
}

void VAO::Unbind() {
	// unbind VAO
	glBindVertexArray(0);
}

void VAO::Delete() {
	// deletes VAO
	glDeleteVertexArrays(1, &ID);
}