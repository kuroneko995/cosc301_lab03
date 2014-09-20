#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv) {
    char *s = "I am a process!";
    int value = 100;

    pid_t pid = fork();
    if (pid == 0) {
        s = "Or am I?";
        value -= 50;
    } else {
        s = "Who are you?";
        value += 50;
    }

    printf("%s %d\n", s, value);
    return 0;
}
