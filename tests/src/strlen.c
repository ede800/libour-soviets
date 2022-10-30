/*
** Jason Brillante "Damdoshi" -------------------------------------------------
** Pentacle Technologie 2008-2023 ---------------------------------------------
** EFRITS SAS 2022-2023 -------------------------------------------------------
** Hanged Bunny Studio 2014-2021 ----------------------------------------------
** La Caverne aux Lapins Noirs ------------------------------------------------
** ----------------------------------------------------------------------------
** Our Lib --------------------------------------------------------------------
** ----------------------------------------------------------------------------
*/

#include	<stdlib.h>
#include	"ourstring.h"

int		main(void)
{
  assert(our_strlen("abc") == 3);
  assert(our_strlen("abc\0def") == 3);
  assert(our_strlen("") == 0);
  assert(our_strlen(NULL) == 0);
  return (EXIT_SUCCESS);
}
