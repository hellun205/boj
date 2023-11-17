var input = Console.ReadLine();
int c;
int b;

if (input![0] == '0')
{
  if (input![1] == 'x')
  {
    c = 2;
    b = 16;
  }
  else
  {
    c = 1;
    b = 8;
  }
}
else
{
  c = 0;
  b = 10;
}

Console.WriteLine(Convert.ToInt32(input.Remove(0, c), b));