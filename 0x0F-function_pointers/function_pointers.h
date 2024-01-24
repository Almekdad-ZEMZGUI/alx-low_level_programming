#ifndef _FUNC_POINTERS_H_
#define _FUNC_POINTERS_H_
#include <stddef.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* _FUNC_POINTERS_H_*/
