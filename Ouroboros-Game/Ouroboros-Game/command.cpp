#include "level.h"

namespace Ouroboros 
{
	class Command
	{
	public:
		virtual ~Command() {}
		virtual Level Execute(Level level);
	};
}