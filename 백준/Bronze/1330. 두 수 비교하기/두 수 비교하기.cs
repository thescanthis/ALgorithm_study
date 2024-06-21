using System;

class Program
{
    
    public static void Main(string[] args)
    {
        string[] s=Console.ReadLine().Split(' ');
        int A=int.Parse(s[0]);
        int B=int.Parse(s[1]);
        if(A<B) Console.Write("<");
        else if(A>B) Console.Write(">");
        else Console.Write("==");
    }
}