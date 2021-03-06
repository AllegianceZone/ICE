#pragma once


// CPartDlg dialog

class CPartDlg : public CDialog
{
	DECLARE_DYNAMIC(CPartDlg)

public:
	CPartDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CPartDlg();
	PtrCorePart ppart;
	PtrCore pcore;
// Dialog Data
	enum { IDD = IDD_PARTDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	BOOL OnInitDialog(void);
	void OnClickedDecodeh(void);
	void OnClickedDecodesel(void);
	void OnClickedOk(void);
	void OnClickedCancel(void);
	afx_msg void OnBnClickedUsem0();
};
