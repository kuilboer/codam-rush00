/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: okuilboe <okuilboe@student.codam.com>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/22 11:46:40 by okuilboe      #+#    #+#                 */
/*   Updated: 2025/02/22 17:25:10 by okuilboe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char x);
void	assemble_line(int x, char first_char, char body_char, char last_char);

void	rush(int x, int y)
{
	char	*first_line;
	char	*body_line;
	char	*last_line;

	first_line = "/-\\";
	body_line = "* *";
	last_line = "\\-/";
	assemble_line(x, first_line[0], first_line[1], first_line[2]);
	while (y > 2)
	{
		assemble_line(x, body_line[0], body_line[1], body_line[2]);
		y--;
	}
	if (y > 1)
		assemble_line(x, last_line[0], last_line[1], last_line[2]);
}

void	assemble_line(int x, char first_char, char body_char, char last_char)
{
	int		count;

	ft_putchar(first_char);
	count = 1;
	while (count < x - 1)
	{
		ft_putchar(body_char);
		count++;
	}
	if (x > 1)
		ft_putchar(last_char);
	ft_putchar('\n');
}
