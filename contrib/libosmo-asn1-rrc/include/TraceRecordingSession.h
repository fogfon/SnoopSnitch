/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_TraceRecordingSession_H_
#define	_TraceRecordingSession_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TraceRecordingSession */
typedef struct TraceRecordingSession {
	OCTET_STRING_t	 traceRecordingSession;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TraceRecordingSession_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TraceRecordingSession;

#ifdef __cplusplus
}
#endif

#endif	/* _TraceRecordingSession_H_ */
#include <asn_internal.h>