#include "MyForm.h"

#include <stdio.h>
struct CUstream_st {};
struct CUevent_st {};

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main()

{


    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Project1::MyForm form;

    Application::Run(% form);

}

