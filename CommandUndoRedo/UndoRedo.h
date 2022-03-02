//
// Created by amina on 5/29/2021.
//

#ifndef A10_913_DIACONU_ANA_1_UNDOREDO_H
#define A10_913_DIACONU_ANA_1_UNDOREDO_H
#include "CommandUndoRedo/ICommand.h"
#include "Exception/UndoRedoException.h"
#include <stack>
#include <memory>

typedef std::stack<std::shared_ptr<ICommand>> commandStack;

class UndoRedo {
private:
    commandStack undoStack;
    commandStack redoStack;

public:

    UndoRedo();
    void redo();
    void undo();

    void executeCommand(std::shared_ptr<ICommand> command);



};


#endif //A10_913_DIACONU_ANA_1_UNDOREDO_H
