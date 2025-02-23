/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: okuilboe <okuilboe@student.codam.com>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/22 11:46:27 by okuilboe      #+#    #+#                 */
/*   Updated: 2025/02/23 14:14:01 by okuilboe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	create_shape(int char_count, int line_count);
void	assemble_line(int x, char first_char, char body_char, char last_char);
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
void	create_shape(int char_count, int line_count)
{
	char	*first_line;
	char	*body_line;
	char	*last_line;

	first_line = "/-\\";
	body_line = "* *";
	last_line = "\\-/";
	assemble_line(char_count, first_line[0], first_line[1], first_line[2]);
	while (line_count > 2)
	{
		assemble_line(char_count, body_line[0], body_line[1], body_line[2]);
		line_count--;
	}
	if (line_count > 1)
		assemble_line(char_count, last_line[0], last_line[1], last_line[2]);
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
void	assemble_line(int char_count, char first_char, char body_char, char last_char)
{
	int		count;

	ft_putchar(first_char);
	count = 1;
	while (count < char_count - 1)
	{
		ft_putchar(body_char);
		count++;
	}
	if (count > 1)
		ft_putchar(last_char);
	ft_putchar('\n');
}

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