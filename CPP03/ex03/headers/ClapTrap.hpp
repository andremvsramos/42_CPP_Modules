/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andvieir <andvieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:57:29 by andvieir          #+#    #+#             */
/*   Updated: 2023/10/30 11:16:30 by andvieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>

class ClapTrap
{
	private:
		std::string		_name;
		int				_hp;
		int				_mp;
		int				_atk;

	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& original);
		ClapTrap&	operator=(const ClapTrap& original);
		~ClapTrap();
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		std::string	getName() const;
		int			getHP() const;
		int			getMP() const;
		int			getATK() const;
		void		setName(std::string name);
        void		setHP(int amount);
        void		setMP(int amount);
		void		setATK(int amount);
};


#endif