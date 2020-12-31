#include<iostream>
#include<fstream>
#include<limits>
#include<algorithm>
#include<vector>
using namespace std;
vector<string> split_string(string);

vector<int>breakingRecords(vector<int> scores) 
{
    long long int min=0,max=0;min=scores[0];max=scores[0];
    vector<int>highlow(2);
    for(int i=0;i<scores.size();i++)
    {
        if(scores[i]>max)
        {
            max=scores[i];highlow[0]++;
        }
        else if(scores[i]<min)
        {  
            min=scores[i];highlow[1]++;
        }
    }
    return highlow;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    int n;cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string scores_temp_temp;
    getline(cin, scores_temp_temp);
    vector<string> scores_temp = split_string(scores_temp_temp);
    vector<int> scores(n);

    for (int i=0;i<n;i++) 
    {
        int scores_item = stoi(scores_temp[i]);
        scores[i]=scores_item;
    }
    vector<int>result = breakingRecords(scores);

    for (int i=0;i<result.size();i++) 
    {
        fout<<result[i];
        if (i != result.size()-1)       fout<<" ";
    }
    fout<<endl;
    fout.close();
    return 0;
}

vector<string>split_string(string input_string) 
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) 
    {
        return x==y and x==' ';
    });

    input_string.erase(new_end, input_string.end());

    while(input_string[input_string.length()-1]==' ') 
    {
        input_string.pop_back();
    }

    vector<string>splits;
    char delimiter=' ';
    size_t i=0;
    size_t pos=input_string.find(delimiter);

    while(pos != string::npos)
    {
        splits.push_back(input_string.substr(i,pos-i));
        i=pos+1;
        pos=input_string.find(delimiter,i);
    }
    splits.push_back(input_string.substr(i,min(pos,input_string.length())-i+1));
    return splits;
}

