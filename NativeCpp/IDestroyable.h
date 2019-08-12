#pragma once
namespace NativeCpp
{
	class IDestroyable
	{
	public:
		virtual void Destroy() = 0;
	};

}
