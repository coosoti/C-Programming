#include "shell.h"
#include <unistd.h>

int execute_command(char **args)
{
    pid_t pid;
    int status;

    if (args == NULL || args[0] == NULL)
    {
        return 1;
    }

    pid = fork();
    if (pid == 0)
    {
        /* child process */
        if (execvp(args[0], args) == -1)
        {
            perror("Error executing command");
        }
        exit(EXIT_FAILURE);
    }
    else if (pid < 0)
    {
        /* error forking */
        perror("Error forking");
    }
    else
    {
        /* parent process */
        do
        {
            waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }

    return 1;
}

