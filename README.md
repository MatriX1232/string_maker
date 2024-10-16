# Project Title

A brief description of what this project does and who it's for.

## Installation

Clone repo inside root of your project. Built it and use

```sh
https://github.com/MatriX1232/string_maker.git
make -C string_maker
```
Include libstrmaker.a in compilation
```sh
cc main.c libstrmaker.a
```

## Usage
```C
char	*strmaker(char *dest, enum e_TYPE type, void *data, bool b_free);
```
### ```char  *dest```
Pointer to the main string you want to expand

### ```enum e_TYPE  type```
Type of variable of which you want to expand main string

### ```void  *data```
Pointer to data

### ```bool  b_free```
Flag of you want to free main string

```C
#include "strmaker.h"
#include <stdio.h>

int	main()
{
	char	*str = "Hello, World!";
	size_t	num = 42;

	str = strmaker(str, INT, &num, 0);
	str = strmaker(str, HEX, &num, 1);
	str = strmaker(str, PERCENT, NULL, 1);
	str = strmaker(str, POINTER, &num, 1);

	printf("%s\n", str);
	free(str);

	return (0);
}
```
