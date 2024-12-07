#include <iostream>

#include <unistd.h>

#include <sys/wait.h>



int main() {

    pid_t pid = fork();  



    if (pid == 0) {  

        std::cout << "This is the child process with PID " << getpid() << std::endl;

        

        std::cout << "Child: Executing different code!" << std::endl;

    } else {  

        std::cout << "This is the parent process with PID " << getpid() << std::endl;

        

        std::cout << "Parent: Executing different code!" << std::endl;

        wait(NULL);  

    }



    return 0;

}


