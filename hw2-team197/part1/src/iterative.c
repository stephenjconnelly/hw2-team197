int gcd_iterative(int x, int y) {
    if (x == 0) {
        return y;
    }
    if (y == 0) {
        return x; 
    }
    int gcd;
    int r; //remainder
    //do euclid's algorithm
    do {
        r = x % y;
        gcd = y;
        x = y;
        y = r;
    } while (r != 0);
    return gcd;
}
