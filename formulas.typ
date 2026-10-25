// Формулы для teambook (аналог formulas.txt из LaTeX-версии).
// Подключается в main.typ через #include "formulas.typ"

= Important formulas

== Ожидание (линейность)
$ M(x_1 + x_2 + dots + x_n) = M(x_1) + M(x_2) + dots + M(x_n) $

== Sums of sequences
- Сумма геометрической прогрессии: $ S_n = (b_1 (1 - q^n)) / (1 - q) $
- Сумма бесконечно убывающей геометрической прогрессии: $ S = b_1 / (1 - q) $
- Сумма арифметической прогрессии: $ S_n = ((a_1 + a_n) / 2) dot n = ((2a_1 + d(n - 1)) / 2) dot n $
- $ 1^2 + 2^2 + 3^2 + dots + n^2 = (n (n + 1) (2n + 1)) / 6 $
- $ 1^3 + 2^3 + 3^3 + dots + n^3 = (n^2 (n + 1)^2) / 4 $

== Calculus
Площадь криволинейного сектора:
$ mu(F) = 1/2 integral_alpha^beta r^2(phi) dif phi $

Интегралы:
1. $ integral sqrt(a^2 - x^2) dif x = x/2 sqrt(a^2 - x^2) + a^2/2 arcsin(x/a) + C $
2. $integral sqrt(x^2 plus.minus a^2) dif x = x/2 sqrt(x^2 plus.minus a^2) plus.minus a^2/2 ln abs(x + sqrt(x^2 plus.minus a^2)) + C$
3. $ integral dif x/(a^2 + x^2) = 1/a arctan(x/a) + C quad (a != 0) $
4. $ integral dif x/(a^2 - x^2) = 1/(2a) ln abs((a + x)/(a - x)) + C quad (a != 0) $
5. $ integral x dif x/(a^2 plus.minus x^2) = plus.minus 1/2 ln abs(a^2 plus.minus x^2) + C $
6. $ integral dif x/sqrt(a^2 - x^2) = arcsin(x/a) + C quad (a != 0) $
7. $ integral dif x/sqrt(x^2 plus.minus a^2) = ln abs(x + sqrt(x^2 plus.minus a^2)) + C $
8. $ integral x dif x/sqrt(a^2 plus.minus x^2) = plus.minus sqrt(a^2 plus.minus x^2) + C $

== Combinatorics
Размещения:
- Без повторений: $ A_n^k = n! / (n - k)! $
- С повторениями: $ overline(A)_n^k = n^k $

Сочетания:
- Без повторений: $ C_n^k = n! / (k! (n - k)!) $
- С повторениями: $ overline(C)_n^k = ((n + k - 1)!) / (k! (n - 1)!) $

Перестановки:
- Без повторений: $ P_n = n! $
- С повторениями: $ P_n(n_1, n_2, dots, n_k) = n! / (n_1! n_2! dots n_k!) $

Тождества:
1. $ C_n^k = C_(n-1)^k + C_(n-1)^(k-1) $
2. $ C_n^k = C_n^(n-k) $

Числа Каталана:

Формула: $ C(n) = ((2n)!) / (n! (n + 1)!) $

Применения:
- Правильные скобочные последовательности из $n$ пар скобок;
- Количество бинарных деревьев с $n$ листьями;
- Количество неизоморфных деревьев из $n$ вершин;
- Триангуляции $n$-угольника;
- Таблицы Юнга размера $2 x n$ (в каждой строке числа возрастают).

Stars and bars:

Количество способов представить число $n$ в виде суммы $k$ неотрицательных слагаемых: $ C_(n + k - 1)^(k - 1) $

Количество способов представить число $n$ в виде суммы $k$ положительных слагаемых: $ C_(n - 1)^(k - 1) $

Сумма произведений всех подмножеств множества $a$: $ (product_(i=1)^n (a_i + 1)) - 1 $ (аналогично формуле Эйлера для подсчёта количества делителей числа)

