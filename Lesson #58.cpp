#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;


void PrintFileContent(string FileName)
{
	fstream File;

	File.open(FileName, ios::in);

	if (File.is_open())
	{
		string Line;

		while (getline(File, Line))
		{
			cout << Line << "\n";
		}

		File.close();
	}
	else
	{
		cout << "File not found ";
	}
}

void LoadFileContentToVector(string FileName, vector <string>& vFileContent)
{
	fstream File;

	File.open(FileName, ios::in);

	if (File.is_open())
	{
		string Line;

		while (getline(File, Line))
		{
			vFileContent.push_back(Line);
		}

		File.close();
	}


}

void UploadVectorDataToFile(string FileName, vector <string> vFileContent)
{
	fstream File;

	File.open(FileName, ios::out);

	if (File.is_open())
	{
		for (string& Line : vFileContent)
		{
			if (Line != "")
			{
				File << Line << "\n";
			}
		}

		File.close();
	}
}

void UpdateFileRecord(string FileName, string Record,string NewRecord)
{

	vector <string> vFileContent;

	LoadFileContentToVector(FileName, vFileContent);

	for (string& Line : vFileContent)
	{
		if (Line == Record)
		{
			Line = NewRecord;
		}
	}

	UploadVectorDataToFile(FileName, vFileContent);
}

int main()
{
	string FileName = "Employees names.txt";

	cout << "File content before delete Ali : \n\n";
	PrintFileContent(FileName);

	UpdateFileRecord(FileName, "Ali", "Omar");

	cout << "\n\nThis file content after delete Ali : \n\n";
	PrintFileContent(FileName);

}