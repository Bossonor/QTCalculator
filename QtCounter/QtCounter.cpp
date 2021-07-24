#include "QtCounter.h"
#include <string>
using namespace std;

void InfixChangeToSuffix(const char *Infix, char Suffix[], int &len) {
	QStack<char> CharacterStore;
	int SuffixIndex = 0, index = 0;
	while (index < strlen(Infix)) {
		switch (Infix[index]) {
		case'+': case'-':
			if (!CharacterStore.isEmpty()) while (CharacterStore.top() == '*' || CharacterStore.top() == '/') Suffix[SuffixIndex++] = CharacterStore.pop();
			CharacterStore.push(Infix[index]);
			break;
		case'*': case'/': case'(':
			CharacterStore.push(Infix[index]);
			break;
		case')':
			while (CharacterStore.top() != '(') Suffix[SuffixIndex++] = CharacterStore.pop();
			CharacterStore.pop();
			break;
		default:
			while (Infix[index] >= '0' && Infix[index] <= '9') Suffix[SuffixIndex++] = Infix[index++];
			index--;
			Suffix[SuffixIndex++] = '@';
			break;
		}
		index++;
	}
	while (!CharacterStore.isEmpty()) Suffix[SuffixIndex++] = CharacterStore.pop();
	len = SuffixIndex;
}

void SuffixCompute(char Suffix[], int len, double &result) {
	QStack<double> ComputeStore;
	int index = 0;
	while (index < len) {
		double OperandA, OperandB;
		switch (Suffix[index]) {
		case'+':
			OperandA = ComputeStore.pop();
			OperandB = ComputeStore.pop();
			ComputeStore.push(OperandA + OperandB);
			break;
		case'-':
			OperandA = ComputeStore.pop();
			OperandB = ComputeStore.pop();
			ComputeStore.push(OperandB - OperandA);
			break;
		case'*':
			OperandA = ComputeStore.pop();
			OperandB = ComputeStore.pop();
			ComputeStore.push(OperandA * OperandB);
			break;
		case'/':
			OperandA = ComputeStore.pop();
			OperandB = ComputeStore.pop();
			ComputeStore.push(OperandB / OperandA);
			break;
		default:
			char *Operand = new char[10];
			int OperIndex = 0;
			while (Suffix[index] != '@') Operand[OperIndex++] = Suffix[index++];
			ComputeStore.push(atof(Operand));
			delete Operand;
			break;
		}
		index++;
	}
	result = ComputeStore.top();
}

QtCounter::QtCounter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QtCounter::ButtonClicked() {
	QString AllText = ui.textBrowser->toPlainText();
	QPushButton *LatestClicked = qobject_cast<QPushButton *>(sender());
	QString OneText = LatestClicked->text();
	if (OneText == QString("=")) {
		string str = AllText.toStdString();
		const char *infix = str.c_str();
		char Suffix[50];
		int len;
		InfixChangeToSuffix(infix, Suffix, len);
		double result;
		SuffixCompute(Suffix, len, result);
		ui.textBrowser->setText(QString::number(result, 10, 6));
	}
	else ui.textBrowser->setText(AllText += OneText);
}