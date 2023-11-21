#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed(const Fixed &fp);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();

		Fixed & operator = (const Fixed &fp);
		int		getRawBits( void ) const ;
		void	setRawBits( int const raw);
		int		toInt( void ) const ;
		float	toFloat( void ) const ;


	private:
		int					_raw_bits;
		static const int	_op_bits = 8;
};


std::ostream& operator<<(std::ostream& os, const Fixed& fp);

#endif