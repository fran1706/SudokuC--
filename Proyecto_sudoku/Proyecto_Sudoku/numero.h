#ifndef NUMERO_H
#define NUMERO_H

#include <QWidget>
#include <QLabel>
#include <QTextEdit>

class Numero : public QWidget
{
    Q_OBJECT
public:
    explicit Numero(QWidget *parent = 0);
    
signals:
    
public slots:


private:
    QTextEdit *textOpciones;
    QLabel *labelNumber;
    int cuadricula;
    int fila;
    int columna;

};

#endif // NUMERO_H
