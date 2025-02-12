#include <iostream>

class Warlock
{
	private:
		std::string name, title;

		Warlock();
		Warlock(const Warlock &rhs);
		Warlock &operator=(const Warlock &rhs);
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();

		const std::string &getName(void) const;
		const std::string &getTitle(void) const;

		void introduce() const;
		void setTitle(const std::string &title);
};
