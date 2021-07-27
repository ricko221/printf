#include "holberton.h"
#include "holberton.h"

/**
 * _printf - prints output according to format
 * @format: string being passed
 * Return: char to be printed
 */
int _printf(const char *format, ...)
{
  va_list list;
  int a = 0;

  fmt_t ops[] = {
		 {"c", ch},
		 {"s", str},
		 {"d", _int},
		 {"b", _bin},
		 {"i", _int},
		 {"u", _ui},
		 {"o", _oct},
		 {"x", _hex_l},
		 {"X", _hex_u},
		 {"R", _rot13},
		 {NULL, NULL}
  };

  if (format == NULL)
    return (-1);
  va_start(list, format);
  a = print_op(format, ops, list);
  va_end(list);
  return (a);
}
