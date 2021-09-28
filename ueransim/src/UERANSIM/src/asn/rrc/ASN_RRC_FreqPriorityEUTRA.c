/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "ASN_RRC_FreqPriorityEUTRA.h"

asn_TYPE_member_t asn_MBR_ASN_RRC_FreqPriorityEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_FreqPriorityEUTRA, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_RRC_FreqPriorityEUTRA, cellReselectionPriority),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_CellReselectionPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionPriority"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_RRC_FreqPriorityEUTRA, cellReselectionSubPriority),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_RRC_CellReselectionSubPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellReselectionSubPriority"
		},
};
static const int asn_MAP_ASN_RRC_FreqPriorityEUTRA_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_ASN_RRC_FreqPriorityEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_RRC_FreqPriorityEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellReselectionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cellReselectionSubPriority */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_RRC_FreqPriorityEUTRA_specs_1 = {
	sizeof(struct ASN_RRC_FreqPriorityEUTRA),
	offsetof(struct ASN_RRC_FreqPriorityEUTRA, _asn_ctx),
	asn_MAP_ASN_RRC_FreqPriorityEUTRA_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_ASN_RRC_FreqPriorityEUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_RRC_FreqPriorityEUTRA = {
	"FreqPriorityEUTRA",
	"FreqPriorityEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_RRC_FreqPriorityEUTRA_tags_1,
	sizeof(asn_DEF_ASN_RRC_FreqPriorityEUTRA_tags_1)
		/sizeof(asn_DEF_ASN_RRC_FreqPriorityEUTRA_tags_1[0]), /* 1 */
	asn_DEF_ASN_RRC_FreqPriorityEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_RRC_FreqPriorityEUTRA_tags_1)
		/sizeof(asn_DEF_ASN_RRC_FreqPriorityEUTRA_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_RRC_FreqPriorityEUTRA_1,
	3,	/* Elements count */
	&asn_SPC_ASN_RRC_FreqPriorityEUTRA_specs_1	/* Additional specs */
};
