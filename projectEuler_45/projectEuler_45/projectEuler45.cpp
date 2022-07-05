#include <iostream>

using namespace std;

int main()
{
	unsigned long long t, p, h;
	int count = 0;
	long max = 100000;
	for (long long i = 1; i < max; i++)
	{
		t = i * (i + 1) / 2;                             // Triangle number

		for (long long j = 1; j < max; j++)
		{

			p = j * (3 * j - 1) / 2;                    // Pentagonal number
			if (t == p)
				for (long long k = 1; k < max; k++)
				{

					h = k * (2 * k - 1);                // Hexagonal number
					if (t == h)
					{
						cout << t << endl;
						count++;
					}
					if (count == 3)
						exit(0);
				}
		}
	}
	return EXIT_SUCCESS;
}