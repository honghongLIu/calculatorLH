
// 计算器222Dlg.h : 头文件
//

#pragma once


// C计算器222Dlg 对话框
class C计算器222Dlg : public CDialogEx
{
// 构造
public:
	C计算器222Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MY222_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton4();
	CString m_display;
protected:
	double m_first;
	double m_second;
	double m_coff;
	CString m_operator;
public:
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButtonPoint();
	afx_msg void OnBnClickedButtonSign();
	afx_msg void OnBnClickedButtonAdd();
	afx_msg void OnBnClickedButtonMinus();
	afx_msg void OnBnClickedButtonMultiply();
	afx_msg void OnBnClickedButtonDiv();
	afx_msg void OnBnClickedButtonClear();
	afx_msg void OnBnClickedButtonSqrt();
	afx_msg void OnBnClickedButtonReciprocal();
	afx_msg void OnBnClickedButtonEqual();
	void UpdateDisplay(double lval);
	void Calculate(void);
};
