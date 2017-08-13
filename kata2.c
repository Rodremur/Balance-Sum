/*-------------------------------------------------------
 * Tarea de Programación Avanzada: Kata 2
 * Fecha: 31-08-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */
int balanceSum(int A_size, int* A) {
    int B[A_size];
    int i, sumleft, sumright, mid;
    mid = A_size/2;
    B[0] = A[0];
    for (i=1; i < A_size; i++) {
        B[i] = B[i-1] + A[i];
    }
    while(1) {
        sumleft = B[mid-1];
        sumright = B[A_size-1] - B[mid];
        if (sumleft < sumright) mid = mid+1;
        if (sumleft > sumright) mid = mid-1;
        if (sumleft == sumright) return mid+1;
    }
}