#include "carddeck.h"
#include "card.h"
CardDeck::CardDeck()
    :freshDeck()
{
    QStringList &faces=Card::getFacesALL();
    QStringList &suits=Card::getSuitsALL();
    for (int i1=0;i1<faces.count();i1++)
    {
        for (int i2=0;i2<suits.count();i2++)
        {
            Card cardInTheDeck(i1,i2);
            CardDeck::freshDeck<<&cardInTheDeck;
        }
    }
}
Card* const* CardDeck::getCard(int cardNum)
{
    return &CardDeck::freshDeck.at(cardNum);
}
//CardDeck& CardDeck::operator <<(Card* someCard)
//{
//    CardDeck::freshDeck<<someCard;
//    return *this;
//}
//CardDeck::unpackTheDeck()
//{

//}
