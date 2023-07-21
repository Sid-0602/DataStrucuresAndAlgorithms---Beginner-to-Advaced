#include <bits/stdc++.h>
using namespace std;

template <typename V>


//hashing using separate chaining. 
class MapNode{
    public:
        string key; //key stored is string datatype
        V value;  //value stored is template. 
        MapNode* next;

    MapNode(string key, V value){
        this->key = key;
        this->value = value;
        next = NULL;
    }

    ~MapNode(){
        delete next;
    }
};

template <typename V>
class ourmap{
    MapNode<V>** buckets;
    int size;
    int numBuckets; 

    public:
    
        ourmap(){
            size=0;
            numBuckets = 5;
            buckets = new MapNode<V>*[numBuckets];
            //not leaving garbage values inside the bucket.
            for(int i=0;i<numBuckets;i++){
                buckets[i]=NULL;
            }
        }

        ~ourmap(){
            //first delete every linked List:
            for(int i=0;i<numBuckets;i++){
                delete buckets[i];
            }
            delete [] buckets; //now delete the map. 
        }


        int size(){
            return count;
        }

        V getValue(string key){
            int bucketIndex = getBucketIndex(key);
            MapNode<V>* head = bucket[bucketIndex];
            while(head!=NULL){
                if(head->key == key){
                    return head->value;
                }

                head = head->next;
            }

            return 0;
        } 


    private:

        int getBucketIndex(string key){
            int hashCode = 0;

            int currentCoeff = 1;

            //eg: represent the string "abc" as: a*p^2 + b*p^1 + c*p^0. p->Prime number.
            for(int i=key.length()-1;i>=0;i--){
                hashCode += key[i] * currentCoeff;
                hashCode = hashCode%numBuckets;
                currentCoeff *= 53;
                currentCoeff = currentCoeff%numBuckets;
            }
            
            return hashCode % numBuckets;
        }
    public:
        void insert(string key, V value){
            int bucketIndex = getBucketIndex(string key);
            MapNode<V>* head = buckets[bucketIndex];
            while(head!=NULL){
                if(head->key == key){
                    head->value = value;
                    return;
                }
                head = head->next;
            }
            head = buckets[bucketIndex];
            MapNode<V>* newNode = new MapNode<V>(key,value);
            node->next = head;
            buckets[bucketIndex] = node; 
            count++;
        }

        V remove(string key){
            int bucketIndex = getBucketIndex(key);
            MapNode<V>* head = bucket[bucketIndex];
            MapNode<V>* prev = NULL;
            while(head!=NULL){

                if(head->key == key){

                    if(prev==NULL){
                        bucket[bucketIndex]=head->next;
                    }
                    V ans = head->value;
                    prev->next = head->next;
                    //to delete the head node: 
                    head->next = NULL;
                    delete head;
                    count--;
                    return ans;
                    
                }
                prev = head;
                head = head->next 
            }

            return 0;
        }
    
};

