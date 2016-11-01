#ifndef CARD_H
#define CARD_H
#include <QStringList>
#include <QString>
class Card
{
    public:
        Card(int faceNbr, int suitNbr);
        QString getFace();
        QString getSuit();
        QString toString();
        static void loadCards();
        int getValue();
        static QStringList& getFacesALL();
        static QStringList& getSuitsALL();
    private:
        int m_FaceNbr;
        int m_SuitNbr;
        static QStringList s_Faces;
        static QStringList s_Suits;

};

#endif // CARD_H
