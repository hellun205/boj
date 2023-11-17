var input = Console.ReadLine();

(int, int) plus((int, int) original, int count)
{
  int a, b;

  var p = original.Item2 + count;

  Math.DivRem(p, 10, out b);
  Math.DivRem(original.Item1 + count, 12, out a);

  return (a, b);
}

string convert(int year)
{
  var gj = plus((8, 6), year);
  return $"{(char)(65 + gj.Item1)}{gj.Item2}";
}

Console.WriteLine(convert(int.Parse(input!)));