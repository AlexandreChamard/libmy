


#ifndef CLASS_H
#define CLASS_H

typedef struct {
	int 	magic;
	bool	virtual;
	size_t 	size;
	str	name;
	int	nb_methods;
	int	nb_var;
	ptr 	motherClass;
	int	nb_child;
	ptr	childName[];	
} Class;

#endif
