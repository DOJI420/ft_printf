#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "ft_printf.h"

int	main(void)
{
	int a;
	int b;

	printf("\n========== TEST 01: NULL integer ==========\n");
	a = printf("%i", NULL);
	b = ft_printf("%i", NULL);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 02: NULL string ==========\n");
	a = printf("%s", NULL);
	b = ft_printf("%s", NULL);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 03: NULL format ==========\n");
	a = printf(NULL);
	b = ft_printf(NULL);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 04: Unknown conversion ==========\n");
	a = printf("%q");
	b = ft_printf("%q");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 05: Incomplete conversion ==========\n");
	a = printf("Hello%");
	b = ft_printf("Hello%");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 06: Empty format ==========\n");
	a = printf("");
	b = ft_printf("");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 07: Empty string ==========\n");
	a = printf("%s", "");
	b = ft_printf("%s", "");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 08: NULL character ==========\n");
	a = printf("%c", '\0');
	b = ft_printf("%c", '\0');
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 09: Zero integer ==========\n");
	a = printf("%d", 0);
	b = ft_printf("%d", 0);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 10: Negative integer ==========\n");
	a = printf("%d", -42);
	b = ft_printf("%d", -42);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 11: INT_MAX ==========\n");
	a = printf("%d", INT_MAX);
	b = ft_printf("%d", INT_MAX);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 12: INT_MIN ==========\n");
	a = printf("%d", INT_MIN);
	b = ft_printf("%d", INT_MIN);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 13: Unsigned zero ==========\n");
	a = printf("%u", 0);
	b = ft_printf("%u", 0);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 14: Negative unsigned ==========\n");
	a = printf("%u", -1);
	b = ft_printf("%u", -1);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 15: UINT_MAX ==========\n");
	a = printf("%u", UINT_MAX);
	b = ft_printf("%u", UINT_MAX);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 16: Hexadecimal zero ==========\n");
	a = printf("%x", 0);
	b = ft_printf("%x", 0);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 17: Hexadecimal UINT_MAX ==========\n");
	a = printf("%x", UINT_MAX);
	b = ft_printf("%x", UINT_MAX);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 18: Uppercase hexadecimal ==========\n");
	a = printf("%X", 255);
	b = ft_printf("%X", 255);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 19: NULL pointer ==========\n");
	a = printf("%p", NULL);
	b = ft_printf("%p", NULL);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 20: Valid pointer ==========\n");
	a = printf("%p", &a);
	b = ft_printf("%p", &a);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 21: Space character ==========\n");
	a = printf("%c", ' ');
	b = ft_printf("%c", ' ');
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 22: Multiple percent signs ==========\n");
	a = printf("%%%%%%");
	b = ft_printf("%%%%%%");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 23: Consecutive conversions ==========\n");
	a = printf("%d%d%d", 1, 2, 3);
	b = ft_printf("%d%d%d", 1, 2, 3);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 24: No conversions ==========\n");
	a = printf("Hello World!");
	b = ft_printf("Hello World!");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 25: Conversion at beginning ==========\n");
	a = printf("%dHello", 42);
	b = ft_printf("%dHello", 42);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 26: Conversion at end ==========\n");
	a = printf("Hello%d", 42);
	b = ft_printf("Hello%d", 42);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 27: Extra arguments ==========\n");
	a = printf("Hello", 42, "test");
	b = ft_printf("Hello", 42, "test");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 28: Missing arguments (UB) ==========\n");
	a = printf("%p");
	b = ft_printf("%p");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 29: Wrong argument type (UB) ==========\n");
	a = printf("%d", "hello");
	b = ft_printf("%d", "hello");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	printf("\n========== TEST 30: Mixed conversions ==========\n");
	a = printf("%c %s %p %d %i %u %x %X %%",
			'A', "test", &a, INT_MIN, INT_MAX, UINT_MAX, 255, 255);
	b = ft_printf("%c %s %p %d %i %u %x %X %%",
			'A', "test", &a, INT_MIN, INT_MAX, UINT_MAX, 255, 255);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

		// 31. Multiple empty strings
	printf("\n========== TEST 31: Multiple empty strings ==========\n");
	a = printf("%s%s%s", "", "", "");
	b = ft_printf("%s%s%s", "", "", "");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 32. Multiple NULL pointers
	printf("\n========== TEST 32: Multiple NULL pointers ==========\n");
	a = printf("%p %p %p", NULL, NULL, NULL);
	b = ft_printf("%p %p %p", NULL, NULL, NULL);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 33. Negative character value
	printf("\n========== TEST 33: Negative character ==========\n");
	a = printf("%c", -1);
	b = ft_printf("%c", -1);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 34. Character with value 127
	printf("\n========== TEST 34: Character 127 ==========\n");
	a = printf("%c", 127);
	b = ft_printf("%c", 127);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 35. Character with value 200
	printf("\n========== TEST 35: Character 200 ==========\n");
	a = printf("%c", 200);
	b = ft_printf("%c", 200);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 36. String with spaces
	printf("\n========== TEST 36: String with spaces ==========\n");
	a = printf("%s", "Hello     World");
	b = ft_printf("%s", "Hello     World");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 37. String with newline
	printf("\n========== TEST 37: String with newline ==========\n");
	a = printf("%s", "Hello\nWorld");
	b = ft_printf("%s", "Hello\nWorld");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 38. String with tab
	printf("\n========== TEST 38: String with tab ==========\n");
	a = printf("%s", "Hello\tWorld");
	b = ft_printf("%s", "Hello\tWorld");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 39. Long string
	printf("\n========== TEST 39: Long string ==========\n");
	a = printf("%s", "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
	b = ft_printf("%s", "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 40. Repeated same conversion
	printf("\n========== TEST 40: Repeated conversions ==========\n");
	a = printf("%d %d %d %d %d", 42, 42, 42, 42, 42);
	b = ft_printf("%d %d %d %d %d", 42, 42, 42, 42, 42);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 41. Alternating positive and negative
	printf("\n========== TEST 41: Alternating integers ==========\n");
	a = printf("%d %i %d %i", 42, -42, 0, -1);
	b = ft_printf("%d %i %d %i", 42, -42, 0, -1);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 42. Same number in different formats
	printf("\n========== TEST 42: Same number ==========\n");
	a = printf("%d %i %u %x %X", 255, 255, 255, 255, 255);
	b = ft_printf("%d %i %u %x %X", 255, 255, 255, 255, 255);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 43. Zero in every numeric conversion
	printf("\n========== TEST 43: All numeric zeros ==========\n");
	a = printf("%d %i %u %x %X", 0, 0, 0, 0, 0);
	b = ft_printf("%d %i %u %x %X", 0, 0, 0, 0, 0);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 44. Negative unsigned values
	printf("\n========== TEST 44: Negative unsigned values ==========\n");
	a = printf("%u %u %u", -1, -42, -100);
	b = ft_printf("%u %u %u", -1, -42, -100);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 45. Multiple characters
	printf("\n========== TEST 45: Multiple characters ==========\n");
	a = printf("%c%c%c%c%c", 'A', 'B', 'C', 'D', 'E');
	b = ft_printf("%c%c%c%c%c", 'A', 'B', 'C', 'D', 'E');
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 46. Mixed text and percent
	printf("\n========== TEST 46: Text and percent ==========\n");
	a = printf("100%% complete!");
	b = ft_printf("100%% complete!");
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 47. Consecutive different conversions
	printf("\n========== TEST 47: Adjacent conversions ==========\n");
	a = printf("%c%s%d%u%x", 'A', "hello", -42, 42, 42);
	b = ft_printf("%c%s%d%u%x", 'A', "hello", -42, 42, 42);
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);

	// 48. Pointer to integer
	printf("\n========== TEST 48: Pointer to integer ==========\n");
	{
		int value = 42;

		a = printf("%p", (void *)&value);
		b = ft_printf("%p", (void *)&value);
		printf("\n[printf: %d | ft_printf: %d]\n", a, b);
	}

	// 49. String containing a null character
	printf("\n========== TEST 49: String with embedded NULL ==========\n");
	{
		char str[] = {'A', 'B', '\0', 'C', 'D', '\0'};

		a = printf("%s", str);
		b = ft_printf("%s", str);
		printf("\n[printf: %d | ft_printf: %d]\n", a, b);
	}

	// 50. Multiple conversions with NULL character
	printf("\n========== TEST 50: Embedded NULL character ==========\n");
	a = printf("A%cB%cC", '\0', '\0');
	b = ft_printf("A%cB%cC", '\0', '\0');
	printf("\n[printf: %d | ft_printf: %d]\n", a, b);
	return (0);
}