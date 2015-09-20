#include <QtWidgets/QFileDialog>

class MyDialog : public QObject
{
	
	Q_OBJECT
	
public:
	
	MyDialog();

	~MyDialog();
	
	void RunDialog();
	
public slots:
	
	void DialogSelectedFile( const QString & file );
	void DialogFinished( int status );
	
private:
	
	QFileDialog *	m_pDialog;

};
