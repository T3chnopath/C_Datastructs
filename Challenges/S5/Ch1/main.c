
static double doubleVar;        //global static visible only in this file
extern float floatVarGlobal;    //global visible to all files, uses floatVarGlobal from another file

static int staticFunc(){        //static function only visible to this file
    return 0;
}


int main() {
    int intLocal;               //local variable
    static float floatVarLocal; //static local variable which persists across function calls 
    register int registerInt;   //*may* indicate that the variable is in a register
    return 0;
}
