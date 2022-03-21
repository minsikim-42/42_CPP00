#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name) : Hitpoints(10), Energy_points(10), Attack_damage(0)
{
	this->Name = _name;
	std::cout << this->Name << " structor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << this->Name << " destructor called\n";
}

std::string	FragTrap::get_name(void) const
{
	return (this->Name);
}

int			FragTrap::get_hit(void) const
{
	return (this->Hitpoints);
}

int			FragTrap::get_energy(void) const
{
	return (this->Energy_points);
}

int			FragTrap::get_attack(void) const
{
	return (this->Attack_damage);
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap <" << this->Name << \
		"> attack <" << target << ">, causing <" << this->Attack_damage << \
			"> points of damage!\n";
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->Hitpoints -= amount;
	std::cout << "ClapTrap <" << this->Name << \
		"> takes <" << amount << "> damage!\nremain: " << this->Hitpoints << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->Hitpoints += amount;
	std::cout << "ClapTrap <" << this->Name << "> " << amount << " repaire!\nremain: " << this->Hitpoints << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &origin)
{
	this->Name = origin.get_name();
	this->Hitpoints = origin.get_hit();
	this->Energy_points = origin.get_energy();
	this->Attack_damage = origin.get_attack();
	return (*this);
}
