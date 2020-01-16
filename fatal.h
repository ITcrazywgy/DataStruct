//
// Created by Administrator on 2020/1/15 0015.
//

#ifndef DATASTRUCT_FATAL_H
#define DATASTRUCT_FATAL_H

#include <stdio.h>
#include <stdlib.h>

#define FatalError(Str) fprintf(stderr,"%s\n",Str),exit(1)
#define Error(Str) FatalError(Str)





#endif //DATASTRUCT_FATAL_H
