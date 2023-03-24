
class queueArray{

    int *data;
    int size;
    int nextIndex, firstIndex,capacity;

    public:

        queueArray(int s){
            data= new int[s];
            nextIndex=0;
            firstIndex=-1;
            size=0;
            capacity=s;
        }

        int getSize(){
            return size;
        }

        bool isEmpty(){
               return size==0;
        }

        //insert element: 

        void enqueue(int element){

            if(size==capacity){
                cout<<"!! Queue is FULL !!"<<endl;
                return;
            }
            data[nextIndex] = element;
            nextIndex = (nextIndex+1) % capacity;
            size++;
            if(firstIndex==-1){
                firstIndex=0;
            }

        }

        //remove element: 

        int dequeue(){
            if(isEmpty()){
                cout<<"!! Queue is empty !!"<<endl;
                return -1;
            }

            int dataelement = data[firstIndex];
            firstIndex = (firstIndex+1) % capacity;
            size--;

            //reset firstIndex and nextIndex after queue is empty.
            if(size == 0){
                firstIndex=-1;
                nextIndex=0; 
            }
            return dataelement;

        }

        int front(){
            if(firstIndex==-1){
                cout<<"!! Queue is NULL !!"<<endl;
                return -1;
            }
            return data[firstIndex];
        }

};