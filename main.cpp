#include <QCoreApplication>
#include <QStringList>
#include <QString>
#include <iostream>
#include <card.h>
#include <QTextStream>
#include <carddeck.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTextStream cout(stdout);
    Card::loadCards();
    CardDeck dek1;
    Card* const* someCard=dek1.getCard(15);
//    Card queenClubs(6,1);
    cout<<someCard<<endl;
//    cout<<"The score is "<<queenClubs.getValue()<<endl;


    return a.exec();
}
//        #include "carddeck.h"
//        #include <QTextStream>
//        #include <QtGui>
//        int main(int argc, char* argv[]) {
//            QApplication app(argc, argv);
//            QTextStream cout(stdout);
//            CardDeck deck;
//            CardHand hand;
//            int handSize, playerScore, progScore;
//            cout << "How many cards in a hand? " << flush;
//            handSize = QInputDialog::getInt(0, QString("getInt()"),
//                QString("How many cards in hand?"), 1, 5);
//            QMessageBox::StandardButton sb;
//            do {
//                hand = deck.deal(handSize);
//                cout << "Here is your hand:" << endl;
//                cout << hand.toString() << endl;
//                playerScore = hand.getValue();
//                cout << QString("Your score is: %1 points.")
//                    .arg(playerScore) << endl;
//                // Now a hand for the dealer:
//                hand = deck.deal(handSize);
//                progScore = hand.getValue();
//                cout << "Here is my hand:" << endl;
//                cout << hand.toString() << endl;
//                cout << QString("My score is: %1 points.")
//                    .arg(progScore) << endl;
//                cout << QString("%1 win!!")
//                    .arg((playerScore > progScore)?"You":"I") << endl;
//                sb = QMessageBox::question(0, QString("QMessageBox::question()"),
//                    QString("Another hand?"), QMessageBox::Yes | QMessageBox::No);
//            } while (sb == QMessageBox::Yes);
//        }
