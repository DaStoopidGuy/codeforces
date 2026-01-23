#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void usage(int argc, const char **argv) {
    printf(
        "Usage:\n"
        "%s <source-filename>\n",
        argv[0]
    );
}

int main(int argc, const char **argv) {
    if (argc != 2) {
        usage(argc, argv);
        return 1;
    }

    const char *sourcefile = argv[1];

    system("mkdir -p build/");

    char command[512];
    sprintf(command, "g++ %s -o build/main", sourcefile);
    system(command);

    system("./build/main");

    system("rm -rf build/");

    return 0;
}
