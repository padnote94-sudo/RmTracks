#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	setgid(getgid());
	setuid(getuid());

	printf("\033[36mI don't have use any Malicious code.\nI value your privacy and anonymity!\033[0m");
	system("shred -vfzu ~/.bash_history ~/.zsh_history 2>/dev/null");
	printf("\n\n\n\n\033[32mThe Files Have Been Removed Permanently!\033[0m");

	system("figlet -f slant \"Thanks\" ; figlet -f digital \"For Downloading\" -c ; echo \"\"");

	return 0;
}
