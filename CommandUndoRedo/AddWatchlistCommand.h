//
// Created by amina on 5/29/2021.
//

#ifndef A10_913_DIACONU_ANA_1_ADDWATCHLISTCOMMAND_H
#define A10_913_DIACONU_ANA_1_ADDWATCHLISTCOMMAND_H
#include "CommandUndoRedo/ICommand.h"
#include "Service/MovieService.h"

class AddWatchlistCommand : public ICommand{
private:
    MovieService* movieServ;
    Movie mov;

public:
    AddWatchlistCommand(MovieService& mv, Movie m);
    void execute() override;
    void undo() override;
    void redo() override;

};


#endif //A10_913_DIACONU_ANA_1_ADDWATCHLISTCOMMAND_H
