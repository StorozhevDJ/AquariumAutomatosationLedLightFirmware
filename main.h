/*******************************************************************************
* ������� ��������������� ����������� ���������� � ���������
* Author: Storozhev Denis
* 
* History:
* 2015.04.26 - ������� ������� � �����������, ������ beta ������������
* 2015.04.29
*	- Bugfix:
*		1. ��������� �������� ����� ��������� (��������� �������)
*		2. �������� �������� ��������� ��� ����� ������ � ������� �� �������
*	- New:
*		1. ������������� ����������� ������� ���������� �� ������� �����
*		2. ����������������� ������� ��� � �����
*		3. ��������� ��������� ������� ���������
*******************************************************************************/






//����� ���������� �������
#define KEY_BRIGHTNESS	0	//����������� �������
#define KEY_ON_OFF		1	//����� �������� � ����. ���������
//#define 


typedef enum
	{
	manual,
	automatic
	} TEwork_mode;





unsigned int read_adc(unsigned char adc_input);
void Set_Uout (void);