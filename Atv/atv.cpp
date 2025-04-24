#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QMessageBox>
#include <QIntValidator>

struct aluno {
    QString nome;
    int idade;
    int id;
};

class AlunoForm : public QWidget {
    Q_OBJECT

public:
    AlunoForm(QWidget *parent = nullptr) : QWidget(parent) {
        setWindowTitle("Cadastro de Aluno");

        nomeInput = new QLineEdit(this);
        idadeInput = new QLineEdit(this);
        idadeInput->setValidator(new QIntValidator(0, 150, this));  // Apenas números para idade
        idInput = new QLineEdit(this);
        idInput->setValidator(new QIntValidator(0, 10000, this));  // ID como número

        QPushButton *submitButton = new QPushButton("Cadastrar", this);
        connect(submitButton, &QPushButton::clicked, this, &AlunoForm::onSubmit);

        nomeInput->setGeometry(10, 10, 200, 30);
        idadeInput->setGeometry(10, 50, 200, 30);
        idInput->setGeometry(10, 90, 200, 30);
        submitButton->setGeometry(10, 130, 200, 30);
    }

private slots:
    void onSubmit() {
        aluno a;

        a.nome = nomeInput->text();
        a.idade = idadeInput->text().toInt();
        a.id = idInput->text().toInt();

        QString alunoInfo = "Nome: " + a.nome + "\n";
        alunoInfo += "Idade: " + QString::number(a.idade) + "\n";
        alunoInfo += "ID: " + QString::number(a.id);

        QMessageBox::information(this, "Aluno Cadastrado", alunoInfo);
    }

private:
    QLineEdit *nomeInput;
    QLineEdit *idadeInput;
    QLineEdit *idInput;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    AlunoForm form;
    form.show();

    return app.exec();
}
