using System;

namespace Managed
{
    class Program
    {
        static void Main(string[] args)
        {
            using (ManagedCalculator managedCalculator = new ManagedCalculator())
            {
                var sum = managedCalculator.Sum(10, 10);
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

