var l = Console.ReadLine()!.Split(' ').Select(x => int.Parse(x)).ToArray();
var m = 0;
foreach (var i in l)
  m += i * i;
Console.WriteLine(m % 10);