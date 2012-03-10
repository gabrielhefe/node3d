#include "DlgChat.h"
#include "protocol.h"
#include "common.h"
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void CDlgChat::OnControlRegister()
{
	CUIDialog::OnControlRegister();
	// ----
	RegisterControl("IDC_EDIT_BOX_CHAT", m_EditChat);
	RegisterControlEvent("IDC_EDIT_BOX_CHAT",(PEVENT)&CDlgChat::OnEditChat);
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void CDlgChat::OnEditChat()
{
	CSChat(ws2s(m_EditChat.GetText()).c_str());
	m_EditChat:SetText(L"");
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------