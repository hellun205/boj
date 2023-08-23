var list = new List<int>();

for (var i = 0; i < 9; i++) {
  list.Add(int.Parse(Console.ReadLine()));
}


var newList = list.ToList();
newList.Sort();

Console.WriteLine(newList[^1]);
Console.WriteLine(list.IndexOf(newList[^1]) + 1);