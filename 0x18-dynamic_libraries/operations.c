int add(int i, int k);
int sub(int i, int k);
int mul(int i, int k);
int div(int i, int k);
int mod(int i, int k);


/**
 * add - adds two integer
 * @i: first integer to add
 * @k: second integer to add
 * Return: the sum
 */

int add(int i, int k)
{
	return (i + k);
}

/**
 * sub - subtracts two integer
 * @i: first integer to subtract
 * @k: second integer to subtract
 */

int sub(int i, int k)
{
	return (i - k);
}


/**
 * mul - multiplies two integers
 * @i: first integer to multiply
 * @k: second integer to multiply
 */

int mul(int i, int k)
{
	return (i * k);
}

/**
 * div - finds the division of two integers
 * @i: first integer to modulus
 *
 * @k: second integer to modulus
 *
 */

int div(int i, int k)
{
	return (i / k);
}

/**
 * mod - modulus of the two integers
 * @i: first integer
 * @k: second integer
 */

int mod(int i, int k)
{
	return (i % k);
}
