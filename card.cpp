#include "card.h"
#include <QTextStream>
#include <math.h>

Card::Card(int faceNbr, int suitNbr)
    :m_FaceNbr(faceNbr),m_SuitNbr(suitNbr){}
QString Card::getFace(){return s_Faces.at(Card::m_FaceNbr);}
QString Card::getSuit(){return s_Suits.at(Card::m_SuitNbr);}
int Card::getValue(){return fmax(Card::m_FaceNbr-8,0);}
QString Card::toString(){
    QString retVal;
    QTextStream reretVal (&retVal);
    reretVal<<"The card is a "<<getFace()<< " of " <<getSuit()<<".";
    return retVal;
}


QStringList Card::s_Suits;
QStringList Card::s_Faces;
void Card::loadCards(){
    Card::s_Suits=QStringList()<<"Spades"<<"Clubs"<<"Diamonds"<<"Hearts";
    for (int i = 2;i<11;i++)
    {
        Card::s_Faces<<QString("%1").arg(i);
    }
    Card::s_Faces<<"Jack"<<"Queen"<<"King"<<"Ace";
}
QStringList& Card::getFacesALL()
{
    QStringList& toFace=Card::s_Faces;
    return toFace;

}
QStringList& Card::getSuitsALL()
{
    QStringList& toSuit=Card::s_Suits;
    return toSuit;
}

