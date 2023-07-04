namespace phonk
{
	int sum(int a, int b)
	{
		return a + b;
	}

	int pow(int number, int degree)
	{
		int result = 1;
		if (degree == 0) return 1;
		if (degree == 1) return number;
		if (degree > 1)
		{
			for (int i = 0; i < degree; i++)
			{
				result *= number;
			}
			return result;
		}
	}
}