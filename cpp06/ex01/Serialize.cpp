#include "Serialize.hpp"

Serialize::Serialize()
{
}

Serialize::Serialize( const Serialize & src )
{
	static_cast<void>(src);
}

Serialize::~Serialize()
{
}

Serialize &				Serialize::operator=( Serialize const & rhs )
{
	static_cast<void>(rhs);
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Serialize const & i )
{
	static_cast<void>(i);
	//o << "Value = " << i.getValue();
	return o;
}


uintptr_t  Serialize::serialize(Data* ptr)
{
	if (!ptr)
		return (0);
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialize::deserialize(uintptr_t raw)
{
	if (!raw)
		return (NULL);
	return reinterpret_cast<Data *>(raw);

}
