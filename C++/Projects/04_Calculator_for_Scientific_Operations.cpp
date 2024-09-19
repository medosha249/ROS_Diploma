#include <cmath>
#include <iostream>
#include <memory>
#include <vector>

class Operation {
public:
  virtual ~Operation() = default;
  virtual void execute() = 0;
};

class BinaryOperation : public Operation {
protected:
  double num1, num2;

public:
  BinaryOperation(double n1, double n2) : num1(n1), num2(n2) {}
};

class Addition : public BinaryOperation {
public:
  Addition(double n1, double n2) : BinaryOperation(n1, n2) {}
  void execute() override {
    std::cout << "Result: " << num1 + num2 << std::endl;
  }
};

class Subtraction : public BinaryOperation {
public:
  Subtraction(double n1, double n2) : BinaryOperation(n1, n2) {}
  void execute() override {
    std::cout << "Result: " << num1 - num2 << std::endl;
  }
};

class Multiplication : public BinaryOperation {
public:
  Multiplication(double n1, double n2) : BinaryOperation(n1, n2) {}
  void execute() override {
    std::cout << "Result: " << num1 * num2 << std::endl;
  }
};

class Division : public BinaryOperation {
public:
  Division(double n1, double n2) : BinaryOperation(n1, n2) {}
  void execute() override {
    if (num2 != 0) {
      std::cout << "Result: " << num1 / num2 << std::endl;
    } else {
      std::cout << "Error: Division by zero" << std::endl;
    }
  }
};

class UnaryOperation : public Operation {
protected:
  double angle;

public:
  UnaryOperation(double a) : angle(a) {}
};

double toRadians(double degrees) { return degrees * (M_PI / 180.0); }

class Sine : public UnaryOperation {
public:
  Sine(double x) : UnaryOperation(toRadians(x)) {}
  void execute() override {
    std::cout << "Result: " << std::sin(angle) << std::endl;
  }
};

class Cosine : public UnaryOperation {
public:
  Cosine(double x) : UnaryOperation(toRadians(x)) {}
  void execute() override {
    std::cout << "Result: " << std::cos(angle) << std::endl;
  }
};

class Tan : public UnaryOperation {
public:
  Tan(double x) : UnaryOperation(toRadians(x)) {}
  void execute() override {
    std::cout << "Result: " << std::tan(angle) << std::endl;
  }
};

class Sinh : public UnaryOperation {
public:
  Sinh(double x) : UnaryOperation(toRadians(x)) {}
  void execute() override {
    std::cout << "Result: " << std::sinh(angle) << std::endl;
  }
};

class Cosh : public UnaryOperation {
public:
  Cosh(double x) : UnaryOperation(toRadians(x)) {}
  void execute() override {
    std::cout << "Result: " << std::cosh(angle) << std::endl;
  }
};

class Tanh : public UnaryOperation {
public:
  Tanh(double x) : UnaryOperation(toRadians(x)) {}
  void execute() override {
    std::cout << "Result: " << std::tanh(angle) << std::endl;
  }
};

class Log : public UnaryOperation {
public:
  Log(double x) : UnaryOperation(x) {}
  void execute() override {
    if (angle > 0) {
      std::cout << "Result: " << std::log10(angle) << std::endl;
    } else {
      std::cout << "Error: Logarithm of non-positive number" << std::endl;
    }
  }
};

class Ln : public UnaryOperation {
public:
  Ln(double x) : UnaryOperation(x) {}
  void execute() override {
    if (angle > 0) {
      std::cout << "Result: " << std::log(angle) << std::endl;
    } else {
      std::cout << "Error: Logarithm of non-positive number" << std::endl;
    }
  }
};

void display() {
  std::cout << "=================Scientific Calculator================="
            << std::endl;
  std::cout << "1: Show Main Menu\n"
            << "2: Exit" << std::endl;
}

void mainmenu() {
  std::cout << "1: Addition\n"
            << "2: Subtraction\n"
            << "3: Multiplication\n"
            << "4: Division\n"
            << "5: Sin\n"
            << "6: Cos\n"
            << "7: Tan\n"
            << "8: Sinh\n"
            << "9: Cosh\n"
            << "10: Tanh\n"
            << "11: Log\n"
            << "12: Ln" << std::endl;
}

// void choice() {
//   int ch;
//   std::cout << "Enter Your Choice: ";
//   std::cin >> ch;
//   double n1, n2;

//   switch (ch) {
//   case 1:
//   {
//     std::cout << "Enter Two Numbers: ";
//     std::cin >> n1 >> n2;
//     Addition add(n1, n2);
//     add.execute();
//     break;
//   }
//   case 2:
//    { std::cout << "Enter Two Numbers: ";
//     std::cin >> n1 >> n2;
//     Subtraction sub(n1, n2);
//     sub.execute();
//     break;
//    }
//    case 3:
//    { std::cout << "Enter Two Numbers: ";
//     std::cin >> n1 >> n2;
//     Multiplication mul(n1, n2);
//     mul.execute();
//    break;}
//   case 4:
//     {std::cout << "Enter Two Numbers: ";
//     std::cin >> n1 >> n2;
//     Division div(n1, n2);
//     div.execute();
//     break;}
//   case 5:
//     {std::cout << "Enter Angle: ";
//     std::cin >> n1;
//     Sine sineOp(n1);
//     sineOp.execute();
//   break;}
//   case 6:
//     {std::cout << "Enter Angle: ";
//     std::cin >> n1;
//     Cosine cosOp(n1);
//     cosOp.execute();
//     break;}
//   case 7:
//     {std::cout << "Enter Angle: ";
//     std::cin >> n1;
//     Tan tanOp(n1);
//     tanOp.execute();
//     break;}
//   case 8:
//     {std::cout << "Enter Angle: ";
//     std::cin >> n1;
//     Sinh sinhOp(n1);
//     sinhOp.execute();
//     break;}
//   case 9:
//     {std::cout << "Enter Angle: ";
//     std::cin >> n1;
//     Cosh coshOp(n1);
//     coshOp.execute();
//     break;}
//   case 10:
//     {std::cout << "Enter Angle: ";
//     std::cin >> n1;
//     Tanh tanhOp(n1);
//     tanhOp.execute();
//     break;}
//   case 11:
//     {std::cout << "Enter Number: ";
//     std::cin >> n1;
//     Log logOp(n1);
//     logOp.execute();
//     break;}
//   case 12:
//     {std::cout << "Enter Number: ";
//     std::cin >> n1;
//     Ln lnOp(n1);
//     lnOp.execute();
//     break;}
//   default:
//     {std::cout << "Invalid Choice!" << std::endl;
//     break;}
//   }
// }

std::unique_ptr<Operation> createBinaryOperation(int choice, double n1,
                                                 double n2) {
  switch (choice) {
  case 1:
    return std::make_unique<Addition>(n1, n2);
  case 2:
    return std::make_unique<Subtraction>(n1, n2);
  case 3:
    return std::make_unique<Multiplication>(n1, n2);
  case 4:
    return std::make_unique<Division>(n1, n2);
  default:
    return nullptr;
  }
}

std::unique_ptr<Operation> createUnaryOperation(int choice, double n) {
  switch (choice) {
  case 5:
    return std::make_unique<Sine>(n);
  case 6:
    return std::make_unique<Cosine>(n);
  case 7:
    return std::make_unique<Tan>(n);
  case 8:
    return std::make_unique<Sinh>(n);
  case 9:
    return std::make_unique<Cosh>(n);
  case 10:
    return std::make_unique<Tanh>(n);
  case 11:
    return std::make_unique<Log>(n);
  case 12:
    return std::make_unique<Ln>(n);
  default:
    return nullptr;
  }
}

void choice() {
  int ch;
  std::cout << "Enter Your Choice: ";
  std::cin >> ch;
  double n1, n2, n;
  if (ch >= 1 && ch <= 4) {
    std::cout << "Enter Two Numbers: ";
    std::cin >> n1 >> n2;
    auto operation = createBinaryOperation(ch, n1, n2);
    if (operation) {
      operation->execute();
    }
  } else if (ch >= 5 && ch <= 12) {
    std::cout << "Enter Your Number: ";
    std::cin >> n;
    auto operation = createUnaryOperation(ch, n);
    if (operation) {
      operation->execute();
    }
  } else {
    std::cout << "Invalid Choice!" << std::endl;
  }
}
int main() {
  int ch;

  while (true) {
    display();
    std::cout << "Enter Your Choice: ";
    std::cin >> ch;
    if (ch == 1) {
      mainmenu();
      choice();

      char choice;

      std::cout << "Do you want to Calculate again (Y,N):  ";
      std::cin >> choice;
      if (choice != 'Y' && choice != 'y')
        break;
    }
  }

  return 0;
}