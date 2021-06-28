
#include "atcacert/atcacert_def.h"
#include "atca_cert_chain.h"

const atcacert_def_t g_cert_def_0_root = {
    .type                   = CERTTYPE_X509,
    .template_id            = 0,
    .public_key_dev_loc     = {
        .zone      = DEVZONE_DATA,
        .slot      = 15,
        .is_genkey = 0,
        .offset    = 0,
        .count     = 72
    }
};

const atcacert_cert_element_t g_cert_elements_1_signer[] = {
    {
        .id         = "IssueDate",
        .device_loc = {
            .zone      = DEVZONE_DATA,
            .slot      = 14,
            .is_genkey = 0,
            .offset    = 35-13,
            .count     = 13
        },
        .cert_loc   = {
            .offset = 72,
            .count  = 13
        }
    },
    {
        .id         = "ExpireDate",
        .device_loc = {
            .zone      = DEVZONE_DATA,
            .slot      = 14,
            .is_genkey = 0,
            .offset    = 50-13,
            .count     = 13
        },
        .cert_loc   = {
            .offset = 87,
            .count  = 13
        }
    }
};

const uint8_t g_cert_template_1_signer[] = {
    0x30, 0x82, 0x01, 0xc9, 0x30, 0x82, 0x01, 0x6e,  0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x10, 0x43,
    0x38, 0xb3, 0x47, 0x7b, 0x92, 0x22, 0xd2, 0x46,  0x01, 0x18, 0x7c, 0x0c, 0x14, 0x6b, 0x4a, 0x30,
    0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,  0x04, 0x03, 0x02, 0x30, 0x30, 0x31, 0x14, 0x30,
    0x12, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x0b,  0x45, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x20,
    0x49, 0x6e, 0x63, 0x31, 0x18, 0x30, 0x16, 0x06,  0x03, 0x55, 0x04, 0x03, 0x0c, 0x0f, 0x45, 0x78,
    0x61, 0x6d, 0x70, 0x6c, 0x65, 0x20, 0x52, 0x6f,  0x6f, 0x74, 0x20, 0x43, 0x41, 0x30, 0x1e, 0x17,
    0x0d, 0x32, 0x31, 0x30, 0x36, 0x32, 0x36, 0x31,  0x39, 0x32, 0x38, 0x31, 0x38, 0x5a, 0x17, 0x0d,
    0x33, 0x31, 0x30, 0x36, 0x32, 0x36, 0x31, 0x39,  0x32, 0x38, 0x31, 0x38, 0x5a, 0x30, 0x34, 0x31,
    0x14, 0x30, 0x12, 0x06, 0x03, 0x55, 0x04, 0x0a,  0x0c, 0x0b, 0x45, 0x78, 0x61, 0x6d, 0x70, 0x6c,
    0x65, 0x20, 0x49, 0x6e, 0x63, 0x31, 0x1c, 0x30,  0x1a, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x13,
    0x45, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x20,  0x53, 0x69, 0x67, 0x6e, 0x65, 0x72, 0x20, 0x46,
    0x46, 0x46, 0x46, 0x30, 0x59, 0x30, 0x13, 0x06,  0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02, 0x01,
    0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03,  0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0xb8, 0x77,
    0x81, 0x60, 0x9d, 0x68, 0x9b, 0xe6, 0xb9, 0x3d,  0x3e, 0xcb, 0xab, 0xd4, 0x5c, 0xc3, 0x6c, 0x04,
    0x30, 0x5f, 0x73, 0xde, 0xc7, 0x74, 0x18, 0x8e,  0xc7, 0x43, 0x75, 0x84, 0x59, 0xfb, 0x12, 0x19,
    0xdb, 0xb6, 0x70, 0x02, 0x08, 0xd8, 0xe3, 0x5d,  0x4b, 0x01, 0x15, 0xd7, 0x92, 0x82, 0xba, 0xdc,
    0x49, 0x3d, 0x4b, 0x3c, 0x6c, 0x0d, 0xbb, 0xbb,  0x7d, 0xa6, 0x86, 0x21, 0x96, 0xe0, 0xa3, 0x66,
    0x30, 0x64, 0x30, 0x12, 0x06, 0x03, 0x55, 0x1d,  0x13, 0x01, 0x01, 0xff, 0x04, 0x08, 0x30, 0x06,
    0x01, 0x01, 0xff, 0x02, 0x01, 0x00, 0x30, 0x0e,  0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01, 0x01, 0xff,
    0x04, 0x04, 0x03, 0x02, 0x01, 0x86, 0x30, 0x1d,  0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04,
    0x14, 0x6a, 0xde, 0x77, 0x83, 0x8e, 0x57, 0x3f,  0xbe, 0x7e, 0x5f, 0xdb, 0xe4, 0x10, 0x84, 0x60,
    0xb1, 0x62, 0xe1, 0xd4, 0x8c, 0x30, 0x1f, 0x06,  0x03, 0x55, 0x1d, 0x23, 0x04, 0x18, 0x30, 0x16,
    0x80, 0x14, 0x67, 0x74, 0x46, 0xb6, 0x6d, 0xcf,  0xd0, 0xbc, 0xaf, 0x0c, 0x0e, 0x70, 0x75, 0x4e,
    0x60, 0x60, 0x5f, 0x93, 0x88, 0x44, 0x30, 0x0a,  0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04,
    0x03, 0x02, 0x03, 0x49, 0x00, 0x30, 0x46, 0x02,  0x21, 0x00, 0xf7, 0x0c, 0x12, 0x47, 0xab, 0xbe,
    0xcf, 0xb7, 0x7d, 0x2b, 0x56, 0x6f, 0x80, 0xc4,  0x04, 0x78, 0xe0, 0xa8, 0x51, 0x3c, 0xbe, 0x0b,
    0x42, 0x50, 0x27, 0x07, 0x74, 0xaf, 0xc2, 0x13,  0x04, 0x43, 0x02, 0x21, 0x00, 0x93, 0xd2, 0x66,
    0xfd, 0xe8, 0x63, 0x1c, 0x3b, 0xd6, 0x3a, 0x9c,  0xe6, 0x94, 0x82, 0x8b, 0x3a, 0xd7, 0xec, 0x9c,
    0x49, 0x87, 0xe2, 0x7d, 0x75, 0x19, 0x4a, 0xdf,  0x21, 0xdb, 0x4a, 0x7a, 0x5c
};

const atcacert_def_t g_cert_def_1_signer = {
    .type                   = CERTTYPE_X509,
    .template_id            = 1,
    .chain_id               = 0,
    .private_key_slot       = 0,
    .sn_source              = SNSRC_STORED,
    .cert_sn_dev_loc        = {
        .zone      = DEVZONE_DATA,
        .slot      = 14,
        .is_genkey = 0,
        .offset    = 20-16,
        .count     = 16
    },
    .issue_date_format      = DATEFMT_RFC5280_UTC,
    .expire_date_format     = DATEFMT_RFC5280_UTC,
    .tbs_cert_loc           = {
        .offset = 4,
        .count  = 370
    },
    .expire_years           = 10,
    .public_key_dev_loc     = {
        .zone      = DEVZONE_DATA,
        .slot      = 11,
        .is_genkey = 0,
        .offset    = 0,
        .count     = 72
    },
    .comp_cert_dev_loc      = {
        .zone      = DEVZONE_DATA,
        .slot      = 12,
        .is_genkey = 0,
        .offset    = 0,
        .count     = 72
    },
    .std_cert_elements      = {
        { // STDCERT_PUBLIC_KEY
            .offset = 206,
            .count  = 64
        },
        { // STDCERT_SIGNATURE
            .offset = 386,
            .count  = 75
        },
        { // STDCERT_ISSUE_DATE
            .offset = 97,
            .count  = 13
        },
        { // STDCERT_EXPIRE_DATE
            .offset = 112,
            .count  = 13
        },
        { // STDCERT_SIGNER_ID
            .offset = 175,
            .count  = 4
        },
        { // STDCERT_CERT_SN
            .offset = 15,
            .count  = 16
        },
        { // STDCERT_AUTH_KEY_ID
            .offset = 354,
            .count  = 20
        },
        { // STDCERT_SUBJ_KEY_ID
            .offset = 321,
            .count  = 20
        }
    },
    .cert_elements          = g_cert_elements_1_signer,
    .cert_elements_count    = sizeof(g_cert_elements_1_signer) / sizeof(g_cert_elements_1_signer[0]),
    .cert_template          = g_cert_template_1_signer,
    .cert_template_size     = sizeof(g_cert_template_1_signer),
    .ca_cert_def            = &g_cert_def_0_root,
};

const uint8_t g_cert_template_2_device[] = {
    0x30, 0x82, 0x01, 0xa6, 0x30, 0x82, 0x01, 0x4b,  0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x10, 0x7e,
    0x92, 0xf5, 0x8a, 0xed, 0xd5, 0xaa, 0x53, 0xb0,  0x91, 0x8d, 0xb6, 0xbe, 0x4c, 0x9d, 0x22, 0x30,
    0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,  0x04, 0x03, 0x02, 0x30, 0x34, 0x31, 0x14, 0x30,
    0x12, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x0b,  0x45, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x20,
    0x49, 0x6e, 0x63, 0x31, 0x1c, 0x30, 0x1a, 0x06,  0x03, 0x55, 0x04, 0x03, 0x0c, 0x13, 0x45, 0x78,
    0x61, 0x6d, 0x70, 0x6c, 0x65, 0x20, 0x53, 0x69,  0x67, 0x6e, 0x65, 0x72, 0x20, 0x46, 0x46, 0x46,
    0x46, 0x30, 0x20, 0x17, 0x0d, 0x32, 0x31, 0x30,  0x36, 0x32, 0x36, 0x31, 0x39, 0x30, 0x30, 0x30,
    0x30, 0x5a, 0x18, 0x0f, 0x33, 0x30, 0x30, 0x30,  0x31, 0x32, 0x33, 0x31, 0x32, 0x33, 0x35, 0x39,
    0x35, 0x39, 0x5a, 0x30, 0x2f, 0x31, 0x14, 0x30,  0x12, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x0b,
    0x45, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x20,  0x49, 0x6e, 0x63, 0x31, 0x17, 0x30, 0x15, 0x06,
    0x03, 0x55, 0x04, 0x03, 0x0c, 0x0e, 0x45, 0x78,  0x61, 0x6d, 0x70, 0x6c, 0x65, 0x20, 0x44, 0x65,
    0x76, 0x69, 0x63, 0x65, 0x30, 0x59, 0x30, 0x13,  0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02,
    0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d,  0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0x93,
    0x89, 0xc6, 0x1b, 0x4e, 0x79, 0x97, 0xf6, 0xb2,  0x8c, 0xf4, 0xc2, 0x3b, 0xab, 0xab, 0x7b, 0x4b,
    0x89, 0xd6, 0x1d, 0xac, 0xfa, 0x41, 0x56, 0x7c,  0x19, 0x4a, 0xc0, 0x8c, 0xb0, 0xf8, 0xe5, 0x8d,
    0x9e, 0x69, 0xe7, 0x4b, 0xe8, 0x3f, 0x74, 0xd5,  0xd2, 0x24, 0xa8, 0x42, 0x56, 0x88, 0xd4, 0xeb,
    0x27, 0xf1, 0x7e, 0xcc, 0x7b, 0xbb, 0xcb, 0x36,  0x6b, 0x4c, 0x5a, 0x94, 0x79, 0xba, 0x34, 0xa3,
    0x42, 0x30, 0x40, 0x30, 0x1d, 0x06, 0x03, 0x55,  0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0xf8, 0x06,
    0x28, 0xff, 0x8a, 0x07, 0x4c, 0x95, 0x41, 0x37,  0x60, 0x12, 0xf6, 0x7a, 0x52, 0xb0, 0x07, 0xbd,
    0xb9, 0x30, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d,  0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 0x6a,
    0xde, 0x77, 0x83, 0x8e, 0x57, 0x3f, 0xbe, 0x7e,  0x5f, 0xdb, 0xe4, 0x10, 0x84, 0x60, 0xb1, 0x62,
    0xe1, 0xd4, 0x8c, 0x30, 0x0a, 0x06, 0x08, 0x2a,  0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x03,
    0x49, 0x00, 0x30, 0x46, 0x02, 0x21, 0x00, 0xb1,  0x93, 0x0f, 0x0b, 0xa0, 0x93, 0xd6, 0x0f, 0xd2,
    0xd1, 0x5f, 0x98, 0x11, 0x01, 0x7d, 0xae, 0xd3,  0x62, 0x4c, 0x21, 0xf5, 0xd2, 0x12, 0xe1, 0xb1,
    0x03, 0x9a, 0x48, 0xfb, 0x1f, 0x6c, 0x89, 0x02,  0x21, 0x00, 0xd1, 0x9c, 0xf0, 0x69, 0x97, 0x7b,
    0x4c, 0x4e, 0xb5, 0xce, 0x1c, 0xe6, 0xa6, 0xb4,  0xfb, 0x07, 0x8e, 0x31, 0x71, 0x63, 0x1d, 0x45,
    0xb1, 0x91, 0xb3, 0xd5, 0xf3, 0x83, 0x10, 0x69,  0xcd, 0x95
};

const atcacert_def_t g_cert_def_2_device = {
    .type                   = CERTTYPE_X509,
    .template_id            = 2,
    .chain_id               = 0,
    .private_key_slot       = 0,
    .sn_source              = SNSRC_PUB_KEY_HASH,
    .cert_sn_dev_loc        = {
        .zone      = DEVZONE_NONE,
        .slot      = 0,
        .is_genkey = 0,
        .offset    = 0,
        .count     = 0
    },
    .issue_date_format      = DATEFMT_RFC5280_UTC,
    .expire_date_format     = DATEFMT_RFC5280_GEN,
    .tbs_cert_loc           = {
        .offset = 4,
        .count  = 335
    },
    .expire_years           = 0,
    .public_key_dev_loc     = {
        .zone      = DEVZONE_DATA,
        .slot      = 0,
        .is_genkey = 1,
        .offset    = 0,
        .count     = 64
    },
    .comp_cert_dev_loc      = {
        .zone      = DEVZONE_DATA,
        .slot      = 10,
        .is_genkey = 0,
        .offset    = 0,
        .count     = 72
    },
    .std_cert_elements      = {
        { // STDCERT_PUBLIC_KEY
            .offset = 207,
            .count  = 64
        },
        { // STDCERT_SIGNATURE
            .offset = 351,
            .count  = 75
        },
        { // STDCERT_ISSUE_DATE
            .offset = 101,
            .count  = 13
        },
        { // STDCERT_EXPIRE_DATE
            .offset = 0,
            .count  = 0
        },
        { // STDCERT_SIGNER_ID
            .offset = 93,
            .count  = 4
        },
        { // STDCERT_CERT_SN
            .offset = 15,
            .count  = 16
        },
        { // STDCERT_AUTH_KEY_ID
            .offset = 319,
            .count  = 20
        },
        { // STDCERT_SUBJ_KEY_ID
            .offset = 286,
            .count  = 20
        }
    },
    .cert_elements          = NULL,
    .cert_elements_count    = 0,
    .cert_template          = g_cert_template_2_device,
    .cert_template_size     = sizeof(g_cert_template_2_device),
    .ca_cert_def            = &g_cert_def_1_signer,
};
