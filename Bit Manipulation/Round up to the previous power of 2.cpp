/*
 * Round up to the previous power of 2
 */

unsigned findPreviousPowerOf2(unsigned n)
{
    // do till only one bit is left
    while (n & n - 1) {
        n = n & n - 1;    // unset rightmost bit
    }
 
    // `n` is now a power of two (less than or equal to `n`)
    return n;
}