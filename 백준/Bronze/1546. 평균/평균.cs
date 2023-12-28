var n = Convert.ToInt32(Console.ReadLine());
var s = Console.ReadLine()!.Split(' ').Select(x => Convert.ToSingle(x)).ToArray();

var m = s.Max();
var ns = s.Select(x => x / m * 100);

Console.WriteLine(ns.Sum() / n);