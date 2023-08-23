var A = int.Parse(Console.ReadLine());
var B = int.Parse(Console.ReadLine());
var C = int.Parse(Console.ReadLine());

var x = A * B * C;

for (var i = 0; i < 10; i++)
{
  Console.WriteLine(x.ToString().ToCharArray().Count(x => x == i.ToString().ToCharArray()[0]));
}