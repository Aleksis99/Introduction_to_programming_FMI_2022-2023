
# Функций от по-висок ред

## Дефиниция:
### Фукций които приемат и/или връщат функций като аргумент

## Подаваме ма функция като аргумент


   ```c++
    int tripple(int n) {
	return 3 * n;
	}

	int applyTwice(int n, int (*func)(int))
	{
		return func(func(n));
	}

	int main()
	{
		cout << applyTwice(5, tripple); // 45
	}
```

## Връщане ма функция като аргумент
   ```c++
    int triple(int n) {
    return n * 3;
	}

	int powerOf2(int n) {
	    return n * n;
	}

	int (*bigger(int n, int (*func1)(int), int (*func2)(int)))(int) {
	    if (func1(n) > func2(n))
	    {
	        return func1;
	    }

	    return func2;
	}

	int main()
	{
    	cout <<   bigger(5, triple, powerOf2) << endl; 		// ???
    	cout << (*bigger(5, triple, powerOf2))(5) << endl; 	// 25
    	cout << (*bigger(1, triple, powerOf2))(1) << endl; 	// 3
	}
```



## Примери

 - Map
 - accumulate (sum, Product, max, min)
 - filter
 - sort

<h3>Задачи</h3>

**Задача 1:** Алгоритъмът за компресия Run Length Encoding (RLE) компресира символни низове, несъдържащи цифри, като замести всяка непрекъсната последователност от еднакви символи X в тях с низа XN, където N е дължината на последователността. Единичните символи не се заменят.

*Вход: “wwwwaaadexxxxxxywwwaa”, Изход: “w4a3dеx6yw3a2”*


