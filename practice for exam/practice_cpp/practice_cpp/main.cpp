#include <iostream>
using namespace std;
namespace sdds
{
	struct RAM
	{
		int size;
	};
	class Memory
	{
		RAM* m_memory;
		int m_size;
	public:
		Memory(int size)
		{
			if (size > 0)
			{
				m_size = size;

				m_memory = new RAM[size];

				for (int i = 0; i < size; i++)
				{
					m_memory[i].size = 0;
				}
			}
		}

	};
}