int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int main(void)
{
    ft_strlen("gkgkgkgkfkfsdfsdf");
    return (0);
}