var max = int.Parse(Console.ReadLine()!);

for (int i = 0; i < max; i++)
{
  var tmp = 0;
  var res = 0;
  Console.ReadLine()!.ToList().ForEach(c =>
  {
    tmp = c == 'O' ? tmp + 1 : 0;
    res += tmp;
  });
  Console.WriteLine(res);
}