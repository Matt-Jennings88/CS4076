#ifndef ERRORS_H
#define ERRORS_H
class RoomError
{
public:
    const char* NoRoom()
    {
        return "There are no rooms this way, try another direction";
    }
};

#endif // ERRORS_H
