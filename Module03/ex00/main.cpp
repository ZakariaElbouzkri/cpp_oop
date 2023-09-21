/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:50:46 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/21 12:53:00 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){
	ClapTrap	c1 = ClapTrap("Foo1");
	ClapTrap	c2 = ClapTrap("Foo2");
	
	c1.attack("Foo2");
	c2.attack("Foo1");
	return (0);
}
