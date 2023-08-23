var list = new List<int>();

for (var i = 0; i < 10; i++)
{
  list.Add(int.Parse(Console.ReadLine()!));
}
var r = new List<int>();
list.ForEach(x => r.Add(x % 42));
Console.WriteLine(r.Distinct().Count());