int gcd_recursive(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return gcd_recursive(y, x % y);
    }
}
