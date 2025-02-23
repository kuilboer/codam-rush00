/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: okuilboe <okuilboe@student.codam.com>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/22 11:46:27 by okuilboe      #+#    #+#                 */
/*   Updated: 2025/02/23 15:22:06 by okuilboe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	create_shape(int c_count, int line_count, char *pattern);
void	assemble_line(int x, char first_c, char body_c, char last_c);
void	write_error(char *error_message);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*     create_shape()                                                         */
/*         takes character_width and line_count to control the overal shape   */
/*         dimensions.                                                        */
/*         It also defines the character pattern for each row to be writen    */
/*         for each line the character pattern is send to the assemble_line   */
/*         function for the actual line definition and write_out.             */
void	create_shape(int c_count, int line_count, char *pattern)
{
	char	*first_line;
	char	*body_line;
	char	*last_line;

	assemble_line(c_count, pattern[0], pattern[1], pattern[2]);
	while (line_count > 2)
	{
		assemble_line(c_count, pattern[3], pattern[4], pattern[5]);
		line_count--;
	}
	if (line_count > 1)
		assemble_line(c_count, pattern[6], pattern[7], pattern[8]);
}

/*     assemble_line()                                                        */
/*         takes character_width and character pattern as input               */
/*         It will write_out the first character directly and than loop over  */
/*         the number of characters printing the body character at each pass  */
/*         and stop before the last position                                  */
/*         it then writes out the last character but only if there are any    */
/*         positions left after the pointer                                   */
/*         the actual printing is handled on a char by char basis by the      */
/*         ft_puchar function.                                                */
void	assemble_line(int c_count, char first_c, char body_c, char last_c)
{
	int		count;

	ft_putchar(first_c);
	count = 1;
	while (count < c_count - 1)
	{
		ft_putchar(body_c);
		count++;
	}
	if (count > 1)
		ft_putchar(last_c);
	ft_putchar('\n');
}

/*     write_error()                                                          */
/*         takes a pointer to a variable that stores a message.               */
/*         It then loops over over the individual characters of the message   */
/*         one by one untill it hits the "0 terminator" of the string,        */
void	write_error(char *error_message)
{
	int	position;

	position = 0;
	while (error_message[position] != '\0')
	{
		ft_putchar(error_message[position]);
		position++;
	}
}
