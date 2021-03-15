// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    // поместить сюда текст реализации алгоритма (на С++)
    if (a*b == 0) return a+b;
    if (a < b)
        return gcd(a, b%a);
    else return gcd(a%b, b);
}
