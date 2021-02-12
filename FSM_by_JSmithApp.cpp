/***************************************************************
 * Name:      FSM_by_JSmithApp.cpp
 * Purpose:   Code for Application Class
 * Author:    SK MBATHA (skatlego.mbatha@gmail.com)
 * Created:   2020-12-26
 * Copyright: SK MBATHA ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "FSM_by_JSmithApp.h"
#include "FSM_by_JSmithMain.h"


IMPLEMENT_APP(FSM_by_JSmithApp);

bool FSM_by_JSmithApp::OnInit()
{
    wxInitAllImageHandlers();
    FSM_by_JSmithFrame* frame = new FSM_by_JSmithFrame(0L);
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();

    return true;
}
