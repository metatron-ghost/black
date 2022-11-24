#ifndef DOG_H
#define DOG_H

#include <stdio.h>

struct dog
{
  char *name;
  char *owner;
  float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
