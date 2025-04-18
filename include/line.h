#ifndef PUFFER_LINE_H
#define PUFFER_LINE_H

#include "literal.h"

typedef struct tag_hor_line_s{
 /* y = a */
    num_l a;
}hor_line_s;

typedef struct tag_vert_line_s{
 /* x = a */
    num_l a;
}vert_line_s;

typedef struct tag_linear_func_s{
 /* y = ax + b */
    num_l a;
    num_l b;
}linear_func_s;

#endif
