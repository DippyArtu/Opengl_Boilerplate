/* *********************************** */
/*                                     */
/*      opengl project                 */
/*                                     */
/*      Created by Artur Makhnach      */
/*      github.com/DippyArtu           */
/*      artum.me                       */
/*                                     */
/* *********************************** */

#include "opengl.h"

void 						createVBO(t_gl *gl, GLsizeiptr size, GLfloat *points)
{
	glGenBuffers(1, &gl->vbo);
	glBindBuffer(GL_ARRAY_BUFFER, gl->vbo);
	glBufferData(GL_ARRAY_BUFFER, size, points, GL_STATIC_DRAW);
}

void						createVAO(t_gl *gl)
{
	glGenVertexArrays(1, &gl->vao);
	glBindVertexArray(gl->vao);
}
