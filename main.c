#include <stdio.h>
#define DS_IO_IMPLEMENTATION
#include "ds.h"

int main() {
    char *buffer = NULL;
    ds_io_read_file(NULL, &buffer);

    printf("%s\n", buffer);
}