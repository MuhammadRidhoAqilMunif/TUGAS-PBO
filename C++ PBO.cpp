#include <iostream>
using namespace std;

int main(){
	int baju;
	
	int k=0;
	do {
            cout<<"*";
            k++;
        }
        while(k<=40);
    cout<<"\n           Tugas Toko Baju        "<<endl;
    cout<<"*****"<<endl;
    cout<<"Masukan banyak Merk Baju : ";
	cin>>baju;
	
	string data[baju][4];
	
	cout<<"Masukan Variasi Baju:"<<endl;
	for (int i=0;i<baju;i++)
        {
			cout<<""<<endl;
            cout<<"Data ke-"<<i+1<<endl;
            for (int j=0;j<4;j++)
            {
                if (j==0)
                {
                    cout<<"Merk Baju : ";
                }
                else if(j==1)
                {
                    cout<<"Ukuran Baju : ";
                }
                else if(j==2)
                {
                    cout<<"Warna Baju :";
                }
                else
                {
                    cout<<"Jumlah Baju : ";
                }
                cin>>data[i][j];
            }
        }
	cout<<"----------------------------------------"<<endl;
    cout<<"\ndata mahasiswa kelas "<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Merk Baju \t\t Ukuran Baju \t\t Warna Baju\t\t JUMLAH BAJU \t"<<endl;
    for(int i=0;i<baju;i++)
    {
        for (int j=0; j<4;j++)
        {
            cout<<data[i][j]<<"\t\t";
        }
        cout<<endl;
    }
    return 0;
}
