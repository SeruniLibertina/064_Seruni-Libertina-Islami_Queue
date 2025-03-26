#ifndef STACK_H
#define STACK_H

#include "boolean.h"
#include "spnrsll.h"  

typedef address Stack;

void CreateStack (Stack *S);
boolean is_Empty (Stack S);
boolean is_Full (Stack S);
void Push (Stack *S, infotype X);
void Pop (Stack *S, infotype *X);

#endif
