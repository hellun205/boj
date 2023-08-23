Console.ReadLine();
var str = Console.ReadLine();

Console.WriteLine(str.ToCharArray().Select(x => int.Parse(x.ToString())).Sum());