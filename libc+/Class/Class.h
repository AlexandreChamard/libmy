#ifndef CLASS_H
#define CLASS_H

#include <stdlib.h>
#include "Type.h"

typedef struct {
	int	magic;
	bool	virtual;
	size_t	size;
	char	name[16];
	int	nb_methods;
	int	nb_var;
	ptr	motherClass;
	int	nb_child;
	const size_t	__size__;
	const char	*__name__;
	class_type_t	__type__;
	ctor_t		__init__;
	dtor_t		__del__;
	to_string_t	__str__;
	ptr	childName[];
} Class;

#endif
