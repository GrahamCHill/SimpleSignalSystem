#include "TestFiles/Button.h"
#include "TestFiles/Dialog.h"

int main() {
    Button button;
    Dialog dialog;

    // Connect signal to slot
    button.getSignal("buttonClicked").connect([&]{
        dialog.onButtonClicked();
    });

    // Simulate button click
    button.click();  // This should invoke dialog.onButtonClicked()

    return 0;
}