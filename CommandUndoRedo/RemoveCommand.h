//
// Created by amina on 5/29/2021.
//

#ifndef A10_913_DIACONU_ANA_1_REMOVECOMMAND_H
#define A10_913_DIACONU_ANA_1_REMOVECOMMAND_H
#include "CommandUndoRedo/ICommand.h"
#include "Service/MovieService.h"

class RemoveCommand : public ICommand {
private:
    MovieService* movieServ;
    Movie mov;

public:
    RemoveCommand(MovieService& mv, Movie m);
    void execute() override;
    void undo() override;
    void redo() override;


};


#endif //A10_913_DIACONU_ANA_1_REMOVECOMMAND_H
