using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Managed
{
    public class ManagedCalculator : IDisposable
    {
        //create a wrapper field in class.
        CLIWrapper.CalculatorWrapper _wrapper;
        public ManagedCalculator()
        {
            //create a instance from CalculatorWrapper class in constructor.
            _wrapper = new CLIWrapper.CalculatorWrapper();
        }

        #region Math Function
        public double Sum(double x, double y)
        {
            return _wrapper.Sum(x, y);
        }
        #endregion

        #region IDisposable Support
        bool isDisposed = false; // To detect redundant calls

        protected virtual void Dispose(bool disposing)
        {
            if (!isDisposed)
            {
                _wrapper.Dispose();
                isDisposed = true;
            }
        }

        ~ManagedCalculator() => Dispose(false);
        public void Dispose() => Dispose(true);
        #endregion

    }
}
