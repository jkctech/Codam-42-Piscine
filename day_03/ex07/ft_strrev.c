/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: JKCTech <admin@jkctech.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/11 20:04:17 by JKCTech        #+#    #+#                */
/*   Updated: 2019/03/11 20:28:13 by JKCTech       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrev(char *str)
{
    int     len;
    int     i;
    char    c;

    len = 0;
    while (str[len] != '\0')
        len++;
    i = 0;
    while (i < --len)
    {
        c = str[i];
        str[i] = str[len];
        str[len] = c;
        i++;
    }
    return (str);
}
