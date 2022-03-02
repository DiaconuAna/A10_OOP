//
// Created by amina on 5/29/2021.
//

#ifndef A10_913_DIACONU_ANA_1_ADDCOMMAND_H
#define A10_913_DIACONU_ANA_1_ADDCOMMAND_H
#include "CommandUndoRedo/ICommand.h"
#include "Service/MovieService.h"


class AddCommand : public ICommand{
private:
    MovieService* movieServ;
    std::vector<Movie> oldList;
    std::vector<Movie> newList;
    Movie mov;

public:
    AddCommand(MovieService& mv, Movie m);
    void execute() override;
    void undo() override;
    void redo() override;

};


#endif //A10_913_DIACONU_ANA_1_ADDCOMMAND_H
