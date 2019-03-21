/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_integer_table.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/11 20:41:00 by JKCTech        #+#    #+#                */
/*   Updated: 2019/03/11 21:38:07 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void    ft_sort_integer_table(int *tab, int size)
{
    int i;
    int j;
    int temp;

    i = -1;
    while (++i < size)
    {
        j = 0;
        while (++j < size - i)
        {
            if(tab[j-1] > tab[j]) 
            {
                temp = tab[j];
                tab[j] = tab[j-1];
                tab[j-1] = temp;
            }
        }
    }
}
/*
int     main(void)
{
    int     nums[5] = {5,2,3,1,4};

    for (int i = 0; i < 5; i++)
        printf("%d ", nums[i]);

    printf("\n");

    ft_sort_integer_table(nums, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", nums[i]);
        
    printf("\n");
}*/
