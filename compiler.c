#include <compiler.h>

int compile_file(const char *filename, const char *output_filename, int flags)
{
    struct compile_process *process = compile_process_create(filename, output_filename, flags);
    if (!process)
        return COMPILER_FAILED_WITH_ERRORS;

    // Perform lexical analysis

    // Perform parsing

    // Perform code generation

    return COMPILER_FILE_COMPILED_OK;
}