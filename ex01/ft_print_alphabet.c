#include <unistd.h>
void ft_print_alphabet(void)
{
    char alphabet;
    alphabet = 'a';
    while (alphabet <= 'z')
    {
        write(1, &alphabet, 1);
        alphabet = alphabet + 1;
    }
    write (1,"\n", 1);
}
int main (void)
{
    ft_print_alphabet();
    return(0);
}