#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>

int main(int argc, char **argv)
{
    char *cmd[] = { "/bin/ls", "-ltr", ".", NULL };

    if (execv(cmd[0], cmd) < 0) {
        fprintf(stderr, "execv failed: %s\n", strerror(errno));
    }
    printf("This should print to the screen, right?\n");

    return 0;
}

