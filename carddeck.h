#ifndef CARDDECK_H
#define CARDDECK_H
#include <QList>
#include <card.h>

class CardDeck
{
public:
    CardDeck();
    Card* const* getCard(int cardNum);
//    QList<Card*> deal();

//    CardDeck& operator <<(Card& someCard);
private:
    QList<Card*> freshDeck;
//    void unpackTheDeck();

};

#endif // CARDDECK_H
