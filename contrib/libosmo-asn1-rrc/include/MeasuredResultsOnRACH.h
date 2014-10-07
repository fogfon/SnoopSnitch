/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MeasuredResultsOnRACH_H_
#define	_MeasuredResultsOnRACH_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CPICH-Ec-N0.h"
#include "CPICH-RSCP.h"
#include "Pathloss.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include "PrimaryCCPCH-RSCP.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasuredResultsOnRACH__currentCell__modeSpecificInfo_PR {
	MeasuredResultsOnRACH__currentCell__modeSpecificInfo_PR_NOTHING,	/* No components present */
	MeasuredResultsOnRACH__currentCell__modeSpecificInfo_PR_fdd,
	MeasuredResultsOnRACH__currentCell__modeSpecificInfo_PR_tdd
} MeasuredResultsOnRACH__currentCell__modeSpecificInfo_PR;
typedef enum MeasuredResultsOnRACH__currentCell__modeSpecificInfo__fdd__measurementQuantity_PR {
	MeasuredResultsOnRACH__currentCell__modeSpecificInfo__fdd__measurementQuantity_PR_NOTHING,	/* No components present */
	MeasuredResultsOnRACH__currentCell__modeSpecificInfo__fdd__measurementQuantity_PR_cpich_Ec_N0,
	MeasuredResultsOnRACH__currentCell__modeSpecificInfo__fdd__measurementQuantity_PR_cpich_RSCP,
	MeasuredResultsOnRACH__currentCell__modeSpecificInfo__fdd__measurementQuantity_PR_pathloss,
	MeasuredResultsOnRACH__currentCell__modeSpecificInfo__fdd__measurementQuantity_PR_spare
} MeasuredResultsOnRACH__currentCell__modeSpecificInfo__fdd__measurementQuantity_PR;

/* Forward declarations */
struct MonitoredCellRACH_List;
struct TimeslotISCP_List;

/* MeasuredResultsOnRACH */
typedef struct MeasuredResultsOnRACH {
	struct MeasuredResultsOnRACH__currentCell {
		struct MeasuredResultsOnRACH__currentCell__modeSpecificInfo {
			MeasuredResultsOnRACH__currentCell__modeSpecificInfo_PR present;
			union MeasuredResultsOnRACH__currentCell__modeSpecificInfo_u {
				struct MeasuredResultsOnRACH__currentCell__modeSpecificInfo__fdd {
					struct MeasuredResultsOnRACH__currentCell__modeSpecificInfo__fdd__measurementQuantity {
						MeasuredResultsOnRACH__currentCell__modeSpecificInfo__fdd__measurementQuantity_PR present;
						union MeasuredResultsOnRACH__currentCell__modeSpecificInfo__fdd__measurementQuantity_u {
							CPICH_Ec_N0_t	 cpich_Ec_N0;
							CPICH_RSCP_t	 cpich_RSCP;
							Pathloss_t	 pathloss;
							NULL_t	 spare;
						} choice;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} measurementQuantity;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} fdd;
				struct MeasuredResultsOnRACH__currentCell__modeSpecificInfo__tdd {
					struct TimeslotISCP_List	*timeslotISCP	/* OPTIONAL */;
					PrimaryCCPCH_RSCP_t	*primaryCCPCH_RSCP	/* OPTIONAL */;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} tdd;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} modeSpecificInfo;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} currentCell;
	struct MonitoredCellRACH_List	*monitoredCells	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasuredResultsOnRACH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasuredResultsOnRACH;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MonitoredCellRACH-List.h"
#include "TimeslotISCP-List.h"

#endif	/* _MeasuredResultsOnRACH_H_ */
#include <asn_internal.h>