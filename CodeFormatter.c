//prototypes

/*function takes in an input file name and appends OUT_FILE_STAMP. Then returns resulting string using parameter outString*/
void createOutputFileName(const char *inString, char *outString)
   {
	strcpy(outString,inString);

	outString[strlen(outString)-2]=NULL_CHAR;
	
	strcat(outString, OUT_FILE_STAMP);
   }
   
/*function takes in pointer to input file, pointer to currentChar, pointer to lastChar, and iteration. Returns true if file has more data, false if file has ended. updates current and last char as return parameters*/   
bool getNextChar(FILE *filePtr, char *currentChar, char *lastChar, int i )
   {

   }
   
bool isWhiteSpace(char chr )
   {
	   if (chr == '\t' || chr == '\r' || chr == '\v' || chr == '\f' || chr == ' ')
	      {
	   	   return true;   
	      }
	   return false;
   }
   
bool writeFormattedFile(FILE *inputFilePtr, bool outputOpen, char *outFileName)
   {

   }