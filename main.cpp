//
// Created by amina on 5/6/2021.
//

#include <QApplication>
#include <QLabel>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
//#include "UI\UI.h"
#include "Service\MovieService.h"
#include "Exception\RepositoryException.h"
#include "Repository\FileMovieRepo.h"
#include "Repository\CSVWatchListRepo.h"
#include "Repository\HTMLWatchListRepo.h"
#include "Repository\WatchListRepository.h"
#include "CommandUndoRedo/UndoRedo.h"
#include "GUI/WatchListTableModel.h"
#include <crtdbg.h>
#include <fstream>
#include <QtWidgets>
#include <QMessageBox>
#include "GUI/GUI.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QMessageBox::StandardButton csv = QMessageBox::question(nullptr, "Choose input", "CSV", QMessageBox::Yes | QMessageBox::No);


    QPalette palette;
    palette.setColor(QPalette::Background, Qt::lightGray);
    //csv.setPalette(palette);

    if(csv == QMessageBox::Yes){
        UndoRedo undoredo;
        FileMovieRepo movie_repo{"D://Uni documents//Sem2//OOP//a10-913-Diaconu-Ana-1//cmake-build-debug//movies.txt"};
        CSVWatchListRepo watch_list{"D://Uni documents//Sem2//OOP//a10-913-Diaconu-Ana-1//cmake-build-debug//watchlist.txt","D://Uni documents//Sem2//OOP//a10-913-Diaconu-Ana-1//cmake-build-debug//watch.csv"};
        MovieService service{movie_repo, watch_list};
        WatchListTableModel tableView{watch_list};
        //tableView.show()
        GUI gui{service, undoredo, tableView};
        gui.show();
        a.exec();

    }
    else{
    UndoRedo undoredo;
        FileMovieRepo movie_repo{"D://Uni documents//Sem2//OOP//a10-913-Diaconu-Ana-1//cmake-build-debug//movies.txt"};
        HTMLWatchListRepo watch_list{"D://Uni documents//Sem2//OOP//a10-913-Diaconu-Ana-1//cmake-build-debug//watchlist.txt","D://Uni documents//Sem2//OOP//a10-913-Diaconu-Ana-1//cmake-build-debug//watch.html"};
        MovieService service{movie_repo, watch_list};
        WatchListTableModel tableView{watch_list};
        GUI gui{service, undoredo, tableView};
        gui.show();
        a.exec();

    }


    // FileMovieRepo movie_repo{"D://Uni documents//Sem2//OOP//Assignments//a89-913-Diaconu-Ana//cmake-build-debug//movies.txt"};
    // WatchList watch_list{"D://Uni documents//Sem2//OOP//Assignments//a89-913-Diaconu-Ana//cmake-build-debug//watchlist.txt"};
    //  MovieService service{movie_repo, watch_list};
    //UI ui{service};
    //ui.menu();
//
    return 0;

}
