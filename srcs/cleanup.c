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

void 						clean_up(t_gl *gl)
{
	if (gl)
	{
		if (gl->points != NULL)
			free(gl->points);
		free(gl);
	}
}
