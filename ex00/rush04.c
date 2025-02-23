/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush04.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: okuilboe <okuilboe@student.codam.com>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/23 15:26:53 by okuilboe      #+#    #+#                 */
/*   Updated: 2025/02/23 15:33:56 by okuilboe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);
void	create_shape(int char_count, int line_count, char *pattern);
void	assemble_line(int x, char first_char, char body_char, char last_char);
void	write_error(char *error_message);

/*     rush takes the dimensions of the requested shape.                      */
/*         x = character count (shape width).                                 */
/*         y = number of lines (shape length).                                */
/*         char_pattern = the character blueprint of the shape                */
/*         it then checks the input is between 0 and max_int(2147483647).     */
void	rush(int x, int y)
{
	int		max_size;
	char	*char_pattern;

	char_pattern = "ABCB BCBA";
	max_size = 2147483647;
	if (!((0 < x > max_size) || y < 1))
	{
		create_shape(x, y, char_pattern);
	}
	else
	{
		write_error("error 1: wrong input, The shape dimensions must be \n");
		write_error("between 0 and max_int (2147483647).\n");
	}
}
