 #include<stdio.h>
 #include<conio.h>
 #include<string.h>

 int main ()
 {
     char a[40];
     char b[40];

     printf("Masukkan Kata Pertama :");
     gets(a);

     printf("Masukan Kata Kedua :");
     gets (b);

     strcat(a,b); printf ("\nHasil Gabungan Kata : %s\n", a);

     printf("\nHasil Huruf dikapitalkan :");
     printf("%s\n", strupr(a));

     printf("\nHasil Huruf dikecilkan :");
     printf("%s\n", strlwr(a));

     strcpy(b,a);
     printf("\nHasil copy : %s\n", b);

     strrev(a); printf("\nPerubahan Kata Setelah Dibalik : %s\n", a);

     printf("\nJumlah Huruf pada Seluruh Kata : %d\n",strlen(a));


 }
