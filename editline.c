#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <editline/readline.h>

int main(int argc, char** argv) {

  /* Print Version and Exit Information */
puts("Lispy Version 0.0.0.0.1");
puts("Press Ctrl+c to Exit\n");

  /* In a never ending loop */
while (1) {

    /* Output our prompt and get input */
    char* input = readline("lispy> ");

    /* Add input to history */
    add_history(input);
    const char* ext = "exit";
    if (strcmp(ext,input)==0)
    {    
        puts("FUCK OFF!\n");
        break;
    }
    printf("No you're %s\n", input);

    /* Free retrieved input */
    free(input);

}

return 0;
}