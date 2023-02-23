/**
 * _isdigit - check for digit
 *
 * @c: var to be checked
 *
 * Return: 0 if it works
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
