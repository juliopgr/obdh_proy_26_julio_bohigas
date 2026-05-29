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

<<<<<<< HEAD

// Nuevo constructor para crear reportes de rechazo directamente
	CDTCAcceptReport(TTCAcceptationStatus status) {
	    mAcceptReport.accept_status = status;
	}
=======
>>>>>>> 111647dc55c8ee6ce6b5a8c484af74b8e57c8c59

	//!return true if accepted
	bool IsAccepted(){
		return (TCAcceptationOK== mAcceptReport.accept_status);

	}

	protected:
	
	private:
	
};
#endif
