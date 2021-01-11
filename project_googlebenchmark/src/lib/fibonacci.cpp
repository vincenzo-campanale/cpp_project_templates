unsigned int Fibonacci(unsigned int num)
{
   if (num < 2)
   {
      return num;
   }
   else
   {
      return Fibonacci(num - 1) + Fibonacci(num - 2);
   }
}