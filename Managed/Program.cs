using System;
using CLIWrapper;

namespace Managed
{
    class Program
    {
        static void Main(string[] args)
        {
            //You must use using blocks for use the memory as eficient.
            //Don't worry CaculatorWrapper class is CLI object. That's why, it has Disposable pattern.
            //You don't need wrapping the object and implement dispose pattern for the CLI object.
            using (var wrapper = new CalculatorWrapper())
            {
                var sum = wrapper.Sum(10, 10); //10 + 10
                Console.WriteLine("Result: " + sum);
            }
            Console.Read();
        }
    }
}
/* Output:
    Native C++ Calculator object created on memory!
    Result: 20
    Native C++ Calculator object destroyed on memory! 
 */

