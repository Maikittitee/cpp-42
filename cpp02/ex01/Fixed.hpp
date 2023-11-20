#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed(const Fixed &fp);
		~Fixed();
		Fixed & operator = (const Fixed &fp);
		int	getRawBits( void ) const ;
		void	setRawBits( int const raw);
	private:
		int					_raw_bits;
		static const int	_op_bits = 8;
};



#endif