#include <iostream>

char *make_upper(char *str)
{
    int len = 0;

    if (!str)
        return (NULL);
    while (str[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        str[i] = std::toupper(str[i]);
    }
    return (str);
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    for (int i = 1; i < argc; i++)
    {
        std::cout << make_upper(argv[i]);
    }
}