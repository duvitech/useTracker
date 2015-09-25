/*----------------------------------------------------------------------------*/
/*    Copyright (C) 2015 Alexandre Campo                                      */
/*                                                                            */
/*    This file is part of USE Tracker.                                       */
/*                                                                            */
/*    USE Tracker is free software: you can redistribute it and/or modify     */
/*    it under the terms of the GNU General Public License as published by    */
/*    the Free Software Foundation, either version 3 of the License, or       */
/*    (at your option) any later version.                                     */
/*                                                                            */
/*    USE Tracker is distributed in the hope that it will be useful,          */
/*    but WITHOUT ANY WARRANTY; without even the implied warranty of          */
/*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           */
/*    GNU General Public License for more details.                            */
/*                                                                            */
/*    You should have received a copy of the GNU General Public License       */
/*    along with USE Tracker.  If not, see <http://www.gnu.org/licenses/>.    */
/*----------------------------------------------------------------------------*/

#include "DialogOpenCapture.h"

//(*InternalHeaders(DialogOpenCapture)
#include <wx/string.h>
#include <wx/intl.h>
//*)

#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

//(*IdInit(DialogOpenCapture)
const long DialogOpenCapture::ID_FILEPICKERCTRL1 = wxNewId();
const long DialogOpenCapture::ID_BUTTON1 = wxNewId();
const long DialogOpenCapture::ID_BUTTON2 = wxNewId();
const long DialogOpenCapture::ID_PANEL1 = wxNewId();
const long DialogOpenCapture::ID_STATICTEXT1 = wxNewId();
const long DialogOpenCapture::ID_SPINCTRL1 = wxNewId();
const long DialogOpenCapture::ID_BUTTON3 = wxNewId();
const long DialogOpenCapture::ID_BUTTON4 = wxNewId();
const long DialogOpenCapture::ID_PANEL2 = wxNewId();
const long DialogOpenCapture::ID_STATICTEXT2 = wxNewId();
const long DialogOpenCapture::ID_SPINCTRL2 = wxNewId();
const long DialogOpenCapture::ID_STATICTEXT4 = wxNewId();
const long DialogOpenCapture::ID_STATICTEXT3 = wxNewId();
const long DialogOpenCapture::ID_BUTTON5 = wxNewId();
const long DialogOpenCapture::ID_BUTTON6 = wxNewId();
const long DialogOpenCapture::ID_PANEL3 = wxNewId();
const long DialogOpenCapture::ID_FILEPICKERCTRL2 = wxNewId();
const long DialogOpenCapture::ID_BUTTON7 = wxNewId();
const long DialogOpenCapture::ID_BUTTON8 = wxNewId();
const long DialogOpenCapture::ID_PANEL4 = wxNewId();
const long DialogOpenCapture::ID_PANEL6 = wxNewId();
const long DialogOpenCapture::ID_FILEPICKERCTRL3 = wxNewId();
const long DialogOpenCapture::ID_BUTTON9 = wxNewId();
const long DialogOpenCapture::ID_BUTTON10 = wxNewId();
const long DialogOpenCapture::ID_PANEL5 = wxNewId();
const long DialogOpenCapture::ID_NOTEBOOK1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DialogOpenCapture,wxDialog)
	//(*EventTable(DialogOpenCapture)
	//*)
END_EVENT_TABLE()

DialogOpenCapture::DialogOpenCapture(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(DialogOpenCapture)
	wxStaticBoxSizer* StaticBoxSizer2;
	wxFlexGridSizer* FlexGridSizer8;
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;
	wxStaticBoxSizer* StaticBoxSizer5;
	wxFlexGridSizer* FlexGridSizer11;
	wxFlexGridSizer* FlexGridSizer7;
	wxFlexGridSizer* FlexGridSizer4;
	wxFlexGridSizer* FlexGridSizer9;
	wxStaticBoxSizer* StaticBoxSizer3;
	wxFlexGridSizer* FlexGridSizer6;
	wxFlexGridSizer* FlexGridSizer3;
	wxStaticBoxSizer* StaticBoxSizer4;
	wxFlexGridSizer* FlexGridSizer10;
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer5;
	wxStaticBoxSizer* StaticBoxSizer1;

	Create(parent, wxID_ANY, _("Open new capture source"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetMinSize(wxSize(-1,-1));
	SetMaxSize(wxSize(-1,-1));
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxPoint(208,176), wxDefaultSize, wxNB_LEFT, _T("ID_NOTEBOOK1"));
	Notebook1->SetMinSize(wxSize(-1,-1));
	Notebook1->SetMaxSize(wxSize(-1,-1));
	PanelVideo = new wxPanel(Notebook1, ID_PANEL1, wxPoint(48,179), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	PanelVideo->SetMinSize(wxSize(-1,-1));
	PanelVideo->SetMaxSize(wxSize(-1,-1));
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer1->AddGrowableCol(0);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, PanelVideo, _("Select source"));
	FilePickerCtrlVideo = new wxFilePickerCtrl(PanelVideo, ID_FILEPICKERCTRL1, wxEmptyString, wxEmptyString, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxFLP_CHANGE_DIR|wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL, wxDefaultValidator, _T("ID_FILEPICKERCTRL1"));
	FilePickerCtrlVideo->SetFocus();
	StaticBoxSizer1->Add(FilePickerCtrlVideo, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2 = new wxFlexGridSizer(0, 3, 0, 0);
	ButtonVideoCancel = new wxButton(PanelVideo, ID_BUTTON1, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer2->Add(ButtonVideoCancel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ButtonVideoOk = new wxButton(PanelVideo, ID_BUTTON2, _("Ok"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer2->Add(ButtonVideoOk, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	PanelVideo->SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(PanelVideo);
	FlexGridSizer1->SetSizeHints(PanelVideo);
	PanelUSB = new wxPanel(Notebook1, ID_PANEL2, wxPoint(40,160), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	PanelUSB->SetMinSize(wxSize(-1,-1));
	PanelUSB->SetMaxSize(wxSize(-1,-1));
	FlexGridSizer3 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer3->AddGrowableCol(0);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxHORIZONTAL, PanelUSB, _("Select source"));
	StaticText1 = new wxStaticText(PanelUSB, ID_STATICTEXT1, _("USB device number"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticBoxSizer2->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrlUSBDevice = new wxSpinCtrl(PanelUSB, ID_SPINCTRL1, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL1"));
	SpinCtrlUSBDevice->SetValue(_T("0"));
	StaticBoxSizer2->Add(SpinCtrlUSBDevice, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer4 = new wxFlexGridSizer(0, 3, 0, 0);
	ButtonUSBCancel = new wxButton(PanelUSB, ID_BUTTON3, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	FlexGridSizer4->Add(ButtonUSBCancel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ButtonUSBOk = new wxButton(PanelUSB, ID_BUTTON4, _("Ok"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	ButtonUSBOk->SetFocus();
	FlexGridSizer4->Add(ButtonUSBOk, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3->Add(FlexGridSizer4, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	PanelUSB->SetSizer(FlexGridSizer3);
	FlexGridSizer3->Fit(PanelUSB);
	FlexGridSizer3->SetSizeHints(PanelUSB);
	PanelAVT = new wxPanel(Notebook1, ID_PANEL3, wxPoint(60,149), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	PanelAVT->SetMinSize(wxSize(-1,-1));
	PanelAVT->SetMaxSize(wxSize(-1,-1));
	FlexGridSizer5 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer5->AddGrowableCol(0);
	StaticBoxSizer3 = new wxStaticBoxSizer(wxHORIZONTAL, PanelAVT, _("Select source"));
	StaticText2 = new wxStaticText(PanelAVT, ID_STATICTEXT2, _("AVT camera number"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticBoxSizer3->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrlAVTDevice = new wxSpinCtrl(PanelAVT, ID_SPINCTRL2, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL2"));
	SpinCtrlAVTDevice->SetValue(_T("0"));
	StaticBoxSizer3->Add(SpinCtrlAVTDevice, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(StaticBoxSizer3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticText4 = new wxStaticText(PanelAVT, ID_STATICTEXT4, _("No Vimba API support in this version!"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	BoxSizer1->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(PanelAVT, ID_STATICTEXT3, _("Please check documentation"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BoxSizer1->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(BoxSizer1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer6 = new wxFlexGridSizer(0, 3, 0, 0);
	ButtonAVTCancel = new wxButton(PanelAVT, ID_BUTTON5, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	FlexGridSizer6->Add(ButtonAVTCancel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ButtonAVTOk = new wxButton(PanelAVT, ID_BUTTON6, _("Ok"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	ButtonAVTOk->SetFocus();
	FlexGridSizer6->Add(ButtonAVTOk, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer5->Add(FlexGridSizer6, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	PanelAVT->SetSizer(FlexGridSizer5);
	FlexGridSizer5->Fit(PanelAVT);
	FlexGridSizer5->SetSizeHints(PanelAVT);
	PanelImage = new wxPanel(Notebook1, ID_PANEL4, wxPoint(49,153), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	PanelImage->SetMinSize(wxSize(-1,-1));
	PanelImage->SetMaxSize(wxSize(-1,-1));
	FlexGridSizer7 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer7->AddGrowableCol(0);
	StaticBoxSizer4 = new wxStaticBoxSizer(wxHORIZONTAL, PanelImage, _("Select source"));
	FilePickerCtrlImage = new wxFilePickerCtrl(PanelImage, ID_FILEPICKERCTRL2, wxEmptyString, wxEmptyString, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxFLP_CHANGE_DIR|wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL, wxDefaultValidator, _T("ID_FILEPICKERCTRL2"));
	FilePickerCtrlImage->SetFocus();
	StaticBoxSizer4->Add(FilePickerCtrlImage, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7->Add(StaticBoxSizer4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer8 = new wxFlexGridSizer(0, 3, 0, 0);
	ButtonImageCancel = new wxButton(PanelImage, ID_BUTTON7, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	FlexGridSizer8->Add(ButtonImageCancel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ButtonImageOk = new wxButton(PanelImage, ID_BUTTON8, _("Ok"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
	FlexGridSizer8->Add(ButtonImageOk, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer7->Add(FlexGridSizer8, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	PanelImage->SetSizer(FlexGridSizer7);
	FlexGridSizer7->Fit(PanelImage);
	FlexGridSizer7->SetSizeHints(PanelImage);
	PanelMultiUSB = new wxPanel(Notebook1, ID_PANEL6, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL6"));
	FlexGridSizer11 = new wxFlexGridSizer(0, 1, 0, 0);
	PanelMultiUSB->SetSizer(FlexGridSizer11);
	FlexGridSizer11->Fit(PanelMultiUSB);
	FlexGridSizer11->SetSizeHints(PanelMultiUSB);
	PanelConfigFile = new wxPanel(Notebook1, ID_PANEL5, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL5"));
	FlexGridSizer9 = new wxFlexGridSizer(0, 1, 0, 0);
	FlexGridSizer9->AddGrowableCol(0);
	StaticBoxSizer5 = new wxStaticBoxSizer(wxHORIZONTAL, PanelConfigFile, _("Select file to load"));
	FilePickerCtrlSourceConfigFile = new wxFilePickerCtrl(PanelConfigFile, ID_FILEPICKERCTRL3, wxEmptyString, wxEmptyString, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxFLP_CHANGE_DIR|wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL, wxDefaultValidator, _T("ID_FILEPICKERCTRL3"));
	StaticBoxSizer5->Add(FilePickerCtrlSourceConfigFile, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer9->Add(StaticBoxSizer5, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer10 = new wxFlexGridSizer(0, 3, 0, 0);
	ButtonConfigFileCancel = new wxButton(PanelConfigFile, ID_BUTTON9, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
	FlexGridSizer10->Add(ButtonConfigFileCancel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ButtonConfigFileOk = new wxButton(PanelConfigFile, ID_BUTTON10, _("Ok"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
	FlexGridSizer10->Add(ButtonConfigFileOk, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer9->Add(FlexGridSizer10, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	PanelConfigFile->SetSizer(FlexGridSizer9);
	FlexGridSizer9->Fit(PanelConfigFile);
	FlexGridSizer9->SetSizeHints(PanelConfigFile);
	Notebook1->AddPage(PanelVideo, _("Video file"), false);
	Notebook1->AddPage(PanelUSB, _("USB camera"), false);
	Notebook1->AddPage(PanelAVT, _("AVT camera"), false);
	Notebook1->AddPage(PanelImage, _("Image"), false);
	Notebook1->AddPage(PanelMultiUSB, _("Multi USB"), false);
	Notebook1->AddPage(PanelConfigFile, _("Config file"), false);

	Connect(ID_FILEPICKERCTRL1,wxEVT_COMMAND_FILEPICKER_CHANGED,(wxObjectEventFunction)&DialogOpenCapture::OnFilePickerCtrlVideoFileChanged);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DialogOpenCapture::OnButtonVideoCancelClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DialogOpenCapture::OnButtonVideoOkClick);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DialogOpenCapture::OnButtonUSBCancelClick);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DialogOpenCapture::OnButtonUSBOkClick);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DialogOpenCapture::OnButtonAVTCancelClick);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DialogOpenCapture::OnButtonAVTOkClick);
	Connect(ID_FILEPICKERCTRL2,wxEVT_COMMAND_FILEPICKER_CHANGED,(wxObjectEventFunction)&DialogOpenCapture::OnFilePickerCtrlImageFileChanged);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DialogOpenCapture::OnButtonImageCancelClick);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DialogOpenCapture::OnButtonImageOkClick);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DialogOpenCapture::OnButtonConfigFileCancelClick);
	Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DialogOpenCapture::OnButtonConfigFileOkClick);
	Connect(wxEVT_CHAR,(wxObjectEventFunction)&DialogOpenCapture::OnChar);
	//*)

	// enable or disable VIMBA capture
	#ifndef VIMBA
	ButtonAVTOk->Enable(false);
	#else
	BoxSizer1->Show(false);
        #endif // VIMBA

	// try to improve notebook layout
	Notebook1->Fit();
	this->Fit();

	FilePickerCtrlVideo->SetFocus();
	ConnectCharEvent(this);
}

DialogOpenCapture::~DialogOpenCapture()
{
	//(*Destroy(DialogOpenCapture)
	//*)
}


void DialogOpenCapture::OnFilePickerCtrlVideoFileChanged(wxFileDirPickerEvent& event)
{
    ButtonVideoOk->SetFocus();
}

void DialogOpenCapture::OnButtonVideoCancelClick(wxCommandEvent& event)
{
    EndModal(wxID_CANCEL);
}

void DialogOpenCapture::OnButtonVideoOkClick(wxCommandEvent& event)
{
    delete previousCapture;
    capture = new CaptureVideo(FilePickerCtrlVideo->GetPath().ToStdString());
    EndModal(wxID_OK);
}

void DialogOpenCapture::OnButtonUSBOkClick(wxCommandEvent& event)
{
    delete previousCapture;
    capture = new CaptureUSBCamera(SpinCtrlUSBDevice->GetValue());
    EndModal(wxID_OK);
}

void DialogOpenCapture::OnButtonUSBCancelClick(wxCommandEvent& event)
{
    EndModal(wxID_CANCEL);
}

void DialogOpenCapture::OnButtonAVTOkClick(wxCommandEvent& event)
{
#ifdef VIMBA
    delete previousCapture;
    capture = new CaptureAVTCamera(SpinCtrlAVTDevice->GetValue());
#endif // VIMBA
    EndModal(wxID_OK);
}

void DialogOpenCapture::OnButtonImageCancelClick(wxCommandEvent& event)
{
    EndModal(wxID_CANCEL);
}

void DialogOpenCapture::OnButtonImageOkClick(wxCommandEvent& event)
{
    delete previousCapture;
    capture = new CaptureImage(FilePickerCtrlImage->GetPath().ToStdString());
    EndModal(wxID_OK);
}

void DialogOpenCapture::OnButtonAVTCancelClick(wxCommandEvent& event)
{
    EndModal(wxID_CANCEL);
}

void DialogOpenCapture::OnFilePickerCtrlImageFileChanged(wxFileDirPickerEvent& event)
{
    ButtonImageOk->SetFocus();
}

void DialogOpenCapture::OnChar (wxKeyEvent& event)
{
    wxCommandEvent e;
    if (event.GetKeyCode() == WXK_ESCAPE)
	EndModal(wxID_CANCEL);

    else
	event.Skip();
}


void DialogOpenCapture::ConnectCharEvent(wxWindow* pclComponent)
{
  if(pclComponent)
  {
    pclComponent->Connect(wxID_ANY,
                          wxEVT_CHAR,
                          wxKeyEventHandler(DialogOpenCapture::OnChar),
                          (wxObject*) NULL,
                          this);

    wxWindowListNode* pclNode = pclComponent->GetChildren().GetFirst();
    while(pclNode)
    {
      wxWindow* pclChild = pclNode->GetData();
      this->ConnectCharEvent(pclChild);

      pclNode = pclNode->GetNext();
    }
  }
}


void DialogOpenCapture::OnButtonConfigFileCancelClick(wxCommandEvent& event)
{
    EndModal(wxID_CANCEL);
}

void DialogOpenCapture::OnButtonConfigFileOkClick(wxCommandEvent& event)
{
    std::string filename = FilePickerCtrlSourceConfigFile->GetPath().ToStdString();

    cv::FileStorage file;
    cv::FileNode rootNode;

    file.open(filename, cv::FileStorage::READ);
    if (file.isOpened())
    {
	rootNode = file["Source"];

	if (!rootNode.empty())
	{
	    delete previousCapture;
	    string type = (string)rootNode["Type"];
	    if (type == "video")
	    {
		capture = new CaptureVideo(rootNode);
	    }
	    else if (type == "USBcamera")
	    {
		capture = new CaptureUSBCamera(rootNode);
	    }
	    else if (type == "image")
	    {
		capture = new CaptureImage(rootNode);
	    }
#ifdef VIMBA
	    else if (type == "AVTcamera")
	    {
		capture = new CaptureAVTCamera(rootNode);
	    }
#endif // VIMBA
	    else if (type == "multiUSBcamera")
	    {
		capture = new CaptureMultiUSBCamera(rootNode);
	    }
	    else
	    {
		capture = new CaptureDefault();
	    }
	}
	else
	{
	    capture = new CaptureDefault();
	}
    }

//    capture = new CaptureVideo(FilePickerCtrlVideo->GetPath().ToStdString());
    EndModal(wxID_OK);
}
