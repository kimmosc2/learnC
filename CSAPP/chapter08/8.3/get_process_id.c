#include <sys/types.h>
#include <unistd.h>

pid_t getpid(void);
pid_t getppid(void);
// getpid and getppid return an integer value of type pid_t,it's define to int type in Linux system.