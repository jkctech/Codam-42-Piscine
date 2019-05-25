/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pointerInfo.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoopman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/07 14:05:43 by jkoopman      #+#    #+#                 */
/*   Updated: 2019/02/07 14:05:47 by jkoopman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int num;
	int *ptr;

	num = 69;
	ptr = &num;
	printf("int num;\nint *ptr;\n\nnum = 69;\nptr = &num;\n\n");
	printf("%d (num) Value of variable itself\n", num);
	printf("%d (ptr) Address of num\n", ptr);
	printf("%d (&ptr) Address of the pointer ptr\n", &ptr);
	printf("%d (*ptr) The value of num (Pointer to num)\n", *ptr);
	return (0);
}