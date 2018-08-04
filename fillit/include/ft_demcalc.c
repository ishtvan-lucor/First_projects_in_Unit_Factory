/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_demcalc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaporoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:36:44 by azaporoz          #+#    #+#             */
/*   Updated: 2018/04/04 17:38:23 by azaporoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_demcalc(int a, int b, char *sign)
{
	if (sign[1] != '\0')
		return (0);
	else if (sign[0] == '+')
		return (a + b);
	else if (sign[0] == '-')
		return (a - b);
	else if (sign[0] == '*')
		return (a * b);
	else if (sign[0] == '/')
		return (a / b);
	else if (sign[0] == '%')
		return (a % b);
	else
		return (0);
}
