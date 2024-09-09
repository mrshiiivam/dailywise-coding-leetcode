#include<iostream>;
using namespace std;

// break *************************
/* if u will print i after break then it will print before the 10*/

// int main(){
//     for(int i=1; i<=40; i++){
//         if(i==10){
//             break;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }


/*it will print i then use break so it will print enclude 10 */

// int main(){
//     for(int i=1; i<=40; i++){
//         cout<<i<<endl;

//         if(i==10){
//             break;
//         }
//        }

//     return 0;
// }


// continue *******************

int main(){
    for(int i=1; i<=40; i++){

        if(i==10){
            continue;
        }
         cout<<i<<endl;

       }

    return 0;
}