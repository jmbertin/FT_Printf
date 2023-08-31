#include "ft_printf.h"
#include <stdio.h>

void	compare_outputs(const char *format, ...)
{
	va_list		list;
	int			len1, len2;
	char		buffer[512];
	va_start(list, format);
	vsnprintf(buffer, sizeof(buffer), format, list);
	len1 = ft_printf("ft_printf : %s", buffer);
	len2 = printf("printf    : %s", buffer);
	va_end(list);
	if (len1 != len2)
		printf("Return error : ft_printf = %d, printf = %d\n", len1 - 13, len2 - 13);
	else
		printf("Return OK : %d\n", len1 - 13);
	printf("\n");
}

int	main(void)
{
	char			*str = "Hello, world!";
	int				number = -12345;
	char			ch = 'A';
	unsigned int	unumber = 12345;
	unsigned int	hex_val = 0x1a2b3c4d;
	void			*ptr = &number;

	compare_outputs("%s\n", str);
	compare_outputs("%d\n", number);
	compare_outputs("%i\n", number);
	compare_outputs("%c\n", ch);
	compare_outputs("%u\n", unumber);
	compare_outputs("%x\n", hex_val);
	compare_outputs("%X\n", hex_val);
	compare_outputs("%p\n", ptr);

	return (0);
}
