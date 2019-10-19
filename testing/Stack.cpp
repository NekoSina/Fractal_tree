// #include"Tree.h"
// // Just to print vectors for the sake of my project ===================================================>
// std::ostream& operator<< (std::ostream& stream, const vector2 & points){
//     stream<< "("<<points.x<< ", "<< points.y<<")";
//     return stream;
// }
// // declaration ========================================================================================>
// class WatashiNoStack{
//     private:
//         vector2* points = nullptr;
//         int LastIndex =-1;
//         void PrintItems();
//         bool is_Empty();
//         bool is_Full();
//         size_t StackSize = sizeof(points);
//     public:
//         WatashiNoStack(int init);
//         ~WatashiNoStack();
//         vector2 top();
//         void push(vector2 item);
//         void pop();
// };
// // implementations ====================================================================================>
// WatashiNoStack::WatashiNoStack(int init){
//     points = new vector2[init];
// }
// WatashiNoStack::~WatashiNoStack(){
//     delete [] points;
// }
// // ---------------------------------------------------------------------------------------------------->
// vector2 WatashiNoStack::top(){
//     vector2 item = points[LastIndex];
//     std::cout<<"top = "<<item<<std::endl;
//     return item;
// }
// // ---------------------------------------------------------------------------------------------------->
// void WatashiNoStack::push(vector2 item){
//     LastIndex ++;
//     if(!is_Full()){
//         points[LastIndex] = item;
//     }
//     else{
//         vector2
//     }
// }
// // ---------------------------------------------------------------------------------------------------->
// void WatashiNoStack::pop(){
//     if(!is_Empty()){
//         points[LastIndex].x = 0;
//         points[LastIndex].y = 0;
//     }
//     LastIndex --;
//     PrintItems();
// }
// // ---------------------------------------------------------------------------------------------------->
// bool WatashiNoStack::is_Empty(){
//     return LastIndex <= 0;
// }
// // ---------------------------------------------------------------------------------------------------->
// bool WatashiNoStack::is_Full(){
//     return LastIndex >= StackSize;
// }
// // ---------------------------------------------------------------------------------------------------->
// void WatashiNoStack::PrintItems(){
//     for(int i = 0; i <StackSize ; i++){
//         std::cout<<points[i]<<std::endl;
//     }
// }
// // main ===============================================================================================>

// int main(){
//     WatashiNoStack stack(5);
//     vector2 item(45,11);
//     stack.push(item);
//     stack.top();
//     stack.pop();
//     std::cin.get();
// }