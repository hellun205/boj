var t = int.Parse(Console.ReadLine()!);
for (var i = 0; i < t; i++)
{
  var read = Console.ReadLine()!.Split(' ').Select(x => int.Parse(x)).ToArray();
  var h = read[0];
  var n = read[2];
  var d = n / h;
  var r = n % h;

  Console.WriteLine("{0}{1:d2}", r == 0 ? h : r, r == 0 ? d : d + 1);
}