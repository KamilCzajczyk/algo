/*
    p - podstawa potęgi 
    n - wykładnik potęgi
*/
int pow_szybkie(int p, int n)
{
    int w = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            w *= p;
        p *= p;
        n /= 2;
    }
    return w;
}

/*
    n - liczba naturalna w systemie p
    p - podstawa systemu dla liczby n w zakresie od 2 do 9
    l - liczba cyfr w n
*/
int p_na_dzies(int n, int p, int l)
{
    int sum = 0;
    int i = 1;
    int *numbers = new int[l];
    do {
        numbers[i - 1] = n % 10;
        n /= 10;
        i++;
    } while (n);
    for (int i = 0; i < l; i++)
        sum += numbers[i] * pow_szybkie(p, i);
    delete[] numbers;
    return sum;
}
