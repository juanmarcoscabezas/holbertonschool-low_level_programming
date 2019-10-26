#include <unistd.h>

int main()
{
    char *s = "Hello, Holberton\n";
    
    write(1, s, 18);
    return 0;
}
