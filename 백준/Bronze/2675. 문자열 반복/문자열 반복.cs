var read = Console.ReadLine();

for (var j = 0; j < int.Parse(read); j ++){
  var input = Console.ReadLine();

  var s = input.Split(" ");
  if (s.Length < 2) continue;
  foreach (var chr in s[1].ToCharArray())
  {
    for (var i = 0; i < int.Parse(s[0]); i++)
    {
      Console.Write(chr);
    }

  }
  Console.WriteLine();
}

