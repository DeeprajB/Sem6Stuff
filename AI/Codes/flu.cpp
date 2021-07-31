#include<vector>
#include<iostream>
#include<bitset>
using namespace std;
class ExpertSystem{
protected:
vector<string> qs;
vector<bool> ans;
bitset<100> result;
vector<bitset<100>> knowledge;
public:
void add_q(string q){qs.push_back(q);}
bool getAnswer(){
char ans;
cin>>ans;
while(ans!=’y’ && ans!=’n’){
cout<<"You␣answered␣"<<ans<<"␣"<<(ans==’y’)<<endl;
cout<<"Answer␣y␣for␣yes␣or␣n␣for␣no.␣Please␣try␣again"<<endl;
cin>>ans;
}
return ans==’y’;
}
};
class FluExpert:public ExpertSystem{
public:
FluExpert(){
knowledge={
0b00101, // fever && sore throat -> flu
0b10100, // sore throat && body ache -> flu
0b10001 // body ache && fever -> flu
};
/* Questions:
0. fever
1. cough
2. sore throat
3. runny nose
4. body ache
*/
add_q("Does␣the␣patient␣have␣a␣fever?");
add_q("Does␣the␣patient␣have␣a␣cough?");
add_q("Does␣the␣patient␣have␣a␣sore␣throat?");
add_q("Does␣the␣patient␣have␣a␣runny␣or␣stuffy␣nose?");
add_q("Does␣the␣patient␣have␣muscle␣or␣body␣ache?");
}
void infer(){
int i;
// Generate answer bitset
bitset<100> answer;
for(i=0;i<ans.size();i++){
answer[i]=ans[i];
}
/* cout<<answer<<endl; */
// Use knowledge to get inference
bool hasFlu=false;
for(i=0;i<knowledge.size();i++){
if(knowledge[i].count()==(knowledge[i]&answer).count()){
hasFlu=true;
}
}
// Print inference
cout<<"CONCLUSION:"<<endl;
if(hasFlu){
cout<<"Patient␣has␣the␣common␣flu"<<endl;
}
else if(answer[0]==0){
cout<<"Patient␣does␣not␣have␣the␣common␣flu"<<endl;
}
else{
cout<<"Inconclusive.␣Patient␣may␣or␣may␣not␣have␣the␣common␣
flu"<<endl;
}
}
void run(){
int i;
// Ask questions
for(string question :qs){
cout<<question<<"␣[y/n]"<<endl;
ans.push_back(getAnswer());
}
}
};
int main(){
FluExpert patient0=FluExpert();
patient0.run();
patient0.infer();
}