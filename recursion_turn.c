#include <stdio.h>
#include <stdlib.h>

void function(char* ch, int index) {
    if (ch[index] == '\0')
        return;
    else {
        function(ch, index + 1);
    }
    printf("%c ", ch[index]);
}

int main(void) {
    char* ch = "HelloWorld!";
    function(ch, 0);

    exit(0);
}
