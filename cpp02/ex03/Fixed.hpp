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


		// Compare
		bool	operator >(Fixed const &fp);
		bool	operator <(Fixed const &fp);
		bool	operator >=(Fixed const &fp);
		bool	operator <=(Fixed const &fp);
		bool	operator ==(Fixed const &fp);
		bool	operator !=(Fixed const &fp);

		// calculate
		Fixed	operator + (Fixed const &fp) const;
		Fixed	operator - (Fixed const &fp) const;
		Fixed	operator * (Fixed const &fp) const ;
		Fixed	operator / (Fixed const &fp) const;
		
		Fixed&	operator ++ ( void );
		Fixed	operator ++ ( int );
		Fixed&	operator -- ( void );
		Fixed	operator -- ( int );

		static Fixed&	min(Fixed &a, Fixed &b);
		static const Fixed&	min(Fixed const &a, Fixed const &b);
		static Fixed&	max(Fixed &a, Fixed &b);
		static const Fixed&	max(Fixed const &a, Fixed const &b);

	private:
		int					_raw_bits;
		static const int	_op_bits = 8;
};


std::ostream& operator<<(std::ostream& os, const Fixed& fp);
#endif