#include <iostream>
#include <string>
using namespace std;

string answer(string pet, int budjet) {
	string answer;

	if (pet == "Кот" && budjet > 100) {
		answer = "Интерактивная игрушка с лазером!";
	}
	else if (pet == "Собака" && budjet <= 100) {
		answer = "Новая мягкая игрушка для аппорта!";
	}
	else if (pet == "Попугай") {
		answer = "Кормушка с любимым лакомством!";
	}
	else if (pet == "Рыбка" && budjet > 100) {
		answer = "Новый аквариум!";
	}
	else if (pet == "Рептилия" && budjet <= 100) {
		answer = "Термоковрик для комфорта!";
	} else {
		answer = "Нет рекомендаций.";
	}

	return answer;
}