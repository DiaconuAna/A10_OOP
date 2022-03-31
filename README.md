# Local Movie Database 

So many movies, so little time. To make sure you do not miss any good movies, you absolutely need a software application to help you manage your films and create watch lists. The application can be used in two modes: administrator and user. When the application is started, it will offer the option to choose the mode.\
**Administrator mode:** The application will have a database which holds all the movies. You must be able to update the database, meaning: add a new movie, delete a movie and update the information of a movie. Each **Movie** has a `title`, a `genre`, a `year of release`, a `number of likes` and a `trailer`. The trailer is memorised as a link towards an online resource. The administrators will also have the option to see all the movies in the database.\
**User mode:** A user can create a watch list with the movies that she wants to watch. The application will allow the user to:
- See the movies in the database having a given genre (if the genre is empty, see all the movies), one by one. When the user chooses this option, the data of the first movie (title, genre, year of release, number of likes) is displayed and the trailer is played in the browser.
- If the user likes the trailer, she can choose to add the movie to her watch list.
- If the trailer is not satisfactory, the user can choose not to add the movie to the watch list and to continue to the next. In this case, the information corresponding to the next movie is shown and the user is again offered the possibility to add it to the watch list. This can continue as long as the user wants, as when arriving to the end of the list of movies with the given genre, if the user chooses next, the application will again show the first movie.
- Delete a movie from the watch list, after the user watched the movie. When deleting a movie from the watch list, the user can also rate the movie (with a like), and in this case, the number of likes the movie has in the repository will be increased.
- See the watch list.

##
* The application is implemented in C++, using Qt framework, and uses layered architecture.
* Specifications are provided for non-trivial functions outside the GUI. 
* Started with an in-memory repository, but switched to a text file based repository.
* All input data is validated; implemented Validator classes for properly validating the entities and custom Exception classes are used to signal errors.
* Insertion and extraction operators for the entities are created and used when reading/writing to files.
* Command design pattern is used for implementing a multiple undo/redo functionality.
* OOP concepts used: inheritance, abstraction, encapsulation, polymorphism, operator overloading.

## Demo

- choose input as CSV or HTML
 
  ![input](https://github.com/DiaconuAna/Movie-Manager/blob/main/Resources/input.png)

- opening window

  ![Opening window](https://github.com/DiaconuAna/Movie-Manager/blob/main/Resources/main.png)
  
- User Mode

  ![User Mode](https://github.com/DiaconuAna/Movie-Manager/blob/main/Resources/usermode.png)
  
- User WatchList

  ![UWL](https://github.com/DiaconuAna/Movie-Manager/blob/main/Resources/watchlist.png)
  
- Administrator Mode

  ![AdminMode](https://github.com/DiaconuAna/Movie-Manager/blob/main/Resources/admin.png)

- Movies List
  
  ![List](https://github.com/DiaconuAna/Movie-Manager/blob/main/Resources/movielist.png)

- BarChart with Movies

  ![BarChart](https://github.com/DiaconuAna/Movie-Manager/blob/main/Resources/barchart.png)

  
