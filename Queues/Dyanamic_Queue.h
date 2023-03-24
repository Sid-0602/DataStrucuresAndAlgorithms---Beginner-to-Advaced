
class dynamic_queue{
    
    int *data;
    int size,capacity;
    int nextIndex, firstIndex;

    public:

        dynamic_queue(int s){
            data = new int[s];
            firstIndex=-1;
            nextIndex=0;
            size = 0;
            capacity = s;
        }

        int getSize(){
            return size; 
        }

        bool isEmpty(){
            return size==0;
        }

        //insert element and expand the queue:

        void enqueue(int element){
            data[nextIndex] = element;
            int *newdata = new int(2*capacity);
            int j=0;
            for(int i=firstIndex; i<capacity;i++){
                newdata[i] = data[j];
                j++;
            }

            for(int i=0;i<firstIndex;i++){
                newdata[i] = data[j];
                j++;
            }
            delete [] data;
            data=newdata;
            firstIndex=0;
            nextIndex = capacity;

        }

        int front(){
            if(firstIndex==-1){
                cout<<"!! Queue is NULL !!"<<endl;
                return -1;
            }

            return data[firstIndex];
        }

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



};
