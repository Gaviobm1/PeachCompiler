#ifndef PEACHCOMPILER_H
#define PEACHCOMPILER_H

#include <stdio.h>
struct compile_process
{
    int flags;
    struct compile_process_input_file
    {
        FILE *fp;
        const char *abs_path;
    } cfile;

    FILE *ofile;
};

int compile_file(const char *filename, const char *output_filename, int flags);

#endif