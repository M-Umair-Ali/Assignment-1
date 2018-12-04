#ifndef LINK_LIST_H
#define LINK_LIST_H


struct node
{
    double re,im;
    node *next;
};
class link_list
{
        public:
        link_list();

        iend(double r,double i);//insert at the end
        delpos(int );//delete at position
        valpos(double &,double &,int );//value at a position
        iafpos(double ,double ,int );//insert after a position
        print();//print the list

        private:
        node *head;
};

#endif // LINKLIST_H
