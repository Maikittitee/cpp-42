#include "Serialize.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Serialize::Serialize()
{
}

Serialize::Serialize( const Serialize & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Serialize::~Serialize()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Serialize &				Serialize::operator=( Serialize const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Serialize const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */