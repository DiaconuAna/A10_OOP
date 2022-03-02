//
// Created by amina on 5/29/2021.
//

#ifndef A10_913_DIACONU_ANA_1_REMOVEWATCHLISTCOMMAND_H
#define A10_913_DIACONU_ANA_1_REMOVEWATCHLISTCOMMAND_H
#include "CommandUndoRedo/ICommand.h"
#include "Service/MovieService.h"

class RemoveWatchlistCommand : public ICommand{
private:
    MovieService* movieServ;
    Movie mov;
    bool isRated;

public:
    RemoveWatchlistCommand(MovieService& mv, Movie& m, bool fl);
    void execute() override;
    void undo() override;
    void redo() override;

};


#endif //A10_913_DIACONU_ANA_1_REMOVEWATCHLISTCOMMAND_H
