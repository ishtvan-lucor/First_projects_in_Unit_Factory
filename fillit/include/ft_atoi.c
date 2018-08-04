/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 14:57:12 by azaporoz          #+#    #+#             */
/*   Updated: 2018/03/29 19:59:24 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int						i;
	unsigned long long int	res;
	int						min;

	i = 0;
	res = 0;
	min = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i - 1] == '-')
		min *= -1;
	while (str[i] != '\0' && (((str[i] - '0') >= 0) && (str[i] - '0') < 10))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (res > 9223372036854775807 && min == -1)
		return (0);
	else if (res > 9223372036854775807)
		return (-1);
	return (res * min);
}
