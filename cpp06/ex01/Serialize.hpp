#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <string>

class Data;

class Serialize
{

	public:

		Serialize();
		Serialize( Serialize const & src );
		virtual ~Serialize() = 0;

		Serialize &	operator=( Serialize const & rhs );
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

	private:

};

std::ostream &	operator<<( std::ostream & o, Serialize const & i );

#endif