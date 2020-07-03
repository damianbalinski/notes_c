#include <stdio.h>
#include <locale.h>

int main(void)
{
	struct lconv* locale = localeconv();

	printf("[%s]\n", locale->decimal_point);
	printf("[%s]\n", locale->thousands_sep);
	printf("[%s]\n", locale->grouping);
	printf("[%s]\n", locale->int_curr_symbol);
	printf("[%s]\n", locale->currency_symbol);
	putchar('\n');

	printf("[%s]\n", locale->mon_decimal_point);
	printf("[%s]\n", locale->mon_thousands_sep);
	printf("[%s]\n", locale->mon_grouping);
	printf("[%s]\n", locale->positive_sign);
	printf("[%s]\n", locale->negative_sign);
	putchar('\n');

	printf("[%d]\n", locale->int_frac_digits);
	printf("[%d]\n", locale->frac_digits);
	printf("[%d]\n", locale->p_cs_precedes);
	printf("[%d]\n", locale->p_sep_by_space);
	printf("[%d]\n", locale->n_cs_precedes);
	printf("[%d]\n", locale->n_sep_by_space);
	printf("[%d]\n", locale->p_sign_posn);
	printf("[%d]\n", locale->p_sign_posn);

	return 0;
}