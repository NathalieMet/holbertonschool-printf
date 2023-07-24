_printf(1) Functions Manual _printf(1)

NAME
	_printf

SYNOPSIS

DESCRIPTION
The _printf function produce output according to
a format as described below.  The function _printf()
 write output to stdout, the standard output stream;
The function write the output under the control of a
format string that specifies how subsequent arguments (or
arguments accessed via the variable-length argument facilities of
stdarg(3)) are converted for output.

Format of the format string
The format string is a character string, beginning and ending in
its initial shift state, if any.  The format string is composed
of zero or more directives: ordinary characters (not %), which
are copied unchanged to the output stream; and conversion
specifications, each of which results in fetching zero or more
subsequent argument.  Each conversion specification is
introduced by the character %, and ends with a conversion
specifier.

 Conversion specifiers
A character that specifies the type of conversion to be applied.
The conversion specifiers and their meanings are:

       d, i   The int argument is converted to signed decimal notation.
The precision, if any, gives the minimum number of digits
that must appear; if the converted value requires fewer
digits, it is padded on the left with zeros.  The default
precision is 1.  When 0 is printed with an explicit
precision 0, the output is empty.

	c      the int argument is converted
to an unsigned char, and the resulting character is
written.  If an l modifier is present, the wint_t (wide
character) argument is converted to a multibyte sequence
by a call to the wcrtomb(3) function, with a conversion
state starting in the initial state, and the resulting
multibyte string is written.

 	s      the const char * argument is
expected to be a pointer to an array of character type
(pointer to a string).  Characters from the array are
written up to (but not including) a terminating null byte
('\0'); if a precision is specified, no more than the
number specified are written.  If a precision is given, no
null byte need be present; if the precision is not
specified, or is greater than the size of the array, the
array must contain a terminating null byte.

	RETURN VALUE
Upon successful return, this function return the number of
characters printed (excluding the null byte used to end output to
strings).
If an output error is encountered, a negative value is returned.

