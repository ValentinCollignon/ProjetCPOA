#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>

int main (int argc ,char ** argv)
{
    QApplication app(argc,argv);
    QWidget fenetre;
    fenetre.setFixedSize(400, 300);

    QLabel lNom("Nom* :",&fenetre);
    QLineEdit lENom("",&fenetre);
    QLabel lDateDeb("Date de debut* :",&fenetre);
    QLineEdit lEDateDeb("",&fenetre);
    QLabel lDateFin("Date de fin * :",&fenetre);
    QLineEdit lEDateFin("",&fenetre);
    QLabel lDesc("Description* :",&fenetre);
    QTextEdit tEDesc("",&fenetre);
    QPushButton bouton("Envoyer",&fenetre);
    QLabel loption("* Obligatoire:",&fenetre);
    lNom.move(0, 0);
    lENom.move(150, 0);
    lDateDeb.move(0, 30);
    lEDateDeb.move(150, 30);
    lDateFin.move(0, 60);
    lEDateFin.move(150,60);
    lDesc.move(0, 90);
    tEDesc.setGeometry(150, 90, 200, 200);
    bouton.move(0, 220);
    loption.move(0, 250);
    fenetre.show();

    bouton.addAction(SLOT(quit()));
    return app.exec();
}
