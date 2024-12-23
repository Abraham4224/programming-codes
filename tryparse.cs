string myVariable = "123";
if(int.TryParse(myVariable, out int number)){
  Console.WriteLine($"Conversion sucessful: {number}");
} else {
  Console.WriteLine("Conversion failed");
}
