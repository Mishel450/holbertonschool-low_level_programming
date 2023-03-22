#include "funcion_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - see in the arrays. 
 * @array: .
 * @size: is the size of the array.
 * @action: it points  at a funcion array_iterator.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
(action)(array);
size = 0;
}
