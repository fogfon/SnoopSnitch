/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RRC_StateIndicator_H_
#define	_RRC_StateIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_StateIndicator {
	RRC_StateIndicator_cell_DCH	= 0,
	RRC_StateIndicator_cell_FACH	= 1,
	RRC_StateIndicator_cell_PCH	= 2,
	RRC_StateIndicator_ura_PCH	= 3
} e_RRC_StateIndicator;

/* RRC-StateIndicator */
typedef long	 RRC_StateIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_StateIndicator;
asn_struct_free_f RRC_StateIndicator_free;
asn_struct_print_f RRC_StateIndicator_print;
asn_constr_check_f RRC_StateIndicator_constraint;
ber_type_decoder_f RRC_StateIndicator_decode_ber;
der_type_encoder_f RRC_StateIndicator_encode_der;
xer_type_decoder_f RRC_StateIndicator_decode_xer;
xer_type_encoder_f RRC_StateIndicator_encode_xer;
per_type_decoder_f RRC_StateIndicator_decode_uper;
per_type_encoder_f RRC_StateIndicator_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_StateIndicator_H_ */
#include <asn_internal.h>