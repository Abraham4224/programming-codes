object myVariable = 123;

if (myVariable.GetType() == typeof(int)){
  Console.WriteLine($ "The variable {myVariable} is an integer.");
} else {
  Console.WriteLine($ "The variable {myVariable} is not an integer.");
}
