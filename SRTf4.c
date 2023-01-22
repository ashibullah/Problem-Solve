#include <stdio.h>
#include <string.h>

int main()
{
   int b1, b2, b3, a1, a2, a3, r1, r2, r3, c = 0, total;
   puts("Enter Attival & Burst of p1");
   scanf("%d %d", &a1, &b1);
   puts("Enter Attival & Burst of p2");
   scanf("%d %d", &a2, &b2);
   // puts("Enter Attival & Burst of p3");
   // scanf("%d %d", &a3, &b3);
   r1 = b1;
   r2 = b2;
   // r3 = b3;
   total = b1 + b2 ;

   printf("0--------");
   while (c >= a1 && c != a2)
   {
      r1--;
      c++;
      printf("\n|   p1  |\n%d--------", c);

      // if (c == a2)
      // {
      //    break;
      // }
   }

   while (c > a1 && c >= a2 && c!= total)
   {
      // if (c == total)
      // {
      //    break;
      // }
      if (r1 < r2 && r1!= 0)
      {
         r1--;
         c++;
         printf("\n|   p1  |\n%d--------", c);
      }
      if (r1 > r2 && r2!= 0)
      {
         r2--;
         c++;
         printf("\n|   p2  |\n%d--------", c);
      }
      if( r1 == 0 && r2!=0){
         r2--;
         c++;
         printf("\n|   p2  |\n%d--------", c);

      }
      if( r2 == 0 && r1!=0){
         r1--;
         c++;
         printf("\n|   p1  |\n%d--------", c);

      }
   }
//    while (c > a2 && c <= a3)
//    {
//       if (c == total)
//       {
//          break;
//       }
//       if (r1 < r2 && r1 < r3)
//       {
//          r1--;
//          c++;
//          printf("\n   p1\n%d-------", c);
//       }
//       else if (r2 < r1 && r2 < r3)
//       {
//          r2--;
//          c--;
//          printf("\n   p2\n%d-------", c);
//       }
//       else
//       {
//          r3--;
//          c--;
//          printf("\n   p3\n%d-------", c);
//       }
//    }
}