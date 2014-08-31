//class MPClient
//{
//	public:
//	  int startMPClient();
//};

class MPClient
{
	public:
	  int startMPClient();
	  int closeMPClient();
	  int sendbyMPClient(char);
	  SOCKET ConnectSocket;
};
