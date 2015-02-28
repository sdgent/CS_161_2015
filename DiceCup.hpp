#ifndef DICECUP_HPP
#define DICECUP_HPP


class DiceCup
    {
        private:
            int numDice;
            int numFaces;


        public:
            DiceCup();
            DiceCup(int,int);
            void setNumDice(int);
            void setNumFaces(int);
            int rollDice();
    };









#endif
