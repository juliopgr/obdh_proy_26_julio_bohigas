#ifndef FCDTCAcceptReportH
#define FCDTCAcceptReportH

#include "public/pus_tc_accept_report.h"

class CDTCAcceptReport{
	
	friend class CDTCHandler;

	//tc accept report
	tc_accept_report_t mAcceptReport;

	public:

	//!Constructior	
	CDTCAcceptReport(){
		mAcceptReport.accept_status=TCAcceptationNotProcessed;
	}
// Nuevo constructor para crear reportes de rechazo directamente
	CDTCAcceptReport(TTCAcceptationStatus status) {
	    mAcceptReport.accept_status = status;
	}

	//!return true if accepted
	bool IsAccepted(){
		return (TCAcceptationOK== mAcceptReport.accept_status);

	}

	protected:
	
	private:
	
};
#endif
