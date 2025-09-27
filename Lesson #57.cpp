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

void DeleteTextFromFile(string FileName, string TextToDelete)
{

	vector <string> vFileContent;

	LoadFileContentToVector(FileName, vFileContent);

	for (string& Line : vFileContent)
	{
		if (Line == TextToDelete)
		{
			Line = "";
		}
	}

	UploadVectorDataToFile(FileName, vFileContent);
}

int main()
{
	string FileName = "Employees names.txt";

	cout << "File content before delete Ali : \n\n";
	PrintFileContent(FileName);

	DeleteTextFromFile(FileName, "Ali");

	cout << "\n\nThis file content after delete Ali : \n\n";
	PrintFileContent(FileName);

}