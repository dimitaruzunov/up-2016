Упражнение 6
============

Разгледани теми на упражнението
-------------------------------
[Слайдове](https://speakerdeck.com/dimitaruzunov/uvod-v-proghramiranieto-6)

Еднакви прости делители
-----------------------
Да се напише функция, която проверява дали
две числа имат едни и същи прости делители.

[Решение](same-prime-factors.cpp)

Степенуване
-----------
Напишете рекурсивна функция, която повдига дробно число на цяла степен.

За целта може да използвате следната дефиниция на функцията степенуване:
> x<sup>0</sup> = 1  
> x<sup>n</sup> = x.x<sup>n-1</sup>, за n > 0

[Решение](pow.cpp)

Бързо степенуване
-----------------
Напишете рекурсивна функция, която повдига дробно число на цяла степен,
като използвате следната дефиниция на функцията степенуване:
> x<sup>0</sup> = 1  
> x<sup>n</sup> = (x<sup>n/2</sup>)<sup>2</sup>, за n – четно, n > 0  
> x<sup>n</sup> = x.(x<sup>(n-1)/2</sup>)<sup>2</sup>, за n – нечетно, n > 0

[Решение](fast-pow.cpp)
