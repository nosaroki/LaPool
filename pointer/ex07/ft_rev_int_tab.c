void ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void ft_rev_in_tab(int *tab, int size)
{
    int left;
    if (size < 2)
        return ;
    left = -1;
    while(left < --size)
        ft_swap(&tab[left++], &tab[size]);
}
// --size alouer et decrementer
// size-- decrementer et alouer