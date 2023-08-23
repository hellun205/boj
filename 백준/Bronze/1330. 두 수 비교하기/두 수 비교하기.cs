var l = Console.ReadLine().Split(' ').Select(x => int.Parse(x)).ToArray();
Console.WriteLine(l[0] > l[1] ? ">" : l[0] < l[1] ? "<" : "==");