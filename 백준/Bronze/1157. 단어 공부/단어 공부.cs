var input = Console.ReadLine();

var dict = new Dictionary<char, int>();

foreach (var chr in input.ToUpper().ToCharArray()){
  if (dict.ContainsKey(chr))
    dict[chr] += 1;
  else dict.Add(chr, 1);
}

var max = dict.Values.Max();
var count = dict.Values.Count(x => x == max);

if (count == 1)
  Console.WriteLine(dict.Keys.ToList()[dict.Values.ToList().IndexOf(max)]);
else
  Console.WriteLine("?");