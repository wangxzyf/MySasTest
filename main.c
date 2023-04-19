#include <stdio.h>
#include <string.h>

int main() {
    char source[50] = "Hello World! This is a buffer overflow test.";
    char data[10];
    /* POTENTIAL FLAW: data may not have enough space to hold source */
    strcpy(data, source);
    printf("data=%s\n", data);
    return 0;
}
