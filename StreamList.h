class StreamList
{
	struct node {
		char name[20];
		char number[20];
		node *nextName, *prevName, *nextNumber, *prevNumber;
	};
	node *headname, *headnumber, *tailname, *tailnumber;
public:
	StreamList();
	~StreamList();

	void Push(char Name[], char Number[]); 
	void DelNumber(char Number[]); 
	void DelName(char Name[]);
	char* SearchName(char Number[]); 
	char* SearchNumber(char Name[]);  
	void DelList();
	bool IsEmpty(); 
	bool ExistName(char keyName[]);
	bool ExistNumber(char keyNumber[]);


	//Объявление итераторов
	typedef node* iterater;
	iterater GetHeadName();
	iterater GetTailName();
	iterater GetNextName(iterater a);
	iterater GetPrevName(iterater a);
	char* GetNameInf(iterater a);
	
	iterater GetNumberHead();
	iterater GetNumberTail();
	iterater GetNextNumber(iterater a);
	iterater GetPrevNumber(iterater a);
	char* GetNumberInf(iterater a);
};
