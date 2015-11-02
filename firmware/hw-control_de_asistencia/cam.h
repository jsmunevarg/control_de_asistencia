/***************************************************************************
 * CAMERA
 */

#ifndef CAM_H
#define CAM_H


#define SERIALNUM  0

#define COMMANDSEND 0x56
#define COMMANDREPLY  0x76
#define COMMANDEND  0x00

#define CMD_GETVERSION  0x11
#define CMD_RESET  0x26
#define CMD_TAKEPHOTO  0x36
#define CMD_READBUFF  0x32
#define CMD_GETBUFFLEN 0x34

#define FBUF_CURRENTFRAME 0x00
#define FBUF_NEXTFRAME 0x01

#define FBUF_STOPCURRENTFRAME 0x00

#define RAM_START 0x40000000
#define RAM_SIZE  0x04000000

void getversioncommand(char c); 
void resetcommand(char c);
void takephotocommand(char c); 
void getbufflencommand(char c);
void pppp();



#endif

