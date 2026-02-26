/**
 * sum_to_n - computes the sum of all integers from 1 to n
 * @n: the maximum number to add
 *
 * Return: the sum from 1 to n
 */
int sum_to_n(int n)
{
    int i;
    int sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    return (sum);
}
