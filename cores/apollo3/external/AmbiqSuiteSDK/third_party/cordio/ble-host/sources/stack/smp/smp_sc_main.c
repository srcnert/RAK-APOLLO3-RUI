# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3//"
# 1 "<built-in>"
#define __STDC__ 1
#define __STDC_VERSION__ 199901L
#define __STDC_HOSTED__ 1
#define __GNUC__ 10
#define __GNUC_MINOR__ 2
#define __GNUC_PATCHLEVEL__ 1
#define __VERSION__ "10.2.1 20201103 (release)"
#define __ATOMIC_RELAXED 0
#define __ATOMIC_SEQ_CST 5
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_RELEASE 3
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_CONSUME 1
#define __OPTIMIZE_SIZE__ 1
#define __OPTIMIZE__ 1
#define __FINITE_MATH_ONLY__ 0
#define __SIZEOF_INT__ 4
#define __SIZEOF_LONG__ 4
#define __SIZEOF_LONG_LONG__ 8
#define __SIZEOF_SHORT__ 2
#define __SIZEOF_FLOAT__ 4
#define __SIZEOF_DOUBLE__ 8
#define __SIZEOF_LONG_DOUBLE__ 8
#define __SIZEOF_SIZE_T__ 4
#define __CHAR_BIT__ 8
#define __BIGGEST_ALIGNMENT__ 8
#define __ORDER_LITTLE_ENDIAN__ 1234
#define __ORDER_BIG_ENDIAN__ 4321
#define __ORDER_PDP_ENDIAN__ 3412
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__
#define __SIZEOF_POINTER__ 4
#define __SIZE_TYPE__ unsigned int
#define __PTRDIFF_TYPE__ int
#define __WCHAR_TYPE__ unsigned int
#define __WINT_TYPE__ unsigned int
#define __INTMAX_TYPE__ long long int
#define __UINTMAX_TYPE__ long long unsigned int
#define __CHAR16_TYPE__ short unsigned int
#define __CHAR32_TYPE__ long unsigned int
#define __SIG_ATOMIC_TYPE__ int
#define __INT8_TYPE__ signed char
#define __INT16_TYPE__ short int
#define __INT32_TYPE__ long int
#define __INT64_TYPE__ long long int
#define __UINT8_TYPE__ unsigned char
#define __UINT16_TYPE__ short unsigned int
#define __UINT32_TYPE__ long unsigned int
#define __UINT64_TYPE__ long long unsigned int
#define __INT_LEAST8_TYPE__ signed char
#define __INT_LEAST16_TYPE__ short int
#define __INT_LEAST32_TYPE__ long int
#define __INT_LEAST64_TYPE__ long long int
#define __UINT_LEAST8_TYPE__ unsigned char
#define __UINT_LEAST16_TYPE__ short unsigned int
#define __UINT_LEAST32_TYPE__ long unsigned int
#define __UINT_LEAST64_TYPE__ long long unsigned int
#define __INT_FAST8_TYPE__ int
#define __INT_FAST16_TYPE__ int
#define __INT_FAST32_TYPE__ int
#define __INT_FAST64_TYPE__ long long int
#define __UINT_FAST8_TYPE__ unsigned int
#define __UINT_FAST16_TYPE__ unsigned int
#define __UINT_FAST32_TYPE__ unsigned int
#define __UINT_FAST64_TYPE__ long long unsigned int
#define __INTPTR_TYPE__ int
#define __UINTPTR_TYPE__ unsigned int
#define __GXX_ABI_VERSION 1014
#define __SCHAR_MAX__ 0x7f
#define __SHRT_MAX__ 0x7fff
#define __INT_MAX__ 0x7fffffff
#define __LONG_MAX__ 0x7fffffffL
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL
#define __WCHAR_MAX__ 0xffffffffU
#define __WCHAR_MIN__ 0U
#define __WINT_MAX__ 0xffffffffU
#define __WINT_MIN__ 0U
#define __PTRDIFF_MAX__ 0x7fffffff
#define __SIZE_MAX__ 0xffffffffU
#define __SCHAR_WIDTH__ 8
#define __SHRT_WIDTH__ 16
#define __INT_WIDTH__ 32
#define __LONG_WIDTH__ 32
#define __LONG_LONG_WIDTH__ 64
#define __WCHAR_WIDTH__ 32
#define __WINT_WIDTH__ 32
#define __PTRDIFF_WIDTH__ 32
#define __SIZE_WIDTH__ 32
#define __INTMAX_MAX__ 0x7fffffffffffffffLL
#define __INTMAX_C(c) c ## LL
#define __UINTMAX_MAX__ 0xffffffffffffffffULL
#define __UINTMAX_C(c) c ## ULL
#define __INTMAX_WIDTH__ 64
#define __SIG_ATOMIC_MAX__ 0x7fffffff
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)
#define __SIG_ATOMIC_WIDTH__ 32
#define __INT8_MAX__ 0x7f
#define __INT16_MAX__ 0x7fff
#define __INT32_MAX__ 0x7fffffffL
#define __INT64_MAX__ 0x7fffffffffffffffLL
#define __UINT8_MAX__ 0xff
#define __UINT16_MAX__ 0xffff
#define __UINT32_MAX__ 0xffffffffUL
#define __UINT64_MAX__ 0xffffffffffffffffULL
#define __INT_LEAST8_MAX__ 0x7f
#define __INT8_C(c) c
#define __INT_LEAST8_WIDTH__ 8
#define __INT_LEAST16_MAX__ 0x7fff
#define __INT16_C(c) c
#define __INT_LEAST16_WIDTH__ 16
#define __INT_LEAST32_MAX__ 0x7fffffffL
#define __INT32_C(c) c ## L
#define __INT_LEAST32_WIDTH__ 32
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL
#define __INT64_C(c) c ## LL
#define __INT_LEAST64_WIDTH__ 64
#define __UINT_LEAST8_MAX__ 0xff
#define __UINT8_C(c) c
#define __UINT_LEAST16_MAX__ 0xffff
#define __UINT16_C(c) c
#define __UINT_LEAST32_MAX__ 0xffffffffUL
#define __UINT32_C(c) c ## UL
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL
#define __UINT64_C(c) c ## ULL
#define __INT_FAST8_MAX__ 0x7fffffff
#define __INT_FAST8_WIDTH__ 32
#define __INT_FAST16_MAX__ 0x7fffffff
#define __INT_FAST16_WIDTH__ 32
#define __INT_FAST32_MAX__ 0x7fffffff
#define __INT_FAST32_WIDTH__ 32
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL
#define __INT_FAST64_WIDTH__ 64
#define __UINT_FAST8_MAX__ 0xffffffffU
#define __UINT_FAST16_MAX__ 0xffffffffU
#define __UINT_FAST32_MAX__ 0xffffffffU
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL
#define __INTPTR_MAX__ 0x7fffffff
#define __INTPTR_WIDTH__ 32
#define __UINTPTR_MAX__ 0xffffffffU
#define __GCC_IEC_559 0
#define __GCC_IEC_559_COMPLEX 0
#define __FLT_EVAL_METHOD__ 0
#define __FLT_EVAL_METHOD_TS_18661_3__ 0
#define __DEC_EVAL_METHOD__ 2
#define __FLT_RADIX__ 2
#define __FLT_MANT_DIG__ 24
#define __FLT_DIG__ 6
#define __FLT_MIN_EXP__ (-125)
#define __FLT_MIN_10_EXP__ (-37)
#define __FLT_MAX_EXP__ 128
#define __FLT_MAX_10_EXP__ 38
#define __FLT_DECIMAL_DIG__ 9
#define __FLT_MAX__ 3.4028234663852886e+38F
#define __FLT_NORM_MAX__ 3.4028234663852886e+38F
#define __FLT_MIN__ 1.1754943508222875e-38F
#define __FLT_EPSILON__ 1.1920928955078125e-7F
#define __FLT_DENORM_MIN__ 1.4012984643248171e-45F
#define __FLT_HAS_DENORM__ 1
#define __FLT_HAS_INFINITY__ 1
#define __FLT_HAS_QUIET_NAN__ 1
#define __FP_FAST_FMAF 1
#define __DBL_MANT_DIG__ 53
#define __DBL_DIG__ 15
#define __DBL_MIN_EXP__ (-1021)
#define __DBL_MIN_10_EXP__ (-307)
#define __DBL_MAX_EXP__ 1024
#define __DBL_MAX_10_EXP__ 308
#define __DBL_DECIMAL_DIG__ 17
#define __DBL_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_NORM_MAX__ ((double)1.7976931348623157e+308L)
#define __DBL_MIN__ ((double)2.2250738585072014e-308L)
#define __DBL_EPSILON__ ((double)2.2204460492503131e-16L)
#define __DBL_DENORM_MIN__ ((double)4.9406564584124654e-324L)
#define __DBL_HAS_DENORM__ 1
#define __DBL_HAS_INFINITY__ 1
#define __DBL_HAS_QUIET_NAN__ 1
#define __LDBL_MANT_DIG__ 53
#define __LDBL_DIG__ 15
#define __LDBL_MIN_EXP__ (-1021)
#define __LDBL_MIN_10_EXP__ (-307)
#define __LDBL_MAX_EXP__ 1024
#define __LDBL_MAX_10_EXP__ 308
#define __DECIMAL_DIG__ 17
#define __LDBL_DECIMAL_DIG__ 17
#define __LDBL_MAX__ 1.7976931348623157e+308L
#define __LDBL_NORM_MAX__ 1.7976931348623157e+308L
#define __LDBL_MIN__ 2.2250738585072014e-308L
#define __LDBL_EPSILON__ 2.2204460492503131e-16L
#define __LDBL_DENORM_MIN__ 4.9406564584124654e-324L
#define __LDBL_HAS_DENORM__ 1
#define __LDBL_HAS_INFINITY__ 1
#define __LDBL_HAS_QUIET_NAN__ 1
#define __FLT32_MANT_DIG__ 24
#define __FLT32_DIG__ 6
#define __FLT32_MIN_EXP__ (-125)
#define __FLT32_MIN_10_EXP__ (-37)
#define __FLT32_MAX_EXP__ 128
#define __FLT32_MAX_10_EXP__ 38
#define __FLT32_DECIMAL_DIG__ 9
#define __FLT32_MAX__ 3.4028234663852886e+38F32
#define __FLT32_NORM_MAX__ 3.4028234663852886e+38F32
#define __FLT32_MIN__ 1.1754943508222875e-38F32
#define __FLT32_EPSILON__ 1.1920928955078125e-7F32
#define __FLT32_DENORM_MIN__ 1.4012984643248171e-45F32
#define __FLT32_HAS_DENORM__ 1
#define __FLT32_HAS_INFINITY__ 1
#define __FLT32_HAS_QUIET_NAN__ 1
#define __FP_FAST_FMAF32 1
#define __FLT64_MANT_DIG__ 53
#define __FLT64_DIG__ 15
#define __FLT64_MIN_EXP__ (-1021)
#define __FLT64_MIN_10_EXP__ (-307)
#define __FLT64_MAX_EXP__ 1024
#define __FLT64_MAX_10_EXP__ 308
#define __FLT64_DECIMAL_DIG__ 17
#define __FLT64_MAX__ 1.7976931348623157e+308F64
#define __FLT64_NORM_MAX__ 1.7976931348623157e+308F64
#define __FLT64_MIN__ 2.2250738585072014e-308F64
#define __FLT64_EPSILON__ 2.2204460492503131e-16F64
#define __FLT64_DENORM_MIN__ 4.9406564584124654e-324F64
#define __FLT64_HAS_DENORM__ 1
#define __FLT64_HAS_INFINITY__ 1
#define __FLT64_HAS_QUIET_NAN__ 1
#define __FLT32X_MANT_DIG__ 53
#define __FLT32X_DIG__ 15
#define __FLT32X_MIN_EXP__ (-1021)
#define __FLT32X_MIN_10_EXP__ (-307)
#define __FLT32X_MAX_EXP__ 1024
#define __FLT32X_MAX_10_EXP__ 308
#define __FLT32X_DECIMAL_DIG__ 17
#define __FLT32X_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_NORM_MAX__ 1.7976931348623157e+308F32x
#define __FLT32X_MIN__ 2.2250738585072014e-308F32x
#define __FLT32X_EPSILON__ 2.2204460492503131e-16F32x
#define __FLT32X_DENORM_MIN__ 4.9406564584124654e-324F32x
#define __FLT32X_HAS_DENORM__ 1
#define __FLT32X_HAS_INFINITY__ 1
#define __FLT32X_HAS_QUIET_NAN__ 1
#define __SFRACT_FBIT__ 7
#define __SFRACT_IBIT__ 0
#define __SFRACT_MIN__ (-0.5HR-0.5HR)
#define __SFRACT_MAX__ 0X7FP-7HR
#define __SFRACT_EPSILON__ 0x1P-7HR
#define __USFRACT_FBIT__ 8
#define __USFRACT_IBIT__ 0
#define __USFRACT_MIN__ 0.0UHR
#define __USFRACT_MAX__ 0XFFP-8UHR
#define __USFRACT_EPSILON__ 0x1P-8UHR
#define __FRACT_FBIT__ 15
#define __FRACT_IBIT__ 0
#define __FRACT_MIN__ (-0.5R-0.5R)
#define __FRACT_MAX__ 0X7FFFP-15R
#define __FRACT_EPSILON__ 0x1P-15R
#define __UFRACT_FBIT__ 16
#define __UFRACT_IBIT__ 0
#define __UFRACT_MIN__ 0.0UR
#define __UFRACT_MAX__ 0XFFFFP-16UR
#define __UFRACT_EPSILON__ 0x1P-16UR
#define __LFRACT_FBIT__ 31
#define __LFRACT_IBIT__ 0
#define __LFRACT_MIN__ (-0.5LR-0.5LR)
#define __LFRACT_MAX__ 0X7FFFFFFFP-31LR
#define __LFRACT_EPSILON__ 0x1P-31LR
#define __ULFRACT_FBIT__ 32
#define __ULFRACT_IBIT__ 0
#define __ULFRACT_MIN__ 0.0ULR
#define __ULFRACT_MAX__ 0XFFFFFFFFP-32ULR
#define __ULFRACT_EPSILON__ 0x1P-32ULR
#define __LLFRACT_FBIT__ 63
#define __LLFRACT_IBIT__ 0
#define __LLFRACT_MIN__ (-0.5LLR-0.5LLR)
#define __LLFRACT_MAX__ 0X7FFFFFFFFFFFFFFFP-63LLR
#define __LLFRACT_EPSILON__ 0x1P-63LLR
#define __ULLFRACT_FBIT__ 64
#define __ULLFRACT_IBIT__ 0
#define __ULLFRACT_MIN__ 0.0ULLR
#define __ULLFRACT_MAX__ 0XFFFFFFFFFFFFFFFFP-64ULLR
#define __ULLFRACT_EPSILON__ 0x1P-64ULLR
#define __SACCUM_FBIT__ 7
#define __SACCUM_IBIT__ 8
#define __SACCUM_MIN__ (-0X1P7HK-0X1P7HK)
#define __SACCUM_MAX__ 0X7FFFP-7HK
#define __SACCUM_EPSILON__ 0x1P-7HK
#define __USACCUM_FBIT__ 8
#define __USACCUM_IBIT__ 8
#define __USACCUM_MIN__ 0.0UHK
#define __USACCUM_MAX__ 0XFFFFP-8UHK
#define __USACCUM_EPSILON__ 0x1P-8UHK
#define __ACCUM_FBIT__ 15
#define __ACCUM_IBIT__ 16
#define __ACCUM_MIN__ (-0X1P15K-0X1P15K)
#define __ACCUM_MAX__ 0X7FFFFFFFP-15K
#define __ACCUM_EPSILON__ 0x1P-15K
#define __UACCUM_FBIT__ 16
#define __UACCUM_IBIT__ 16
#define __UACCUM_MIN__ 0.0UK
#define __UACCUM_MAX__ 0XFFFFFFFFP-16UK
#define __UACCUM_EPSILON__ 0x1P-16UK
#define __LACCUM_FBIT__ 31
#define __LACCUM_IBIT__ 32
#define __LACCUM_MIN__ (-0X1P31LK-0X1P31LK)
#define __LACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LK
#define __LACCUM_EPSILON__ 0x1P-31LK
#define __ULACCUM_FBIT__ 32
#define __ULACCUM_IBIT__ 32
#define __ULACCUM_MIN__ 0.0ULK
#define __ULACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULK
#define __ULACCUM_EPSILON__ 0x1P-32ULK
#define __LLACCUM_FBIT__ 31
#define __LLACCUM_IBIT__ 32
#define __LLACCUM_MIN__ (-0X1P31LLK-0X1P31LLK)
#define __LLACCUM_MAX__ 0X7FFFFFFFFFFFFFFFP-31LLK
#define __LLACCUM_EPSILON__ 0x1P-31LLK
#define __ULLACCUM_FBIT__ 32
#define __ULLACCUM_IBIT__ 32
#define __ULLACCUM_MIN__ 0.0ULLK
#define __ULLACCUM_MAX__ 0XFFFFFFFFFFFFFFFFP-32ULLK
#define __ULLACCUM_EPSILON__ 0x1P-32ULLK
#define __QQ_FBIT__ 7
#define __QQ_IBIT__ 0
#define __HQ_FBIT__ 15
#define __HQ_IBIT__ 0
#define __SQ_FBIT__ 31
#define __SQ_IBIT__ 0
#define __DQ_FBIT__ 63
#define __DQ_IBIT__ 0
#define __TQ_FBIT__ 127
#define __TQ_IBIT__ 0
#define __UQQ_FBIT__ 8
#define __UQQ_IBIT__ 0
#define __UHQ_FBIT__ 16
#define __UHQ_IBIT__ 0
#define __USQ_FBIT__ 32
#define __USQ_IBIT__ 0
#define __UDQ_FBIT__ 64
#define __UDQ_IBIT__ 0
#define __UTQ_FBIT__ 128
#define __UTQ_IBIT__ 0
#define __HA_FBIT__ 7
#define __HA_IBIT__ 8
#define __SA_FBIT__ 15
#define __SA_IBIT__ 16
#define __DA_FBIT__ 31
#define __DA_IBIT__ 32
#define __TA_FBIT__ 63
#define __TA_IBIT__ 64
#define __UHA_FBIT__ 8
#define __UHA_IBIT__ 8
#define __USA_FBIT__ 16
#define __USA_IBIT__ 16
#define __UDA_FBIT__ 32
#define __UDA_IBIT__ 32
#define __UTA_FBIT__ 64
#define __UTA_IBIT__ 64
#define __REGISTER_PREFIX__ 
#define __USER_LABEL_PREFIX__ 
#define __GNUC_STDC_INLINE__ 1
#define __STRICT_ANSI__ 1
#define __CHAR_UNSIGNED__ 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2
#define __GCC_ATOMIC_INT_LOCK_FREE 2
#define __GCC_ATOMIC_LONG_LOCK_FREE 2
#define __GCC_ATOMIC_LLONG_LOCK_FREE 1
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2
#define __HAVE_SPECULATION_SAFE_VALUE 1
#define __GCC_HAVE_DWARF2_CFI_ASM 1
#define __PRAGMA_REDEFINE_EXTNAME 1
#define __SIZEOF_WCHAR_T__ 4
#define __SIZEOF_WINT_T__ 4
#define __SIZEOF_PTRDIFF_T__ 4
#define __ARM_FEATURE_DSP 1
#define __ARM_FEATURE_QBIT 1
#define __ARM_FEATURE_SAT 1
#undef __ARM_FEATURE_CRYPTO
# 1 "<built-in>"
#define __ARM_FEATURE_UNALIGNED 1
#undef __ARM_FEATURE_QRDMX
# 1 "<built-in>"
#undef __ARM_FEATURE_CRC32
# 1 "<built-in>"
#undef __ARM_FEATURE_DOTPROD
# 1 "<built-in>"
#undef __ARM_FEATURE_COMPLEX
# 1 "<built-in>"
#define __ARM_32BIT_STATE 1
#undef __ARM_FEATURE_MVE
# 1 "<built-in>"
#undef __ARM_FEATURE_CMSE
# 1 "<built-in>"
#undef __ARM_FEATURE_LDREX
# 1 "<built-in>"
#define __ARM_FEATURE_LDREX 7
#define __ARM_FEATURE_CLZ 1
#undef __ARM_FEATURE_NUMERIC_MAXMIN
# 1 "<built-in>"
#define __ARM_FEATURE_SIMD32 1
#define __ARM_SIZEOF_MINIMAL_ENUM 1
#define __ARM_SIZEOF_WCHAR_T 4
#undef __ARM_ARCH_PROFILE
# 1 "<built-in>"
#define __ARM_ARCH_PROFILE 77
#define __arm__ 1
#undef __ARM_ARCH
# 1 "<built-in>"
#define __ARM_ARCH 7
#define __APCS_32__ 1
#define __GCC_ASM_FLAG_OUTPUTS__ 1
#define __thumb__ 1
#define __thumb2__ 1
#define __THUMBEL__ 1
#undef __ARM_ARCH_ISA_THUMB
# 1 "<built-in>"
#define __ARM_ARCH_ISA_THUMB 2
#define __ARMEL__ 1
#define __VFP_FP__ 1
#undef __ARM_FP
# 1 "<built-in>"
#define __ARM_FP 4
#undef __ARM_FP16_FORMAT_IEEE
# 1 "<built-in>"
#undef __ARM_FP16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#undef __ARM_FP16_ARGS
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_FP16_FML
# 1 "<built-in>"
#define __ARM_FEATURE_FMA 1
#undef __ARM_NEON__
# 1 "<built-in>"
#undef __ARM_NEON
# 1 "<built-in>"
#undef __ARM_NEON_FP
# 1 "<built-in>"
#define __THUMB_INTERWORK__ 1
#define __ARM_ARCH_7EM__ 1
#define __ARM_PCS_VFP 1
#define __ARM_EABI__ 1
#undef __FDPIC__
# 1 "<built-in>"
#define __ARM_ARCH_EXT_IDIV__ 1
#define __ARM_FEATURE_IDIV 1
#define __ARM_ASM_SYNTAX_UNIFIED__ 1
#undef __ARM_FEATURE_COPROC
# 1 "<built-in>"
#define __ARM_FEATURE_COPROC 15
#undef __ARM_FEATURE_CDE
# 1 "<built-in>"
#undef __ARM_FEATURE_CDE_COPROC
# 1 "<built-in>"
#undef __ARM_FEATURE_MATMUL_INT8
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_SCALAR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_FEATURE_BF16_VECTOR_ARITHMETIC
# 1 "<built-in>"
#undef __ARM_BF16_FORMAT_ALTERNATIVE
# 1 "<built-in>"
#define __GXX_TYPEINFO_EQUALITY_INLINE 0
#define __ELF__ 1
# 1 "<command-line>"
#define __USES_INITFINI__ 1
#define apollo3 1
#define SUPPORT_LORA 1
#define SUPPORT_LORA_P2P 1
#define LORA_IO_SPI_PORT 1
#define SYS_RTC_COUNTER_PORT 2
#define ATCMD_CUST_TABLE_SIZE 64
#define WAN_TYPE 0
#define LORA_STACK_VER 0x040407
#define RAK11720 +RAK5005-O_V1.0 1
#define rak11720 1
#define gcc 1
#define PART_APOLLO3 1
#define AM_PACKAGE_BGA 1
#define AM_PART_APOLLO3 1
#define AM_FREERTOS 1
#define AM_FREERTOS_STIMER_BACKUP 1
#define AM_BLE_USE_NVM 1
#define AM_CUSTOM_BDADDR 1
#define AM_NUS_ADD 1
#define AM_CUS_ADD 1
#define AM_AMOTA_ADD 1
#define AM_UTIL_FAULTISR_PRINT 1
#define SEC_ECC_CFG SEC_ECC_CFG_HCI
#define RTT_LOG_ENABLED 1
#define DEBUG_ENABLED 1
#define rak11720 1
#define SYS_RTC_COUNTER_PORT 2
#define TWI0_ENABLED 1
#define SPI0_ENABLED 1
#define SPI1_ENABLED 1
#define BLE_SUPPORT 1
#define ATCMD_CUST_TABLE_SIZE 64
#define WISBLOCK_BASE_5005_O 1
#define SX1262_CHIP 1
#define REGION_AS923 1
#define REGION_AU915 1
#define REGION_CN470 1
#define REGION_CN779 1
#define REGION_EU433 1
#define REGION_EU868 1
#define REGION_KR920 1
#define REGION_IN865 1
#define REGION_US915 1
#define REGION_RU864 1
#define REGION_LA915 1
#define SOFT_SE 1
#define SECURE_ELEMENT_PRE_PROVISIONED 1
#define LORAMAC_CLASSB_ENABLED 1
#define BLE_CENTRAL_SUPPORT 1
#define WISBLOCK_BASE_5005_O 1
#define SUPPORT_BLE 1
#define SUPPORT_SPI 1
#define SUPPORT_AT 1
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 1 3







#define _STRING_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 1 3







#define _ANSIDECL_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 1 3







#define __NEWLIB_H__ 1





# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_newlib_version.h" 1 3



#define _NEWLIB_VERSION_H__ 1

#define _NEWLIB_VERSION "3.3.0"
#define __NEWLIB__ 3
#define __NEWLIB_MINOR__ 3
#define __NEWLIB_PATCHLEVEL__ 0
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 2 3



#define _WANT_IO_C99_FORMATS 1


#define _WANT_IO_LONG_LONG 1


#define _WANT_REGISTER_FINI 1
# 37 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define _REENT_CHECK_VERIFY 1





#define _MB_LEN_MAX 1
# 53 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define HAVE_INITFINI_ARRAY 1



#define _ATEXIT_DYNAMIC_ALLOC 1


#define _HAVE_LONG_DOUBLE 1


#define _HAVE_CC_INHIBIT_LOOP_TO_LIBCALL 1


#define _LDBL_EQ_DBL 1


#define _FVWRITE_IN_STREAMIO 1


#define _FSEEK_OPTIMIZATION 1


#define _WIDE_ORIENT 1


#define _UNBUF_STREAM_OPT 1
# 95 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
#define _RETARGETABLE_LOCKING 1
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 1 3

#define __SYS_CONFIG_H__ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 1 3
# 77 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 3
#define __IEEE_LITTLE_ENDIAN 
# 473 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/ieeefp.h" 3
#define __OBSOLETE_MATH_DEFAULT 1


#define __OBSOLETE_MATH __OBSOLETE_MATH_DEFAULT
# 5 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 1 3
# 22 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3
#define _SYS_FEATURES_H 
# 33 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3
#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))






#define __GNUC_PREREQ__(ma,mi) __GNUC_PREREQ(ma, mi)
# 249 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3
#define __ATFILE_VISIBLE 0





#define __BSD_VISIBLE 0





#define __GNU_VISIBLE 0







#define __ISO_C_VISIBLE 1999







#define __LARGEFILE_VISIBLE 0





#define __MISC_VISIBLE 0
# 299 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3
#define __POSIX_VISIBLE 0





#define __SVID_VISIBLE 0
# 319 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3
#define __XSI_VISIBLE 0
# 330 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3
#define __SSP_FORTIFY_LEVEL 0
# 6 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 2 3
# 224 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 3
#define _POINTER_INT long





#undef __RAND_MAX



#define __RAND_MAX 0x7fffffff
# 250 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/config.h" 3
#define __EXPORT 



#define __IMPORT 






#define _READ_WRITE_RETURN_TYPE int





#define _READ_WRITE_BUFSIZE_TYPE int
# 12 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 2 3
# 31 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 3
#define _BEGIN_STD_C 
#define _END_STD_C 
#define _NOTHROW 



#define _LONG_DOUBLE long double





#define _ATTRIBUTE(attrs) __attribute__ (attrs)
# 69 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 3
#define _ELIDABLE_INLINE static __inline__



#define _NOINLINE __attribute__ ((__noinline__))
#define _NOINLINE_STATIC _NOINLINE static
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 1 3
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _SYS_REENT_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 1 3
# 14 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 39 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define _STDDEF_H 
#define _STDDEF_H_ 

#define _ANSI_STDDEF_H 
# 131 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define _PTRDIFF_T 
#define _T_PTRDIFF_ 
#define _T_PTRDIFF 
#define __PTRDIFF_T 
#define _PTRDIFF_T_ 
#define _BSD_PTRDIFF_T_ 
#define ___int_ptrdiff_t_h 
#define _GCC_PTRDIFF_T 
#define _PTRDIFF_T_DECLARED 




# 143 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 181 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define __size_t__ 
#define __SIZE_T__ 
#define _SIZE_T 
#define _SYS_SIZE_T_H 
#define _T_SIZE_ 
#define _T_SIZE 
#define __SIZE_T 
#define _SIZE_T_ 
#define _BSD_SIZE_T_ 
#define _SIZE_T_DEFINED_ 
#define _SIZE_T_DEFINED 
#define _BSD_SIZE_T_DEFINED_ 
#define _SIZE_T_DECLARED 
#define ___int_size_t_h 
#define _GCC_SIZE_T 
#define _SIZET_ 






#define __size_t 





typedef unsigned int size_t;
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 260 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#define __wchar_t__ 
#define __WCHAR_T__ 
#define _WCHAR_T 
#define _T_WCHAR_ 
#define _T_WCHAR 
#define __WCHAR_T 
#define _WCHAR_T_ 
#define _BSD_WCHAR_T_ 
#define _WCHAR_T_DEFINED_ 
#define _WCHAR_T_DEFINED 
#define _WCHAR_T_H 
#define ___int_wchar_t_h 
#define __INT_WCHAR_T_H 
#define _GCC_WCHAR_T 
#define _WCHAR_T_DECLARED 
# 287 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef _BSD_WCHAR_T_
# 321 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 1 3
# 20 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
#define _SYS__TYPES_H 

#define __need_size_t 
#define __need_wint_t 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t




#define _WINT_T 




typedef unsigned int wint_t;

#undef __need_wint_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 25 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 2 3


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_types.h" 1 3





#define _MACHINE__TYPES_H 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 1 3





#define _MACHINE__DEFAULT_TYPES_H 
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
#define __EXP(x) __ ##x ##__
# 26 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
#define __have_longlong64 1






#define __have_long32 1







typedef signed char __int8_t;

typedef unsigned char __uint8_t;



#define ___int8_t_defined 1







typedef short int __int16_t;

typedef short unsigned int __uint16_t;



#define ___int16_t_defined 1
# 77 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long int __int32_t;

typedef long unsigned int __uint32_t;



#define ___int32_t_defined 1
# 103 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;



#define ___int64_t_defined 1
# 134 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;



#define ___int_least8_t_defined 1
# 160 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;



#define ___int_least16_t_defined 1
# 182 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;



#define ___int_least32_t_defined 1
# 200 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;



#define ___int_least64_t_defined 1







typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 244 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3
#undef __EXP
# 8 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_types.h" 2 3
# 28 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 127 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
#undef __size_t



typedef unsigned int __size_t;
# 146 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
#define unsigned signed
typedef signed int _ssize_t;
#undef unsigned
# 158 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;



#define _CLOCK_T_ unsigned long


typedef unsigned long __clock_t;




#define _TIME_T_ __int_least64_t

typedef __int_least64_t __time_t;


#define _CLOCKID_T_ unsigned long


typedef unsigned long __clockid_t;

#define _TIMER_T_ unsigned long
typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 16 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3

#define _NULL 0



#define __Long long
typedef unsigned long __ULong;
# 34 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/lock.h" 1 3

#define __SYS_LOCK_H__ 
# 33 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/lock.h" 3
struct __lock;
typedef struct __lock * _LOCK_T;
#define _LOCK_RECURSIVE_T _LOCK_T

#define __LOCK_INIT(class,lock) extern struct __lock __lock_ ## lock; class _LOCK_T lock = &__lock_ ## lock

#define __LOCK_INIT_RECURSIVE(class,lock) __LOCK_INIT(class,lock)

extern void __retarget_lock_init(_LOCK_T *lock);
#define __lock_init(lock) __retarget_lock_init(&lock)
extern void __retarget_lock_init_recursive(_LOCK_T *lock);
#define __lock_init_recursive(lock) __retarget_lock_init_recursive(&lock)
extern void __retarget_lock_close(_LOCK_T lock);
#define __lock_close(lock) __retarget_lock_close(lock)
extern void __retarget_lock_close_recursive(_LOCK_T lock);
#define __lock_close_recursive(lock) __retarget_lock_close_recursive(lock)
extern void __retarget_lock_acquire(_LOCK_T lock);
#define __lock_acquire(lock) __retarget_lock_acquire(lock)
extern void __retarget_lock_acquire_recursive(_LOCK_T lock);
#define __lock_acquire_recursive(lock) __retarget_lock_acquire_recursive(lock)
extern int __retarget_lock_try_acquire(_LOCK_T lock);
#define __lock_try_acquire(lock) __retarget_lock_try_acquire(lock)
extern int __retarget_lock_try_acquire_recursive(_LOCK_T lock);
#define __lock_try_acquire_recursive(lock) __retarget_lock_try_acquire_recursive(lock)

extern void __retarget_lock_release(_LOCK_T lock);
#define __lock_release(lock) __retarget_lock_release(lock)
extern void __retarget_lock_release_recursive(_LOCK_T lock);
#define __lock_release_recursive(lock) __retarget_lock_release_recursive(lock)
# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
typedef _LOCK_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};





#define _ATEXIT_SIZE 32

struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 98 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
#define _ATEXIT_INIT {_NULL, 0, {_NULL}, {{_NULL}, {_NULL}, 0, 0}}





#define _REENT_INIT_ATEXIT _NULL, _ATEXIT_INIT,
# 122 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 183 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_SMALL_CHECK_INIT(ptr) 


struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 292 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 317 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _RAND48_SEED_0 (0x330e)
#define _RAND48_SEED_1 (0xabcd)
#define _RAND48_SEED_2 (0x1234)
#define _RAND48_MULT_0 (0xe66d)
#define _RAND48_MULT_1 (0xdeec)
#define _RAND48_MULT_2 (0x0005)
#define _RAND48_ADD (0x000b)
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};


#define _REENT_EMERGENCY_SIZE 25
#define _REENT_ASCTIME_SIZE 26
#define _REENT_SIGNAL_SIZE 24
# 613 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {
#define _N_LISTS 30
          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};





#define _REENT_STDIO_STREAM(var,index) &(var)->__sf[index]


#define _REENT_INIT(var) { 0, _REENT_STDIO_STREAM(&(var), 0), _REENT_STDIO_STREAM(&(var), 1), _REENT_STDIO_STREAM(&(var), 2), 0, "", 0, _NULL, 0, _NULL, _NULL, 0, _NULL, _NULL, 0, _NULL, { { 0, _NULL, "", {0, 0, 0, 0, 0, 0, 0, 0, 0}, 0, 1, { {_RAND48_SEED_0, _RAND48_SEED_1, _RAND48_SEED_2}, {_RAND48_MULT_0, _RAND48_MULT_1, _RAND48_MULT_2}, _RAND48_ADD }, {0, {0}}, {0, {0}}, {0, {0}}, "", "", 0, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}}, {0, {0}} } }, _REENT_INIT_ATEXIT _NULL, {_NULL, 0, _NULL} }
# 751 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_INIT_PTR_ZEROED(var) { (var)->_stdin = _REENT_STDIO_STREAM(var, 0); (var)->_stdout = _REENT_STDIO_STREAM(var, 1); (var)->_stderr = _REENT_STDIO_STREAM(var, 2); (var)->_new._reent._rand_next = 1; (var)->_new._reent._r48._seed[0] = _RAND48_SEED_0; (var)->_new._reent._r48._seed[1] = _RAND48_SEED_1; (var)->_new._reent._r48._seed[2] = _RAND48_SEED_2; (var)->_new._reent._r48._mult[0] = _RAND48_MULT_0; (var)->_new._reent._r48._mult[1] = _RAND48_MULT_1; (var)->_new._reent._r48._mult[2] = _RAND48_MULT_2; (var)->_new._reent._r48._add = _RAND48_ADD; }
# 765 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT_CHECK_RAND48(ptr) 
#define _REENT_CHECK_MP(ptr) 
#define _REENT_CHECK_TM(ptr) 
#define _REENT_CHECK_ASCTIME_BUF(ptr) 
#define _REENT_CHECK_EMERGENCY(ptr) 
#define _REENT_CHECK_MISC(ptr) 
#define _REENT_CHECK_SIGNAL_BUF(ptr) 

#define _REENT_SIGNGAM(ptr) ((ptr)->_new._reent._gamma_signgam)
#define _REENT_RAND_NEXT(ptr) ((ptr)->_new._reent._rand_next)
#define _REENT_RAND48_SEED(ptr) ((ptr)->_new._reent._r48._seed)
#define _REENT_RAND48_MULT(ptr) ((ptr)->_new._reent._r48._mult)
#define _REENT_RAND48_ADD(ptr) ((ptr)->_new._reent._r48._add)
#define _REENT_MP_RESULT(ptr) ((ptr)->_result)
#define _REENT_MP_RESULT_K(ptr) ((ptr)->_result_k)
#define _REENT_MP_P5S(ptr) ((ptr)->_p5s)
#define _REENT_MP_FREELIST(ptr) ((ptr)->_freelist)
#define _REENT_ASCTIME_BUF(ptr) ((ptr)->_new._reent._asctime_buf)
#define _REENT_TM(ptr) (&(ptr)->_new._reent._localtime_buf)
#define _REENT_EMERGENCY(ptr) ((ptr)->_emergency)
#define _REENT_STRTOK_LAST(ptr) ((ptr)->_new._reent._strtok_last)
#define _REENT_MBLEN_STATE(ptr) ((ptr)->_new._reent._mblen_state)
#define _REENT_MBTOWC_STATE(ptr) ((ptr)->_new._reent._mbtowc_state)
#define _REENT_WCTOMB_STATE(ptr) ((ptr)->_new._reent._wctomb_state)
#define _REENT_MBRLEN_STATE(ptr) ((ptr)->_new._reent._mbrlen_state)
#define _REENT_MBRTOWC_STATE(ptr) ((ptr)->_new._reent._mbrtowc_state)
#define _REENT_MBSRTOWCS_STATE(ptr) ((ptr)->_new._reent._mbsrtowcs_state)
#define _REENT_WCRTOMB_STATE(ptr) ((ptr)->_new._reent._wcrtomb_state)
#define _REENT_WCSRTOMBS_STATE(ptr) ((ptr)->_new._reent._wcsrtombs_state)
#define _REENT_L64A_BUF(ptr) ((ptr)->_new._reent._l64a_buf)
#define _REENT_SIGNAL_BUF(ptr) ((ptr)->_new._reent._signal_buf)
#define _REENT_GETDATE_ERR_P(ptr) (&((ptr)->_new._reent._getdate_err))



#define _REENT_INIT_PTR(var) { memset((var), 0, sizeof(*(var))); _REENT_INIT_PTR_ZEROED(var); }







#define _Kmax (sizeof (size_t) << 3)







#define __ATTRIBUTE_IMPURE_PTR__ 


extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 832 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _REENT _impure_ptr


#define _GLOBAL_REENT _global_impure_ptr





#define _GLOBAL_ATEXIT (_GLOBAL_REENT->_atexit)
# 12 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 1 3
# 43 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _SYS_CDEFS_H_ 



# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 48 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 2 3

#define __PMT(args) args
#define __DOTS , ...
#define __THROW 


#define __ASMNAME(cname) __XSTRING (__USER_LABEL_PREFIX__) cname


#define __ptr_t void *
#define __long_double_t long double

#define __attribute_malloc__ 
#define __attribute_pure__ 
#define __attribute_format_strfmon__(a,b) 
#define __flexarr [0]


#define __bounded 
#define __unbounded 
#define __ptrvalue 
# 78 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __has_extension __has_feature


#define __has_feature(x) 0
# 94 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __BEGIN_DECLS 
#define __END_DECLS 
# 107 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __GNUCLIKE_ASM 3
#define __GNUCLIKE_MATH_BUILTIN_CONSTANTS 



#define __GNUCLIKE___TYPEOF 1
#define __GNUCLIKE___OFFSETOF 1
#define __GNUCLIKE___SECTION 1


#define __GNUCLIKE_CTOR_SECTION_HANDLING 1


#define __GNUCLIKE_BUILTIN_CONSTANT_P 1






#define __GNUCLIKE_BUILTIN_VARARGS 1
#define __GNUCLIKE_BUILTIN_STDARG 1
#define __GNUCLIKE_BUILTIN_VAALIST 1



#define __GNUC_VA_LIST_COMPATIBILITY 1






#define __compiler_membar() __asm __volatile(" " : : : "memory")



#define __GNUCLIKE_BUILTIN_NEXT_ARG 1
#define __GNUCLIKE_MATH_BUILTIN_RELOPS 


#define __GNUCLIKE_BUILTIN_MEMCPY 1


#define __CC_SUPPORTS_INLINE 1
#define __CC_SUPPORTS___INLINE 1
#define __CC_SUPPORTS___INLINE__ 1

#define __CC_SUPPORTS___FUNC__ 1
#define __CC_SUPPORTS_WARNING 1

#define __CC_SUPPORTS_VARADIC_XXX 1

#define __CC_SUPPORTS_DYNAMIC_ARRAY_INIT 1
# 177 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __P(protos) protos
#define __CONCAT1(x,y) x ## y
#define __CONCAT(x,y) __CONCAT1(x,y)
#define __STRING(x) #x
#define __XSTRING(x) __STRING(x)

#define __const const
#define __signed signed
#define __volatile volatile
# 230 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __weak_symbol __attribute__((__weak__))
# 243 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __dead2 __attribute__((__noreturn__))
#define __pure2 __attribute__((__const__))
#define __unused __attribute__((__unused__))
#define __used __attribute__((__used__))
#define __packed __attribute__((__packed__))
#define __aligned(x) __attribute__((__aligned__(x)))
#define __section(x) __attribute__((__section__(x)))


#define __alloc_size(x) __attribute__((__alloc_size__(x)))
#define __alloc_size2(n,x) __attribute__((__alloc_size__(n, x)))





#define __alloc_align(x) __attribute__((__alloc_align__(x)))
# 280 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _Alignas(x) __aligned(x)






#define _Alignof(x) __alignof(x)
# 296 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _Atomic(T) struct { T volatile __val; }





#define _Noreturn __dead2
# 331 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define _Thread_local __thread
# 351 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __generic(expr,t,yes,no) __builtin_choose_expr( __builtin_types_compatible_p(__typeof(expr), t), yes, no)
# 366 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __min_size(x) static (x)





#define __malloc_like __attribute__((__malloc__))
#define __pure __attribute__((__pure__))






#define __always_inline __inline__ __attribute__((__always_inline__))





#define __noinline __attribute__ ((__noinline__))





#define __nonnull(x) __attribute__((__nonnull__ x))
#define __nonnull_all __attribute__((__nonnull__))






#define __fastcall __attribute__((__fastcall__))
#define __result_use_check __attribute__((__warn_unused_result__))






#define __returns_twice __attribute__((__returns_twice__))





#define __unreachable() __builtin_unreachable()
# 434 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __restrict restrict
# 467 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __predict_true(exp) __builtin_expect((exp), 1)
#define __predict_false(exp) __builtin_expect((exp), 0)






#define __null_sentinel __attribute__((__sentinel__))
#define __exported __attribute__((__visibility__("default")))


#define __hidden __attribute__((__visibility__("hidden")))
# 489 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __offsetof(type,field) offsetof(type, field)
#define __rangeof(type,start,end) (__offsetof(type, end) - __offsetof(type, start))
# 500 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __containerof(x,s,m) ({ const volatile __typeof(((s *)0)->m) *__x = (x); __DEQUALIFY(s *, (const volatile char *)__x - __offsetof(s, m));})
# 522 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __printflike(fmtarg,firstvararg) __attribute__((__format__ (__printf__, fmtarg, firstvararg)))

#define __scanflike(fmtarg,firstvararg) __attribute__((__format__ (__scanf__, fmtarg, firstvararg)))

#define __format_arg(fmtarg) __attribute__((__format_arg__ (fmtarg)))
#define __strfmonlike(fmtarg,firstvararg) __attribute__((__format__ (__strfmon__, fmtarg, firstvararg)))

#define __strftimelike(fmtarg,firstvararg) __attribute__((__format__ (__strftime__, fmtarg, firstvararg)))
# 539 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __printf0like(fmtarg,firstvararg) 




#define __strong_reference(sym,aliassym) extern __typeof (sym) aliassym __attribute__ ((__alias__ (#sym)))




#define __weak_reference(sym,alias) __asm__(".weak " #alias); __asm__(".equ " #alias ", " #sym)


#define __warn_references(sym,msg) __asm__(".section .gnu.warning." #sym); __asm__(".asciz \"" msg "\""); __asm__(".previous")



#define __sym_compat(sym,impl,verid) __asm__(".symver " #impl ", " #sym "@" #verid)

#define __sym_default(sym,impl,verid) __asm__(".symver " #impl ", " #sym "@@" #verid)
# 593 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __FBSDID(s) struct __hack



#define __RCSID(s) struct __hack



#define __RCSID_SOURCE(s) struct __hack



#define __SCCSID(s) struct __hack



#define __COPYRIGHT(s) struct __hack



#define __DECONST(type,var) ((type)(__uintptr_t)(const void *)(var))



#define __DEVOLATILE(type,var) ((type)(__uintptr_t)(volatile void *)(var))



#define __DEQUALIFY(type,var) ((type)(__uintptr_t)(const volatile void *)(var))






#define _Nonnull 
#define _Nullable 
#define _Null_unspecified 
#define __NULLABILITY_PRAGMA_PUSH 
#define __NULLABILITY_PRAGMA_POP 
# 653 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __arg_type_tag(arg_kind,arg_idx,type_tag_idx) 
#define __datatype_type_tag(kind,type) 
# 672 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/cdefs.h" 3
#define __lock_annotate(x) 





#define __lockable __lock_annotate(lockable)


#define __locks_exclusive(...) __lock_annotate(exclusive_lock_function(__VA_ARGS__))

#define __locks_shared(...) __lock_annotate(shared_lock_function(__VA_ARGS__))



#define __trylocks_exclusive(...) __lock_annotate(exclusive_trylock_function(__VA_ARGS__))

#define __trylocks_shared(...) __lock_annotate(shared_trylock_function(__VA_ARGS__))



#define __unlocks(...) __lock_annotate(unlock_function(__VA_ARGS__))


#define __asserts_exclusive(...) __lock_annotate(assert_exclusive_lock(__VA_ARGS__))

#define __asserts_shared(...) __lock_annotate(assert_shared_lock(__VA_ARGS__))



#define __requires_exclusive(...) __lock_annotate(exclusive_locks_required(__VA_ARGS__))

#define __requires_shared(...) __lock_annotate(shared_locks_required(__VA_ARGS__))

#define __requires_unlocked(...) __lock_annotate(locks_excluded(__VA_ARGS__))



#define __no_lock_analysis __lock_annotate(no_thread_safety_analysis)


#define __guarded_by(x) __lock_annotate(guarded_by(x))
#define __pt_guarded_by(x) __lock_annotate(pt_guarded_by(x))
# 13 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 2 3


#define __need_size_t 
#define __need_NULL 
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 155 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_ptrdiff_t
# 231 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_size_t
# 340 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef __need_wchar_t
# 390 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
#undef NULL




#define NULL ((void *)0)





#undef __need_NULL




#define offsetof(TYPE,MEMBER) __builtin_offsetof (TYPE, MEMBER)
# 18 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 2 3
# 27 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3


void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *restrict, const void *restrict, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *restrict, const char *restrict);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *restrict, const char *restrict);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *restrict, const char *restrict, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *restrict, const char *restrict, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *restrict, const char *restrict);

size_t strxfrm (char *restrict, const char *restrict, size_t);
# 86 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3
char *_strdup_r (struct _reent *, const char *);



char *_strndup_r (struct _reent *, const char *, size_t);
# 112 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3
char * _strerror_r (struct _reent *, int, int, int *);
# 134 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3
char *strsignal (int __signo);
# 175 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/string.h" 1 3
# 176 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.h" 2 3


# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h"
#define WSF_TYPES_H 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h"
#define TRUE 1



#define FALSE 0
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h"
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 1 3 4
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define _STDINT_H 


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _SYS__INTSUP_H 





#define __STDINT_EXP(x) __ ##x ##__
# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
       
       
       
       
       
       
       
       
#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef __int20
#undef __int20__
#undef long
#define signed +0
#define unsigned +0
#define char +0
#define short +1
#define __int20 +2
#define __int20__ +2
#define int +2
#define long +4
# 67 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define _INTPTR_EQ_INT 






#define _INT32_EQ_LONG 







#define __INT8 "hh"
# 93 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT16 "h"
# 104 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT32 "l"
# 113 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __INT64 "ll"






#define __FAST8 
# 129 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST16 






#define __FAST32 
# 147 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __FAST64 "ll"



#define __LEAST8 "hh"
# 162 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST16 "h"
# 173 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST32 "l"
# 182 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#define __LEAST64 "ll"

#undef signed
#undef unsigned
#undef char
#undef short
#undef int
#undef long
       
       
       
       
       
# 194 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20
       
# 195 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_intsup.h" 3 4
#undef __int20__
       
       
# 14 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 3 4
#define _SYS__STDINT_H 
# 20 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;
#define _INT8_T_DECLARED 


typedef __uint8_t uint8_t ;
#define _UINT8_T_DECLARED 

#define __int8_t_defined 1




typedef __int16_t int16_t ;
#define _INT16_T_DECLARED 


typedef __uint16_t uint16_t ;
#define _UINT16_T_DECLARED 

#define __int16_t_defined 1




typedef __int32_t int32_t ;
#define _INT32_T_DECLARED 


typedef __uint32_t uint32_t ;
#define _UINT32_T_DECLARED 

#define __int32_t_defined 1




typedef __int64_t int64_t ;
#define _INT64_T_DECLARED 


typedef __uint64_t uint64_t ;
#define _UINT64_T_DECLARED 

#define __int64_t_defined 1



typedef __intmax_t intmax_t;
#define _INTMAX_T_DECLARED 



typedef __uintmax_t uintmax_t;
#define _UINTMAX_T_DECLARED 



typedef __intptr_t intptr_t;
#define _INTPTR_T_DECLARED 



typedef __uintptr_t uintptr_t;
#define _UINTPTR_T_DECLARED 
# 15 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;
#define __int_least8_t_defined 1



typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;
#define __int_least16_t_defined 1



typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;
#define __int_least32_t_defined 1



typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
#define __int_least64_t_defined 1
# 51 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
  typedef int int_fast8_t;
  typedef unsigned int uint_fast8_t;
#define __int_fast8_t_defined 1







  typedef int int_fast16_t;
  typedef unsigned int uint_fast16_t;
#define __int_fast16_t_defined 1







  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
#define __int_fast32_t_defined 1







  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
#define __int_fast64_t_defined 1
# 128 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTPTR_MIN (-__INTPTR_MAX__ - 1)
#define INTPTR_MAX (__INTPTR_MAX__)
#define UINTPTR_MAX (__UINTPTR_MAX__)
# 152 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT8_MIN (-__INT8_MAX__ - 1)
#define INT8_MAX (__INT8_MAX__)
#define UINT8_MAX (__UINT8_MAX__)







#define INT_LEAST8_MIN (-__INT_LEAST8_MAX__ - 1)
#define INT_LEAST8_MAX (__INT_LEAST8_MAX__)
#define UINT_LEAST8_MAX (__UINT_LEAST8_MAX__)
# 174 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT16_MIN (-__INT16_MAX__ - 1)
#define INT16_MAX (__INT16_MAX__)
#define UINT16_MAX (__UINT16_MAX__)







#define INT_LEAST16_MIN (-__INT_LEAST16_MAX__ - 1)
#define INT_LEAST16_MAX (__INT_LEAST16_MAX__)
#define UINT_LEAST16_MAX (__UINT_LEAST16_MAX__)
# 196 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT32_MIN (-__INT32_MAX__ - 1)
#define INT32_MAX (__INT32_MAX__)
#define UINT32_MAX (__UINT32_MAX__)
# 212 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST32_MIN (-__INT_LEAST32_MAX__ - 1)
#define INT_LEAST32_MAX (__INT_LEAST32_MAX__)
#define UINT_LEAST32_MAX (__UINT_LEAST32_MAX__)
# 230 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT64_MIN (-__INT64_MAX__ - 1)
#define INT64_MAX (__INT64_MAX__)
#define UINT64_MAX (__UINT64_MAX__)
# 246 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_LEAST64_MIN (-__INT_LEAST64_MAX__ - 1)
#define INT_LEAST64_MAX (__INT_LEAST64_MAX__)
#define UINT_LEAST64_MAX (__UINT_LEAST64_MAX__)
# 262 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST8_MIN (-__INT_FAST8_MAX__ - 1)
#define INT_FAST8_MAX (__INT_FAST8_MAX__)
#define UINT_FAST8_MAX (__UINT_FAST8_MAX__)
# 278 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST16_MIN (-__INT_FAST16_MAX__ - 1)
#define INT_FAST16_MAX (__INT_FAST16_MAX__)
#define UINT_FAST16_MAX (__UINT_FAST16_MAX__)
# 294 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST32_MIN (-__INT_FAST32_MAX__ - 1)
#define INT_FAST32_MAX (__INT_FAST32_MAX__)
#define UINT_FAST32_MAX (__UINT_FAST32_MAX__)
# 310 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT_FAST64_MIN (-__INT_FAST64_MAX__ - 1)
#define INT_FAST64_MAX (__INT_FAST64_MAX__)
#define UINT_FAST64_MAX (__UINT_FAST64_MAX__)
# 326 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_MAX (__INTMAX_MAX__)
#define INTMAX_MIN (-INTMAX_MAX - 1)







#define UINTMAX_MAX (__UINTMAX_MAX__)







#define SIZE_MAX (__SIZE_MAX__)





#define SIG_ATOMIC_MIN (-__STDINT_EXP(INT_MAX) - 1)
#define SIG_ATOMIC_MAX (__STDINT_EXP(INT_MAX))



#define PTRDIFF_MAX (__PTRDIFF_MAX__)



#define PTRDIFF_MIN (-PTRDIFF_MAX - 1)




#define WCHAR_MIN (__WCHAR_MIN__)
# 374 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define WCHAR_MAX (__WCHAR_MAX__)
# 384 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define WINT_MAX (__WINT_MAX__)




#define WINT_MIN (__WINT_MIN__)






#define INT8_C(x) __INT8_C(x)
#define UINT8_C(x) __UINT8_C(x)
# 408 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT16_C(x) __INT16_C(x)
#define UINT16_C(x) __UINT16_C(x)
# 420 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT32_C(x) __INT32_C(x)
#define UINT32_C(x) __UINT32_C(x)
# 433 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INT64_C(x) __INT64_C(x)
#define UINT64_C(x) __UINT64_C(x)
# 449 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define INTMAX_C(x) __INTMAX_C(x)
#define UINTMAX_C(x) __UINTMAX_C(x)
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 2 3 4



#define _GCC_WRAP_STDINT_H 
# 49 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h" 2
# 60 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h"

# 60 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_types.h"
typedef uint8_t bool_t;
# 27 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_trace.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_trace.h"
#define WSF_TRACE_H 






typedef void (*WsfTokenHandler_t)(void);





void WsfTrace(const char *pStr, ...);
void WsfToken(uint32_t tok, uint32_t var);
void WsfPacketTrace(uint8_t ui8Type, uint32_t ui32Len, uint8_t *pui8Buf);


bool_t WsfTokenService(void);
uint8_t WsfTokenIOWrite(uint8_t *pBuf, uint8_t len);
# 94 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_trace.h"
#define WSF_TRACE0(subsys,stat,msg) 
#define WSF_TRACE1(subsys,stat,msg,var1) 
#define WSF_TRACE2(subsys,stat,msg,var1,var2) 
#define WSF_TRACE3(subsys,stat,msg,var1,var2,var3) 
#define PACKET_TRACE(type,len,buf) 



#define WSF_TRACE_INFO0(msg) 
#define WSF_TRACE_INFO1(msg,var1) 
#define WSF_TRACE_INFO2(msg,var1,var2) 
#define WSF_TRACE_INFO3(msg,var1,var2,var3) 
#define WSF_TRACE_WARN0(msg) WSF_TRACE0("WSF", "WARN", msg)
#define WSF_TRACE_WARN1(msg,var1) WSF_TRACE1("WSF", "WARN", msg, var1)
#define WSF_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("WSF", "WARN", msg, var1, var2)
#define WSF_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("WSF", "WARN", msg, var1, var2, var3)
#define WSF_TRACE_ERR0(msg) WSF_TRACE0("WSF", "ERR", msg)
#define WSF_TRACE_ERR1(msg,var1) WSF_TRACE1("WSF", "ERR", msg, var1)
#define WSF_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("WSF", "ERR", msg, var1, var2)
#define WSF_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("WSF", "ERR", msg, var1, var2, var3)
#define WSF_TRACE_ALLOC0(msg) 
#define WSF_TRACE_ALLOC1(msg,var1) 
#define WSF_TRACE_ALLOC2(msg,var1,var2) 
#define WSF_TRACE_ALLOC3(msg,var1,var2,var3) 
#define WSF_TRACE_FREE0(msg) 
#define WSF_TRACE_FREE1(msg,var1) 
#define WSF_TRACE_FREE2(msg,var1,var2) 
#define WSF_TRACE_FREE3(msg,var1,var2,var3) 
#define WSF_TRACE_MSG0(msg) 
#define WSF_TRACE_MSG1(msg,var1) 
#define WSF_TRACE_MSG2(msg,var1,var2) 
#define WSF_TRACE_MSG3(msg,var1,var2,var3) 
# 146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_trace.h"
#define HCI_TRACE_INFO0(msg) 
#define HCI_TRACE_INFO1(msg,var1) 
#define HCI_TRACE_INFO2(msg,var1,var2) 
#define HCI_TRACE_INFO3(msg,var1,var2,var3) 
#define HCI_TRACE_WARN0(msg) 
#define HCI_TRACE_WARN1(msg,var1) 
#define HCI_TRACE_WARN2(msg,var1,var2) 
#define HCI_TRACE_WARN3(msg,var1,var2,var3) 
#define HCI_TRACE_ERR0(msg) 
#define HCI_TRACE_ERR1(msg,var1) 
#define HCI_TRACE_ERR2(msg,var1,var2) 
#define HCI_TRACE_ERR3(msg,var1,var2,var3) 

#define HCI_PDUMP_CMD(len,pBuf) 
#define HCI_PDUMP_EVT(len,pBuf) 
#define HCI_PDUMP_TX_ACL(len,pBuf) 
#define HCI_PDUMP_RX_ACL(len,pBuf) 



#define DM_TRACE_INFO0(msg) WSF_TRACE0("DM", "INFO", msg)
#define DM_TRACE_INFO1(msg,var1) WSF_TRACE1("DM", "INFO", msg, var1)
#define DM_TRACE_INFO2(msg,var1,var2) WSF_TRACE2("DM", "INFO", msg, var1, var2)
#define DM_TRACE_INFO3(msg,var1,var2,var3) WSF_TRACE3("DM", "INFO", msg, var1, var2, var3)
#define DM_TRACE_WARN0(msg) WSF_TRACE0("DM", "WARN", msg)
#define DM_TRACE_WARN1(msg,var1) WSF_TRACE1("DM", "WARN", msg, var1)
#define DM_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("DM", "WARN", msg, var1, var2)
#define DM_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("DM", "WARN", msg, var1, var2, var3)
#define DM_TRACE_ERR0(msg) WSF_TRACE0("DM", "ERR", msg)
#define DM_TRACE_ERR1(msg,var1) WSF_TRACE1("DM", "ERR", msg, var1)
#define DM_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("DM", "ERR", msg, var1, var2)
#define DM_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("DM", "ERR", msg, var1, var2, var3)
#define DM_TRACE_ALLOC0(msg) WSF_TRACE0("DM", "ALLOC", msg)
#define DM_TRACE_ALLOC1(msg,var1) WSF_TRACE1("DM", "ALLOC", msg, var1)
#define DM_TRACE_ALLOC2(msg,var1,var2) WSF_TRACE2("DM", "ALLOC", msg, var1, var2)
#define DM_TRACE_ALLOC3(msg,var1,var2,var3) WSF_TRACE3("DM", "ALLOC", msg, var1, var2, var3)
#define DM_TRACE_FREE0(msg) WSF_TRACE0("DM", "FREE", msg)
#define DM_TRACE_FREE1(msg,var1) WSF_TRACE1("DM", "FREE", msg, var1)
#define DM_TRACE_FREE2(msg,var1,var2) WSF_TRACE2("DM", "FREE", msg, var1, var2)
#define DM_TRACE_FREE3(msg,var1,var2,var3) WSF_TRACE3("DM", "FREE", msg, var1, var2, var3)

#define L2C_TRACE_INFO0(msg) WSF_TRACE0("L2C", "INFO", msg)
#define L2C_TRACE_INFO1(msg,var1) WSF_TRACE1("L2C", "INFO", msg, var1)
#define L2C_TRACE_INFO2(msg,var1,var2) WSF_TRACE2("L2C", "INFO", msg, var1, var2)
#define L2C_TRACE_INFO3(msg,var1,var2,var3) WSF_TRACE3("L2C", "INFO", msg, var1, var2, var3)
#define L2C_TRACE_WARN0(msg) WSF_TRACE0("L2C", "WARN", msg)
#define L2C_TRACE_WARN1(msg,var1) WSF_TRACE1("L2C", "WARN", msg, var1)
#define L2C_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("L2C", "WARN", msg, var1, var2)
#define L2C_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("L2C", "WARN", msg, var1, var2, var3)
#define L2C_TRACE_ERR0(msg) WSF_TRACE0("L2C", "ERR", msg)
#define L2C_TRACE_ERR1(msg,var1) WSF_TRACE1("L2C", "ERR", msg, var1)
#define L2C_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("L2C", "ERR", msg, var1, var2)
#define L2C_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("L2C", "ERR", msg, var1, var2, var3)

#define ATT_TRACE_INFO0(msg) WSF_TRACE0("ATT", "INFO", msg)
#define ATT_TRACE_INFO1(msg,var1) WSF_TRACE1("ATT", "INFO", msg, var1)
#define ATT_TRACE_INFO2(msg,var1,var2) WSF_TRACE2("ATT", "INFO", msg, var1, var2)
#define ATT_TRACE_INFO3(msg,var1,var2,var3) WSF_TRACE3("ATT", "INFO", msg, var1, var2, var3)
#define ATT_TRACE_WARN0(msg) WSF_TRACE0("ATT", "WARN", msg)
#define ATT_TRACE_WARN1(msg,var1) WSF_TRACE1("ATT", "WARN", msg, var1)
#define ATT_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("ATT", "WARN", msg, var1, var2)
#define ATT_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("ATT", "WARN", msg, var1, var2, var3)
#define ATT_TRACE_ERR0(msg) WSF_TRACE0("ATT", "ERR", msg)
#define ATT_TRACE_ERR1(msg,var1) WSF_TRACE1("ATT", "ERR", msg, var1)
#define ATT_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("ATT", "ERR", msg, var1, var2)
#define ATT_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("ATT", "ERR", msg, var1, var2, var3)

#define SMP_TRACE_INFO0(msg) WSF_TRACE0("SMP", "INFO", msg)
#define SMP_TRACE_INFO1(msg,var1) WSF_TRACE1("SMP", "INFO", msg, var1)
#define SMP_TRACE_INFO2(msg,var1,var2) WSF_TRACE2("SMP", "INFO", msg, var1, var2)
#define SMP_TRACE_INFO3(msg,var1,var2,var3) WSF_TRACE3("SMP", "INFO", msg, var1, var2, var3)
#define SMP_TRACE_WARN0(msg) WSF_TRACE0("SMP", "WARN", msg)
#define SMP_TRACE_WARN1(msg,var1) WSF_TRACE1("SMP", "WARN", msg, var1)
#define SMP_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("SMP", "WARN", msg, var1, var2)
#define SMP_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("SMP", "WARN", msg, var1, var2, var3)
#define SMP_TRACE_ERR0(msg) WSF_TRACE0("SMP", "ERR", msg)
#define SMP_TRACE_ERR1(msg,var1) WSF_TRACE1("SMP", "ERR", msg, var1)
#define SMP_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("SMP", "ERR", msg, var1, var2)
#define SMP_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("SMP", "ERR", msg, var1, var2, var3)

#define APP_TRACE_INFO0(msg) WSF_TRACE0("APP", "INFO", msg)
#define APP_TRACE_INFO1(msg,var1) WSF_TRACE1("APP", "INFO", msg, var1)
#define APP_TRACE_INFO2(msg,var1,var2) WSF_TRACE2("APP", "INFO", msg, var1, var2)
#define APP_TRACE_INFO3(msg,var1,var2,var3) WSF_TRACE3("APP", "INFO", msg, var1, var2, var3)
#define APP_TRACE_WARN0(msg) WSF_TRACE0("APP", "WARN", msg)
#define APP_TRACE_WARN1(msg,var1) WSF_TRACE1("APP", "WARN", msg, var1)
#define APP_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("APP", "WARN", msg, var1, var2)
#define APP_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("APP", "WARN", msg, var1, var2, var3)
#define APP_TRACE_ERR0(msg) WSF_TRACE0("APP", "ERR", msg)
#define APP_TRACE_ERR1(msg,var1) WSF_TRACE1("APP", "ERR", msg, var1)
#define APP_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("APP", "ERR", msg, var1, var2)
#define APP_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("APP", "ERR", msg, var1, var2, var3)

#define LL_TRACE_INFO0(msg) WSF_TRACE0("LL", "INFO", msg)
#define LL_TRACE_INFO1(msg,var1) WSF_TRACE1("LL", "INFO", msg, var1)
#define LL_TRACE_INFO2(msg,var1,var2) WSF_TRACE2("LL", "INFO", msg, var1, var2)
#define LL_TRACE_INFO3(msg,var1,var2,var3) WSF_TRACE3("LL", "INFO", msg, var1, var2, var3)
#define LL_TRACE_WARN0(msg) WSF_TRACE0("LL", "WARN", msg)
#define LL_TRACE_WARN1(msg,var1) WSF_TRACE1("LL", "WARN", msg, var1)
#define LL_TRACE_WARN2(msg,var1,var2) WSF_TRACE2("LL", "WARN", msg, var1, var2)
#define LL_TRACE_WARN3(msg,var1,var2,var3) WSF_TRACE3("LL", "WARN", msg, var1, var2, var3)
#define LL_TRACE_ERR0(msg) WSF_TRACE0("LL", "ERR", msg)
#define LL_TRACE_ERR1(msg,var1) WSF_TRACE1("LL", "ERR", msg, var1)
#define LL_TRACE_ERR2(msg,var1,var2) WSF_TRACE2("LL", "ERR", msg, var1, var2)
#define LL_TRACE_ERR3(msg,var1,var2,var3) WSF_TRACE3("LL", "ERR", msg, var1, var2, var3)
# 28 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_assert.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_assert.h"
#define WSF_ASSERT_H 
# 33 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_assert.h"
void WsfAssert(const char *pFile, uint16_t line);
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_assert.h"
#define WSF_ASSERT(expr) 
# 65 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_assert.h"
#define WSF_CT_ASSERT(expr) extern char wsf_ct_assert[(expr) ? 1 : -1]
# 29 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
#define WSF_MSG_H 

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
#define WSF_QUEUE_H 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
#define WSF_QUEUE_INIT(pQueue) {(pQueue)->pHead = NULL; (pQueue)->pTail = NULL;}






typedef struct
{
  void *pHead;
  void *pTail;
} wsfQueue_t;
# 63 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
void WsfQueueEnq(wsfQueue_t *pQueue, void *pElem);
# 76 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
void *WsfQueueDeq(wsfQueue_t *pQueue);
# 90 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
void WsfQueuePush(wsfQueue_t *pQueue, void *pElem);
# 106 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
void WsfQueueInsert(wsfQueue_t *pQueue, void *pElem, void *pPrev);
# 122 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
void WsfQueueRemove(wsfQueue_t *pQueue, void *pElem, void *pPrev);
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
uint16_t WsfQueueCount(wsfQueue_t *pQueue);
# 148 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_queue.h"
bool_t WsfQueueEmpty(wsfQueue_t *pQueue);
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
#define WSF_OS_H 

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h"
#define WSF_OS_INT_H 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h"
#define WSF_MSG_QUEUE_EVENT 0x01
#define WSF_TIMER_EVENT 0x02
#define WSF_HANDLER_EVENT 0x04


#define WSF_TASK_FROM_ID(handlerID) (((handlerID) >> 4) & 0x0F)


#define WSF_HANDLER_FROM_ID(handlerID) ((handlerID) & 0x0F)






typedef uint8_t wsfHandlerId_t;


typedef uint8_t wsfEventMask_t;


typedef wsfHandlerId_t wsfTaskId_t;


typedef uint8_t wsfTaskEvent_t;
# 75 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h"
bool_t wsfOsReadyToSleep(void);
# 88 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h"
void WsfOsInit(void);
# 101 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h"
void wsfOsDispatcher(void);
# 112 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/port/freertos/wsf_os_int.h"
void WsfOsShutdown(void);
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h" 2
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
#define WSF_OS_DIAG FALSE







#define WSF_INVALID_TASK_ID 0xFF




#define WSF_OS_GET_ACTIVE_HANDLER_ID() WSF_INVALID_TASK_ID







extern wsfHandlerId_t WsfActiveHandler;






typedef struct
{
  uint16_t param;
  uint8_t event;
  uint8_t status;
} wsfMsgHdr_t;
# 89 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
typedef void (*wsfEventHandler_t)(wsfEventMask_t event, wsfMsgHdr_t *pMsg);
# 107 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
void WsfSetEvent(wsfHandlerId_t handlerId, wsfEventMask_t event);
# 118 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
void WsfTaskLock(void);
# 129 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
void WsfTaskUnlock(void);
# 143 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
void WsfTaskSetReady(wsfHandlerId_t handlerId, wsfTaskEvent_t event);
# 156 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
wsfQueue_t *WsfTaskMsgQueue(wsfHandlerId_t handlerId);
# 170 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
wsfHandlerId_t WsfOsSetNextHandler(wsfEventHandler_t handler);
# 184 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h"
void wsfOsSetEventObject(void *event_object);
# 27 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h" 2
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void *WsfMsgDataAlloc(uint16_t len, uint8_t tailroom);
# 61 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void *WsfMsgAlloc(uint16_t len);
# 74 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void WsfMsgFree(void *pMsg);
# 88 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void WsfMsgSend(wsfHandlerId_t handlerId, void *pMsg);
# 103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void WsfMsgEnq(wsfQueue_t *pQueue, wsfHandlerId_t handlerId, void *pMsg);
# 117 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void *WsfMsgDeq(wsfQueue_t *pQueue, wsfHandlerId_t *pHandlerId);
# 131 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_msg.h"
void *WsfMsgPeek(wsfQueue_t *pQueue, wsfHandlerId_t *pHandlerId);
# 30 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
#define SEC_API_H 
# 41 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
#define SEC_CMAC_KEY_LEN 16


#define SEC_CMAC_HASH_LEN 16


#define SEC_ECC_KEY_LEN 32





#define SEC_CCM_KEY_LEN 16
#define SEC_CCM_MAX_ADDITIONAL_LEN ((1<<16) - (1<<8))
#define SEC_CCM_L 2
#define SEC_CCM_NONCE_LEN (15-SEC_CCM_L)



#define SEC_TOKEN_INVALID 0xFF






typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t *pCiphertext;
} secAes_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t *pCiphertext;
  uint8_t *pPlainText;
} secCmacMsg_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t *pCiphertext;
  uint16_t textLen;
} secCcmEncMsg_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t *pText;
  uint8_t *pResult;
  uint16_t textLen;
  bool_t success;
} secCcmDecMsg_t;


typedef union
{
  wsfMsgHdr_t hdr;
  secAes_t aes;
  secCmacMsg_t cmac;
  secCcmEncMsg_t ccmEnc;
  secCcmDecMsg_t ccmDec;
} secMsg_t;


typedef struct
{
  uint8_t pubKey_x[32];
  uint8_t pubKey_y[32];
  uint8_t privKey[32];
} secEccKey_t;


typedef struct
{
  uint8_t secret[32];
} secEccSharedSec_t;



typedef struct
{
  wsfMsgHdr_t hdr;
  union
  {
    secEccSharedSec_t sharedSecret;
    secEccKey_t key;
    bool_t keyValid;
  } data;
} secEccMsg_t;


typedef void (*SecBlkEncFunc_t)(uint8_t *pKey, uint8_t *pMessage, void *pParam);
# 156 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecInit(void);
# 166 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecRandInit(void);
# 176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecAesInit(void);
# 186 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecAesRevInit(void);
# 196 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecCmacInit(void);
# 205 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecCcmInit(void);
# 215 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecEccInit(void);
# 239 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
uint8_t SecAes(uint8_t *pKey, uint8_t *pPlaintext, wsfHandlerId_t handlerId,
               uint16_t param, uint8_t event);
# 258 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
uint8_t SecAesRev(uint8_t *pKey, uint8_t *pPlaintext, wsfHandlerId_t handlerId,
                  uint16_t param, uint8_t event);
# 275 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
bool_t SecCmac(const uint8_t *pKey, uint8_t *pPlaintext, uint16_t textLen, wsfHandlerId_t handlerId,
               uint16_t param, uint8_t event);
# 297 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
bool_t SecCcmEnc(const uint8_t *pKey, uint8_t *pNonce, uint8_t *pPlainText, uint16_t textLen,
                 uint8_t *pClear, uint16_t clearLen, uint8_t micLen, uint8_t *pResult,
                 wsfHandlerId_t handlerId, uint16_t param, uint8_t event);
# 321 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
bool_t SecCcmDec(const uint8_t *pKey, uint8_t *pNonce, uint8_t *pCypherText, uint16_t textLen,
                 uint8_t *pClear, uint16_t clearLen, uint8_t *pMic, uint8_t micLen,
                 uint8_t *pResult, wsfHandlerId_t handlerId, uint16_t param, uint8_t event);
# 343 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
bool_t SecEccGenKey(wsfHandlerId_t handlerId, uint16_t param, uint8_t event);
# 357 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
bool_t SecEccGenSharedSecret(secEccKey_t *pKey, wsfHandlerId_t handlerId, uint16_t param, uint8_t event);
# 377 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h"
void SecRand(uint8_t *pRand, uint8_t randLen);
# 31 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_buf.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_buf.h"
#define WSF_BUF_H 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_buf.h"
#define WSF_BUF_STATS_MAX_LEN 128


#define WSF_BUF_ALLOC_FAILED 0x01






typedef struct
{
  uint16_t len;
  uint8_t num;
} wsfBufPoolDesc_t;


typedef struct
{
  uint16_t bufSize;
  uint8_t numBuf;
  uint8_t numAlloc;
  uint8_t maxAlloc;
  uint16_t maxReqLen;
} WsfBufPoolStat_t;


typedef struct
{
  uint8_t taskId;
  uint16_t len;
} wsfBufDiagAllocFail_t;


typedef struct
{
  union
  {
    wsfBufDiagAllocFail_t alloc;
  } param;

  uint8_t type;
} WsfBufDiag_t;
# 93 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_buf.h"
typedef void (*wsfBufDiagCback_t)(WsfBufDiag_t *pInfo);
# 114 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_buf.h"
uint16_t WsfBufInit(uint16_t bufMemLen, uint8_t *pBufMem, uint8_t numPools, wsfBufPoolDesc_t *pDesc);
# 127 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_buf.h"
void *WsfBufAlloc(uint16_t len);
# 140 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_buf.h"
void WsfBufFree(void *pBuf);
# 151 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_buf.h"
uint8_t *WsfBufGetAllocStats(void);
# 162 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_buf.h"
uint8_t WsfBufGetNumPool(void);
# 176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_buf.h"
void WsfBufGetPoolStats(WsfBufPoolStat_t *pStat, uint8_t numPool);
# 189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_buf.h"
void WsfBufDiagRegister(wsfBufDiagCback_t callback);
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bstream.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bstream.h"
#define BSTREAM_H 

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
#define BDA_H 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
#define BDA_ADDR_LEN 6


#define BDA_ADDR_STR_LEN (BDA_ADDR_LEN * 2)


#define BDA_ADDR_IS_RPA(bda) (((bda)[5] & 0xC0) == 0x40)


#define BDA_ADDR_IS_NRPA(bda) (((bda)[5] & 0xC0) == 0x00)


#define BDA_ADDR_IS_STATIC(bda) (((bda)[5] & 0xC0) == 0xC0)


#define BDA64_ADDR_IS_RPA(bda64) ((((bda64) >> 40) & 0xC0) == 0x40)


#define BDA64_ADDR_IS_NRPA(bda64) ((((bda64) >> 40) & 0xC0) == 0x00)


#define BDA64_ADDR_IS_STATIC(bda64) ((((bda64) >> 40) & 0xC0) == 0xC0)






typedef uint8_t bdAddr_t[6];
# 80 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
void BdaCpy(uint8_t *pDst, const uint8_t *pSrc);
# 95 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
bool_t BdaCmp(const uint8_t *pAddr1, const uint8_t *pAddr2);
# 108 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
uint8_t *BdaClr(uint8_t *pDst);
# 121 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
bool_t BdaIsZeros(const uint8_t *pAddr);
# 134 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h"
char *Bda2Str(const uint8_t *pAddr);
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bstream.h" 2
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bstream.h"
#define BYTES_TO_UINT16(n,p) {n = ((uint16_t)(p)[0] + ((uint16_t)(p)[1] << 8));}

#define BYTES_TO_UINT24(n,p) {n = ((uint16_t)(p)[0] + ((uint16_t)(p)[1] << 8) + ((uint16_t)(p)[2] << 16));}


#define BYTES_TO_UINT32(n,p) {n = ((uint32_t)(p)[0] + ((uint32_t)(p)[1] << 8) + ((uint32_t)(p)[2] << 16) + ((uint32_t)(p)[3] << 24));}


#define BYTES_TO_UINT40(n,p) {n = ((uint64_t)(p)[0] + ((uint64_t)(p)[1] << 8) + ((uint64_t)(p)[2] << 16) + ((uint64_t)(p)[3] << 24) + ((uint64_t)(p)[4] << 32));}



#define BYTES_TO_UINT64(n,p) {n = ((uint64_t)(p)[0] + ((uint64_t)(p)[1] << 8) + ((uint64_t)(p)[2] << 16) + ((uint64_t)(p)[3] << 24) + ((uint64_t)(p)[4] << 32) + ((uint64_t)(p)[5] << 40) + ((uint64_t)(p)[6] << 48) + ((uint64_t)(p)[7] << 56));}







#define UINT16_TO_BYTES(n) ((uint8_t) (n)), ((uint8_t)((n) >> 8))
#define UINT32_TO_BYTES(n) ((uint8_t) (n)), ((uint8_t)((n) >> 8)), ((uint8_t)((n) >> 16)), ((uint8_t)((n) >> 24))




#define UINT16_TO_BYTE0(n) ((uint8_t) (n))
#define UINT16_TO_BYTE1(n) ((uint8_t) ((n) >> 8))

#define UINT32_TO_BYTE0(n) ((uint8_t) (n))
#define UINT32_TO_BYTE1(n) ((uint8_t) ((n) >> 8))
#define UINT32_TO_BYTE2(n) ((uint8_t) ((n) >> 16))
#define UINT32_TO_BYTE3(n) ((uint8_t) ((n) >> 24))




#define BSTREAM_TO_INT8(n,p) {n = (int8_t)(*(p)++);}
#define BSTREAM_TO_UINT8(n,p) {n = (uint8_t)(*(p)++);}
#define BSTREAM_TO_UINT16(n,p) {BYTES_TO_UINT16(n, p); p += 2;}
#define BSTREAM_TO_UINT24(n,p) {BYTES_TO_UINT24(n, p); p += 3;}
#define BSTREAM_TO_UINT32(n,p) {BYTES_TO_UINT32(n, p); p += 4;}
#define BSTREAM_TO_UINT40(n,p) {BYTES_TO_UINT40(n, p); p += 5;}
#define BSTREAM_TO_UINT64(n,p) {n = BstreamToUint64(p); p += 8;}
#define BSTREAM_TO_BDA(bda,p) {BdaCpy(bda, p); p += BDA_ADDR_LEN;}
#define BSTREAM_TO_BDA64(bda,p) {bda = BstreamToBda64(p); p += BDA_ADDR_LEN;}




#define UINT8_TO_BSTREAM(p,n) {*(p)++ = (uint8_t)(n);}
#define UINT16_TO_BSTREAM(p,n) {*(p)++ = (uint8_t)(n); *(p)++ = (uint8_t)((n) >> 8);}
#define UINT24_TO_BSTREAM(p,n) {*(p)++ = (uint8_t)(n); *(p)++ = (uint8_t)((n) >> 8); *(p)++ = (uint8_t)((n) >> 16);}

#define UINT32_TO_BSTREAM(p,n) {*(p)++ = (uint8_t)(n); *(p)++ = (uint8_t)((n) >> 8); *(p)++ = (uint8_t)((n) >> 16); *(p)++ = (uint8_t)((n) >> 24);}

#define UINT40_TO_BSTREAM(p,n) {*(p)++ = (uint8_t)(n); *(p)++ = (uint8_t)((n) >> 8); *(p)++ = (uint8_t)((n) >> 16); *(p)++ = (uint8_t)((n) >> 24); *(p)++ = (uint8_t)((n) >> 32);}


#define UINT64_TO_BSTREAM(p,n) {Uint64ToBstream(p, n); p += sizeof(uint64_t);}
#define BDA_TO_BSTREAM(p,bda) {BdaCpy(p, bda); p += BDA_ADDR_LEN;}
#define BDA64_TO_BSTREAM(p,bda) {Bda64ToBstream(p, bda); p += BDA_ADDR_LEN;}




#define UINT16_TO_BUF(p,n) {(p)[0] = (uint8_t)(n); (p)[1] = (uint8_t)((n) >> 8);}
#define UINT24_TO_BUF(p,n) {(p)[0] = (uint8_t)(n); (p)[1] = (uint8_t)((n) >> 8); (p)[2] = (uint8_t)((n) >> 16);}

#define UINT32_TO_BUF(p,n) {(p)[0] = (uint8_t)(n); (p)[1] = (uint8_t)((n) >> 8); (p)[2] = (uint8_t)((n) >> 16); (p)[3] = (uint8_t)((n) >> 24);}

#define UINT40_TO_BUF(p,n) {(p)[0] = (uint8_t)(n); (p)[1] = (uint8_t)((n) >> 8); (p)[2] = (uint8_t)((n) >> 16); (p)[3] = (uint8_t)((n) >> 24); (p)[4] = (uint8_t)((n) >> 32);}






#define BYTES_UINT16_CMP(p,n) ((p)[1] == UINT16_TO_BYTE1(n) && (p)[0] == UINT16_TO_BYTE0(n))




#define FLT_TO_UINT32(m,e) ((m) | ((int32_t)(e) << 24))
#define UINT32_TO_FLT(m,e,n) {m = UINT32_TO_FLT_M(n); e = UINT32_TO_FLT_E(n);}
#define UINT32_TO_FLT_M(n) ((((n) & 0x00FFFFFF) >= 0x00800000) ? ((int32_t)(((n) | 0xFF000000))) : ((int32_t)((n) & 0x00FFFFFF)))

#define UINT32_TO_FLT_E(n) ((int8_t)(n >> 24))



#define SFLT_TO_UINT16(m,e) ((m) | ((int16_t)(e) << 12))
#define UINT16_TO_SFLT(m,e,n) {m = UINT16_TO_SFLT_M(n); e = UINT16_TO_SFLT_E(n);}
#define UINT16_TO_SFLT_M(n) ((((n) & 0x0FFF) >= 0x0800) ? ((int16_t)(((n) | 0xF000))) : ((int16_t)((n) & 0x0FFF)))

#define UINT16_TO_SFLT_E(n) (((n >> 12) >= 0x0008) ? ((int8_t)(((n >> 12) | 0xF0))) : ((int8_t)(n >> 12)))






uint64_t BstreamToBda64(const uint8_t *p);
uint64_t BstreamToUint64(const uint8_t *p);
void Bda64ToBstream(uint8_t *p, uint64_t bda);
void Uint64ToBstream(uint8_t *p, uint64_t n);
# 33 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/calc128.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/calc128.h"
#define CALC128_H 
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/calc128.h"
#define CALC128_LEN 16






extern const uint8_t calc128Zeros[16];
# 59 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/calc128.h"
void Calc128Cpy(uint8_t *pDst, uint8_t *pSrc);
# 73 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/calc128.h"
void Calc128Cpy64(uint8_t *pDst, uint8_t *pSrc);
# 87 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/calc128.h"
void Calc128Xor(uint8_t *pDst, uint8_t *pSrc);
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/wstr.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/wstr.h"
#define WSTR_H 
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/wstr.h"
void WstrnCpy(char *pBuf, const char *pData, uint8_t n);
# 58 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/wstr.h"
void WStrReverseCpy(uint8_t *pBuf1, const uint8_t *pBuf2, uint16_t len);
# 72 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/wstr.h"
void WStrReverse(uint8_t *pBuf, uint8_t len);
# 35 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
#define DM_API_H 

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
#define HCI_API_H 


# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/hci_defs.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/hci_defs.h"
#define HCI_DEFS_H 
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/hci_defs.h"
#define HCI_CMD_HDR_LEN 3
#define HCI_ACL_HDR_LEN 4
#define HCI_ISO_HDR_LEN 4
#define HCI_EVT_HDR_LEN 2
#define HCI_EVT_PARAM_MAX_LEN 255
#define HCI_ACL_DEFAULT_LEN 27
#define HCI_PB_FLAG_MASK 0x3000
#define HCI_PB_START_H2C 0x0000
#define HCI_PB_CONTINUE 0x1000
#define HCI_PB_START_C2H 0x2000
#define HCI_HANDLE_MASK 0x0FFF
#define HCI_HANDLE_NONE 0xFFFF





#define HCI_CMD_TYPE 1
#define HCI_ACL_TYPE 2
#define HCI_EVT_TYPE 4
#define HCI_ISO_TYPE 5






#define HCI_SUCCESS 0x00
#define HCI_ERR_UNKNOWN_CMD 0x01
#define HCI_ERR_UNKNOWN_HANDLE 0x02
#define HCI_ERR_HARDWARE_FAILURE 0x03
#define HCI_ERR_PAGE_TIMEOUT 0x04
#define HCI_ERR_AUTH_FAILURE 0x05
#define HCI_ERR_KEY_MISSING 0x06
#define HCI_ERR_MEMORY_EXCEEDED 0x07
#define HCI_ERR_CONN_TIMEOUT 0x08
#define HCI_ERR_CONN_LIMIT 0x09
#define HCI_ERR_SYNCH_CONN_LIMIT 0x0A
#define HCI_ERR_ACL_CONN_EXISTS 0x0B
#define HCI_ERR_CMD_DISALLOWED 0x0C
#define HCI_ERR_REJ_RESOURCES 0x0D
#define HCI_ERR_REJ_SECURITY 0x0E
#define HCI_ERR_REJ_BD_ADDR 0x0F
#define HCI_ERR_ACCEPT_TIMEOUT 0x10
#define HCI_ERR_UNSUP_FEAT 0x11
#define HCI_ERR_INVALID_PARAM 0x12
#define HCI_ERR_REMOTE_TERMINATED 0x13
#define HCI_ERR_REMOTE_RESOURCES 0x14
#define HCI_ERR_REMOTE_POWER_OFF 0x15
#define HCI_ERR_LOCAL_TERMINATED 0x16
#define HCI_ERR_REPEATED_ATTEMPTS 0x17
#define HCI_ERR_PAIRING_NOT_ALLOWED 0x18
#define HCI_ERR_UNKNOWN_LMP_PDU 0x19
#define HCI_ERR_UNSUP_REMOTE_FEAT 0x1A
#define HCI_ERR_SCO_OFFSET 0x1B
#define HCI_ERR_SCO_INTERVAL 0x1C
#define HCI_ERR_SCO_MODE 0x1D
#define HCI_ERR_LMP_PARAM 0x1E
#define HCI_ERR_UNSPECIFIED 0x1F
#define HCI_ERR_UNSUP_LMP_PARAM 0x20
#define HCI_ERR_ROLE_CHANGE 0x21
#define HCI_ERR_LL_RESP_TIMEOUT 0x22
#define HCI_ERR_LMP_COLLISION 0x23
#define HCI_ERR_LMP_PDU 0x24
#define HCI_ERR_ENCRYPT_MODE 0x25
#define HCI_ERR_LINK_KEY 0x26
#define HCI_ERR_UNSUP_QOS 0x27
#define HCI_ERR_INSTANT_PASSED 0x28
#define HCI_ERR_UNSUP_UNIT_KEY 0x29
#define HCI_ERR_TRANSACT_COLLISION 0x2A
#define HCI_ERR_CHANNEL_CLASS 0x2E
#define HCI_ERR_MEMORY 0x2F
#define HCI_ERR_PARAMETER_RANGE 0x30
#define HCI_ERR_ROLE_SWITCH_PEND 0x32
#define HCI_ERR_RESERVED_SLOT 0x34
#define HCI_ERR_ROLE_SWITCH 0x35
#define HCI_ERR_INQ_TOO_LARGE 0x36
#define HCI_ERR_UNSUP_SSP 0x37
#define HCI_ERR_HOST_BUSY_PAIRING 0x38
#define HCI_ERR_NO_CHANNEL 0x39
#define HCI_ERR_CONTROLLER_BUSY 0x3A
#define HCI_ERR_CONN_INTERVAL 0x3B
#define HCI_ERR_ADV_TIMEOUT 0x3C
#define HCI_ERR_MIC_FAILURE 0x3D
#define HCI_ERR_CONN_FAIL 0x3E
#define HCI_ERR_MAC_CONN_FAIL 0x3F
#define HCI_ERR_COARSE_CLK_ADJ_REJ 0x40
#define HCI_ERR_TYPE0_SUBMAP_NOT_DEF 0x41
#define HCI_ERR_UNKNOWN_ADV_ID 0x42
#define HCI_ERR_LIMIT_REACHED 0x43
#define HCI_ERR_OP_CANCELLED_BY_HOST 0x44

#define HCI_ERR_PKT_TOO_LONG 0x45






#define HCI_OGF_NOP 0x00
#define HCI_OGF_LINK_CONTROL 0x01
#define HCI_OGF_LINK_POLICY 0x02
#define HCI_OGF_CONTROLLER 0x03
#define HCI_OGF_INFORMATIONAL 0x04
#define HCI_OGF_STATUS 0x05
#define HCI_OGF_TESTING 0x06
#define HCI_OGF_LE_CONTROLLER 0x08
#define HCI_OGF_VENDOR_SPEC 0x3F






#define HCI_OCF_NOP 0x00






#define HCI_OCF_DISCONNECT 0x06
#define HCI_OCF_READ_REMOTE_VER_INFO 0x1D
# 167 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/hci_defs.h"
#define HCI_OCF_SET_EVENT_MASK 0x01
#define HCI_OCF_RESET 0x03
#define HCI_OCF_READ_TX_PWR_LVL 0x2D
#define HCI_OCF_SET_CONTROLLER_TO_HOST_FC 0x31
#define HCI_OCF_HOST_BUFFER_SIZE 0x33
#define HCI_OCF_HOST_NUM_CMPL_PKTS 0x35
#define HCI_OCF_SET_EVENT_MASK_PAGE2 0x63
#define HCI_OCF_READ_AUTH_PAYLOAD_TO 0x7B
#define HCI_OCF_WRITE_AUTH_PAYLOAD_TO 0x7C






#define HCI_OCF_READ_LOCAL_VER_INFO 0x01
#define HCI_OCF_READ_LOCAL_SUP_CMDS 0x02
#define HCI_OCF_READ_LOCAL_SUP_FEAT 0x03
#define HCI_OCF_READ_BUF_SIZE 0x05
#define HCI_OCF_READ_BD_ADDR 0x09






#define HCI_OCF_READ_RSSI 0x05






#define HCI_OCF_LE_SET_EVENT_MASK 0x01
#define HCI_OCF_LE_READ_BUF_SIZE 0x02
#define HCI_OCF_LE_READ_LOCAL_SUP_FEAT 0x03
#define HCI_OCF_LE_SET_RAND_ADDR 0x05
#define HCI_OCF_LE_SET_ADV_PARAM 0x06
#define HCI_OCF_LE_READ_ADV_TX_POWER 0x07
#define HCI_OCF_LE_SET_ADV_DATA 0x08
#define HCI_OCF_LE_SET_SCAN_RESP_DATA 0x09
#define HCI_OCF_LE_SET_ADV_ENABLE 0x0A
#define HCI_OCF_LE_SET_SCAN_PARAM 0x0B
#define HCI_OCF_LE_SET_SCAN_ENABLE 0x0C
#define HCI_OCF_LE_CREATE_CONN 0x0D
#define HCI_OCF_LE_CREATE_CONN_CANCEL 0x0E
#define HCI_OCF_LE_READ_WHITE_LIST_SIZE 0x0F
#define HCI_OCF_LE_CLEAR_WHITE_LIST 0x10
#define HCI_OCF_LE_ADD_DEV_WHITE_LIST 0x11
#define HCI_OCF_LE_REMOVE_DEV_WHITE_LIST 0x12
#define HCI_OCF_LE_CONN_UPDATE 0x13
#define HCI_OCF_LE_SET_HOST_CHAN_CLASS 0x14
#define HCI_OCF_LE_READ_CHAN_MAP 0x15
#define HCI_OCF_LE_READ_REMOTE_FEAT 0x16
#define HCI_OCF_LE_ENCRYPT 0x17
#define HCI_OCF_LE_RAND 0x18
#define HCI_OCF_LE_START_ENCRYPTION 0x19
#define HCI_OCF_LE_LTK_REQ_REPL 0x1A
#define HCI_OCF_LE_LTK_REQ_NEG_REPL 0x1B
#define HCI_OCF_LE_READ_SUP_STATES 0x1C
#define HCI_OCF_LE_RECEIVER_TEST 0x1D
#define HCI_OCF_LE_TRANSMITTER_TEST 0x1E
#define HCI_OCF_LE_TEST_END 0x1F

#define HCI_OCF_LE_REM_CONN_PARAM_REP 0x20
#define HCI_OCF_LE_REM_CONN_PARAM_NEG_REP 0x21

#define HCI_OCF_LE_SET_DATA_LEN 0x22
#define HCI_OCF_LE_READ_DEF_DATA_LEN 0x23
#define HCI_OCF_LE_WRITE_DEF_DATA_LEN 0x24
#define HCI_OCF_LE_READ_LOCAL_P256_PUB_KEY 0x25
#define HCI_OCF_LE_GENERATE_DHKEY 0x26
#define HCI_OCF_LE_ADD_DEV_RES_LIST 0x27
#define HCI_OCF_LE_REMOVE_DEV_RES_LIST 0x28
#define HCI_OCF_LE_CLEAR_RES_LIST 0x29
#define HCI_OCF_LE_READ_RES_LIST_SIZE 0x2A
#define HCI_OCF_LE_READ_PEER_RES_ADDR 0x2B
#define HCI_OCF_LE_READ_LOCAL_RES_ADDR 0x2C
#define HCI_OCF_LE_SET_ADDR_RES_ENABLE 0x2D
#define HCI_OCF_LE_SET_RES_PRIV_ADDR_TO 0x2E
#define HCI_OCF_LE_READ_MAX_DATA_LEN 0x2F

#define HCI_OCF_LE_READ_PHY 0x30
#define HCI_OCF_LE_SET_DEF_PHY 0x31
#define HCI_OCF_LE_SET_PHY 0x32
#define HCI_OCF_LE_ENHANCED_RECEIVER_TEST 0x33
#define HCI_OCF_LE_ENHANCED_TRANSMITTER_TEST 0x34
#define HCI_OCF_LE_SET_ADV_SET_RAND_ADDR 0x35
#define HCI_OCF_LE_SET_EXT_ADV_PARAM 0x36
#define HCI_OCF_LE_SET_EXT_ADV_DATA 0x37
#define HCI_OCF_LE_SET_EXT_SCAN_RESP_DATA 0x38
#define HCI_OCF_LE_SET_EXT_ADV_ENABLE 0x39
#define HCI_OCF_LE_READ_MAX_ADV_DATA_LEN 0x3A
#define HCI_OCF_LE_READ_NUM_SUP_ADV_SETS 0x3B
#define HCI_OCF_LE_REMOVE_ADV_SET 0x3C
#define HCI_OCF_LE_CLEAR_ADV_SETS 0x3D
#define HCI_OCF_LE_SET_PER_ADV_PARAM 0x3E
#define HCI_OCF_LE_SET_PER_ADV_DATA 0x3F
#define HCI_OCF_LE_SET_PER_ADV_ENABLE 0x40
#define HCI_OCF_LE_SET_EXT_SCAN_PARAM 0x41
#define HCI_OCF_LE_SET_EXT_SCAN_ENABLE 0x42
#define HCI_OCF_LE_EXT_CREATE_CONN 0x43
#define HCI_OCF_LE_PER_ADV_CREATE_SYNC 0x44
#define HCI_OCF_LE_PER_ADV_CREATE_SYNC_CANCEL 0x45
#define HCI_OCF_LE_PER_ADV_TERM_SYNC 0x46
#define HCI_OCF_LE_ADD_DEV_PER_ADV_LIST 0x47
#define HCI_OCF_LE_REMOVE_DEV_PER_ADV_LIST 0x48
#define HCI_OCF_LE_CLEAR_PER_ADV_LIST 0x49
#define HCI_OCF_LE_READ_PER_ADV_LIST_SIZE 0x4A
#define HCI_OCF_LE_READ_TX_POWER 0x4B
#define HCI_OCF_LE_READ_RF_PATH_COMP 0x4C
#define HCI_OCF_LE_WRITE_RF_PATH_COMP 0x4D
#define HCI_OCF_LE_SET_PRIVACY_MODE 0x4E

#define HCI_OCF_LE_RECEIVER_TEST_V3 0x4F
#define HCI_OCF_LE_TRANSMITTER_TEST_V3 0x50
#define HCI_OCF_LE_SET_CONNLESS_CTE_TX_PARAMS 0x51
#define HCI_OCF_LE_SET_CONNLESS_CTE_TX_ENABLE 0x52
#define HCI_OCF_LE_SET_CONNLESS_IQ_SAMP_ENABLE 0x53
#define HCI_OCF_LE_SET_CONN_CTE_RX_PARAMS 0x54
#define HCI_OCF_LE_SET_CONN_CTE_TX_PARAMS 0x55
#define HCI_OCF_LE_CONN_CTE_REQ_ENABLE 0x56
#define HCI_OCF_LE_CONN_CTE_RSP_ENABLE 0x57
#define HCI_OCF_LE_READ_ANTENNA_INFO 0x58
#define HCI_OCF_LE_SET_PER_ADV_RCV_ENABLE 0x59
#define HCI_OCF_LE_PER_ADV_SYNC_TRANSFER 0x5A
#define HCI_OCF_LE_PER_ADV_SET_INFO_TRANSFER 0x5B
#define HCI_OCF_LE_SET_PAST_PARAM 0x5C
#define HCI_OCF_LE_SET_DEFAULT_PAST_PARAM 0x5D
#define HCI_OCF_LE_GENERATE_DHKEY_V2 0x5E
#define HCI_OCF_LE_MODIFY_SLEEP_CLK_ACC 0x5F

#define HCI_OCF_LE_READ_ISO_BUFFER_SIZE 0x60
#define HCI_OCF_LE_READ_ISO_TX_SYNC 0x61
#define HCI_OCF_LE_SET_CIG_PARAMS 0x62
#define HCI_OCF_LE_SET_CIG_PARAMS_TEST 0x63
#define HCI_OCF_LE_CREATE_CIS 0x64
#define HCI_OCF_LE_REMOVE_CIG 0x65
#define HCI_OCF_LE_ACCEPT_CIS_REQ 0x66
#define HCI_OCF_LE_REJECT_CIS_REQ 0x67
#define HCI_OCF_LE_CREATE_BIG 0x68
#define HCI_OCF_LE_CREATE_BIG_TEST 0x69
#define HCI_OCF_LE_BIG_CREATE_SYNC 0x6A
#define HCI_OCF_LE_TERMINATE_BIG 0x6B
#define HCI_OCF_LE_BIG_TERMINATE_SYNC 0x6C
#define HCI_OCF_LE_REQUEST_PEER_SCA 0x6D
#define HCI_OCF_LE_SETUP_ISO_DATA_PATH 0x6E
#define HCI_OCF_LE_REMOVE_ISO_DATA_PATH 0x6F
#define HCI_OCF_LE_ISO_TX_TEST 0x70
#define HCI_OCF_LE_ISO_RX_TEST 0x71
#define HCI_OCF_LE_ISO_READ_TEST_COUNTER 0x72
#define HCI_OCF_LE_ISO_TERMINATE_TEST 0x73






#define HCI_OPCODE(ogf,ocf) (((ogf) << 10) + (ocf))
#define HCI_OGF(opcode) ((opcode) >> 10)
#define HCI_OCF(opcode) ((opcode) & 0x03FF)






#define HCI_OPCODE_NOP HCI_OPCODE(HCI_OGF_NOP, HCI_OCF_NOP)

#define HCI_OPCODE_DISCONNECT HCI_OPCODE(HCI_OGF_LINK_CONTROL, HCI_OCF_DISCONNECT)
#define HCI_OPCODE_READ_REMOTE_VER_INFO HCI_OPCODE(HCI_OGF_LINK_CONTROL, HCI_OCF_READ_REMOTE_VER_INFO)

#define HCI_OPCODE_SET_EVENT_MASK HCI_OPCODE(HCI_OGF_CONTROLLER, HCI_OCF_SET_EVENT_MASK)
#define HCI_OPCODE_RESET HCI_OPCODE(HCI_OGF_CONTROLLER, HCI_OCF_RESET)
#define HCI_OPCODE_READ_TX_PWR_LVL HCI_OPCODE(HCI_OGF_CONTROLLER, HCI_OCF_READ_TX_PWR_LVL)
#define HCI_OPCODE_SET_EVENT_MASK_PAGE2 HCI_OPCODE(HCI_OGF_CONTROLLER, HCI_OCF_SET_EVENT_MASK_PAGE2)
#define HCI_OPCODE_READ_AUTH_PAYLOAD_TO HCI_OPCODE(HCI_OGF_CONTROLLER, HCI_OCF_READ_AUTH_PAYLOAD_TO)
#define HCI_OPCODE_WRITE_AUTH_PAYLOAD_TO HCI_OPCODE(HCI_OGF_CONTROLLER, HCI_OCF_WRITE_AUTH_PAYLOAD_TO)

#define HCI_OPCODE_READ_LOCAL_VER_INFO HCI_OPCODE(HCI_OGF_INFORMATIONAL, HCI_OCF_READ_LOCAL_VER_INFO)
#define HCI_OPCODE_READ_LOCAL_SUP_CMDS HCI_OPCODE(HCI_OGF_INFORMATIONAL, HCI_OCF_READ_LOCAL_SUP_CMDS)
#define HCI_OPCODE_READ_LOCAL_SUP_FEAT HCI_OPCODE(HCI_OGF_INFORMATIONAL, HCI_OCF_READ_LOCAL_SUP_FEAT)
#define HCI_OPCODE_READ_BUF_SIZE HCI_OPCODE(HCI_OGF_INFORMATIONAL, HCI_OCF_READ_BUF_SIZE)
#define HCI_OPCODE_READ_BD_ADDR HCI_OPCODE(HCI_OGF_INFORMATIONAL, HCI_OCF_READ_BD_ADDR)

#define HCI_OPCODE_READ_RSSI HCI_OPCODE(HCI_OGF_STATUS, HCI_OCF_READ_RSSI)

#define HCI_OPCODE_LE_SET_EVENT_MASK HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EVENT_MASK)
#define HCI_OPCODE_LE_READ_BUF_SIZE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_BUF_SIZE)
#define HCI_OPCODE_LE_READ_LOCAL_SUP_FEAT HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_LOCAL_SUP_FEAT)
#define HCI_OPCODE_LE_SET_RAND_ADDR HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_RAND_ADDR)
#define HCI_OPCODE_LE_SET_ADV_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_ADV_PARAM)
#define HCI_OPCODE_LE_READ_ADV_TX_POWER HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_ADV_TX_POWER)
#define HCI_OPCODE_LE_SET_ADV_DATA HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_ADV_DATA)
#define HCI_OPCODE_LE_SET_SCAN_RESP_DATA HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_SCAN_RESP_DATA)
#define HCI_OPCODE_LE_SET_ADV_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_ADV_ENABLE)
#define HCI_OPCODE_LE_SET_SCAN_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_SCAN_PARAM)
#define HCI_OPCODE_LE_SET_SCAN_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_SCAN_ENABLE)
#define HCI_OPCODE_LE_CREATE_CONN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CREATE_CONN)
#define HCI_OPCODE_LE_CREATE_CONN_CANCEL HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CREATE_CONN_CANCEL)
#define HCI_OPCODE_LE_READ_WHITE_LIST_SIZE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_WHITE_LIST_SIZE)
#define HCI_OPCODE_LE_CLEAR_WHITE_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CLEAR_WHITE_LIST)
#define HCI_OPCODE_LE_ADD_DEV_WHITE_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ADD_DEV_WHITE_LIST)
#define HCI_OPCODE_LE_REMOVE_DEV_WHITE_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REMOVE_DEV_WHITE_LIST)
#define HCI_OPCODE_LE_CONN_UPDATE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CONN_UPDATE)
#define HCI_OPCODE_LE_SET_HOST_CHAN_CLASS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_HOST_CHAN_CLASS)
#define HCI_OPCODE_LE_READ_CHAN_MAP HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_CHAN_MAP)
#define HCI_OPCODE_LE_READ_REMOTE_FEAT HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_REMOTE_FEAT)
#define HCI_OPCODE_LE_ENCRYPT HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ENCRYPT)
#define HCI_OPCODE_LE_RAND HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_RAND)
#define HCI_OPCODE_LE_START_ENCRYPTION HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_START_ENCRYPTION)
#define HCI_OPCODE_LE_LTK_REQ_REPL HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_LTK_REQ_REPL)
#define HCI_OPCODE_LE_LTK_REQ_NEG_REPL HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_LTK_REQ_NEG_REPL)
#define HCI_OPCODE_LE_READ_SUP_STATES HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_SUP_STATES)
#define HCI_OPCODE_LE_RECEIVER_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_RECEIVER_TEST)
#define HCI_OPCODE_LE_TRANSMITTER_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_TRANSMITTER_TEST)
#define HCI_OPCODE_LE_TEST_END HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_TEST_END)

#define HCI_OPCODE_LE_REM_CONN_PARAM_REP HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REM_CONN_PARAM_REP)
#define HCI_OPCODE_LE_REM_CONN_PARAM_NEG_REP HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REM_CONN_PARAM_NEG_REP)

#define HCI_OPCODE_LE_SET_DATA_LEN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_DATA_LEN)
#define HCI_OPCODE_LE_READ_DEF_DATA_LEN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_DEF_DATA_LEN)
#define HCI_OPCODE_LE_WRITE_DEF_DATA_LEN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_WRITE_DEF_DATA_LEN)
#define HCI_OPCODE_LE_READ_LOCAL_P256_PUB_KEY HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_LOCAL_P256_PUB_KEY)
#define HCI_OPCODE_LE_GENERATE_DHKEY HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_GENERATE_DHKEY)
#define HCI_OPCODE_LE_ADD_DEV_RES_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ADD_DEV_RES_LIST)
#define HCI_OPCODE_LE_REMOVE_DEV_RES_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REMOVE_DEV_RES_LIST)
#define HCI_OPCODE_LE_CLEAR_RES_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CLEAR_RES_LIST)
#define HCI_OPCODE_LE_READ_RES_LIST_SIZE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_RES_LIST_SIZE)
#define HCI_OPCODE_LE_READ_PEER_RES_ADDR HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_PEER_RES_ADDR)
#define HCI_OPCODE_LE_READ_LOCAL_RES_ADDR HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_LOCAL_RES_ADDR)
#define HCI_OPCODE_LE_SET_ADDR_RES_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_ADDR_RES_ENABLE)
#define HCI_OPCODE_LE_SET_RES_PRIV_ADDR_TO HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_RES_PRIV_ADDR_TO)
#define HCI_OPCODE_LE_READ_MAX_DATA_LEN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_MAX_DATA_LEN)

#define HCI_OPCODE_LE_READ_PHY HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_PHY)
#define HCI_OPCODE_LE_SET_DEF_PHY HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_DEF_PHY)
#define HCI_OPCODE_LE_SET_PHY HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PHY)
#define HCI_OPCODE_LE_ENHANCED_RECEIVER_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ENHANCED_RECEIVER_TEST)
#define HCI_OPCODE_LE_ENHANCED_TRANSMITTER_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ENHANCED_TRANSMITTER_TEST)
#define HCI_OPCODE_LE_SET_ADV_SET_RAND_ADDR HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_ADV_SET_RAND_ADDR)
#define HCI_OPCODE_LE_SET_EXT_ADV_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EXT_ADV_PARAM)
#define HCI_OPCODE_LE_SET_EXT_ADV_DATA HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EXT_ADV_DATA)
#define HCI_OPCODE_LE_SET_EXT_SCAN_RESP_DATA HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EXT_SCAN_RESP_DATA)
#define HCI_OPCODE_LE_SET_EXT_ADV_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EXT_ADV_ENABLE)
#define HCI_OPCODE_LE_READ_MAX_ADV_DATA_LEN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_MAX_ADV_DATA_LEN)
#define HCI_OPCODE_LE_READ_NUM_SUP_ADV_SETS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_NUM_SUP_ADV_SETS)
#define HCI_OPCODE_LE_REMOVE_ADV_SET HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REMOVE_ADV_SET)
#define HCI_OPCODE_LE_CLEAR_ADV_SETS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CLEAR_ADV_SETS)
#define HCI_OPCODE_LE_SET_PER_ADV_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PER_ADV_PARAM)
#define HCI_OPCODE_LE_SET_PER_ADV_DATA HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PER_ADV_DATA)
#define HCI_OPCODE_LE_SET_PER_ADV_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PER_ADV_ENABLE)
#define HCI_OPCODE_LE_SET_EXT_SCAN_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EXT_SCAN_PARAM)
#define HCI_OPCODE_LE_SET_EXT_SCAN_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_EXT_SCAN_ENABLE)
#define HCI_OPCODE_LE_EXT_CREATE_CONN HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_EXT_CREATE_CONN)
#define HCI_OPCODE_LE_PER_ADV_CREATE_SYNC HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_PER_ADV_CREATE_SYNC)
#define HCI_OPCODE_LE_PER_ADV_CREATE_SYNC_CANCEL HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_PER_ADV_CREATE_SYNC_CANCEL)
#define HCI_OPCODE_LE_PER_ADV_TERMINATE_SYNC HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_PER_ADV_TERM_SYNC)
#define HCI_OPCODE_LE_ADD_DEV_PER_ADV_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ADD_DEV_PER_ADV_LIST)
#define HCI_OPCODE_LE_REMOVE_DEV_PER_ADV_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REMOVE_DEV_PER_ADV_LIST)
#define HCI_OPCODE_LE_CLEAR_PER_ADV_LIST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CLEAR_PER_ADV_LIST)
#define HCI_OPCODE_LE_READ_PER_ADV_LIST_SIZE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_PER_ADV_LIST_SIZE)
#define HCI_OPCODE_LE_READ_TX_POWER HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_TX_POWER)
#define HCI_OPCODE_LE_WRITE_RF_PATH_COMP HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_WRITE_RF_PATH_COMP)
#define HCI_OPCODE_LE_READ_RF_PATH_COMP HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_RF_PATH_COMP)
#define HCI_OPCODE_LE_SET_PRIVACY_MODE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PRIVACY_MODE)

#define HCI_OPCODE_LE_RECEIVER_TEST_V3 HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_RECEIVER_TEST_V3)
#define HCI_OPCODE_LE_TRANSMITTER_TEST_V3 HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_TRANSMITTER_TEST_V3)
#define HCI_OPCODE_LE_SET_CONNLESS_CTE_TX_PARAMS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CONNLESS_CTE_TX_PARAMS)
#define HCI_OPCODE_LE_SET_CONNLESS_CTE_TX_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CONNLESS_CTE_TX_ENABLE)
#define HCI_OPCODE_LE_SET_CONNLESS_IQ_SAMP_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CONNLESS_IQ_SAMP_ENABLE)
#define HCI_OPCODE_LE_SET_CONN_CTE_RX_PARAMS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CONN_CTE_RX_PARAMS)
#define HCI_OPCODE_LE_SET_CONN_CTE_TX_PARAMS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CONN_CTE_TX_PARAMS)
#define HCI_OPCODE_LE_CONN_CTE_REQ_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CONN_CTE_REQ_ENABLE)
#define HCI_OPCODE_LE_CONN_CTE_RSP_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CONN_CTE_RSP_ENABLE)
#define HCI_OPCODE_LE_READ_ANTENNA_INFO HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_ANTENNA_INFO)
#define HCI_OPCODE_LE_SET_PER_ADV_RCV_ENABLE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PER_ADV_RCV_ENABLE)
#define HCI_OPCODE_LE_PER_ADV_SYNC_TRANSFER HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_PER_ADV_SYNC_TRANSFER)
#define HCI_OPCODE_LE_PER_ADV_SET_INFO_TRANSFER HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_PER_ADV_SET_INFO_TRANSFER)
#define HCI_OPCODE_LE_SET_PAST_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_PAST_PARAM)
#define HCI_OPCODE_LE_SET_DEFAULT_PAST_PARAM HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_DEFAULT_PAST_PARAM)
#define HCI_OPCODE_LE_GENERATE_DHKEY_V2 HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_GENERATE_DHKEY_V2)
#define HCI_OPCODE_LE_MODIFY_SLEEP_CLK_ACC HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_MODIFY_SLEEP_CLK_ACC)

#define HCI_OPCODE_LE_READ_ISO_BUFFER_SIZE HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_ISO_BUFFER_SIZE)
#define HCI_OPCODE_LE_READ_ISO_TX_SYNC HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_READ_ISO_TX_SYNC)
#define HCI_OPCODE_LE_SET_CIG_PARAMS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CIG_PARAMS)
#define HCI_OPCODE_LE_SET_CIG_PARAMS_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SET_CIG_PARAMS_TEST)
#define HCI_OPCODE_LE_CREATE_CIS HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CREATE_CIS)
#define HCI_OPCODE_LE_REMOVE_CIG HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REMOVE_CIG)
#define HCI_OPCODE_LE_ACCEPT_CIS_REQ HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ACCEPT_CIS_REQ)
#define HCI_OPCODE_LE_REJECT_CIS_REQ HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REJECT_CIS_REQ)
#define HCI_OPCODE_LE_CREATE_BIG HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CREATE_BIG)
#define HCI_OPCODE_LE_CREATE_BIG_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_CREATE_BIG_TEST)
#define HCI_OPCODE_LE_BIG_CREATE_SYNC HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_BIG_CREATE_SYNC)
#define HCI_OPCODE_LE_TERMINATE_BIG HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_TERMINATE_BIG)
#define HCI_OPCODE_LE_BIG_TERMINATE_SYNC HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_BIG_TERMINATE_SYNC)
#define HCI_OPCODE_LE_REQUEST_PEER_SCA HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REQUEST_PEER_SCA)
#define HCI_OPCODE_LE_SETUP_ISO_DATA_PATH HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_SETUP_ISO_DATA_PATH)
#define HCI_OPCODE_LE_REMOVE_ISO_DATA_PATH HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_REMOVE_ISO_DATA_PATH)
#define HCI_OPCODE_LE_ISO_TX_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ISO_TX_TEST)
#define HCI_OPCODE_LE_ISO_RX_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ISO_RX_TEST)
#define HCI_OPCODE_LE_ISO_READ_TEST_COUNTER HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ISO_READ_TEST_COUNTER)
#define HCI_OPCODE_LE_ISO_TERMINATE_TEST HCI_OPCODE(HCI_OGF_LE_CONTROLLER, HCI_OCF_LE_ISO_TERMINATE_TEST)






#define HCI_OPCODE_LE_VS_ENABLE_READ_FEAT_ON_CONN ((uint16_t)(0xfff3))






#define HCI_LEN_NOP 0

#define HCI_LEN_DISCONNECT 3
#define HCI_LEN_READ_REMOTE_VER_INFO 2

#define HCI_LEN_SET_EVENT_MASK 8
#define HCI_LEN_SET_EVENT_MASK_PAGE2 8
#define HCI_LEN_RESET 0
#define HCI_LEN_READ_TX_PWR_LVL 3
#define HCI_LEN_SET_CONTROLLER_TO_HOST_FC 1
#define HCI_LEN_HOST_BUFFER_SIZE 8
#define HCI_LEN_HOST_NUM_CMPL_PKTS 1

#define HCI_LEN_READ_LOCAL_VER_INFO 0
#define HCI_LEN_READ_LOCAL_SUP_CMDS 0
#define HCI_LEN_READ_LOCAL_SUP_FEAT 0
#define HCI_LEN_READ_BUF_SIZE 0
#define HCI_LEN_READ_BD_ADDR 0

#define HCI_LEN_READ_RSSI 2
#define HCI_LEN_READ_AUTH_PAYLOAD_TO 2
#define HCI_LEN_WRITE_AUTH_PAYLOAD_TO 4

#define HCI_LEN_LE_SET_EVENT_MASK 8
#define HCI_LEN_LE_READ_BUF_SIZE 0
#define HCI_LEN_LE_READ_LOCAL_SUP_FEAT 0
#define HCI_LEN_LE_SET_RAND_ADDR 6
#define HCI_LEN_LE_SET_ADV_PARAM 15
#define HCI_LEN_LE_READ_ADV_TX_POWER 0
#define HCI_LEN_LE_SET_ADV_DATA 32
#define HCI_LEN_LE_SET_SCAN_RESP_DATA 32
#define HCI_LEN_LE_SET_ADV_ENABLE 1
#define HCI_LEN_LE_SET_SCAN_PARAM 7
#define HCI_LEN_LE_SET_SCAN_ENABLE 2
#define HCI_LEN_LE_CREATE_CONN 25
#define HCI_LEN_LE_CREATE_CONN_CANCEL 0
#define HCI_LEN_LE_READ_WHITE_LIST_SIZE 0
#define HCI_LEN_LE_CLEAR_WHITE_LIST 0
#define HCI_LEN_LE_ADD_DEV_WHITE_LIST 7
#define HCI_LEN_LE_REMOVE_DEV_WHITE_LIST 7
#define HCI_LEN_LE_CONN_UPDATE 14
#define HCI_LEN_LE_SET_HOST_CHAN_CLASS 5
#define HCI_LEN_LE_READ_CHAN_MAP 2
#define HCI_LEN_LE_READ_REMOTE_FEAT 2
#define HCI_LEN_LE_ENCRYPT 32
#define HCI_LEN_LE_RAND 0
#define HCI_LEN_LE_START_ENCRYPTION 28
#define HCI_LEN_LE_LTK_REQ_REPL 18
#define HCI_LEN_LE_LTK_REQ_NEG_REPL 2
#define HCI_LEN_LE_READ_SUP_STATES 0
#define HCI_LEN_LE_RECEIVER_TEST 1
#define HCI_LEN_LE_TRANSMITTER_TEST 3

#define HCI_LEN_LE_TRANSMITTER_TEST_V3 82
#define HCI_LEN_LE_RECEIVER_TEST_V3 82

#define HCI_LEN_LE_TEST_END 0

#define HCI_LEN_LE_REM_CONN_PARAM_REP 14
#define HCI_LEN_LE_REM_CONN_PARAM_NEG_REP 3

#define HCI_LEN_LE_SET_DATA_LEN 6
#define HCI_LEN_LE_READ_DEF_DATA_LEN 0
#define HCI_LEN_LE_WRITE_DEF_DATA_LEN 4
#define HCI_LEN_LE_READ_LOCAL_P256_PUB_KEY 0
#define HCI_LEN_LE_GENERATE_DHKEY 64
#define HCI_LEN_LE_ADD_DEV_RES_LIST 39
#define HCI_LEN_LE_REMOVE_DEV_RES_LIST 7
#define HCI_LEN_LE_CLEAR_RES_LIST 0
#define HCI_LEN_LE_READ_RES_LIST_SIZE 0
#define HCI_LEN_LE_READ_PEER_RES_ADDR 7
#define HCI_LEN_LE_READ_LOCAL_RES_ADDR 7
#define HCI_LEN_LE_SET_ADDR_RES_ENABLE 1
#define HCI_LEN_LE_SET_RES_PRIV_ADDR_TO 2
#define HCI_LEN_LE_READ_MAX_DATA_LEN 0

#define HCI_LEN_LE_READ_PHY 2
#define HCI_LEN_LE_SET_DEF_PHY 3
#define HCI_LEN_LE_SET_PHY 7
#define HCI_LEN_LE_ENHANCED_RECEIVER_TEST 3
#define HCI_LEN_LE_ENHANCED_TRANSMITTER_TEST 4
#define HCI_LEN_LE_SET_ADV_SET_RAND_ADDR 7
#define HCI_LEN_LE_SET_EXT_ADV_PARAM 25
#define HCI_LEN_LE_SET_EXT_ADV_DATA(len) (4 + (len))
#define HCI_LEN_LE_SET_EXT_SCAN_RESP_DATA(len) (4 + (len))
#define HCI_LEN_LE_EXT_ADV_ENABLE(numSets) (2 + (4 * (numSets)))
#define HCI_LEN_LE_READ_MAX_ADV_DATA_LEN 0
#define HCI_LEN_LE_READ_NUM_OF_SUP_ADV_SETS 0
#define HCI_LEN_LE_REMOVE_ADV_SET 1
#define HCI_LEN_LE_CLEAR_ADV_SETS 0
#define HCI_LEN_LE_SET_PER_ADV_PARAM 7
#define HCI_LEN_LE_SET_PER_ADV_DATA(len) (3 + (len))
#define HCI_LEN_LE_SET_PER_ADV_ENABLE 2
#define HCI_LEN_LE_SET_EXT_SCAN_PARAM(numPhys) (3 + (5 * (numPhys)))
#define HCI_LEN_LE_SET_EXT_SCAN_ENABLE 6
#define HCI_LEN_LE_EXT_CREATE_CONN(numPhys) (10 + (16 * (numPhys)))
#define HCI_LEN_LE_PER_ADV_CREATE_SYNC 14
#define HCI_LEN_LE_PER_ADV_CREATE_SYNC_CANCEL 0
#define HCI_LEN_LE_PER_ADV_TERMINATE_SYNC 2
#define HCI_LEN_LE_ADD_DEV_PER_ADV_LIST 8
#define HCI_LEN_LE_REMOVE_DEV_PER_ADV_LIST 8
#define HCI_LEN_LE_CLEAR_PER_ADV_LIST 0
#define HCI_LEN_LE_READ_PER_ADV_LIST_SIZE 0
#define HCI_LEN_LE_READ_TX_POWER 0
#define HCI_LEN_LE_READ_RF_PATH_COMP 0
#define HCI_LEN_LE_WRITE_RF_PATH_COMP 4
#define HCI_LEN_LE_SET_PRIVACY_MODE 8

#define HCI_LEN_LE_SET_CONN_CTE_RX_PARAMS(spLen) (5 + (spLen))
#define HCI_LEN_LE_SET_CONN_CTE_TX_PARAMS(spLen) (4 + (spLen))
#define HCI_LEN_LE_SET_CONLESS_CTE_TX_PARAMS(spLen) (5 + (spLen))
#define HCI_LEN_LE_SET_CONLESS_IQ_SAMPLE_EN(spLen) (6 + (spLen))
#define HCI_LEN_LE_SET_CONLESS_CTE_TX_ENABLE 2
#define HCI_LEN_LE_CONN_CTE_REQ_ENABLE 7
#define HCI_LEN_LE_CONN_CTE_RSP_ENABLE 3
#define HCI_LEN_LE_READ_ANTENNA_INFO 0
#define HCI_LEN_LE_SET_PER_ADV_RCV_ENABLE 3
#define HCI_LEN_LE_PER_ADV_SYNC_TRANSFER 6
#define HCI_LEN_LE_PER_ADV_SET_INFO_TRANSFER 5
#define HCI_LEN_LE_SET_PAST_PARAM 8
#define HCI_LEN_LE_SET_DEFAULT_PAST_PARAM 6
#define HCI_LEN_LE_GENERATE_DHKEY_V2 65






#define HCI_DISCONNECT_CMPL_EVT 0x05
#define HCI_ENC_CHANGE_EVT 0x08
#define HCI_READ_REMOTE_VER_INFO_CMPL_EVT 0x0C
#define HCI_CMD_CMPL_EVT 0x0E
#define HCI_CMD_STATUS_EVT 0x0F
#define HCI_HW_ERROR_EVT 0x10
#define HCI_NUM_CMPL_PKTS_EVT 0x13
#define HCI_DATA_BUF_OVERFLOW_EVT 0x1A
#define HCI_ENC_KEY_REFRESH_CMPL_EVT 0x30
#define HCI_LE_META_EVT 0x3E
#define HCI_AUTH_PAYLOAD_TIMEOUT_EVT 0x57
#define HCI_VENDOR_SPEC_EVT 0xFF






#define HCI_LE_CONN_CMPL_EVT 0x01
#define HCI_LE_ADV_REPORT_EVT 0x02
#define HCI_LE_CONN_UPDATE_CMPL_EVT 0x03
#define HCI_LE_READ_REMOTE_FEAT_CMPL_EVT 0x04
#define HCI_LE_LTK_REQ_EVT 0x05

#define HCI_LE_REM_CONN_PARAM_REQ_EVT 0x06

#define HCI_LE_DATA_LEN_CHANGE_EVT 0x07
#define HCI_LE_READ_LOCAL_P256_PUB_KEY_CMPL_EVT 0x08
#define HCI_LE_GENERATE_DHKEY_CMPL_EVT 0x09
#define HCI_LE_ENHANCED_CONN_CMPL_EVT 0x0A
#define HCI_LE_DIRECT_ADV_REPORT_EVT 0x0B

#define HCI_LE_PHY_UPDATE_CMPL_EVT 0x0C
#define HCI_LE_EXT_ADV_REPORT_EVT 0x0D
#define HCI_LE_PER_ADV_SYNC_EST_EVT 0x0E
#define HCI_LE_PER_ADV_REPORT_EVT 0x0F
#define HCI_LE_PER_ADV_SYNC_LOST_EVT 0x10
#define HCI_LE_SCAN_TIMEOUT_EVT 0x11
#define HCI_LE_ADV_SET_TERM_EVT 0x12
#define HCI_LE_SCAN_REQ_RCVD_EVT 0x13
#define HCI_LE_CH_SEL_ALGO_EVT 0x14

#define HCI_LE_CONNLESS_IQ_REPORT_EVT 0x15
#define HCI_LE_CONN_IQ_REPORT_EVT 0x16
#define HCI_LE_CTE_REQ_FAILED_EVT 0x17
#define HCI_LE_PER_SYNC_TRSF_RCVD_EVT 0x18

#define HCI_LE_CIS_EST_EVT 0x19
#define HCI_LE_CIS_REQ_EVT 0x1A
#define HCI_LE_BIG_CMPL_EVT 0x1B
#define HCI_LE_BIG_SYNC_LOST_EVT 0x1C
#define HCI_LE_REQ_PEER_SCA_CMPLT_EVT 0x1D






#define HCI_LEN_DISCONNECT_CMPL 4
#define HCI_LEN_READ_REMOTE_VER_INFO_CMPL 8
#define HCI_LEN_CMD_CMPL 3
#define HCI_LEN_CMD_STATUS 4
#define HCI_LEN_HW_ERR 1
#define HCI_LEN_NUM_CMPL_PKTS 5
#define HCI_LEN_ENC_CHANGE 4
#define HCI_LEN_ENC_KEY_REFRESH_CMPL 3
#define HCI_LEN_LE_CONN_CMPL 19
#define HCI_LEN_LE_ADV_RPT_MIN 12
#define HCI_LEN_LE_CONN_UPDATE_CMPL 10
#define HCI_LEN_LE_READ_REMOTE_FEAT_CMPL 12
#define HCI_LEN_LE_LTK_REQ 13

#define HCI_LEN_LE_REM_CONN_PARAM_REQ 11
#define HCI_LEN_LE_DATA_LEN_CHANGE 11
#define HCI_LEN_LE_READ_PUB_KEY_CMPL 66
#define HCI_LEN_LE_GEN_DHKEY_CMPL 34
#define HCI_LEN_LE_ENHANCED_CONN_CMPL 31
#define HCI_LEN_LE_DIRECT_ADV_REPORT 18
#define HCI_LEN_AUTH_PAYLOAD_TIMEOUT 2

#define HCI_LEN_LE_PHY_UPDATE_CMPL 6
#define HCI_LEN_LE_CH_SEL_ALGO 4
#define HCI_LEN_LE_PHY_UPDATE_CMPL 6
#define HCI_LEN_LE_EXT_ADV_REPORT_MIN 26
#define HCI_LEN_LE_PER_ADV_SYNC_EST 16
#define HCI_LEN_LE_PER_ADV_REPORT 8
#define HCI_LEN_LE_PER_ADV_SYNC_LOST 3
#define HCI_LEN_LE_SCAN_TIMEOUT 1
#define HCI_LEN_LE_ADV_SET_TERM 6
#define HCI_LEN_LE_SCAN_REQ_RCVD 9

#define HCI_LEN_LE_PER_SYNC_TRSF_RCVT 20

#define HCI_LEN_LE_CIS_EST 12
#define HCI_LEN_LE_CIS_REQ 7
#define HCI_LEN_LE_PEER_SCA_CMPL 5






#define HCI_SUP_DISCONNECT 0x20
#define HCI_SUP_READ_REMOTE_VER_INFO 0x80
#define HCI_SUP_SET_EVENT_MASK 0x40
#define HCI_SUP_RESET 0x80
#define HCI_SUP_READ_TX_PWR_LVL 0x04
#define HCI_SUP_READ_LOCAL_VER_INFO 0x08
#define HCI_SUP_READ_LOCAL_SUP_FEAT 0x20
#define HCI_SUP_READ_BD_ADDR 0x02
#define HCI_SUP_READ_RSSI 0x20
#define HCI_SUP_SET_EVENT_MASK_PAGE2 0x04
#define HCI_SUP_LE_SET_EVENT_MASK 0x01
#define HCI_SUP_LE_READ_BUF_SIZE 0x02
#define HCI_SUP_LE_READ_LOCAL_SUP_FEAT 0x04
#define HCI_SUP_LE_SET_RAND_ADDR 0x10
#define HCI_SUP_LE_SET_ADV_PARAM 0x20
#define HCI_SUP_LE_READ_ADV_TX_POWER 0x40
#define HCI_SUP_LE_SET_ADV_DATA 0x80
#define HCI_SUP_LE_SET_SCAN_RESP_DATA 0x01
#define HCI_SUP_LE_SET_ADV_ENABLE 0x02
#define HCI_SUP_LE_SET_SCAN_PARAM 0x04
#define HCI_SUP_LE_SET_SCAN_ENABLE 0x08
#define HCI_SUP_LE_CREATE_CONN 0x10
#define HCI_SUP_LE_CREATE_CONN_CANCEL 0x20
#define HCI_SUP_LE_READ_WHITE_LIST_SIZE 0x40
#define HCI_SUP_LE_CLEAR_WHITE_LIST 0x80
#define HCI_SUP_LE_ADD_DEV_WHITE_LIST 0x01
#define HCI_SUP_LE_REMOVE_DEV_WHITE_LIST 0x02
#define HCI_SUP_LE_CONN_UPDATE 0x04
#define HCI_SUP_LE_SET_HOST_CHAN_CLASS 0x08
#define HCI_SUP_LE_READ_CHAN_MAP 0x10
#define HCI_SUP_LE_READ_REMOTE_FEAT 0x20
#define HCI_SUP_LE_ENCRYPT 0x40
#define HCI_SUP_LE_RAND 0x80
#define HCI_SUP_LE_START_ENCRYPTION 0x01
#define HCI_SUP_LE_LTK_REQ_REPL 0x02
#define HCI_SUP_LE_LTK_REQ_NEG_REPL 0x04
#define HCI_SUP_LE_READ_SUP_STATES 0x08
#define HCI_SUP_LE_RECEIVER_TEST 0x10
#define HCI_SUP_LE_TRANSMITTER_TEST 0x20
#define HCI_SUP_LE_TEST_END 0x40
#define HCI_SUP_READ_AUTH_PAYLOAD_TO 0x10
#define HCI_SUP_WRITE_AUTH_PAYLOAD_TO 0x20

#define HCI_SUP_LE_REM_CONN_PARAM_REQ_REPL 0x10
#define HCI_SUP_LE_REM_CONN_PARAM_REQ_NEG_REPL 0x20

#define HCI_SUP_LE_SET_DATA_LEN 0x40
#define HCI_SUP_LE_READ_DEF_DATA_LEN 0x80
#define HCI_SUP_LE_WRITE_DEF_DATA_LEN 0x01
#define HCI_SUP_LE_READ_LOCAL_P256_PUB_KEY 0x02
#define HCI_SUP_LE_GENERATE_DHKEY 0x04
#define HCI_SUP_LE_ADD_DEV_RES_LIST_EVT 0x08
#define HCI_SUP_LE_REMOVE_DEV_RES_LIST 0x10
#define HCI_SUP_LE_CLEAR_RES_LIST 0x20
#define HCI_SUP_LE_READ_RES_LIST_SIZE 0x40
#define HCI_SUP_LE_READ_PEER_RES_ADDR 0x80
#define HCI_SUP_LE_READ_LOCAL_RES_ADDR 0x01
#define HCI_SUP_LE_SET_ADDR_RES_ENABLE 0x02
#define HCI_SUP_LE_SET_RES_PRIV_ADDR_TO 0x04
#define HCI_SUP_LE_READ_MAX_DATA_LEN 0x08

#define HCI_SUP_LE_READ_PHY 0x10
#define HCI_SUP_LE_SET_DEF_PHY 0x20
#define HCI_SUP_LE_SET_PHY 0x40
#define HCI_SUP_LE_ENHANCED_RECEIVER_TEST 0x80
#define HCI_SUP_LE_ENHANCED_TRANSMITTER_TEST 0x01
#define HCI_SUP_LE_SET_ADV_SET_RAND_ADDR 0x02
#define HCI_SUP_LE_SET_EXT_ADV_PARAM 0x04
#define HCI_SUP_LE_SET_EXT_ADV_DATA 0x08
#define HCI_SUP_LE_SET_EXT_SCAN_RESP_DATA 0x10
#define HCI_SUP_LE_SET_EXT_ADV_ENABLE 0x20
#define HCI_SUP_LE_READ_MAX_ADV_DATA_LEN 0x40
#define HCI_SUP_LE_READ_NUM_OF_SUP_ADV_SETS 0x80
#define HCI_SUP_LE_REMOVE_ADV_SET 0x01
#define HCI_SUP_LE_CLEAR_ADV_SETS 0x02
#define HCI_SUP_LE_SET_PER_ADV_PARAM 0x04
#define HCI_SUP_LE_SET_PER_ADV_DATA 0x08
#define HCI_SUP_LE_SET_PER_ADV_ENABLE 0x10
#define HCI_SUP_LE_SET_EXT_SCAN_PARAM 0x20
#define HCI_SUP_LE_SET_EXT_SCAN_ENABLE 0x40
#define HCI_SUP_LE_EXT_CREATE_CONN 0x80
#define HCI_SUP_LE_PER_ADV_CREATE_SYNC 0x01
#define HCI_SUP_LE_PER_ADV_CREATE_SYNC_CANCEL 0x02
#define HCI_SUP_LE_PER_ADV_TERMINATE_SYNC 0x04
#define HCI_SUP_LE_ADD_DEV_PER_ADV_LIST 0x08
#define HCI_SUP_LE_REMOVE_DEV_PER_ADV_LIST 0x10
#define HCI_SUP_LE_CLEAR_PER_ADV_LIST 0x20
#define HCI_SUP_LE_READ_PER_ADV_LIST_SIZE 0x40
#define HCI_SUP_LE_READ_TX_POWER 0x80
#define HCI_SUP_LE_READ_RF_PATH_COMP 0x01
#define HCI_SUP_LE_WRITE_RF_PATH_COMP 0x02
#define HCI_SUP_LE_SET_PRIVACY_MODE 0x04

#define HCI_SUP_LE_RECEIVER_TEST_V3 0x08
#define HCI_SUP_LE_TRANSMITTER_TEST_V3 0x10
#define HCI_SUP_LE_SET_CONNLESS_CTE_TX_PARAMS 0x20
#define HCI_SUP_LE_SET_CONNLESS_CTE_TX_ENABLE 0x40
#define HCI_SUP_LE_SET_CONNLESS_IQ_SAMP_ENABLE 0x80
#define HCI_SUP_LE_SET_CONN_CTE_RX_PARAMS 0x01
#define HCI_SUP_LE_SET_CONN_CTE_TX_PARAMS 0x02
#define HCI_SUP_LE_CONN_CTE_REQ_ENABLE 0x04
#define HCI_SUP_LE_CONN_CTE_RSP_ENABLE 0x08
#define HCI_SUP_LE_READ_ANTENNA_INFO 0x10
#define HCI_SUP_LE_SET_PER_ADV_RCV_ENABLE 0x20
#define HCI_SUP_LE_PER_ADV_SYNC_TRANSFER 0x40
#define HCI_SUP_LE_PER_ADV_SET_INFO_TRANSFER 0x80
#define HCI_SUP_LE_SET_PAST_PARAM 0x01
#define HCI_SUP_LE_SET_DEFAULT_PAST_PARAM 0x02
#define HCI_SUP_LE_GENERATE_DHKEY_V2 0x04
#define HCI_SUP_LE_MODIFY_SLEEP_CLK_ACCURACY 0x10

#define HCI_SUP_LE_READ_BUF_SIZE_V2 0x01
#define HCI_SUP_LE_SET_CIG_PARAM 0x02
#define HCI_SUP_LE_CREATE_CIS 0x04
#define HCI_SUP_LE_REMOVE_CIG 0x08
#define HCI_SUP_LE_ACCEPT_CIS_REQ 0x01
#define HCI_SUP_LE_REJECT_CIS_REQ 0x02
#define HCI_SUP_LE_CREATE_BIG 0x04
#define HCI_SUP_LE_BIG_CREATE_SYNC 0x08
#define HCI_SUP_LE_TERMINATE_BIG 0x01
#define HCI_SUP_LE_SETUP_ISO_DATA_PATH 0x02
#define HCI_SUP_LE_REMOVE_ISO_DATA_PATH 0x04
#define HCI_SUP_LE_REQ_PEER_SCA 0x08

#define HCI_SUP_CMD_LEN 64







#define HCI_EVT_MASK_DISCONNECT_CMPL 0x10
#define HCI_EVT_MASK_ENC_CHANGE 0x80
#define HCI_EVT_MASK_READ_REMOTE_VER_INFO_CMPL 0x08
#define HCI_EVT_MASK_HW_ERROR 0x80
#define HCI_EVT_MASK_DATA_BUF_OVERFLOW 0x02
#define HCI_EVT_MASK_ENC_KEY_REFRESH_CMPL 0x80
#define HCI_EVT_MASK_LE_META 0x20






#define HCI_EVT_MASK_AUTH_PAYLOAD_TIMEOUT 0x80






#define HCI_EVT_MASK_LE_CONN_CMPL_EVT 0x01
#define HCI_EVT_MASK_LE_ADV_REPORT_EVT 0x02
#define HCI_EVT_MASK_LE_CONN_UPDATE_CMPL_EVT 0x04
#define HCI_EVT_MASK_LE_READ_REMOTE_FEAT_CMPL_EVT 0x08
#define HCI_EVT_MASK_LE_LTK_REQ_EVT 0x10

#define HCI_EVT_MASK_LE_REMOTE_CONN_PARAM_REQ_EVT 0x20

#define HCI_EVT_MASK_LE_DATA_LEN_CHANGE_EVT 0x40
#define HCI_EVT_MASK_LE_READ_LOCAL_P256_PUB_KEY_CMPL 0x80
#define HCI_EVT_MASK_LE_GENERATE_DHKEY_CMPL 0x01
#define HCI_EVT_MASK_LE_ENHANCED_CONN_CMPL_EVT 0x02
#define HCI_EVT_MASK_LE_DIRECT_ADV_REPORT_EVT 0x04

#define HCI_EVT_MASK_LE_PHY_UPDATE_CMPL_EVT 0x08
#define HCI_EVT_MASK_LE_EXT_ADV_REPORT_EVT 0x10
#define HCI_EVT_MASK_LE_PER_ADV_SYNC_EST_EVT 0x20
#define HCI_EVT_MASK_LE_PER_ADV_REPORT_EVT 0x40
#define HCI_EVT_MASK_LE_PER_ADV_SYNC_LOST_EVT 0x80
#define HCI_EVT_MASK_LE_SCAN_TIMEOUT_EVT 0x01
#define HCI_EVT_MASK_LE_ADV_SET_TERM_EVT 0x02
#define HCI_EVT_MASK_LE_SCAN_REQ_RCVD_EVT 0x04
#define HCI_EVT_MASK_LE_CH_SEL_ALGO_EVT 0x08

#define HCI_EVT_MASK_LE_CONNLESS_IQ_REPORT_EVT 0x10
#define HCI_EVT_MASK_LE_CONN_IQ_REPORT_EVT 0x20
#define HCI_EVT_MASK_LE_CTE_REQ_FAILED_EVT 0x40
#define HCI_EVT_MASK_LE_PER_SYNC_TRSF_RCVT_EVT 0x80

#define HCI_EVT_MASK_LE_CIS_EST_EVT 0x01
#define HCI_EVT_MASK_LE_CIS_REQ_EVT 0x02
#define HCI_EVT_MASK_LE_BIG_CMPL_EVT 0x04
#define HCI_EVT_MASK_LE_BIG_SYNC_LOST_EVT 0x08
#define HCI_EVT_MASK_LE_PEER_SCA_CMPL_EVT 0x10







#define HCI_LE_SUP_FEAT_ENCRYPTION 0x00000001

#define HCI_LE_SUP_FEAT_CONN_PARAM_REQ_PROC 0x00000002
#define HCI_LE_SUP_FEAT_EXT_REJECT_IND 0x00000004
#define HCI_LE_SUP_FEAT_SLV_INIT_FEAT_EXCH 0x00000008
#define HCI_LE_SUP_FEAT_LE_PING 0x00000010

#define HCI_LE_SUP_FEAT_DATA_LEN_EXT 0x00000020
#define HCI_LE_SUP_FEAT_PRIVACY 0x00000040
#define HCI_LE_SUP_FEAT_EXT_SCAN_FILT_POLICY 0x00000080

#define HCI_LE_SUP_FEAT_LE_2M_PHY 0x00000100
#define HCI_LE_SUP_FEAT_STABLE_MOD_IDX_TRANSMITTER 0x00000200
#define HCI_LE_SUP_FEAT_STABLE_MOD_IDX_RECEIVER 0x00000400
#define HCI_LE_SUP_FEAT_LE_CODED_PHY 0x00000800
#define HCI_LE_SUP_FEAT_LE_EXT_ADV 0x00001000
#define HCI_LE_SUP_FEAT_LE_PER_ADV 0x00002000
#define HCI_LE_SUP_FEAT_CH_SEL_2 0x00004000
#define HCI_LE_SUP_FEAT_LE_POWER_CLASS_1 0x00008000
#define HCI_LE_SUP_FEAT_MIN_NUN_USED_CHAN 0x00010000

#define HCI_LE_SUP_FEAT_CONN_CTE_REQ 0x00020000
#define HCI_LE_SUP_FEAT_CONN_CTE_RSP 0x00040000
#define HCI_LE_SUP_FEAT_CONNLESS_CTE_TRANS 0x00080000
#define HCI_LE_SUP_FEAT_CONNLESS_CTE_RECV 0x00100000
#define HCI_LE_SUP_FEAT_ANTENNA_SWITCH_AOD 0x00200000
#define HCI_LE_SUP_FEAT_ANTENNA_SWITCH_AOA 0x00400000
#define HCI_LE_SUP_FEAT_RECV_CTE 0x00800000
#define HCI_LE_SUP_FEAT_PAST_SENDER 0x01000000
#define HCI_LE_SUP_FEAT_PAST_RECIPIENT 0x02000000
#define HCI_LE_SUP_FEAT_SCA_UPDATE 0x04000000
#define HCI_LE_SUP_FEAT_REMOTE_PUB_KEY_VALIDATION 0x08000000

#define HCI_LE_SUP_FEAT_CIS_MASTER 0x10000000
#define HCI_LE_SUP_FEAT_CIS_SLAVE 0x20000000
#define HCI_LE_SUP_FEAT_ISO_BROADCASTER 0x40000000
#define HCI_LE_SUP_FEAT_ISO_SYNC 0x80000000






#define HCI_ADV_MIN_INTERVAL 0x0020
#define HCI_ADV_MAX_INTERVAL 0x4000
#define HCI_ADV_DIRECTED_MAX_DURATION 0x0500
#define HCI_ADV_TYPE_CONN_UNDIRECT 0x00
#define HCI_ADV_TYPE_CONN_DIRECT 0x01
#define HCI_ADV_TYPE_DISC_UNDIRECT 0x02
#define HCI_ADV_TYPE_NONCONN_UNDIRECT 0x03
#define HCI_ADV_TYPE_CONN_DIRECT_LO_DUTY 0x04
#define HCI_ADV_CHAN_37 0x01
#define HCI_ADV_CHAN_38 0x02
#define HCI_ADV_CHAN_39 0x04
#define HCI_ADV_FILT_NONE 0x00
#define HCI_ADV_FILT_SCAN 0x01
#define HCI_ADV_FILT_CONN 0x02
#define HCI_ADV_FILT_ALL 0x03






#define HCI_SCAN_TYPE_PASSIVE 0
#define HCI_SCAN_TYPE_ACTIVE 1
#define HCI_SCAN_INTERVAL_MIN 0x0004
#define HCI_SCAN_INTERVAL_MAX 0x4000
#define HCI_SCAN_INTERVAL_DEFAULT 0x0010
#define HCI_SCAN_WINDOW_MIN 0x0004
#define HCI_SCAN_WINDOW_MAX 0x4000
#define HCI_SCAN_WINDOW_DEFAULT 0x0010






#define HCI_CONN_INTERVAL_MIN 0x0006
#define HCI_CONN_INTERVAL_MAX 0x0C80
#define HCI_CONN_LATENCY_MAX 0x01F3
#define HCI_SUP_TIMEOUT_MIN 0x000A
#define HCI_SUP_TIMEOUT_MAX 0x0C80






#define HCI_ROLE_MASTER 0
#define HCI_ROLE_SLAVE 1
#define HCI_CLOCK_500PPM 0x00
#define HCI_CLOCK_250PPM 0x01
#define HCI_CLOCK_150PPM 0x02
#define HCI_CLOCK_100PPM 0x03
#define HCI_CLOCK_75PPM 0x04
#define HCI_CLOCK_50PPM 0x05
#define HCI_CLOCK_30PPM 0x06
#define HCI_CLOCK_20PPM 0x07






#define HCI_ADV_CONN_UNDIRECT 0x00
#define HCI_ADV_CONN_DIRECT 0x01
#define HCI_ADV_DISC_UNDIRECT 0x02
#define HCI_ADV_NONCONN_UNDIRECT 0x03
#define HCI_ADV_SCAN_RESPONSE 0x04






#define HCI_ADV_DATA_OP_FRAG_INTER 0x00
#define HCI_ADV_DATA_OP_FRAG_FIRST 0x01
#define HCI_ADV_DATA_OP_FRAG_LAST 0x02
#define HCI_ADV_DATA_OP_COMP_FRAG 0x03
#define HCI_ADV_DATA_OP_UNCHANGED_DATA 0x04






#define HCI_ADV_DATA_FRAG_PREF_FRAG 0x00
#define HCI_ADV_DATA_FRAG_PREF_NO_FRAG 0x01






#define HCI_ADV_NUM_SETS_ALL_DISABLE 0x00






#define HCI_MAX_NUM_PHYS 3






#define HCI_ADV_PHY_LE_1M 0x01
#define HCI_ADV_PHY_LE_2M 0x02
#define HCI_ADV_PHY_LE_CODED 0x03






#define HCI_SCAN_PHY_LE_1M_BIT (1<<0)
#define HCI_SCAN_PHY_LE_2M_BIT (1<<1)
#define HCI_SCAN_PHY_LE_CODED_BIT (1<<2)






#define HCI_INIT_PHY_LE_1M_BIT (1<<0)
#define HCI_INIT_PHY_LE_2M_BIT (1<<1)
#define HCI_INIT_PHY_LE_CODED_BIT (1<<2)






#define HCI_ADV_PROP_CONN_ADV_BIT (1<<0)
#define HCI_ADV_PROP_SCAN_ADV_BIT (1<<1)
#define HCI_ADV_PROP_DIRECT_ADV_BIT (1<<2)
#define HCI_ADV_PROP_CONN_DIRECT_ADV_BIT (1<<3)
#define HCI_ADV_PROP_USE_LEG_PDU_BIT (1<<4)
#define HCI_ADV_PROP_OMIT_ADV_ADDR_BIT (1<<5)
#define HCI_ADV_PROP_INC_TX_PWR_BIT (1<<6)






#define HCI_ADV_PROP_LEG_CONN_UNDIRECT 0x13
#define HCI_ADV_PROP_LEG_CONN_DIRECT 0x1D
#define HCI_ADV_PROP_LEG_SCAN_UNDIRECT 0x12
#define HCI_ADV_PROP_LEG_NONCONN_UNDIRECT 0x10
#define HCI_ADV_PROP_LEG_CONN_DIRECT_LO_DUTY 0x15






#define HCI_ADV_RPT_CONN_ADV_BIT (1<<0)
#define HCI_ADV_RPT_SCAN_ADV_BIT (1<<1)
#define HCI_ADV_RPT_DIRECT_ADV_BIT (1<<2)
#define HCI_ADV_RPT_SCAN_RSP_BIT (1<<3)
#define HCI_ADV_RPT_LEG_ADV_BIT (1<<4)
#define HCI_ADV_RPT_DATA_STATUS_BITS (3<<5)






#define HCI_ADV_RPT_LEG_CONN_UNDIRECT 0x13
#define HCI_ADV_RPT_LEG_CONN_DIRECT 0x15
#define HCI_ADV_RPT_LEG_SCAN_UNDIRECT 0x12
#define HCI_ADV_RPT_LEG_NONCONN_UNDIRECT 0x10
#define HCI_ADV_RPT_LEG_CONN_UNDIRECT_SCAN_RSP 0x1B
#define HCI_ADV_RPT_LEG_SCAN_UNDIRECT_SCAN_RSP 0x1A






#define HCI_ADV_RPT_DATA_CMPL 0x00
#define HCI_ADV_RPT_DATA_INCMPL_MORE 0x01
#define HCI_ADV_RPT_DATA_INCMPL_TRUNC 0x02






#define HCI_ADV_RPT_PHY_PRIM_LE_1M 0x01
#define HCI_ADV_RPT_PHY_PRIM_LE_CODED 0x03






#define HCI_ADV_RPT_PHY_SEC_NONE 0x00
#define HCI_ADV_RPT_PHY_SEC_LE_1M 0x01
#define HCI_ADV_RPT_PHY_SEC_LE_2M 0x02
#define HCI_ADV_RPT_PHY_SEC_LE_CODED 0x03






#define HCI_CH_SEL_ALGO_1 0x00
#define HCI_CH_SEL_ALGO_2 0x01






#define HCI_PRIVATE_KEY_GENERATED 0x00
#define HCI_PRIVATE_KEY_DEBUG 0x01







#define HCI_MIN_NUM_OF_USED_CHAN 8






#define HCI_SYNC_MIN_TIMEOUT 0x000A
#define HCI_SYNC_MAX_TIMEOUT 0x4000






#define HCI_SYNC_MAX_SKIP 0x01F3






#define HCI_SYNC_MAX_HANDLE 0x0EFF






#define HCI_SYNC_TRSF_MODE_OFF 0x00
#define HCI_SYNC_TRSF_MODE_REP_DISABLED 0x01,
#define HCI_SYNC_TRSF_MODE_REP_ENABLED 0x02,






#define HCI_OPTIONS_FILT_POLICY_BIT (1<<0)
#define HCI_OPTIONS_INIT_RPT_ENABLE_BIT (1<<1)






#define HCI_READ_TX_PWR_CURRENT 0
#define HCI_READ_TX_PWR_MAX 1
#define HCI_TX_PWR_MIN -30
#define HCI_TX_PWR_MAX 20
#define HCI_TX_PWR_NO_PREFERENCE 127
#define HCI_VERSION 6
#define HCI_RSSI_MIN -127
#define HCI_RSSI_MAX 20
#define HCI_ADDR_TYPE_PUBLIC 0
#define HCI_ADDR_TYPE_RANDOM 1
#define HCI_ADDR_TYPE_PUBLIC_IDENTITY 2
#define HCI_ADDR_TYPE_RANDOM_IDENTITY 3
#define HCI_ADDR_TYPE_ANONYMOUS 0xFF
#define HCI_FILT_NONE 0
#define HCI_FILT_WHITE_LIST 1
#define HCI_FILT_RES_INIT 2
#define HCI_FILT_WHITE_LIST_RES_INIT 3
#define HCI_FILT_PER_ADV_PARAM 0
#define HCI_FILT_PER_ADV_LIST 1
#define HCI_ROLE_MASTER 0
#define HCI_ROLE_SLAVE 1
#define HCI_PRIV_MODE_NETWORK 0x00
#define HCI_PRIV_MODE_DEVICE 0x01






#define HCI_PHY_NONE 0x00
#define HCI_PHY_LE_1M_BIT (1<<0)
#define HCI_PHY_LE_2M_BIT (1<<1)
#define HCI_PHY_LE_CODED_BIT (1<<2)






#define HCI_ALL_PHY_ALL_PREFERENCES 0x00
#define HCI_ALL_PHY_TX_PREFERENCE_BIT (1<<0)
#define HCI_ALL_PHY_RX_PREFERENCE_BIT (1<<1)






#define HCI_PHY_OPTIONS_NONE 0x00
#define HCI_PHY_OPTIONS_S2_PREFERRED 0x01
#define HCI_PHY_OPTIONS_S8_PREFERRED 0x02






#define HCI_CTE_SLOT_DURATION_NONE 0x00
#define HCI_CTE_SLOT_DURATION_1_US 0x01
#define HCI_CTE_SLOT_DURATION_2_US 0x02






#define HCI_CTE_TYPE_PERMIT_AOA_RSP_BIT (1<<0)
#define HCI_CTE_TYPE_PERMIT_AOD_RSP_1_US_BIT (1<<1)
#define HCI_CTE_TYPE_PERMIT_AOD_RSP_2_US_BIT (1<<2)






#define HCI_CTE_TYPE_REQ_AOA 0x00
#define HCI_CTE_TYPE_REQ_AOD_1_US 0x01
#define HCI_CTE_TYPE_REQ_AOD_2_US 0x02






#define HCI_VER_BT_CORE_SPEC_4_0 0x06
#define HCI_VER_BT_CORE_SPEC_4_1 0x07
#define HCI_VER_BT_CORE_SPEC_4_2 0x08
#define HCI_VER_BT_CORE_SPEC_5_0 0x09
#define HCI_VER_BT_CORE_SPEC_5_1 0x0A






#define HCI_EVT_MASK_LEN 8
#define HCI_EVT_MASK_PAGE_2_LEN 8
#define HCI_LE_EVT_MASK_LEN 8
#define HCI_FEAT_LEN 8
#define HCI_ADV_DATA_LEN 31
#define HCI_SCAN_DATA_LEN 31
#define HCI_EXT_ADV_DATA_LEN 251
#define HCI_EXT_ADV_CONN_DATA_LEN 191

#define HCI_PER_ADV_DATA_LEN 252
#define HCI_EXT_ADV_RPT_DATA_LEN 229
#define HCI_PER_ADV_RPT_DATA_LEN 247
#define HCI_CHAN_MAP_LEN 5
#define HCI_KEY_LEN 16
#define HCI_ENCRYPT_DATA_LEN 16
#define HCI_RAND_LEN 8
#define HCI_LE_STATES_LEN 8
#define HCI_P256_KEY_LEN 64
#define HCI_DH_KEY_LEN 32

#define HCI_EXT_ADV_RPT_DATA_LEN_OFFSET 23
#define HCI_PER_ADV_RPT_DATA_LEN_OFFSET 6






#define HCI_MIN_NUM_ANTENNA_IDS 2
#define HCI_MAX_NUM_ANTENNA_IDS 75






#define HCI_IQ_RPT_SAMPLE_CNT_MIN 9
#define HCI_IQ_RPT_SAMPLE_CNT_MAX 82

#define HCI_CONN_IQ_RPT_SAMPLE_CNT_OFFSET 12






#define HCI_ID_ARM 0x005F






#define HCI_LOCAL_VER_MANUFACTURER_POS 4
# 29 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_os.h" 1
# 30 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/sources/util/bda.h" 1
# 31 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h" 2
# 49 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
#define HCI_RESET_SEQ_CMPL_CBACK_EVT 0
#define HCI_LE_CONN_CMPL_CBACK_EVT 1
#define HCI_LE_ENHANCED_CONN_CMPL_CBACK_EVT 2
#define HCI_DISCONNECT_CMPL_CBACK_EVT 3
#define HCI_LE_CONN_UPDATE_CMPL_CBACK_EVT 4
#define HCI_LE_CREATE_CONN_CANCEL_CMD_CMPL_CBACK_EVT 5
#define HCI_LE_ADV_REPORT_CBACK_EVT 6
#define HCI_READ_RSSI_CMD_CMPL_CBACK_EVT 7
#define HCI_LE_READ_CHAN_MAP_CMD_CMPL_CBACK_EVT 8
#define HCI_READ_TX_PWR_LVL_CMD_CMPL_CBACK_EVT 9
#define HCI_READ_REMOTE_VER_INFO_CMPL_CBACK_EVT 10
#define HCI_LE_READ_REMOTE_FEAT_CMPL_CBACK_EVT 11
#define HCI_LE_LTK_REQ_REPL_CMD_CMPL_CBACK_EVT 12
#define HCI_LE_LTK_REQ_NEG_REPL_CMD_CMPL_CBACK_EVT 13
#define HCI_ENC_KEY_REFRESH_CMPL_CBACK_EVT 14
#define HCI_ENC_CHANGE_CBACK_EVT 15
#define HCI_LE_LTK_REQ_CBACK_EVT 16
#define HCI_VENDOR_SPEC_CMD_STATUS_CBACK_EVT 17
#define HCI_VENDOR_SPEC_CMD_CMPL_CBACK_EVT 18
#define HCI_VENDOR_SPEC_CBACK_EVT 19
#define HCI_HW_ERROR_CBACK_EVT 20
#define HCI_LE_ADD_DEV_TO_RES_LIST_CMD_CMPL_CBACK_EVT 21
#define HCI_LE_REM_DEV_FROM_RES_LIST_CMD_CMPL_CBACK_EVT 22
#define HCI_LE_CLEAR_RES_LIST_CMD_CMPL_CBACK_EVT 23
#define HCI_LE_READ_PEER_RES_ADDR_CMD_CMPL_CBACK_EVT 24
#define HCI_LE_READ_LOCAL_RES_ADDR_CMD_CMPL_CBACK_EVT 25
#define HCI_LE_SET_ADDR_RES_ENABLE_CMD_CMPL_CBACK_EVT 26
#define HCI_LE_ENCRYPT_CMD_CMPL_CBACK_EVT 27
#define HCI_LE_RAND_CMD_CMPL_CBACK_EVT 28
#define HCI_LE_REM_CONN_PARAM_REP_CMD_CMPL_CBACK_EVT 29
#define HCI_LE_REM_CONN_PARAM_NEG_REP_CMD_CMPL_CBACK_EVT 30
#define HCI_LE_READ_DEF_DATA_LEN_CMD_CMPL_CBACK_EVT 31
#define HCI_LE_WRITE_DEF_DATA_LEN_CMD_CMPL_CBACK_EVT 32
#define HCI_LE_SET_DATA_LEN_CMD_CMPL_CBACK_EVT 33
#define HCI_LE_READ_MAX_DATA_LEN_CMD_CMPL_CBACK_EVT 34
#define HCI_LE_REM_CONN_PARAM_REQ_CBACK_EVT 35
#define HCI_LE_DATA_LEN_CHANGE_CBACK_EVT 36
#define HCI_LE_READ_LOCAL_P256_PUB_KEY_CMPL_CBACK_EVT 37
#define HCI_LE_GENERATE_DHKEY_CMPL_CBACK_EVT 38
#define HCI_WRITE_AUTH_PAYLOAD_TO_CMD_CMPL_CBACK_EVT 39
#define HCI_AUTH_PAYLOAD_TO_EXPIRED_CBACK_EVT 40
#define HCI_LE_READ_PHY_CMD_CMPL_CBACK_EVT 41
#define HCI_LE_SET_DEF_PHY_CMD_CMPL_CBACK_EVT 42
#define HCI_LE_PHY_UPDATE_CMPL_CBACK_EVT 43
#define HCI_LE_EXT_ADV_REPORT_CBACK_EVT 44
#define HCI_LE_SCAN_TIMEOUT_CBACK_EVT 45
#define HCI_LE_ADV_SET_TERM_CBACK_EVT 46
#define HCI_LE_SCAN_REQ_RCVD_CBACK_EVT 47
#define HCI_LE_PER_ADV_SYNC_EST_CBACK_EVT 48
#define HCI_LE_PER_ADV_REPORT_CBACK_EVT 49
#define HCI_LE_PER_ADV_SYNC_LOST_CBACK_EVT 50
#define HCI_LE_CH_SEL_ALGO_CBACK_EVT 51
#define HCI_LE_SCAN_ENABLE_CMD_CMPL_CBACK_EVT 52
#define HCI_LE_ADV_ENABLE_CMD_CMPL_CBACK_EVT 53
#define HCI_LE_EXT_SCAN_ENABLE_CMD_CMPL_CBACK_EVT 54
#define HCI_LE_EXT_ADV_ENABLE_CMD_CMPL_CBACK_EVT 55
#define HCI_LE_PER_ADV_ENABLE_CMD_CMPL_CBACK_EVT 56
#define HCI_LE_SET_RAND_ADDR_CMD_CMPL_CBACK_EVT 57
#define HCI_LE_PER_SYNC_TRSF_RCVD_CBACK_EVT 58
#define HCI_LE_PER_ADV_SYNC_TRSF_CMD_CMPL_CBACK_EVT 59
#define HCI_LE_PER_ADV_SET_INFO_TRSF_CMD_CMPL_CBACK_EVT 60
#define HCI_LE_CONN_IQ_REPORT_CBACK_EVT 61
#define HCI_LE_CTE_REQ_FAILED_CBACK_EVT 62
#define HCI_LE_SET_CONN_CTE_RX_PARAMS_CMD_CMPL_CBACK_EVT 63
#define HCI_LE_SET_CONN_CTE_TX_PARAMS_CMD_CMPL_CBACK_EVT 64
#define HCI_LE_CONN_CTE_REQ_ENABLE_CMD_CMPL_CBACK_EVT 65
#define HCI_LE_CONN_CTE_RSP_ENABLE_CMD_CMPL_CBACK_EVT 66
#define HCI_LE_READ_ANTENNA_INFO_CMD_CMPL_CBACK_EVT 67
#define HCI_CIS_EST_CBACK_EVT 68
#define HCI_CIS_REQ_CBACK_EVT 69
#define HCI_REQ_PEER_SCA_CBACK_EVT 70
#define HCI_LE_CONNLESS_IQ_REPORT_CBACK_EVT 71







typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t role;
  uint8_t addrType;
  bdAddr_t peerAddr;
  uint16_t connInterval;
  uint16_t connLatency;
  uint16_t supTimeout;
  uint8_t clockAccuracy;


  bdAddr_t localRpa;
  bdAddr_t peerRpa;
} hciLeConnCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t reason;
} hciDisconnectCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint16_t connInterval;
  uint16_t connLatency;
  uint16_t supTimeout;
} hciLeConnUpdateCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeCreateConnCancelCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t *pData;
  uint8_t len;
  int8_t rssi;
  uint8_t eventType;
  uint8_t addrType;
  bdAddr_t addr;


  uint8_t directAddrType;
  bdAddr_t directAddr;
} hciLeAdvReportEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t eventType;
  uint8_t addrType;
  bdAddr_t addr;
  uint8_t priPhy;
  uint8_t secPhy;
  uint8_t advSid;
  int8_t txPower;
  int8_t rssi;
  int16_t perAdvInter;
  uint8_t directAddrType;
  bdAddr_t directAddr;
  uint16_t len;
  uint8_t *pData;
} hciLeExtAdvReportEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
} hciLeScanTimeoutEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t advHandle;
  uint16_t handle;
  uint8_t numComplEvts;
} hciLeAdvSetTermEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t advHandle;
  uint8_t scanAddrType;
  bdAddr_t scanAddr;
} hciLeScanReqRcvdEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t syncHandle;
  uint8_t advSid;
  uint8_t advAddrType;
  bdAddr_t advAddr;
  uint8_t advPhy;
  uint16_t perAdvInterval;
  uint8_t clockAccuracy;
} hciLePerAdvSyncEstEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t syncHandle;
  uint8_t txPower;
  uint8_t rssi;
  uint8_t unused;
  uint8_t status;
  uint16_t len;
  uint8_t *pData;
} hciLePerAdvReportEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t syncHandle;
} hciLePerAdvSyncLostEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t connHandle;
  uint16_t serviceData;
  uint16_t syncHandle;
  uint8_t advSid;
  uint8_t advAddrType;
  bdAddr_t advAddr;
  uint8_t advPhy;
  uint16_t perAdvInterval;
  uint8_t clockAccuracy;
} HciLePerAdvSyncTrsfRcvdEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t handle;
  uint8_t chSelAlgo;
} hciLeChSelAlgoEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  int8_t rssi;
} hciReadRssiCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t chanMap[5];
} hciReadChanMapCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t handle;
  int8_t pwrLvl;
} hciReadTxPwrLvlCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t version;
  uint16_t mfrName;
  uint16_t subversion;
} hciReadRemoteVerInfoCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t features[8];
} hciLeReadRemoteFeatCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeLtkReqReplCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeLtkReqNegReplCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciEncKeyRefreshCmpl_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t enabled;
} hciEncChangeEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t handle;
  uint8_t randNum[8];
  uint16_t encDiversifier;
} hciLeLtkReqEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t opcode;
} hciVendorSpecCmdStatusEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t opcode;
  uint8_t param[1];
} hciVendorSpecCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t param[1];
} hciVendorSpecEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t code;
} hciHwErrorEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t data[16];
} hciLeEncryptCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t randNum[8];
} hciLeRandCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeRemConnParamRepEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeRemConnParamNegRepEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t suggestedMaxTxOctets;
  uint16_t suggestedMaxTxTime;
} hciLeReadDefDataLenEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeWriteDefDataLenEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeSetDataLenEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t supportedMaxTxOctets;
  uint16_t supportedMaxTxTime;
  uint16_t supportedMaxRxOctets;
  uint16_t supportedMaxRxTime;
} hciLeReadMaxDataLenEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t handle;
  uint16_t intervalMin;
  uint16_t intervalMax;
  uint16_t latency;
  uint16_t timeout;
} hciLeRemConnParamReqEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t handle;
  uint16_t maxTxOctets;
  uint16_t maxTxTime;
  uint16_t maxRxOctets;
  uint16_t maxRxTime;
} hciLeDataLenChangeEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t key[64];
} hciLeP256CmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t key[32];
} hciLeGenDhKeyEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t peerRpa[6];
} hciLeReadPeerResAddrCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t localRpa[6];
} hciLeReadLocalResAddrCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeSetAddrResEnableCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeAddDevToResListCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeRemDevFromResListCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeClearResListCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciWriteAuthPayloadToCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t handle;
} hciAuthPayloadToExpiredEvt_t;


  typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t txPhy;
  uint8_t rxPhy;
} hciLeReadPhyCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
} hciLeSetDefPhyCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
  uint8_t txPhy;
  uint8_t rxPhy;
} hciLePhyUpdateEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLePerAdvSyncTrsfCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLePerAdvSetInfoTrsfCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t handle;
  uint8_t rxPhy;
  uint8_t dataChIdx;
  int16_t rssi;
  uint8_t rssiAntennaId;
  uint8_t cteType;
  uint8_t slotDurations;
  uint8_t pktStatus;
  uint16_t connEvtCnt;
  uint8_t sampleCnt;
  int8_t *pISample;
  int8_t *pQSample;
} hciLeConnIQReportEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t synHdl;
  uint8_t chIdx;
  int16_t rssi;
  uint8_t rssiAntennaId;
  uint8_t cteType;
  uint8_t slotDurations;
  uint8_t pktStatus;
  uint16_t paEvtCnt;
  uint8_t sampleCnt;
  int8_t *pISample;
  int8_t *pQSample;
} hciLeConlessIQReportEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeCteReqFailedEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeSetConnCteRxParamsCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeSetConnCteTxParamsCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeConnCteReqEnableCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint16_t handle;
} hciLeConnCteRspEnableCmdCmplEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t status;
  uint8_t switchSampleRates;
  uint8_t numAntennae;
  uint8_t switchPatternMaxLen;
  uint8_t cteMaxLen;
} hciLeReadAntennaInfoCmdCmplEvt_t;


typedef struct
{
  uint8_t hciVersion;
  uint16_t hciRevision;
  uint8_t lmpVersion;
  uint16_t manufacturerName;
  uint16_t lmpSubversion;
} hciLocalVerInfo_t;


typedef union
{
  wsfMsgHdr_t hdr;
  wsfMsgHdr_t resetSeqCmpl;
  hciLeConnCmplEvt_t leConnCmpl;
  hciDisconnectCmplEvt_t disconnectCmpl;
  hciLeConnUpdateCmplEvt_t leConnUpdateCmpl;
  hciLeCreateConnCancelCmdCmplEvt_t leCreateConnCancelCmdCmpl;
  hciLeAdvReportEvt_t leAdvReport;
  hciReadRssiCmdCmplEvt_t readRssiCmdCmpl;
  hciReadChanMapCmdCmplEvt_t readChanMapCmdCmpl;
  hciReadTxPwrLvlCmdCmplEvt_t readTxPwrLvlCmdCmpl;
  hciReadRemoteVerInfoCmplEvt_t readRemoteVerInfoCmpl;
  hciLeReadRemoteFeatCmplEvt_t leReadRemoteFeatCmpl;
  hciLeLtkReqReplCmdCmplEvt_t leLtkReqReplCmdCmpl;
  hciLeLtkReqNegReplCmdCmplEvt_t leLtkReqNegReplCmdCmpl;
  hciEncKeyRefreshCmpl_t encKeyRefreshCmpl;
  hciEncChangeEvt_t encChange;
  hciLeLtkReqEvt_t leLtkReq;
  hciVendorSpecCmdStatusEvt_t vendorSpecCmdStatus;
  hciVendorSpecCmdCmplEvt_t vendorSpecCmdCmpl;
  hciVendorSpecEvt_t vendorSpec;
  hciHwErrorEvt_t hwError;
  hciLeEncryptCmdCmplEvt_t leEncryptCmdCmpl;
  hciLeRandCmdCmplEvt_t leRandCmdCmpl;
  hciLeReadPeerResAddrCmdCmplEvt_t leReadPeerResAddrCmdCmpl;
  hciLeReadLocalResAddrCmdCmplEvt_t leReadLocalResAddrCmdCmpl;
  hciLeSetAddrResEnableCmdCmplEvt_t leSetAddrResEnableCmdCmpl;
  hciLeAddDevToResListCmdCmplEvt_t leAddDevToResListCmdCmpl;
  hciLeRemDevFromResListCmdCmplEvt_t leRemDevFromResListCmdCmpl;
  hciLeClearResListCmdCmplEvt_t leClearResListCmdCmpl;
  hciLeRemConnParamRepEvt_t leRemConnParamRepCmdCmpl;
  hciLeRemConnParamNegRepEvt_t leRemConnParamNegRepCmdCmpl;
  hciLeReadDefDataLenEvt_t leReadDefDataLenCmdCmpl;
  hciLeWriteDefDataLenEvt_t leWriteDefDataLenCmdCmpl;
  hciLeSetDataLenEvt_t leSetDataLenCmdCmpl;
  hciLeReadMaxDataLenEvt_t leReadMaxDataLenCmdCmpl;
  hciLeRemConnParamReqEvt_t leRemConnParamReq;
  hciLeDataLenChangeEvt_t leDataLenChange;
  hciLeP256CmplEvt_t leP256;
  hciLeGenDhKeyEvt_t leGenDHKey;
  hciWriteAuthPayloadToCmdCmplEvt_t writeAuthPayloadToCmdCmpl;
  hciAuthPayloadToExpiredEvt_t authPayloadToExpired;
  hciLeReadPhyCmdCmplEvt_t leReadPhyCmdCmpl;
  hciLeSetDefPhyCmdCmplEvt_t leSetDefPhyCmdCmpl;
  hciLePhyUpdateEvt_t lePhyUpdate;
  hciLeExtAdvReportEvt_t leExtAdvReport;
  hciLeScanTimeoutEvt_t leScanTimeout;
  hciLeAdvSetTermEvt_t leAdvSetTerm;
  hciLeScanReqRcvdEvt_t leScanReqRcvd;
  hciLePerAdvSyncEstEvt_t lePerAdvSyncEst;
  hciLePerAdvReportEvt_t lePerAdvReport;
  hciLePerAdvSyncLostEvt_t lePerAdvSyncLost;
  hciLeChSelAlgoEvt_t leChSelAlgo;
  HciLePerAdvSyncTrsfRcvdEvt_t lePerAdvSyncTrsfRcvd;
  hciLePerAdvSyncTrsfCmdCmplEvt_t lePerAdvSyncTrsfCmdCmpl;
  hciLePerAdvSetInfoTrsfCmdCmplEvt_t lePerAdvSetInfoTrsfCmdCmpl;
  hciLeConnIQReportEvt_t leConnIQReport;
  hciLeCteReqFailedEvt_t leCteReqFailed;
  hciLeSetConnCteRxParamsCmdCmplEvt_t leSetConnCteRxParamsCmdCmpl;
  hciLeSetConnCteTxParamsCmdCmplEvt_t leSetConnCteTxParamsCmdCmpl;
  hciLeConnCteReqEnableCmdCmplEvt_t leConnCteReqEnableCmdCmpl;
  hciLeConnCteRspEnableCmdCmplEvt_t leConnCteRspEnableCmdCmpl;
  hciLeReadAntennaInfoCmdCmplEvt_t leReadAntennaInfoCmdCmpl;
} hciEvt_t;







typedef struct
{
  uint16_t connIntervalMin;
  uint16_t connIntervalMax;
  uint16_t connLatency;
  uint16_t supTimeout;
  uint16_t minCeLen;
  uint16_t maxCeLen;
} hciConnSpec_t;


typedef struct
{
  uint8_t filterPolicy;
  uint8_t ownAddrType;
  uint8_t peerAddrType;
  const uint8_t *pPeerAddr;
  uint8_t initPhys;
} hciExtInitParam_t;


typedef struct
{
  uint16_t scanInterval;
  uint16_t scanWindow;
} hciExtInitScanParam_t;


typedef struct
{
  uint16_t advEventProp;
  uint32_t priAdvInterMin;
  uint32_t priAdvInterMax;
  uint8_t priAdvChanMap;
  uint8_t ownAddrType;
  uint8_t peerAddrType;
  uint8_t *pPeerAddr;
  uint8_t advFiltPolicy;
  int8_t advTxPwr;
  uint8_t priAdvPhy;
  uint8_t secAdvMaxSkip;
  uint8_t secAdvPhy;
  uint8_t advSetId;
  uint8_t scanReqNotifEna;
} hciExtAdvParam_t;


typedef struct
{
  uint8_t advHandle;
  uint16_t duration;
  uint8_t maxEaEvents;
} hciExtAdvEnableParam_t;


typedef struct
{
  uint16_t scanInterval;
  uint16_t scanWindow;
  uint8_t scanType;
} hciExtScanParam_t;


#define MAX_SWITCHING_PATTERN_LEN (0x4B)


typedef struct
{

    uint8_t rx_channel;

    uint8_t phy;

    uint8_t mod_idx;

    uint8_t exp_cte_len;

    uint8_t exp_cte_type;

    uint8_t slot_dur;

    uint8_t switching_pattern_len;

    uint8_t antenna_id[(0x4B)];
}hciLeRxTestV3Cmd_t;


typedef struct
{

    uint8_t tx_channel;

    uint8_t test_data_len;

    uint8_t pkt_payl;

    uint8_t phy;

    uint8_t cte_len;

    uint8_t cte_type;

    uint8_t switching_pattern_len;

    uint8_t antenna_id[(0x4B)];
}hciLeTxTestV3Cmd_t;
# 909 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
typedef void (*hciEvtCback_t)(hciEvt_t *pEvent);
# 921 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
typedef void (*hciSecCback_t)(hciEvt_t *pEvent);
# 936 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
typedef void (*hciAclCback_t)(uint8_t *pData);
# 947 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
typedef void (*hciFlowCback_t)(uint16_t handle, bool_t flowDisabled);
# 971 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciEvtRegister(hciEvtCback_t evtCback);
# 982 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSecRegister(hciSecCback_t secCback);
# 994 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciAclRegister(hciAclCback_t aclCback, hciFlowCback_t flowCback);
# 1003 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciResetSequence(void);
# 1014 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciVsInit(uint8_t param);
# 1023 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciCoreInit(void);
# 1035 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciCoreHandler(wsfEventMask_t event, wsfMsgHdr_t *pMsg);
# 1046 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSetMaxRxAclLen(uint16_t len);
# 1058 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSetAclQueueWatermarks(uint8_t queueHi, uint8_t queueLo);
# 1070 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSetLeSupFeat(uint32_t feat, bool_t flag);
# 1082 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciVsAeInit(uint8_t param);
# 1103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t *HciGetBdAddr(void);
# 1112 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t HciGetWhiteListSize(void);
# 1121 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
int8_t HciGetAdvTxPwr(void);
# 1130 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint16_t HciGetBufSize(void);
# 1139 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t HciGetNumBufs(void);
# 1148 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t *HciGetSupStates(void);
# 1157 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint32_t HciGetLeSupFeat(void);
# 1166 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint16_t HciGetMaxRxAclLen(void);
# 1175 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t HciGetResolvingListSize(void);
# 1184 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
bool_t HciLlPrivacySupported(void);
# 1193 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint16_t HciGetMaxAdvDataLen(void);
# 1202 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t HciGetNumSupAdvSets(void);
# 1211 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
bool_t HciLeAdvExtSupported(void);
# 1220 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
uint8_t HciGetPerAdvListSize(void);
# 1229 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
hciLocalVerInfo_t *HciGetLocalVerInfo(void);
# 1251 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSendAclData(uint8_t *pAclData);
# 1273 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciDisconnectCmd(uint16_t handle, uint8_t reason);
# 1285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeAddDevWhiteListCmd(uint8_t addrType, uint8_t *pAddr);
# 1294 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeClearWhiteListCmd(void);
# 1306 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeConnUpdateCmd(uint16_t handle, hciConnSpec_t *pConnSpec);
# 1323 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeCreateConnCmd(uint16_t scanInterval, uint16_t scanWindow, uint8_t filterPolicy,
                        uint8_t peerAddrType, uint8_t *pPeerAddr, uint8_t ownAddrType,
                        hciConnSpec_t *pConnSpec);
# 1334 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeCreateConnCancelCmd(void);
# 1346 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeEncryptCmd(uint8_t *pKey, uint8_t *pData);
# 1357 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeLtkReqNegReplCmd(uint16_t handle);
# 1369 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeLtkReqReplCmd(uint16_t handle, uint8_t *pKey);
# 1378 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRandCmd(void);
# 1387 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadAdvTXPowerCmd(void);
# 1396 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadBufSizeCmd(void);
# 1407 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadChanMapCmd(uint16_t handle);
# 1416 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadLocalSupFeatCmd(void);
# 1427 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadRemoteFeatCmd(uint16_t handle);
# 1436 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadSupStatesCmd(void);
# 1445 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadWhiteListSizeCmd(void);
# 1457 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRemoveDevWhiteListCmd(uint8_t addrType, uint8_t *pAddr);
# 1468 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetAdvEnableCmd(uint8_t enable);
# 1480 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetAdvDataCmd(uint8_t len, uint8_t *pData);
# 1498 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetAdvParamCmd(uint16_t advIntervalMin, uint16_t advIntervalMax, uint8_t advType,
                         uint8_t ownAddrType, uint8_t peerAddrType, uint8_t *pPeerAddr,
                         uint8_t advChanMap, uint8_t advFiltPolicy);
# 1511 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetEventMaskCmd(uint8_t *pLeEventMask);
# 1522 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetHostChanClassCmd(uint8_t *pChanMap);
# 1533 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetRandAddrCmd(uint8_t *pAddr);
# 1545 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetScanEnableCmd(uint8_t enable, uint8_t filterDup);
# 1560 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetScanParamCmd(uint8_t scanType, uint16_t scanInterval, uint16_t scanWindow,
                          uint8_t ownAddrType, uint8_t scanFiltPolicy);
# 1573 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetScanRespDataCmd(uint8_t len, uint8_t *pData);
# 1587 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeStartEncryptionCmd(uint16_t handle, uint8_t *pRand, uint16_t diversifier, uint8_t *pKey);
# 1596 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadBdAddrCmd(void);
# 1605 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadBufSizeCmd(void);
# 1614 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadLocalSupFeatCmd(void);
# 1623 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadLocalVerInfoCmd(void);
# 1634 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadRemoteVerInfoCmd(uint16_t handle);
# 1645 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadRssiCmd(uint16_t handle);
# 1657 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadTxPwrLvlCmd(uint16_t handle, uint8_t type);
# 1666 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciResetCmd(void);
# 1677 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSetEventMaskCmd(uint8_t *pEventMask);
# 1687 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciSetEventMaskPage2Cmd(uint8_t *pEventMask);
# 1698 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciReadAuthPayloadTimeout(uint16_t handle);
# 1710 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciWriteAuthPayloadTimeout(uint16_t handle, uint16_t timeout);
# 1724 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeAddDeviceToResolvingListCmd(uint8_t peerAddrType, const uint8_t *pPeerIdentityAddr,
                                      const uint8_t *pPeerIrk, const uint8_t *pLocalIrk);
# 1737 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRemoveDeviceFromResolvingList(uint8_t peerAddrType, const uint8_t *pPeerIdentityAddr);
# 1746 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeClearResolvingList(void);
# 1755 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadResolvingListSize(void);
# 1767 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadPeerResolvableAddr(uint8_t addrType, const uint8_t *pIdentityAddr);
# 1779 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadLocalResolvableAddr(uint8_t addrType, const uint8_t *pIdentityAddr);
# 1791 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetAddrResolutionEnable(uint8_t enable);
# 1802 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetResolvablePrivateAddrTimeout(uint16_t rpaTimeout);
# 1815 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPrivacyModeCmd(uint8_t addrType, uint8_t *pAddr, uint8_t mode);
# 1826 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadPhyCmd(uint16_t handle);
# 1839 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetDefaultPhyCmd(uint8_t allPhys, uint8_t txPhys, uint8_t rxPhys);
# 1854 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPhyCmd(uint16_t handle, uint8_t allPhys, uint8_t txPhys, uint8_t rxPhys, uint16_t phyOptions);
# 1867 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciVendorSpecificCmd(uint16_t opcode, uint8_t len, uint8_t *pData);
# 1884 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRemoteConnParamReqReply(uint16_t handle, uint16_t intervalMin, uint16_t intervalMax, uint16_t latency,
                                  uint16_t timeout, uint16_t minCeLen, uint16_t maxCeLen);
# 1897 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRemoteConnParamReqNegReply(uint16_t handle, uint8_t reason);
# 1910 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetDataLen(uint16_t handle, uint16_t txOctets, uint16_t txTime);
# 1919 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadDefDataLen(void);
# 1932 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeWriteDefDataLen(uint16_t suggestedMaxTxOctets, uint16_t suggestedMaxTxTime);
# 1941 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadLocalP256PubKey(void);
# 1953 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeGenerateDHKey(uint8_t *pPubKeyX, uint8_t *pPubKeyY);
# 1966 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeGenerateDHKeyV2(uint8_t *pPubKeyX, uint8_t *pPubKeyY, uint8_t keyType);
# 1975 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadMaxDataLen(void);
# 1987 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciWriteAuthPayloadTimeout(uint16_t handle, uint16_t timeout);
# 1996 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadTxPower(void);
# 2005 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadRfPathComp(void);
# 2017 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeWriteRfPathComp(int16_t txPathComp, int16_t rxPathComp);
# 2034 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetAdvSetRandAddrCmd(uint8_t advHandle, const uint8_t *pAddr);
# 2046 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetExtAdvParamCmd(uint8_t advHandle, hciExtAdvParam_t *pExtAdvParam);
# 2061 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetExtAdvDataCmd(uint8_t advHandle, uint8_t op, uint8_t fragPref, uint8_t len,
                           const uint8_t *pData);
# 2077 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetExtScanRespDataCmd(uint8_t advHandle, uint8_t op, uint8_t fragPref, uint8_t len,
                                const uint8_t *pData);
# 2091 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetExtAdvEnableCmd(uint8_t enable, uint8_t numSets, hciExtAdvEnableParam_t *pEnableParam);
# 2100 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadMaxAdvDataLen(void);
# 2109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadNumSupAdvSets(void);
# 2120 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRemoveAdvSet(uint8_t advHandle);
# 2129 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeClearAdvSets(void);
# 2143 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPerAdvParamCmd(uint8_t advHandle, uint16_t advIntervalMin, uint16_t advIntervalMax,
                            uint16_t advProps);
# 2158 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPerAdvDataCmd(uint8_t advHandle, uint8_t op, uint8_t len, const uint8_t *pData);
# 2170 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPerAdvEnableCmd(uint8_t enable, uint8_t advHandle);
# 2189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetExtScanParamCmd(uint8_t ownAddrType, uint8_t scanFiltPolicy, uint8_t scanPhys,
                             hciExtScanParam_t *pScanParam);
# 2204 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeExtScanEnableCmd(uint8_t enable, uint8_t filterDup, uint16_t duration, uint16_t period);
# 2217 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeExtCreateConnCmd(hciExtInitParam_t *pInitParam, hciExtInitScanParam_t *pScanParam,
                           hciConnSpec_t *pConnSpec);
# 2236 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLePerAdvCreateSyncCmd(uint8_t options, uint8_t advSid, uint8_t advAddrType,
                              uint8_t *pAdvAddr, uint16_t skip, uint16_t syncTimeout, uint8_t unused);
# 2246 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLePerAdvCreateSyncCancelCmd(void);
# 2257 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLePerAdvTerminateSyncCmd(uint16_t syncHandle);
# 2270 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeAddDeviceToPerAdvListCmd(uint8_t advAddrType, uint8_t *pAdvAddr, uint8_t advSid);
# 2283 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeRemoveDeviceFromPerAdvListCmd(uint8_t advAddrType, uint8_t *pAdvAddr, uint8_t advSid);
# 2292 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeClearPerAdvListCmd(void);
# 2301 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadPerAdvListSizeCmd(void);
# 2313 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPerAdvRcvEnableCmd(uint16_t syncHandle, uint8_t enable);
# 2326 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLePerAdvSyncTrsfCmd(uint16_t connHandle, uint16_t serviceData, uint16_t syncHandle);
# 2339 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLePerAdvSetInfoTrsfCmd(uint16_t connHandle, uint16_t serviceData, uint8_t advHandle);
# 2355 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetPerAdvSyncTrsfParamsCmd(uint16_t connHandle, uint8_t mode, uint16_t skip,
                                     uint16_t syncTimeout, uint8_t cteType);
# 2371 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetDefaultPerAdvSyncTrsfParamsCmd(uint8_t mode, uint16_t skip, uint16_t syncTimeout,
                                            uint8_t cteType);
# 2387 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetConnCteRxParamsCmd(uint16_t connHandle, uint8_t samplingEnable, uint8_t slotDurations,
                                uint8_t switchPatternLen, uint8_t *pAntennaIDs);
# 2402 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetConnCteTxParamsCmd(uint16_t connHandle, uint8_t cteTypeBits, uint8_t switchPatternLen,
                                uint8_t *pAntennaIDs);
# 2418 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeConnCteReqEnableCmd(uint16_t connHandle, uint8_t enable, uint16_t cteReqInt,
                              uint8_t reqCteLen, uint8_t reqCteType);
# 2431 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeConnCteRspEnableCmd(uint16_t connHandle, uint8_t enable);
# 2448 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeSetConlessIQSampleEnCmd(uint16_t syncHandle, uint8_t samplingEnable, uint8_t slotDurations,
                                uint8_t maxSampleCte,uint8_t switchPatternLen, uint8_t *pAntennaIDs);
# 2458 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReadAntennaInfoCmd(void);
# 2470 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeReceiverTestCmd(uint8_t RX_Channel);
# 2483 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeTransmitterTestCmd(uint8_t TX_Channel, uint8_t len_of_test_data, uint8_t packet_payload);
# 2494 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciLeTestEndCmd(void);
void HciLeReceiverTestCmdV3(hciLeRxTestV3Cmd_t *rx_test_v3);
void HciLeTransmitterTestCmdV3(hciLeTxTestV3Cmd_t *tx_test_v3);
# 2509 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/hci_api.h"
void HciVendorSpecificCmd(uint16_t opcode, uint8_t len, uint8_t *pData);
# 28 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define CFG_STACK_H 
# 40 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define STACK_VERSION ((const char *)"r19.02\n")

#define STACK_VER_NUM 0x1302
# 52 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define HCI_VS_GENERIC 0
#define HCI_VS_EMM 1



#define HCI_VS_TARGET HCI_VS_GENERIC
# 67 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define HCI_TX_DATA_TAILROOM 0
# 81 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define DM_CONN_MAX 3




#define DM_SYNC_MAX 1




#define DM_NUM_ADV_SETS 2




#define DM_NUM_PHYS 2
# 110 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define L2C_COC_CHAN_MAX 8




#define L2C_COC_REG_MAX 4
# 129 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define ATT_NUM_SIMUL_WRITE_CMD 1




#define ATT_NUM_SIMUL_NTF 1
# 148 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
#define SMP_DB_MAX_DEVICES 3
# 161 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/cfg/cfg_stack.h"
void StackGetVersionNumber(const char **pVersion);
# 29 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_defs.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_defs.h"
#define SMP_DEFS_H 
# 39 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_defs.h"
#define SMP_HDR_LEN 1


#define SMP_TIMEOUT 30





#define SMP_KEY_SIZE_MAX 16
#define SMP_KEY_SIZE_MIN 7


#define SMP_OOB_LEN 16
#define SMP_PIN_LEN 3





#define SMP_ERR_PASSKEY_ENTRY 0x01
#define SMP_ERR_OOB 0x02
#define SMP_ERR_AUTH_REQ 0x03
#define SMP_ERR_CONFIRM_VALUE 0x04
#define SMP_ERR_PAIRING_NOT_SUP 0x05
#define SMP_ERR_ENC_KEY_SIZE 0x06
#define SMP_ERR_COMMAND_NOT_SUP 0x07
#define SMP_ERR_UNSPECIFIED 0x08
#define SMP_ERR_ATTEMPTS 0x09
#define SMP_ERR_INVALID_PARAM 0x0A
#define SMP_ERR_DH_KEY_CHECK 0x0B
#define SMP_ERR_NUMERIC_COMPARISON 0x0C
#define SMP_ERR_BR_EDR_IN_PROGRESS 0x0D
#define SMP_ERR_CROSS_TRANSPORT 0x0E






#define SMP_ERR_MEMORY 0xE0
#define SMP_ERR_TIMEOUT 0xE1






#define SMP_CMD_PAIR_REQ 0x01
#define SMP_CMD_PAIR_RSP 0x02
#define SMP_CMD_PAIR_CNF 0x03
#define SMP_CMD_PAIR_RAND 0x04
#define SMP_CMD_PAIR_FAIL 0x05
#define SMP_CMD_ENC_INFO 0x06
#define SMP_CMD_MASTER_ID 0x07
#define SMP_CMD_ID_INFO 0x08
#define SMP_CMD_ID_ADDR_INFO 0x09
#define SMP_CMD_SIGN_INFO 0x0A
#define SMP_CMD_SECURITY_REQ 0x0B
#define SMP_CMD_PUBLIC_KEY 0x0C
#define SMP_CMD_DHKEY_CHECK 0x0D
#define SMP_CMD_KEYPRESS 0x0E
#define SMP_CMD_MAX 0x0F






#define SMP_PAIR_REQ_LEN 7
#define SMP_PAIR_RSP_LEN 7
#define SMP_PAIR_CNF_LEN 17
#define SMP_PAIR_RAND_LEN 17
#define SMP_PAIR_FAIL_LEN 2
#define SMP_ENC_INFO_LEN 17
#define SMP_MASTER_ID_LEN 11
#define SMP_ID_INFO_LEN 17
#define SMP_ID_ADDR_INFO_LEN 8
#define SMP_SIGN_INFO_LEN 17
#define SMP_SECURITY_REQ_LEN 2
#define SMP_PUB_KEY_MSG_LEN (1 + 2*SMP_PUB_KEY_LEN)
#define SMP_DHKEY_CHECK_MSG_LEN (1 + SMP_DHKEY_CHECK_LEN)
#define SMP_KEYPRESS_MSG_LEN 2






#define SMP_IO_DISP_ONLY 0x00
#define SMP_IO_DISP_YES_NO 0x01
#define SMP_IO_KEY_ONLY 0x02
#define SMP_IO_NO_IN_NO_OUT 0x03
#define SMP_IO_KEY_DISP 0x04






#define SMP_OOB_DATA_NONE 0x00
#define SMP_OOB_DATA_PRESENT 0x01






#define SMP_AUTH_BOND_MASK 0x03
#define SMP_AUTH_BOND_FLAG 0x01
#define SMP_AUTH_MITM_FLAG 0x04
#define SMP_AUTH_SC_FLAG 0x08
#define SMP_AUTH_KP_FLAG 0x10






#define SMP_KEY_DIST_ENC 0x01
#define SMP_KEY_DIST_ID 0x02
#define SMP_KEY_DIST_SIGN 0x04

#define SMP_KEY_DIST_MASK (SMP_KEY_DIST_ENC | SMP_KEY_DIST_ID | SMP_KEY_DIST_SIGN)







#define SMP_PASSKEY_ENTRY_STARTED 0x00
#define SMP_PASSKEY_DIGIT_ENTERED 0x01
#define SMP_PASSKEY_DIGIT_ERASED 0x02
#define SMP_PASSKEY_CLEARED 0x03
#define SMP_PASSKEY_ENTRY_COMPLETED 0x04






#define SMP_RAND_LEN 16
#define SMP_CONFIRM_LEN 16
#define SMP_KEY_LEN 16
#define SMP_RAND8_LEN 8
#define SMP_PRIVATE_KEY_LEN 32
#define SMP_PUB_KEY_LEN 32
#define SMP_DHKEY_LEN 32
#define SMP_DHKEY_CHECK_LEN 16






#define SMP_F4_TEXT_LEN (SMP_PUB_KEY_LEN * 2 + 1)
#define SMP_G2_TEXT_LEN (SMP_PUB_KEY_LEN * 2 + SMP_RAND_LEN)
#define SMP_F5_TKEY_TEXT_LEN (SMP_DHKEY_LEN)
#define SMP_F5_TEXT_LEN (9 + 2*BDA_ADDR_LEN + 2*SMP_RAND_LEN)
#define SMP_F6_TEXT_LEN (2*BDA_ADDR_LEN + 3*SMP_RAND_LEN + 5)
# 30 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/sec_api.h" 1
# 31 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h" 2
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
#define DM_ROLE_MASTER HCI_ROLE_MASTER
#define DM_ROLE_SLAVE HCI_ROLE_SLAVE






#define DM_DISC_MODE_NONE 0
#define DM_DISC_MODE_LIMITED 1
#define DM_DISC_MODE_GENERAL 2






#define DM_ADV_CONN_UNDIRECT 0
#define DM_ADV_CONN_DIRECT 1
#define DM_ADV_SCAN_UNDIRECT 2
#define DM_ADV_NONCONN_UNDIRECT 3
#define DM_ADV_CONN_DIRECT_LO_DUTY 4






#define DM_EXT_ADV_CONN_UNDIRECT 5
#define DM_EXT_ADV_NONCONN_DIRECT 6
#define DM_EXT_ADV_SCAN_DIRECT 7
#define DM_ADV_NONE 255






#define DM_RPT_CONN_UNDIRECT 0
#define DM_RPT_CONN_DIRECT 1
#define DM_RPT_SCAN_UNDIRECT 2
#define DM_RPT_NONCONN_UNDIRECT 3
#define DM_RPT_SCAN_RESPONSE 4






#define DM_DATA_LOC_ADV 0
#define DM_DATA_LOC_SCAN 1






#define DM_SCAN_TYPE_PASSIVE 0
#define DM_SCAN_TYPE_ACTIVE 1






#define DM_ADV_CHAN_37 HCI_ADV_CHAN_37
#define DM_ADV_CHAN_38 HCI_ADV_CHAN_38
#define DM_ADV_CHAN_39 HCI_ADV_CHAN_39

#define DM_ADV_CHAN_ALL (HCI_ADV_CHAN_37 | HCI_ADV_CHAN_38 | HCI_ADV_CHAN_39)






#define DM_CLIENT_ID_ATT 0
#define DM_CLIENT_ID_SMP 1
#define DM_CLIENT_ID_DM 2
#define DM_CLIENT_ID_APP 3
#define DM_CLIENT_ID_L2C 4
#define DM_CLIENT_ID_MAX 5







#define DM_CONN_ID_NONE 0


#define DM_SYNC_ID_NONE 0






#define DM_ADDR_PUBLIC 0x00
#define DM_ADDR_RANDOM 0x01
#define DM_ADDR_PUBLIC_IDENTITY 0x02
#define DM_ADDR_RANDOM_IDENTITY 0x03
#define DM_ADDR_RANDOM_UNRESOLVED 0xFE
#define DM_ADDR_NONE 0xFF






#define DM_ADV_TYPE_FLAGS 0x01
#define DM_ADV_TYPE_16_UUID_PART 0x02
#define DM_ADV_TYPE_16_UUID 0x03
#define DM_ADV_TYPE_32_UUID_PART 0x04
#define DM_ADV_TYPE_32_UUID 0x05
#define DM_ADV_TYPE_128_UUID_PART 0x06
#define DM_ADV_TYPE_128_UUID 0x07
#define DM_ADV_TYPE_SHORT_NAME 0x08
#define DM_ADV_TYPE_LOCAL_NAME 0x09
#define DM_ADV_TYPE_TX_POWER 0x0A
#define DM_ADV_TYPE_SM_TK_VALUE 0x10
#define DM_ADV_TYPE_SM_OOB_FLAGS 0x11
#define DM_ADV_TYPE_CONN_INTERVAL 0x12
#define DM_ADV_TYPE_SIGNED_DATA 0x13
#define DM_ADV_TYPE_16_SOLICIT 0x14
#define DM_ADV_TYPE_128_SOLICIT 0x15
#define DM_ADV_TYPE_SERVICE_DATA 0x16
#define DM_ADV_TYPE_PUBLIC_TARGET 0x17
#define DM_ADV_TYPE_RANDOM_TARGET 0x18
#define DM_ADV_TYPE_APPEARANCE 0x19
#define DM_ADV_TYPE_ADV_INTERVAL 0x1A
#define DM_ADV_TYPE_BD_ADDR 0x1B
#define DM_ADV_TYPE_ROLE 0x1C
#define DM_ADV_TYPE_32_SOLICIT 0x1F
#define DM_ADV_TYPE_SVC_DATA_32 0x20
#define DM_ADV_TYPE_SVC_DATA_128 0x21
#define DM_ADV_TYPE_LESC_CONFIRM 0x22
#define DM_ADV_TYPE_LESC_RANDOM 0x23
#define DM_ADV_TYPE_URI 0x24
#define DM_ADV_TYPE_MANUFACTURER 0xFF






#define DM_FLAG_LE_LIMITED_DISC 0x01
#define DM_FLAG_LE_GENERAL_DISC 0x02
#define DM_FLAG_LE_BREDR_NOT_SUP 0x04






#define DM_AD_LEN_IDX 0
#define DM_AD_TYPE_IDX 1
#define DM_AD_DATA_IDX 2






#define DM_URI_SCHEME_HTTP 0x16
#define DM_URI_SCHEME_HTTPS 0x17






#define DM_GAP_LIM_ADV_TIMEOUT 180000
#define DM_GAP_GEN_DISC_SCAN_MIN 10240
#define DM_GAP_LIM_DISC_SCAN_MIN 10240
#define DM_GAP_CONN_PARAM_TIMEOUT 30000
#define DM_GAP_SCAN_FAST_PERIOD 30720
#define DM_GAP_ADV_FAST_PERIOD 30000







#define DM_GAP_SCAN_FAST_INT_MIN 48
#define DM_GAP_SCAN_FAST_INT_MAX 96
#define DM_GAP_SCAN_FAST_WINDOW 48
#define DM_GAP_SCAN_SLOW_INT_1 2048
#define DM_GAP_SCAN_SLOW_WINDOW_1 18
#define DM_GAP_SCAN_SLOW_INT_2 4096
#define DM_GAP_SCAN_SLOW_WINDOW_2 36
#define DM_GAP_ADV_FAST_INT_MIN_1 48
#define DM_GAP_ADV_FAST_INT_MAX_1 96
#define DM_GAP_ADV_FAST_INT_MIN_2 160
#define DM_GAP_ADV_FAST_INT_MAX_2 240
#define DM_GAP_ADV_SLOW_INT_MIN 1600
#define DM_GAP_ADV_SLOW_INT_MAX 1920







#define DM_GAP_SCAN_CODED_FAST_INT_MIN 144
#define DM_GAP_SCAN_CODED_FAST_INT_MAX 288
#define DM_GAP_SCAN_CODED_FAST_WINDOW 144
#define DM_GAP_SCAN_CODED_SLOW_INT_1 6144
#define DM_GAP_SCAN_CODED_SLOW_WINDOW_1 54
#define DM_GAP_SCAN_CODED_SLOW_INT_2 12288
#define DM_GAP_SCAN_CODED_SLOW_WINDOW_2 108
#define DM_GAP_ADV_CODED_FAST_INT_MIN_1 144
#define DM_GAP_ADV_CODED_FAST_INT_MAX_1 288
#define DM_GAP_ADV_CODED_FAST_INT_MIN_2 480
#define DM_GAP_ADV_CODED_FAST_INT_MAX_2 720
#define DM_GAP_ADV_CODED_SLOW_INT_MIN 4800
#define DM_GAP_ADV_CODED_SLOW_INT_MAX 5760







#define DM_GAP_CONN_EST_LATENCY 0






#define DM_GAP_INITIAL_CONN_INT_MIN 24
#define DM_GAP_INITIAL_CONN_INT_MAX 40






#define DM_GAP_CONN_EST_MIN_CE_LEN 0
#define DM_GAP_CONN_EST_MAX_CE_LEN 0






#define DM_GAP_PRIV_DISABLED 0
#define DM_GAP_PRIV_ENABLED 1







#define DM_DEFAULT_EST_SUP_TIMEOUT 2000






#define DM_AUTH_BOND_FLAG SMP_AUTH_BOND_FLAG
#define DM_AUTH_MITM_FLAG SMP_AUTH_MITM_FLAG
#define DM_AUTH_SC_FLAG SMP_AUTH_SC_FLAG
#define DM_AUTH_KP_FLAG SMP_AUTH_KP_FLAG






#define DM_KEY_DIST_LTK SMP_KEY_DIST_ENC
#define DM_KEY_DIST_IRK SMP_KEY_DIST_ID
#define DM_KEY_DIST_CSRK SMP_KEY_DIST_SIGN






#define DM_KEY_LOCAL_LTK 0x01
#define DM_KEY_PEER_LTK 0x02
#define DM_KEY_IRK 0x04
#define DM_KEY_CSRK 0x08



#define DM_SEC_HCI_ERR_BASE 0x20





#define DM_SEC_LEVEL_NONE 0
#define DM_SEC_LEVEL_ENC 1
#define DM_SEC_LEVEL_ENC_AUTH 2
#define DM_SEC_LEVEL_ENC_LESC 3






#define DM_RAND_ADDR_STATIC 0xC0
#define DM_RAND_ADDR_RESOLV 0x40
#define DM_RAND_ADDR_NONRESOLV 0x00







#define DM_RAND_ADDR_GET(addr) ((addr)[5] & 0xC0)


#define DM_RAND_ADDR_SET(addr,type) {(addr)[5] = ((addr)[5] & 0x3F) | (type);}


#define DM_RAND_ADDR_SA(addr,type) (((type) == DM_ADDR_RANDOM) && (DM_RAND_ADDR_GET((addr)) == DM_RAND_ADDR_STATIC))



#define DM_RAND_ADDR_RPA(addr,type) (((type) == DM_ADDR_RANDOM) && (DM_RAND_ADDR_GET((addr)) == DM_RAND_ADDR_RESOLV))







#define DM_PRIV_MODE_NETWORK 0x00
#define DM_PRIV_MODE_DEVICE 0x01






#define DM_CONN_IDLE 0
#define DM_CONN_BUSY 1






#define DM_IDLE_SMP_PAIR 0x0001
#define DM_IDLE_DM_ENC 0x0002
#define DM_IDLE_ATTS_DISC 0x0004
#define DM_IDLE_APP_DISC 0x0008
#define DM_IDLE_USER_1 0x0010
#define DM_IDLE_USER_2 0x0020
#define DM_IDLE_USER_3 0x0040
#define DM_IDLE_USER_4 0x0080






#define DM_FILT_POLICY_MODE_ADV 0
#define DM_FILT_POLICY_MODE_SCAN 1
#define DM_FILT_POLICY_MODE_INIT 2
#define DM_FILT_POLICY_MODE_SYNC 3






#define DM_ERR_SMP_RX_PDU_LEN_EXCEEDED 0x01
#define DM_ERR_ATT_RX_PDU_LEN_EXCEEDED 0x02
#define DM_ERR_L2C_RX_PDU_LEN_EXCEEDED 0x03
# 433 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
#define DM_ADV_HANDLE_DEFAULT 0






#define DM_CBACK_START 0x20


enum
{
  DM_RESET_CMPL_IND = 0x20,
  DM_ADV_START_IND,
  DM_ADV_STOP_IND,
  DM_ADV_NEW_ADDR_IND,
  DM_SCAN_START_IND,
  DM_SCAN_STOP_IND,
  DM_SCAN_REPORT_IND,
  DM_CONN_OPEN_IND,
  DM_CONN_CLOSE_IND,
  DM_CONN_UPDATE_IND,
  DM_SEC_PAIR_CMPL_IND,
  DM_SEC_PAIR_FAIL_IND,
  DM_SEC_ENCRYPT_IND,
  DM_SEC_ENCRYPT_FAIL_IND,
  DM_SEC_AUTH_REQ_IND,
  DM_SEC_KEY_IND,
  DM_SEC_LTK_REQ_IND,
  DM_SEC_PAIR_IND,
  DM_SEC_SLAVE_REQ_IND,
  DM_SEC_CALC_OOB_IND,
  DM_SEC_ECC_KEY_IND,
  DM_SEC_COMPARE_IND,
  DM_SEC_KEYPRESS_IND,
  DM_PRIV_RESOLVED_ADDR_IND,
  DM_PRIV_GENERATE_ADDR_IND,
  DM_CONN_READ_RSSI_IND,
  DM_PRIV_ADD_DEV_TO_RES_LIST_IND,
  DM_PRIV_REM_DEV_FROM_RES_LIST_IND,
  DM_PRIV_CLEAR_RES_LIST_IND,
  DM_PRIV_READ_PEER_RES_ADDR_IND,
  DM_PRIV_READ_LOCAL_RES_ADDR_IND,
  DM_PRIV_SET_ADDR_RES_ENABLE_IND,
  DM_REM_CONN_PARAM_REQ_IND,
  DM_CONN_DATA_LEN_CHANGE_IND,
  DM_CONN_WRITE_AUTH_TO_IND,
  DM_CONN_AUTH_TO_EXPIRED_IND,
  DM_PHY_READ_IND,
  DM_PHY_SET_DEF_IND,
  DM_PHY_UPDATE_IND,
  DM_ADV_SET_START_IND,
  DM_ADV_SET_STOP_IND,
  DM_SCAN_REQ_RCVD_IND,
  DM_EXT_SCAN_START_IND,
  DM_EXT_SCAN_STOP_IND,
  DM_EXT_SCAN_REPORT_IND,
  DM_PER_ADV_SET_START_IND,
  DM_PER_ADV_SET_STOP_IND,
  DM_PER_ADV_SYNC_EST_IND,
  DM_PER_ADV_SYNC_EST_FAIL_IND,
  DM_PER_ADV_SYNC_LOST_IND,
  DM_PER_ADV_SYNC_TRSF_EST_IND,
  DM_PER_ADV_SYNC_TRSF_EST_FAIL_IND,
  DM_PER_ADV_SYNC_TRSF_IND,
  DM_PER_ADV_SET_INFO_TRSF_IND,
  DM_PER_ADV_REPORT_IND,
  DM_REMOTE_FEATURES_IND,
  DM_READ_REMOTE_VER_INFO_IND,
  DM_CONN_IQ_REPORT_IND,
  DM_CONNLESS_IQ_REPORT_IND,
  DM_CTE_REQ_FAIL_IND,
  DM_CONN_CTE_RX_SAMPLE_START_IND,
  DM_CONN_CTE_RX_SAMPLE_STOP_IND,
  DM_CONN_CTE_TX_CFG_IND,
  DM_CONN_CTE_REQ_START_IND,
  DM_CONN_CTE_REQ_STOP_IND,
  DM_CONN_CTE_RSP_START_IND,
  DM_CONN_CTE_RSP_STOP_IND,
  DM_READ_ANTENNA_INFO_IND,
  DM_L2C_CMD_REJ_IND,
  DM_ERROR_IND,
  DM_HW_ERROR_IND,
  DM_VENDOR_SPEC_IND,
  DM_VENDOR_SPEC_CMD_CMPL_IND
};

#define DM_CBACK_END DM_VENDOR_SPEC_CMD_CMPL_IND







typedef uint8_t dmConnId_t;


typedef uint8_t dmSyncId_t;


typedef struct
{
  uint8_t dummy;
} dmCfg_t;


typedef struct
{
  uint8_t key[16];
  uint8_t rand[8];
  uint16_t ediv;
} dmSecLtk_t;


typedef struct
{
  uint8_t key[16];
  bdAddr_t bdAddr;
  uint8_t addrType;
} dmSecIrk_t;


typedef struct
{
  uint8_t key[16];
} dmSecCsrk_t;


typedef union
{
  dmSecLtk_t ltk;
  dmSecIrk_t irk;
  dmSecCsrk_t csrk;
} dmSecKey_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t auth;
} dmSecPairCmplIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  bool_t usingLtk;
} dmSecEncryptIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  bool_t oob;
  bool_t display;
} dmSecAuthReqIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t auth;
  bool_t oob;
  uint8_t iKeyDist;
  uint8_t rKeyDist;
} dmSecPairIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t auth;
} dmSecSlaveIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  dmSecKey_t keyData;
  uint8_t type;
  uint8_t secLevel;
  uint8_t encKeyLen;
} dmSecKeyIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t confirm[16];
} dmSecCnfIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t notificationType;
} dmSecKeypressIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  bdAddr_t addr;
} dmPrivGenAddrIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t confirm[16];
  uint8_t random[16];
} dmSecOobCalcIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  bdAddr_t addr;
  bool_t firstTime;
} dmAdvNewAddrIndEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t numSets;
  uint8_t advHandle[2];
} dmAdvSetStartEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t advHandle;
} dmPerAdvSetStartEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t advHandle;
} dmPerAdvSetStopEvt_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t reason;
  uint16_t handle;
} dmL2cCmdRejEvt_t;
# 700 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
typedef union
{
  wsfMsgHdr_t hdr;



  dmAdvNewAddrIndEvt_t advNewAddr;


  hciLeAdvReportEvt_t scanReport;
  hciLeConnCmplEvt_t connOpen;
  hciDisconnectCmplEvt_t connClose;
  hciLeConnUpdateCmplEvt_t connUpdate;
  dmSecPairCmplIndEvt_t pairCmpl;

  dmSecEncryptIndEvt_t encryptInd;

  dmSecAuthReqIndEvt_t authReq;
  dmSecKeyIndEvt_t keyInd;
  hciLeLtkReqEvt_t ltkReqInd;
  dmSecPairIndEvt_t pairInd;
  dmSecSlaveIndEvt_t slaveInd;
  dmSecOobCalcIndEvt_t oobCalcInd;
  secEccMsg_t eccMsg;
  dmSecCnfIndEvt_t cnfInd;
  dmSecKeypressIndEvt_t keypressInd;

  dmPrivGenAddrIndEvt_t genAddr;
  hciReadRssiCmdCmplEvt_t readRssi;
  hciLeAddDevToResListCmdCmplEvt_t addDevToResList;
  hciLeRemDevFromResListCmdCmplEvt_t remDevFromResList;
  hciLeClearResListCmdCmplEvt_t clearResList;
  hciLeReadPeerResAddrCmdCmplEvt_t readPeerResAddr;
  hciLeReadLocalResAddrCmdCmplEvt_t readLocalResAddr;
  hciLeSetAddrResEnableCmdCmplEvt_t setAddrResEnable;
  hciLeRemConnParamReqEvt_t remConnParamReq;
  hciLeDataLenChangeEvt_t dataLenChange;
  hciWriteAuthPayloadToCmdCmplEvt_t writeAuthTo;
  hciAuthPayloadToExpiredEvt_t authToExpired;
  hciLeReadPhyCmdCmplEvt_t readPhy;
  hciLeSetDefPhyCmdCmplEvt_t setDefPhy;
  hciLePhyUpdateEvt_t phyUpdate;
  dmAdvSetStartEvt_t advSetStart;
  hciLeAdvSetTermEvt_t advSetStop;
  hciLeScanReqRcvdEvt_t scanReqRcvd;


  hciLeExtAdvReportEvt_t extScanReport;
  dmPerAdvSetStartEvt_t perAdvSetStart;
  dmPerAdvSetStopEvt_t perAdvSetStop;
  hciLePerAdvSyncEstEvt_t perAdvSyncEst;
  hciLePerAdvSyncEstEvt_t perAdvSyncEstFail;
  hciLePerAdvSyncLostEvt_t perAdvSyncLost;
  HciLePerAdvSyncTrsfRcvdEvt_t perAdvSyncTrsfEst;
  HciLePerAdvSyncTrsfRcvdEvt_t perAdvSyncTrsEstFail;
  hciLePerAdvSyncTrsfCmdCmplEvt_t perAdvSyncTrsf;
  hciLePerAdvSetInfoTrsfCmdCmplEvt_t perAdvSetInfoTrsf;
  hciLePerAdvReportEvt_t perAdvReport;
  hciLeReadRemoteFeatCmplEvt_t readRemoteFeat;
  hciReadRemoteVerInfoCmplEvt_t readRemVerInfo;
  hciLeConnIQReportEvt_t connIQReport;
  hciLeConlessIQReportEvt_t connlessIQReport;
  hciLeCteReqFailedEvt_t cteReqFail;
  hciLeSetConnCteRxParamsCmdCmplEvt_t connCteRxSampleStart;
  hciLeSetConnCteRxParamsCmdCmplEvt_t connCteRxSampleStop;
  hciLeSetConnCteTxParamsCmdCmplEvt_t connCteTxCfg;
  hciLeConnCteReqEnableCmdCmplEvt_t connCteReqStart;
  hciLeConnCteReqEnableCmdCmplEvt_t connCteReqStop;
  hciLeConnCteRspEnableCmdCmplEvt_t connCteRspStart;
  hciLeConnCteRspEnableCmdCmplEvt_t connCteRspStop;
  hciLeReadAntennaInfoCmdCmplEvt_t readAntennaInfo;
  dmL2cCmdRejEvt_t l2cCmdRej;

  hciHwErrorEvt_t hwError;
  hciVendorSpecEvt_t vendorSpec;
  hciVendorSpecCmdCmplEvt_t vendorSpecCmdCmpl;
} dmEvt_t;


typedef struct
{
  uint8_t localRandom[16];
  uint8_t localConfirm[16];
  uint8_t peerRandom[16];
  uint8_t peerConfirm[16];
} dmSecLescOobCfg_t;


typedef void (*dmCback_t)(dmEvt_t *pDmEvt);
# 807 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmRegister(dmCback_t cback);
# 827 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmFindAdType(uint8_t adType, uint16_t dataLen, uint8_t *pData);
# 836 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvInit(void);
# 845 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmExtAdvInit(void);
# 854 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmAdvModeLeg(void);
# 863 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmAdvModeExt(void);
# 877 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvConfig(uint8_t advHandle, uint8_t advType, uint8_t peerAddrType, uint8_t *pPeerAddr);
# 892 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetData(uint8_t advHandle, uint8_t op, uint8_t location, uint8_t len, uint8_t *pData);
# 906 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvStart(uint8_t numSets, uint8_t *pAdvHandles, uint16_t *pDuration, uint8_t *pMaxEaEvents);
# 919 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvStop(uint8_t numSets, uint8_t *pAdvHandles);
# 930 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvRemoveAdvSet(uint8_t advHandle);
# 939 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvClearAdvSets(void);
# 951 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetRandAddr(uint8_t advHandle, const uint8_t *pAddr);
# 964 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetInterval(uint8_t advHandle, uint16_t intervalMin, uint16_t intervalMax);
# 976 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetChannelMap(uint8_t advHandle, uint8_t channelMap);
# 988 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetAddrType(uint8_t addrType);
# 1009 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmAdvSetAdValue(uint8_t adType, uint8_t len, uint8_t *pValue, uint16_t *pAdvDataLen,
                       uint8_t *pAdvData, uint16_t advDataBufLen);
# 1029 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmAdvSetName(uint8_t len, uint8_t *pValue, uint16_t *pAdvDataLen, uint8_t *pAdvData,
                    uint16_t advDataBufLen);
# 1039 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevPrivInit(void);
# 1050 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevPrivStart(uint16_t changeInterval);
# 1059 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevPrivStop(void);
# 1071 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvUseLegacyPdu(uint8_t advHandle, bool_t useLegacyPdu);
# 1083 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvOmitAdvAddr(uint8_t advHandle, bool_t omitAdvAddr);
# 1097 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvIncTxPwr(uint8_t advHandle, bool_t incTxPwr, int8_t advTxPwr);
# 1113 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetPhyParam(uint8_t advHandle, uint8_t priAdvPhy, uint8_t secAdvMaxSkip, uint8_t secAdvPhy);
# 1125 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvScanReqNotifEnable(uint8_t advHandle, bool_t scanReqNotifEna);
# 1137 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAdvSetFragPref(uint8_t advHandle, uint8_t fragPref);
# 1148 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPerAdvConfig(uint8_t advHandle);
# 1162 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPerAdvSetData(uint8_t advHandle, uint8_t op, uint8_t len, uint8_t *pData);
# 1173 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPerAdvStart(uint8_t advHandle);
# 1184 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPerAdvStop(uint8_t advHandle);
# 1198 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPerAdvSetInterval(uint8_t advHandle, uint16_t intervalMin, uint16_t intervalMax);
# 1212 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPerAdvIncTxPwr(uint8_t advHandle, bool_t incTxPwr);
# 1225 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint16_t DmExtMaxAdvDataLen(uint8_t advType, bool_t useLegacyPdu);
# 1241 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivInit(void);
# 1256 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivResolveAddr(uint8_t *pAddr, uint8_t *pIrk, uint16_t param);
# 1285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivAddDevToResList(uint8_t addrType, const uint8_t *pIdentityAddr, uint8_t *pPeerIrk,
                           uint8_t *pLocalIrk, bool_t enableLlPriv, uint16_t param);
# 1306 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivRemDevFromResList(uint8_t addrType, const uint8_t *pIdentityAddr, uint16_t param);
# 1325 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivClearResList(void);
# 1339 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivReadPeerResolvableAddr(uint8_t addrType, const uint8_t *pIdentityAddr);
# 1353 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivReadLocalResolvableAddr(uint8_t addrType, const uint8_t *pIdentityAddr);
# 1371 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivSetAddrResEnable(bool_t enable);
# 1382 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivSetResolvablePrivateAddrTimeout(uint16_t rpaTimeout);
# 1400 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivSetPrivacyMode(uint8_t addrType, const uint8_t *pIdentityAddr, uint8_t mode);
# 1412 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPrivGenerateAddr(uint8_t *pIrk, uint16_t param);
# 1421 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmLlPrivEnabled(void);
# 1437 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmScanInit(void);
# 1446 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmExtScanInit(void);
# 1455 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPastInit(void);
# 1464 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteInit(void);
# 1473 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmScanModeLeg(void);
# 1482 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmScanModeExt(void);
# 1501 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmScanStart(uint8_t scanPhys, uint8_t mode, const uint8_t *pScanType, bool_t filterDup,
                 uint16_t duration, uint16_t period);
# 1511 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmScanStop(void);
# 1524 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmScanSetInterval(uint8_t scanPhys, uint16_t *pScanInterval, uint16_t *pScanWindow);
# 1536 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmScanSetAddrType(uint8_t addrType);
# 1559 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
dmSyncId_t DmSyncStart(uint8_t advSid, uint8_t advAddrType, const uint8_t *pAdvAddr, uint16_t skip,
                       uint16_t syncTimeout);
# 1571 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSyncStop(dmSyncId_t syncId);
# 1582 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSyncInitialRptEnable(bool_t enable);
# 1595 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmAddDeviceToPerAdvList(uint8_t advAddrType, uint8_t *pAdvAddr, uint8_t advSid);
# 1608 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmRemoveDeviceFromPerAdvList(uint8_t advAddrType, uint8_t *pAdvAddr, uint8_t advSid);
# 1617 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmClearPerAdvList(void);
# 1629 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPastRptRcvEnable(dmSyncId_t syncId, bool_t enable);
# 1643 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPastSyncTrsf(dmConnId_t connId, uint16_t serviceData, dmSyncId_t syncId);
# 1657 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPastSetInfoTrsf(dmConnId_t connId, uint16_t serviceData, uint8_t advHandle);
# 1676 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPastConfig(dmConnId_t connId, uint8_t mode, uint16_t skip, uint16_t syncTimeout,
                  uint8_t cteType);
# 1695 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPastDefaultConfig(uint8_t mode, uint16_t skip, uint16_t syncTimeout, uint8_t cteType);
# 1710 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteRxSampleStart(dmConnId_t connId, uint8_t slotDurations, uint8_t switchPatternLen,
                            uint8_t *pAntennaIDs);
# 1722 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteRxSampleStop(dmConnId_t connId);
# 1737 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteTxConfig(dmConnId_t connId, uint8_t cteTypeBits, uint8_t switchPatternLen,
                       uint8_t *pAntennaIDs);
# 1752 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteReqStart(dmConnId_t connId, uint16_t cteReqInt, uint8_t reqCteLen,
                       uint8_t reqCteType);
# 1764 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteReqStop(dmConnId_t connId);
# 1775 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteRspStart(dmConnId_t connId);
# 1786 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnCteRspStop(dmConnId_t connId);
# 1798 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmReadAntennaInfo(void);
# 1814 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnInit(void);
# 1823 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnMasterInit(void);
# 1832 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmExtConnMasterInit(void);
# 1841 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnSlaveInit(void);
# 1850 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmExtConnSlaveInit(void);
# 1862 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnRegister(uint8_t clientId, dmCback_t cback);
# 1876 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
dmConnId_t DmConnOpen(uint8_t clientId, uint8_t initPhys, uint8_t addrType, uint8_t *pAddr);
# 1889 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnClose(uint8_t clientId, dmConnId_t connId, uint8_t reason);
# 1906 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
dmConnId_t DmConnAccept(uint8_t clientId, uint8_t advHandle, uint8_t advType, uint16_t duration,
                        uint8_t maxEaEvents, uint8_t addrType, uint8_t *pAddr);
# 1919 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnUpdate(dmConnId_t connId, hciConnSpec_t *pConnSpec);
# 1931 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnSetScanInterval(uint16_t scanInterval, uint16_t scanWindow);
# 1945 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmExtConnSetScanInterval(uint8_t initPhys, uint16_t *pScanInterval, uint16_t *pScanWindow);
# 1956 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnSetConnSpec(hciConnSpec_t *pConnSpec);
# 1969 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmExtConnSetConnSpec(uint8_t initPhys, hciConnSpec_t *pConnSpec);
# 1980 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnSetAddrType(uint8_t addrType);
# 1993 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnSetIdle(dmConnId_t connId, uint16_t idleMask, uint8_t idle);
# 2004 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint16_t DmConnCheckIdle(dmConnId_t connId);
# 2015 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnReadRssi(dmConnId_t connId);
# 2029 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmRemoteConnParamReqReply(dmConnId_t connId, hciConnSpec_t *pConnSpec);
# 2043 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmRemoteConnParamReqNegReply(dmConnId_t connId, uint8_t reason);
# 2056 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmConnSetDataLen(dmConnId_t connId, uint16_t txOctets, uint16_t txTime);
# 2067 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t DmConnRole(dmConnId_t connId);
# 2079 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmWriteAuthPayloadTimeout(dmConnId_t connId, uint16_t timeout);
# 2100 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSetDefaultPhy(uint8_t allPhys, uint8_t txPhys, uint8_t rxPhys);
# 2111 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmReadPhy(dmConnId_t connId);
# 2126 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSetPhy(dmConnId_t connId, uint8_t allPhys, uint8_t txPhys, uint8_t rxPhys, uint16_t phyOptions);
# 2135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmPhyInit(void);
# 2152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevReset(void);
# 2163 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevSetRandAddr(uint8_t *pAddr);
# 2176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevWhiteListAdd(uint8_t addrType, uint8_t *pAddr);
# 2189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevWhiteListRemove(uint8_t addrType, uint8_t *pAddr);
# 2199 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevWhiteListClear(void);
# 2211 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmDevSetFilterPolicy(uint8_t mode, uint8_t policy);
# 2225 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmDevSetExtFilterPolicy(uint8_t advHandle, uint8_t mode, uint8_t policy);
# 2236 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmDevVsInit(uint8_t param);
# 2252 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecInit(void);
# 2261 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecLescInit(void);
# 2276 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecPairReq(dmConnId_t connId, bool_t oob, uint8_t auth, uint8_t iKeyDist, uint8_t rKeyDist);
# 2292 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecPairRsp(dmConnId_t connId, bool_t oob, uint8_t auth, uint8_t iKeyDist, uint8_t rKeyDist);
# 2304 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecCancelReq(dmConnId_t connId, uint8_t reason);
# 2318 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecAuthRsp(dmConnId_t connId, uint8_t authDataLen, uint8_t *pAuthData);
# 2331 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecSlaveReq(dmConnId_t connId, uint8_t auth);
# 2344 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecEncryptReq(dmConnId_t connId, uint8_t secLevel, dmSecLtk_t *pLtk);
# 2359 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecLtkRsp(dmConnId_t connId, bool_t keyFound, uint8_t secLevel, uint8_t *pKey);
# 2370 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecSetLocalCsrk(uint8_t *pCsrk);
# 2381 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecSetLocalIrk(uint8_t *pIrk);
# 2390 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecGenerateEccKeyReq(void);
# 2401 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecSetEccKey(secEccKey_t *pKey);
# 2410 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
secEccKey_t *DmSecGetEccKey(void);
# 2419 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecSetDebugEccKey(void);
# 2433 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecSetOob(dmConnId_t connId, dmSecLescOobCfg_t *pConfig);
# 2448 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecCalcOobReq(uint8_t *pRand, uint8_t *pPubKeyX);
# 2461 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSecCompareRsp(dmConnId_t connId, bool_t valid);
# 2472 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint32_t DmSecGetCompareValue(uint8_t *pConfirm);
# 2490 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t DmLlAddrType(uint8_t addrType);
# 2501 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t DmHostAddrType(uint8_t addrType);
# 2512 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint16_t DmSizeOfEvt(dmEvt_t *pDmEvt);
# 2524 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmL2cConnUpdateCnf(uint16_t handle, uint16_t reason);
# 2536 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmL2cCmdRejInd(uint16_t handle, uint16_t result);
# 2550 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmL2cConnUpdateInd(uint8_t identifier, uint16_t handle, hciConnSpec_t *pConnSpec);
# 2561 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
dmConnId_t DmConnIdByHandle(uint16_t handle);
# 2572 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
bool_t DmConnInUse(dmConnId_t connId);
# 2583 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t DmConnPeerAddrType(dmConnId_t connId);
# 2594 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmConnPeerAddr(dmConnId_t connId);
# 2605 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t DmConnLocalAddrType(dmConnId_t connId);
# 2616 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmConnLocalAddr(dmConnId_t connId);
# 2627 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmConnPeerRpa(dmConnId_t connId);
# 2638 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmConnLocalRpa(dmConnId_t connId);
# 2649 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t DmConnSecLevel(dmConnId_t connId);
# 2662 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSmpEncryptReq(dmConnId_t connId, uint8_t secLevel, uint8_t *pKey);
# 2673 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmSmpCbackExec(dmEvt_t *pDmEvt);
# 2682 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmSecGetLocalCsrk(void);
# 2691 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
uint8_t *DmSecGetLocalIrk(void);
# 2702 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmReadRemoteFeatures(dmConnId_t connId);
# 2713 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h"
void DmReadRemoteVerInfo(dmConnId_t connId);
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
#define SMP_API_H 



# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/dm_api.h" 1
# 30 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h" 2
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
enum
{
  SMP_MSG_API_PAIR_REQ = 1,
  SMP_MSG_API_PAIR_RSP,
  SMP_MSG_API_CANCEL_REQ,
  SMP_MSG_API_AUTH_RSP,
  SMP_MSG_API_SECURITY_REQ,
  SMP_MSG_CMD_PKT,
  SMP_MSG_CMD_PAIRING_FAILED,
  SMP_MSG_DM_ENCRYPT_CMPL,
  SMP_MSG_DM_ENCRYPT_FAILED,
  SMP_MSG_DM_CONN_CLOSE,
  SMP_MSG_WSF_AES_CMPL,
  SMP_MSG_INT_SEND_NEXT_KEY,
  SMP_MSG_INT_MAX_ATTEMPTS,
  SMP_MSG_INT_PAIRING_CMPL,
  SMP_MSG_INT_RSP_TIMEOUT,
  SMP_MSG_INT_WI_TIMEOUT,
  SMP_MSG_INT_LESC,
  SMP_MSG_INT_LEGACY,
  SMP_MSG_INT_JW_NC,
  SMP_MSG_INT_PASSKEY,
  SMP_MSG_INT_OOB,
  SMP_MSG_API_USER_CONFIRM,
  SMP_MSG_API_USER_KEYPRESS,
  SMP_MSG_API_KEYPRESS_CMPL,
  SMP_MSG_WSF_ECC_CMPL,
  SMP_MSG_INT_PK_NEXT,
  SMP_MSG_INT_PK_CMPL,
  SMP_MSG_WSF_CMAC_CMPL,
  SMP_MSG_DH_CHECK_FAILURE,
  SMP_MSG_EARLY_CNF,
  SMP_NUM_MSGS
};




enum
{
  SMP_DB_SERVICE_IND = SMP_NUM_MSGS
};







typedef struct
{
  uint32_t attemptTimeout;
  uint8_t ioCap;
  uint8_t minKeyLen;
  uint8_t maxKeyLen;
  uint8_t maxAttempts;
  uint8_t auth;
  uint32_t maxAttemptTimeout;
  uint32_t attemptDecTimeout;
  uint16_t attemptExp;
} smpCfg_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t oob;
  uint8_t auth;
  uint8_t iKeyDist;
  uint8_t rKeyDist;
} smpDmPair_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t authData[16];
  uint8_t authDataLen;
} smpDmAuthRsp_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t keypress;
} smpDmKeypress_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t auth;
} smpDmSecurityReq_t;


typedef union
{
  wsfMsgHdr_t hdr;
  smpDmPair_t pair;
  smpDmAuthRsp_t authRsp;
  smpDmSecurityReq_t securityReq;
  smpDmKeypress_t keypress;
} smpDmMsg_t;
# 166 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
extern smpCfg_t *pSmpCfg;
# 190 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
void SmpiInit(void);
# 199 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
void SmprInit(void);
# 208 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
void SmpiScInit(void);
# 217 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
void SmprScInit(void);
# 226 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
void SmpNonInit(void);
# 244 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
void SmpDmMsgSend(smpDmMsg_t *pMsg);
# 255 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
void SmpDmEncryptInd(wsfMsgHdr_t *pMsg);
# 267 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
uint8_t *SmpDmGetStk(dmConnId_t connId, uint8_t *pSecLevel);
# 280 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
void SmpScGetCancelMsgWithReattempt(dmConnId_t connId, wsfMsgHdr_t *pHdr, uint8_t status);
# 289 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
void SmpDbInit(void);
# 300 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_api.h"
void SmpScEnableZeroDhKey(bool_t enable);
# 37 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_defs.h" 1
# 38 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_main.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_main.h"
#define SMP_MAIN_H 


# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_timer.h" 1
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_timer.h"
#define WSF_TIMER_H 
# 37 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_timer.h"
#define WSF_MS_PER_TICK 10







typedef uint32_t wsfTimerTicks_t;


typedef struct wsfTimer_tag
{
  struct wsfTimer_tag *pNext;
  wsfTimerTicks_t ticks;
  wsfMsgHdr_t msg;
  wsfHandlerId_t handlerId;
  bool_t isStarted;
} wsfTimer_t;
# 72 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_timer.h"
void WsfTimerInit(void);
# 88 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_timer.h"
void WsfTimerStartSec(wsfTimer_t *pTimer, wsfTimerTicks_t sec);
# 102 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_timer.h"
void WsfTimerStartMs(wsfTimer_t *pTimer, wsfTimerTicks_t ms);
# 115 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_timer.h"
void WsfTimerStop(wsfTimer_t *pTimer);
# 129 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_timer.h"
void WsfTimerUpdate(wsfTimerTicks_t ticks);
# 144 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_timer.h"
wsfTimerTicks_t WsfTimerNextExpiration(bool_t *pTimerRunning);
# 158 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/wsf/include/wsf_timer.h"
wsfTimer_t *WsfTimerServiceExpired(wsfTaskId_t taskId);


void WsfTimerUpdateTicks(void);
# 29 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_main.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
#define L2C_API_H 


# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_defs.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_defs.h"
#define L2C_DEFS_H 
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_defs.h"
#define L2C_HDR_LEN 4
#define L2C_MIN_MTU 23
#define L2C_SIG_HDR_LEN 4
#define L2C_LE_SDU_HDR_LEN 2



#define L2C_PAYLOAD_START (HCI_ACL_HDR_LEN + L2C_HDR_LEN)


#define L2C_SIG_PKT_BASE_LEN (HCI_ACL_HDR_LEN + L2C_HDR_LEN + L2C_SIG_HDR_LEN)


#define L2C_LE_SDU_PKT_BASE_LEN (HCI_ACL_HDR_LEN + L2C_HDR_LEN + L2C_LE_SDU_HDR_LEN)





#define L2C_SIG_CONN_UPDATE_REQ_LEN 8
#define L2C_SIG_CONN_UPDATE_RSP_LEN 2
#define L2C_SIG_CMD_REJ_LEN 2
#define L2C_SIG_DISCONN_REQ_LEN 4
#define L2C_SIG_DISCONN_RSP_LEN 4
#define L2C_SIG_LE_CONN_REQ_LEN 10
#define L2C_SIG_LE_CONN_RSP_LEN 10
#define L2C_SIG_FLOW_CTRL_CREDIT_LEN 4






#define L2C_CID_ATT 0x0004
#define L2C_CID_LE_SIGNALING 0x0005
#define L2C_CID_SMP 0x0006






#define L2C_SIG_CMD_REJ 0x01
#define L2C_SIG_DISCONNECT_REQ 0x06
#define L2C_SIG_DISCONNECT_RSP 0x07
#define L2C_SIG_CONN_UPDATE_REQ 0x12
#define L2C_SIG_CONN_UPDATE_RSP 0x13
#define L2C_SIG_LE_CONNECT_REQ 0x14
#define L2C_SIG_LE_CONNECT_RSP 0x15
#define L2C_SIG_FLOW_CTRL_CREDIT 0x16



#define L2C_SIG_RSP_FLAG 0x01





#define L2C_REJ_NOT_UNDERSTOOD 0x0000
#define L2C_REJ_MTU_EXCEEDED 0x0001
#define L2C_REJ_INVALID_CID 0x0002






#define L2C_CONN_PARAM_ACCEPTED 0x0000
#define L2C_CONN_PARAM_REJECTED 0x0001






#define L2C_CONN_SUCCESS 0x0000
#define L2C_CONN_NONE 0x0001
#define L2C_CONN_FAIL_PSM 0x0002
#define L2C_CONN_FAIL_RES 0x0004
#define L2C_CONN_FAIL_AUTH 0x0005
#define L2C_CONN_FAIL_AUTHORIZ 0x0006
#define L2C_CONN_FAIL_KEY_SIZE 0x0007
#define L2C_CONN_FAIL_ENC 0x0008
#define L2C_CONN_FAIL_INVALID_SCID 0x0009
#define L2C_CONN_FAIL_ALLOCATED_SCID 0x000A
#define L2C_CONN_FAIL_UNACCEPT_PARAM 0x000B






#define L2C_CONN_FAIL_TIMEOUT 0xF000






#define L2C_PSM_MIN 0x0001
#define L2C_PSM_MAX 0x00FF
#define L2C_CID_DYN_MIN 0x0040
#define L2C_CID_DYN_MAX 0x007F
#define L2C_MTU_MIN 0x0017
#define L2C_MPS_MIN 0x0017
#define L2C_MPS_MAX 0xFFFD
#define L2C_CREDITS_MAX 0xFFFF
# 29 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h" 2
# 45 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
#define L2C_CTRL_FLOW_ENABLE_IND 0
#define L2C_CTRL_FLOW_DISABLE_IND 1



#define L2C_COC_REG_ID_NONE 0


#define L2C_COC_CID_NONE 0


#define L2C_SIGNAL_ID_INVALID 0





#define L2C_COC_ROLE_NONE 0x00
#define L2C_COC_ROLE_INITIATOR 0x01
#define L2C_COC_ROLE_ACCEPTOR 0x02






#define L2C_COC_DATA_SUCCESS 0
#define L2C_COC_DATA_ERR_MEMORY 1
#define L2C_COC_DATA_ERR_OVERFLOW 2






#define L2C_COC_CBACK_START 0x70

enum
{
  L2C_COC_CONNECT_IND = 0x70,
  L2C_COC_DISCONNECT_IND,
  L2C_COC_DATA_IND,
  L2C_COC_DATA_CNF
};

#define L2C_COC_CBACK_CBACK_END L2C_COC_DATA_CNF







typedef uint16_t l2cCocRegId_t;


typedef struct
{
  uint16_t psm;
  uint16_t mps;
  uint16_t mtu;
  uint16_t credits;
  bool_t authoriz;
  uint8_t secLevel;
  uint8_t role;
} l2cCocReg_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t cid;
  uint16_t peerMtu;
  uint16_t psm;
} l2cCocConnectInd_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t cid;
  uint16_t result;
} l2cCocDisconnectInd_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t cid;
  uint8_t *pData;
  uint16_t dataLen;
} l2cCocDataInd_t;


typedef struct
{
  wsfMsgHdr_t hdr;
  uint16_t cid;
} l2cCocDataCnf_t;
# 154 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
typedef union
{
  wsfMsgHdr_t hdr;
  l2cCocConnectInd_t connectInd;
  l2cCocDisconnectInd_t disconnectInd;
  l2cCocDataInd_t dataInd;
  l2cCocDataCnf_t dataCnf;
} l2cCocEvt_t;


typedef struct
{
  uint16_t reqTimeout;
} l2cCfg_t;
# 184 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
extern l2cCfg_t *pL2cCfg;
# 207 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
typedef void (*l2cDataCback_t)(uint16_t handle, uint16_t len, uint8_t *pPacket);
# 218 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
typedef void (*l2cCtrlCback_t)(wsfMsgHdr_t *pMsg);
# 230 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
typedef void (*l2cCocCback_t)(l2cCocEvt_t *pMsg);
# 243 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
typedef uint16_t (*l2cCocAuthorCback_t)(dmConnId_t connId, l2cCocRegId_t regId, uint16_t psm);
# 261 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cInit(void);
# 270 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cMasterInit(void);
# 279 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cSlaveInit(void);
# 299 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cRegister(uint16_t cid, l2cDataCback_t dataCback, l2cCtrlCback_t ctrlCback);
# 314 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cDataReq(uint16_t cid, uint16_t handle, uint16_t len, uint8_t *pL2cPacket);
# 328 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cDmSigReq(uint16_t handle, uint8_t code, uint16_t len, uint8_t *pParam);
# 344 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cCocInit(void);
# 359 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
l2cCocRegId_t L2cCocRegister(l2cCocCback_t cback, l2cCocReg_t *pReg);
# 372 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cCocDeregister(l2cCocRegId_t regId);
# 385 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
uint16_t L2cCocConnectReq(dmConnId_t connId, l2cCocRegId_t regId, uint16_t psm);
# 396 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cCocDisconnectReq(uint16_t cid);
# 409 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cCocDataReq(uint16_t cid, uint16_t len, uint8_t *pPayload);
# 420 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cCocErrorTest(uint16_t result);
# 432 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cCocCreditSendTest(uint16_t cid, uint16_t credits);
# 452 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cDmConnUpdateReq(uint16_t handle, hciConnSpec_t *pConnSpec);
# 466 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/l2c_api.h"
void L2cDmConnUpdateRsp(uint8_t identifier, uint16_t handle, uint16_t result);
# 30 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_main.h" 2
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_main.h"
#define SMP_SM_POS_EVENT 0
#define SMP_SM_POS_NEXT_STATE 1
#define SMP_SM_POS_ACTION 2
#define SMP_SM_NUM_COLS 3
#define SMP_STATE_TBL_COMMON_MAX 5


#define SMP_IO_POS 1
#define SMP_OOB_POS 2
#define SMP_AUTHREQ_POS 3
#define SMP_MAXKEY_POS 4
#define SMP_IKEYDIST_POS 5
#define SMP_RKEYDIST_POS 6


#define SMP_PUB_KEY_X_POS 1
#define SMP_PUB_KEY_Y_POS 33


#define SMP_AUTH_TYPE_UNKNOWN 0
#define SMP_AUTH_TYPE_JUST_WORKS 1
#define SMP_AUTH_TYPE_OOB 2
#define SMP_AUTH_TYPE_PASSKEY 3
#define SMP_AUTH_TYPE_NUM_COMP 4


enum
{
  SMPI_SM_ST_IDLE,
  SMPI_SM_ST_PAIR_RSP,
  SMPI_SM_ST_PIN,
  SMPI_SM_ST_CNF_CALC_1,
  SMPI_SM_ST_CNF_CALC_2,
  SMPI_SM_ST_PAIR_CNF,
  SMPI_SM_ST_PAIR_RAND,
  SMPI_SM_ST_CNF_VER_CALC_1,
  SMPI_SM_ST_CNF_VER_CALC_2,
  SMPI_SM_ST_STK_CALC,
  SMPI_SM_ST_ENCRYPT,
  SMPI_SM_ST_KEY_DIST,
  SMPI_SM_ST_ATTEMPTS,
  SMPI_SM_ST_RSP_TO
};


enum
{
  SMPR_SM_ST_IDLE,
  SMPR_SM_ST_API_PAIR_REQ,
  SMPR_SM_ST_API_PAIR_RSP,
  SMPR_SM_ST_PIN_PAIR_1,
  SMPR_SM_ST_PIN_PAIR_2,
  SMPR_SM_ST_CNF_CALC_1,
  SMPR_SM_ST_CNF_CALC_2,
  SMPR_SM_ST_PAIR_RAND,
  SMPR_SM_ST_CNF_VER_CALC_1,
  SMPR_SM_ST_CNF_VER_CALC_2,
  SMPR_SM_ST_STK_CALC,
  SMPR_SM_ST_ENCRYPT,
  SMPR_SM_ST_KEY_DIST,
  SMPR_SM_ST_ATTEMPTS,
  SMPR_SM_ST_RSP_TO
};


enum
{
  SMPI_SC_SM_ST_IDLE,
  SMPI_SC_SM_ST_PAIR_RSP,
  SMPI_SC_SM_ST_MODE_SELECT,
  SMPI_SC_SM_ST_LESC_PIN,
  SMPI_SC_SM_ST_PUB_KEY,
  SMPI_SC_SM_ST_AUTH_SELECT,

  SMPI_SC_SM_ST_JWNC_WAIT_CNF,
  SMPI_SC_SM_ST_JWNC_RAND,
  SMPI_SC_SM_ST_JWNC_CHECK_1,
  SMPI_SC_SM_ST_JWNC_CHECK_2,
  SMPI_SC_SM_ST_JWNC_WAIT_USER,

  SMPI_SC_SM_ST_PK_KEYPRESS,
  SMPI_SC_SM_ST_PK_CALC,
  SMPI_SC_SM_ST_PK_CNF,
  SMPI_SC_SM_ST_PK_RAND,
  SMPI_SC_SM_ST_PK_CHECK,
  SMPI_SC_SM_ST_PK_REPEAT,

  SMPI_SC_SM_ST_OOB_SEND_RAND,
  SMPI_SC_SM_ST_OOB_WAIT_RAND,

  SMPI_SC_SM_ST_CALC_DHKEY,
  SMPI_SC_SM_ST_CALC_F5_TKEY,
  SMPI_SC_SM_ST_CALC_F5_MACKEY,
  SMPI_SC_SM_ST_CALC_F5_LTK,
  SMPI_SC_SM_ST_CALC_F6_EA,
  SMPI_SC_SM_ST_CALC_F6_EB,
  SMPI_SC_SM_ST_VERIFY_DH_CHECK,

  SMPI_SC_SM_ST_LEGACY_PIN,
  SMPI_SC_SM_ST_CNF_CALC_1,
  SMPI_SC_SM_ST_CNF_CALC_2,
  SMPI_SC_SM_ST_PAIR_CNF,
  SMPI_SC_SM_ST_PAIR_RAND,
  SMPI_SC_SM_ST_CNF_VER_CALC_1,
  SMPI_SC_SM_ST_CNF_VER_CALC_2,
  SMPI_SC_SM_ST_STK_CALC,
  SMPI_SC_SM_ST_ENCRYPT,
  SMPI_SC_SM_ST_KEY_DIST,
  SMPI_SC_SM_ST_ATTEMPTS,
  SMPI_SC_SM_ST_RSP_TO
};


enum
{
  SMPR_SC_SM_ST_IDLE,
  SMPR_SC_SM_ST_API_PAIR_REQ,
  SMPR_SC_SM_ST_API_PAIR_RSP,
  SMPR_SC_SM_ST_MODE_SELECT,
  SMPR_SC_SM_ST_PUB_KEY,
  SMPR_SC_SM_ST_LESC_PIN,
  SMPR_SC_SM_ST_AUTH_SELECT,

  SMPR_SC_SM_ST_JWNC_SETUP,
  SMPR_SC_SM_ST_JWNC_WAIT_RAND,
  SMPR_SC_SM_ST_JWNC_CALC_G2,
  SMPR_SC_SM_ST_JWNC_WAIT_USER,
  SMPR_SC_SM_ST_JWNC_WAIT_USER_DH_CHECK_RCVD,

  SMPR_SC_SM_ST_PK_KEYPRESS,
  SMPR_SC_SM_ST_PK_WAIT_AUTH,
  SMPR_SC_SM_ST_PK_WAIT_CNF,
  SMPR_SC_SM_ST_PK_CALC,
  SMPR_SC_SM_ST_PK_RAND,
  SMPR_SC_SM_ST_PK_CHECK,
  SMPR_SC_SM_ST_PK_REPEAT,

  SMPR_SC_SM_ST_OOB_SEND_RAND,
  SMPR_SC_SM_ST_OOB_WAIT_RAND,

  SMPR_SC_SM_ST_WAIT_DH_CHECK,
  SMPR_SC_SM_ST_CALC_DHKEY,
  SMPR_SC_SM_ST_CALC_F5_TKEY,
  SMPR_SC_SM_ST_CALC_F5_MACKEY,
  SMPR_SC_SM_ST_CALC_F5_LTK,
  SMPR_SC_SM_ST_CALC_F6_EA,
  SMPR_SC_SM_ST_CALC_F6_EB,

  SMPR_SC_SM_ST_PIN_PAIR_1,
  SMPR_SC_SM_ST_PIN_PAIR_2,
  SMPR_SC_SM_ST_CNF_CALC_1,
  SMPR_SC_SM_ST_CNF_CALC_2,
  SMPR_SC_SM_ST_PAIR_RAND,
  SMPR_SC_SM_ST_CNF_VER_CALC_1,
  SMPR_SC_SM_ST_CNF_VER_CALC_2,
  SMPR_SC_SM_ST_STK_CALC,
  SMPR_SC_SM_ST_ENCRYPT,
  SMPR_SC_SM_ST_KEY_DIST,
  SMPR_SC_SM_ST_ATTEMPTS,
  SMPR_SC_SM_ST_RSP_TO
};






typedef uint8_t smpTblEntry_t[3];


typedef uint8_t smpPair_t[7];
# 225 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_main.h"
typedef union
{
  struct
  {
    uint8_t b1[16];
    uint8_t b2[16];
    uint8_t b3[16];
    uint8_t b4[16];
  } buf;
  dmSecKeyIndEvt_t keyInd;
} smpScratch_t;


typedef void (*smpMsgHandler_t)(wsfMsgHdr_t *pMsg);


typedef void (*smpConnCback_t)(dmEvt_t *pDmEvt);


typedef struct
{
  wsfMsgHdr_t hdr;
  uint8_t *pPacket;
} smpDataMsg_t;


typedef union
{
  wsfMsgHdr_t hdr;
  smpDmMsg_t dm;
  secAes_t aes;
  smpDataMsg_t data;
} smpMsg_t;


typedef struct
{
  uint8_t mac[16];
  uint8_t ltk_t[16];
} smpScLtk_t;


typedef struct
{
  uint8_t pubKeyX[32];
  uint8_t pubKeyY[32];
} smpScPubKey_t;


typedef struct
{
  uint8_t Na_Ea[16];
  uint8_t Nb_Eb[16];
  uint8_t Ra[16];
  uint8_t Rb[16];
  uint8_t PeerCb[16];
  uint8_t PeerCa_Ea[16];
} smpScScratch_t;


typedef struct
{
  uint8_t lescEnabled;
  uint8_t authType;
  uint8_t kpNotify;
  uint8_t pkPos;
  bool_t display;
  smpScPubKey_t *pPeerPublicKey;
  smpScPubKey_t *pLocalPublicKey;
  uint8_t *pPrivateKey;
  smpScScratch_t *pScratch;
  smpScLtk_t *pLtk;
} smpScCcb_t;


typedef struct
{
  wsfTimer_t rspTimer;
  wsfTimer_t waitTimer;
  smpPair_t pairReq;
  smpPair_t pairRsp;
  smpScratch_t *pScr;
  uint8_t *pQueued;
  uint16_t handle;
  bool_t initiator;
  bool_t secReq;
  bool_t flowDisabled;
  dmConnId_t connId;
  uint8_t state;
  uint8_t nextCmdCode;
  uint8_t auth;
  uint8_t token;
  uint8_t attempts;
  uint8_t lastSentKey;
  smpScCcb_t *pScCcb;
} smpCcb_t;


typedef void (*smpAct_t)(smpCcb_t *pCcb, smpMsg_t *pMsg);


typedef bool_t smpProcPairing_t(smpCcb_t *pCcb, uint8_t *pOob, uint8_t *pDisplay);


typedef void smpProcAuthReq_t(smpCcb_t *pCcb, uint8_t oob, uint8_t display);


typedef struct
{
  smpTblEntry_t const * const *pStateTbl;
  smpAct_t const *pActionTbl;
  smpTblEntry_t const *pCommonTbl;
} smpSmIf_t;


typedef struct
{
  smpCcb_t ccb[3];
  smpSmIf_t const *pSlave;
  smpSmIf_t const *pMaster;
  wsfHandlerId_t handlerId;
  smpProcPairing_t *procPairing;
  smpProcAuthReq_t *procAuthReq;
  bool_t lescSupported;
} smpCb_t;






extern const uint8_t smpPktLenTbl[];


extern smpCb_t smpCb;






smpCcb_t *smpCcbByHandle(uint16_t handle);
smpCcb_t *smpCcbByConnId(dmConnId_t connId);
void smpCalcC1Part1(smpCcb_t *pCcb, uint8_t *pKey, uint8_t *pRand);
void smpCalcC1Part2(smpCcb_t *pCcb, uint8_t *pKey, uint8_t *pPart1);
void smpCalcS1(smpCcb_t *pCcb, uint8_t *pKey, uint8_t *pRand1, uint8_t *pRand2);
void smpGenerateLtk(smpCcb_t *pCcb);
void smpSendPkt(smpCcb_t *pCcb, uint8_t *pPkt);
bool_t smpStateIdle(smpCcb_t *pCcb);
void *smpMsgAlloc(uint16_t len);
uint8_t smpGetScSecLevel(smpCcb_t *pCcb);


void smpStartRspTimer(smpCcb_t *pCcb);
void smpActNone(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpCleanup(smpCcb_t *pCcb);
void smpActCleanup(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpSendPairingFailed(smpCcb_t *pCcb, uint8_t reason);
void smpActPairingFailed(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpActPairingCancel(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpActStorePin(smpCcb_t *pCcb, smpMsg_t *pMsg);
bool_t smpProcPairing(smpCcb_t *pCcb, uint8_t *pOob, uint8_t *pDisplay);
void smpAuthReq(smpCcb_t *pCcb, uint8_t oob, uint8_t display);
void smpActPairCnfCalc1(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpActPairCnfCalc2(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpActSendPairCnf(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpActPairCnfVerCalc1(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpActPairCnfVerCalc2(smpCcb_t *pCcb, smpMsg_t *pMsg);
bool_t smpSendKey(smpCcb_t *pCcb, uint8_t keyDist);
bool_t smpProcRcvKey(smpCcb_t *pCcb, dmSecKeyIndEvt_t *pKeyInd, uint8_t *pBuf, uint8_t keyDist);
void smpActMaxAttempts(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpActAttemptRcvd(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpActCheckAttempts(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpActNotifyDmAttemptsFailure(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpActNotifyDmRspToFailure(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpActPairingCmpl(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpSmExecute(smpCcb_t *pCcb, smpMsg_t *pMsg);


uint8_t *smpEventStr(uint8_t eventId);
uint8_t *smpStateStr(uint8_t state);


uint32_t SmpDbMaxAttemptReached(dmConnId_t connId);
void SmpDbPairingFailed(dmConnId_t connId);
uint32_t SmpDbGetPairingDisabledTime(dmConnId_t connId);
void SmpDbService(void);
uint8_t SmpDbGetFailureCount(dmConnId_t connId);
void SmpDbSetFailureCount(dmConnId_t connId, uint8_t count);
# 39 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.h"
#define SMP_SC_MAIN_H 
# 44 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.h"
#define SMP_TRACE_128(msg,ptr) 
#define SMP_TRACE_256(msg,ptr) 







#define SMP_PK_BIT_COUNT 20






void smpScActCleanup(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActPairingFailed(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActPairingCancel(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActAuthSelect(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActPkSetup(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActJwncCalcF4(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActJwncCalcG2(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActJwncDisplay(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActPkKeypress(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActPkSendKeypress(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActCalcSharedSecret(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActCalcF5TKey(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActCalcF5MacKey(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActCalcF5Ltk(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActDHKeyCalcF6Ea(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScActDHKeyCalcF6Eb(smpCcb_t *pCcb, smpMsg_t *pMsg);


void smpiScActSendPubKey(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActAuthSelect(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActJwncSetup(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActJwncSendRand(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActJwncCalcF4(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActJwncCalcG2(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActPkCalcCa(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActPkCalcCb(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActPkSendCnf(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActPkSendRand(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActPkCheck(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActOobCalcCb(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActOobSendRand(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActOobProcRand(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActDHKeyCheckSend(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpiScActDHKeyCheckVerify(smpCcb_t *pCcb, smpMsg_t *pMsg);


void smprScActStoreLescPin(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActSendPubKey(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActJwncSetup(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActJwncCalcG2(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActJwncDisplay(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActJwncSendCnf(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActPkStoreCnf(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActPkStoreCnfAndCalcCb(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActPkStorePinAndCalcCb(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActPkCalcCb(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActPkSendCnf(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActPkCalcCa(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActPkSendRand(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActOobSetup(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActOobCalcCa(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActOobSendRand(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActStoreDhCheck(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActWaitDhCheck(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActDHKeyCheckSend(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smprScActCalcDHKey(smpCcb_t *pCcb, smpMsg_t *pMsg);


bool_t SmpScAllocScratchBuffers(smpCcb_t *pCcb);
void SmpScFreeScratchBuffers(smpCcb_t *pCcb);
bool_t smpScProcPairing(smpCcb_t *pCcb, uint8_t *pOob, uint8_t *pDisplay);
void SmpReverseCpy(uint8_t *pBuf1, uint8_t *pBuf2, uint8_t len);
void SmpScCmac(const uint8_t *pKey, uint8_t *pText, uint8_t textLen, smpCcb_t *pCcb, smpMsg_t *pMsg);
uint8_t *SmpScAlloc(uint8_t size, smpCcb_t *pCcb, smpMsg_t *pMsg);
void SmpScFree(uint8_t *pBuf);
void SmpScCalcF4(smpCcb_t *pCcb, smpMsg_t *pMsg, uint8_t *pU, uint8_t *pV, uint8_t z, uint8_t *pX);
uint8_t *SmpScCat(uint8_t *pDst, const uint8_t *pSrc, uint8_t len);
uint8_t *SmpScCat128(uint8_t *pDst, uint8_t *pSrc);
uint8_t smpGetPkBit(smpCcb_t *pCcb);
smpScPubKey_t *smpGetPeerPublicKey(dmConnId_t connId);
void smpSetPeerPublicKey(dmConnId_t connId, smpScPubKey_t *pKey);
void SmpScSetOobCfg(dmConnId_t connId, dmSecLescOobCfg_t *pConfig);
void smpScAuthReq(smpCcb_t *pCcb, uint8_t oob, uint8_t display);
void smpScFailWithReattempt(smpCcb_t *pCcb);
void SmpScInit(void);


void smpScSendPubKey(smpCcb_t *pCcb, smpMsg_t *pMsg);
void smpScSendDHKeyCheck(smpCcb_t *pCcb, smpMsg_t *pMsg, uint8_t *pCheck);
void smpScSendRand(smpCcb_t *pCcb, smpMsg_t *pMsg, uint8_t *pRand);
void smpScSendPairCnf(smpCcb_t *pCcb, smpMsg_t *pMsg, uint8_t *pCnf);


void smpLogByteArray(char *str, uint8_t *pArray, uint8_t len);
uint8_t *smpiStateStr(uint8_t state);
uint8_t *smprStateStr(uint8_t state);
# 40 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_handler.h" 1
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_handler.h"
#define SMP_HANDLER_H 
# 54 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_handler.h"
void SmpHandlerInit(wsfHandlerId_t handlerId);
# 67 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/include/smp_handler.h"
void SmpHandler(wsfEventMask_t event, wsfMsgHdr_t *pMsg);
# 41 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 2






smpScCcb_t SMP_ScCcb[3];
# 58 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
bool_t SmpScAllocScratchBuffers(smpCcb_t *pCcb)
{
  if (pCcb->pScCcb->pScratch == 
# 60 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                               ((void *)0)
# 60 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                   )
  {
    pCcb->pScCcb->pScratch = WsfBufAlloc(sizeof(smpScScratch_t));
  }

  if (pCcb->pScCcb->pPeerPublicKey == 
# 65 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                     ((void *)0)
# 65 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                         )
  {
    pCcb->pScCcb->pPeerPublicKey = WsfBufAlloc(sizeof(smpScPubKey_t));
  }

  if (pCcb->pScCcb->pLtk == 
# 70 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                           ((void *)0)
# 70 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                               )
  {
    pCcb->pScCcb->pLtk = WsfBufAlloc(sizeof(smpScLtk_t));
  }

  if (pCcb->pScCcb->pLocalPublicKey == 
# 75 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                      ((void *)0)
# 75 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                          )
  {
    pCcb->pScCcb->pLocalPublicKey = WsfBufAlloc(sizeof(smpScPubKey_t));
  }

  if (pCcb->pScCcb->pPrivateKey == 
# 80 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                  ((void *)0)
# 80 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                      )
  {
    pCcb->pScCcb->pPrivateKey = WsfBufAlloc(32);
  }

  if (pCcb->pScCcb->pScratch && pCcb->pScCcb->pPeerPublicKey && pCcb->pScCcb->pLtk &&
      pCcb->pScCcb->pLocalPublicKey && pCcb->pScCcb->pPrivateKey)
  {
    return 1;
  }

  return 0;
}
# 103 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void SmpScFreeScratchBuffers(smpCcb_t *pCcb)
{

  if (pCcb->pScCcb->pScratch != 
# 106 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                               ((void *)0)
# 106 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                   )
  {
    WsfBufFree(pCcb->pScCcb->pScratch);
    pCcb->pScCcb->pScratch = 
# 109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                            ((void *)0)
# 109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                ;
  }


  if (pCcb->pScCcb->pPeerPublicKey != 
# 113 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                     ((void *)0)
# 113 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                         )
  {
    WsfBufFree(pCcb->pScCcb->pPeerPublicKey);
    pCcb->pScCcb->pPeerPublicKey = 
# 116 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                  ((void *)0)
# 116 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                      ;
  }


  if (pCcb->pScCcb->pLtk != 
# 120 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                           ((void *)0)
# 120 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                               )
  {
    WsfBufFree(pCcb->pScCcb->pLtk);
    pCcb->pScCcb->pLtk = 
# 123 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                        ((void *)0)
# 123 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                            ;
  }


  if (pCcb->pScCcb->pLocalPublicKey != 
# 127 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                      ((void *)0)
# 127 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                          )
  {
    WsfBufFree(pCcb->pScCcb->pLocalPublicKey);
    pCcb->pScCcb->pLocalPublicKey = 
# 130 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                   ((void *)0)
# 130 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                       ;
  }


  if (pCcb->pScCcb->pPrivateKey != 
# 134 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                  ((void *)0)
# 134 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                      )
  {
    WsfBufFree(pCcb->pScCcb->pPrivateKey);
    pCcb->pScCcb->pPrivateKey = 
# 137 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                               ((void *)0)
# 137 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                   ;
  }
}
# 154 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void SmpScCmac(const uint8_t *pKey, uint8_t *pText, uint8_t textLen, smpCcb_t *pCcb, smpMsg_t *pMsg)
{
  if (SecCmac(pKey, pText, textLen, smpCb.handlerId, pCcb->connId, SMP_MSG_WSF_CMAC_CMPL) == 0)
  {
    WsfBufFree(pText);
    pMsg->hdr.status = 0x08;
    pMsg->hdr.event = SMP_MSG_API_CANCEL_REQ;
    smpSmExecute(pCcb, pMsg);
  }
}
# 176 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
uint8_t *SmpScAlloc(uint8_t size, smpCcb_t *pCcb, smpMsg_t *pMsg)
{
  uint8_t *pBuf = WsfBufAlloc(size);

  if (pBuf == 
# 180 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
             ((void *)0)
# 180 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                 )
  {
    pMsg->hdr.status = 0x08;
    pMsg->hdr.event = SMP_MSG_API_CANCEL_REQ;
    smpSmExecute(pCcb, pMsg);
  }

  return pBuf;
}
# 199 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void SmpScFree(uint8_t *pBuf)
{
  WsfBufFree(pBuf);
}
# 218 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void SmpScCalcF4(smpCcb_t *pCcb, smpMsg_t *pMsg, uint8_t *pU, uint8_t *pV, uint8_t z, uint8_t *pX)
{
  uint8_t *pCmacText;


  if ((pCmacText = SmpScAlloc((32 * 2 + 1), pCcb, pMsg)) != 
# 223 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                                               ((void *)0)
# 223 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                                                   )
  {
    uint8_t *pCatBuf = pCmacText;


    pCatBuf = SmpScCat(pCatBuf, pU, 32);
    pCatBuf = SmpScCat(pCatBuf, pV, 32);
    *pCatBuf = z;


    SmpScCmac(pX, pCmacText, (32 * 2 + 1), pCcb, pMsg);
  }
}
# 247 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void SmpScInit()
{
  uint8_t i;

  for (i=0; i<3; i++)
  {
    smpCb.ccb[i].pScCcb = &SMP_ScCcb[i];
  }

  smpCb.procPairing = smpScProcPairing;
  smpCb.procAuthReq = smpScAuthReq;
  smpCb.lescSupported = 1;
}
# 272 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
uint8_t *SmpScCat(uint8_t *pDst, const uint8_t *pSrc, uint8_t len)
{
  memcpy(pDst, pSrc, len);
  return pDst + len;
}
# 288 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
uint8_t *SmpScCat128(uint8_t *pDst, uint8_t *pSrc)
{
  Calc128Cpy(pDst, pSrc);
  return pDst + 16;
}
# 304 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void smpScSendPubKey(smpCcb_t *pCcb, smpMsg_t *pMsg)
{

  uint8_t *pPkt;
  uint8_t *p;


  DmConnSetIdle(pCcb->connId, 0x0001, 1);


  smpStartRspTimer(pCcb);


  if ((pPkt = smpMsgAlloc((1 + 2*32) + (4 + 4))) != 
# 317 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                                                      ((void *)0)
# 317 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                                                          )
  {

    p = pPkt + (4 + 4);
    {*(p)++ = (uint8_t)(0x0C);};


    WStrReverseCpy(p, pCcb->pScCcb->pLocalPublicKey->pubKeyX, 32);


    WStrReverseCpy(p+32, pCcb->pScCcb->pLocalPublicKey->pubKeyY, 32);


    smpSendPkt(pCcb, pPkt);
  }
  else
  {
    pMsg->hdr.status = 0x08;
    pMsg->hdr.event = SMP_MSG_API_CANCEL_REQ;
    smpSmExecute(pCcb, pMsg);
  }
}
# 351 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void smpScSendDHKeyCheck(smpCcb_t *pCcb, smpMsg_t *pMsg, uint8_t *pCheck)
{
  uint8_t *pPkt;
  uint8_t *p;


  DmConnSetIdle(pCcb->connId, 0x0001, 1);


  smpStartRspTimer(pCcb);


  if ((pPkt = smpMsgAlloc((1 + 16) + (4 + 4))) != 
# 363 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                                                          ((void *)0)
# 363 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                                                              )
  {

    p = pPkt + (4 + 4);
    {*(p)++ = (uint8_t)(0x0D);};


    WStrReverseCpy(p, pCheck, 16);


    smpSendPkt(pCcb, pPkt);
  }
  else
  {
    pMsg->hdr.status = 0x08;
    pMsg->hdr.event = SMP_MSG_API_CANCEL_REQ;
    smpSmExecute(pCcb, pMsg);
  }
}
# 394 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void smpScSendRand(smpCcb_t *pCcb, smpMsg_t *pMsg, uint8_t *pRand)
{

  uint8_t *pPkt;
  uint8_t *p;


  DmConnSetIdle(pCcb->connId, 0x0001, 1);


  smpStartRspTimer(pCcb);


  if ((pPkt = smpMsgAlloc(17 + (4 + 4))) != 
# 407 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                                                    ((void *)0)
# 407 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                                                        )
  {

    p = pPkt + (4 + 4);
    {*(p)++ = (uint8_t)(0x04);};


    WStrReverseCpy(p, pRand, 16);


    smpSendPkt(pCcb, pPkt);
  }
  else
  {
    pMsg->hdr.status = 0x08;
    pMsg->hdr.event = SMP_MSG_API_CANCEL_REQ;
    smpSmExecute(pCcb, pMsg);
  }
}
# 438 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void smpScSendPairCnf(smpCcb_t *pCcb, smpMsg_t *pMsg, uint8_t *pCnf)
{
  uint8_t *pPkt;
  uint8_t *p;


  DmConnSetIdle(pCcb->connId, 0x0001, 1);


  smpStartRspTimer(pCcb);


  if ((pPkt = smpMsgAlloc(17 + (4 + 4))) != 
# 450 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
                                                                   ((void *)0)
# 450 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
                                                                       )
  {

    p = pPkt + (4 + 4);
    {*(p)++ = (uint8_t)(0x03);};


    WStrReverseCpy(p, pCnf, 16);


    smpSendPkt(pCcb, pPkt);
  }
  else
  {
    pMsg->hdr.status = 0x08;
    pMsg->hdr.event = SMP_MSG_API_CANCEL_REQ;
    smpSmExecute(pCcb, pMsg);
  }
}
# 479 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
uint8_t smpGetPkBit(smpCcb_t *pCcb)
{
  smpScCcb_t *pScCb = pCcb->pScCcb;
  uint8_t indx = (16 - 1) - pScCb->pkPos / 8;
  uint8_t bit = pScCb->pkPos % 8;

  if (pScCb->pScratch->Ra[indx] & 1<<bit)
    return 0x81;

  return 0x80;
}
# 500 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
smpScPubKey_t *smpGetPeerPublicKey(dmConnId_t connId)
{
  smpCcb_t *pCcb = smpCcbByConnId(connId);

  if (pCcb->pScCcb)
  {
    return pCcb->pScCcb->pPeerPublicKey;
  }

  return 
# 509 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c" 3 4
        ((void *)0)
# 509 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
            ;
}
# 522 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void smpSetPeerPublicKey(dmConnId_t connId, smpScPubKey_t *pKey)
{
  smpCcb_t *pCcb = smpCcbByConnId(connId);

  if (pCcb->pScCcb)
  {
    memcpy(pCcb->pScCcb->pPeerPublicKey, pKey, sizeof(smpScPubKey_t));
  }
}
# 542 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void SmpScSetOobCfg(dmConnId_t connId, dmSecLescOobCfg_t *pConfig)
{
  smpCcb_t *pCcb = smpCcbByConnId(connId);

  ;

  ;
  ;
  ;
  ;

  if (pCcb->initiator)
  {
    Calc128Cpy(pCcb->pScCcb->pScratch->PeerCa_Ea, pConfig->localConfirm);
    Calc128Cpy(pCcb->pScCcb->pScratch->Ra, pConfig->localRandom);
    Calc128Cpy(pCcb->pScCcb->pScratch->PeerCb, pConfig->peerConfirm);
    Calc128Cpy(pCcb->pScCcb->pScratch->Rb, pConfig->peerRandom);
  }
  else
  {
    Calc128Cpy(pCcb->pScCcb->pScratch->PeerCb, pConfig->localConfirm);
    Calc128Cpy(pCcb->pScCcb->pScratch->Rb, pConfig->localRandom);
    Calc128Cpy(pCcb->pScCcb->pScratch->PeerCa_Ea, pConfig->peerConfirm);
    Calc128Cpy(pCcb->pScCcb->pScratch->Ra, pConfig->peerRandom);
  }
}
# 580 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void SmpScGetCancelMsgWithReattempt(dmConnId_t connId, wsfMsgHdr_t *pHdr, uint8_t status)
{
  smpCcb_t *pCcb = smpCcbByConnId(connId);

  ;


  pCcb->attempts++;

  pHdr->param = connId;
  pHdr->status = status;

  SmpDbPairingFailed(connId);

  if (pCcb->attempts == pSmpCfg->maxAttempts)
  {

    pHdr->event = SMP_MSG_INT_MAX_ATTEMPTS;
  }
  else
  {

    pHdr->event = SMP_MSG_API_CANCEL_REQ;
  }
}
# 615 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void smpScFailWithReattempt(smpCcb_t *pCcb)
{
  wsfMsgHdr_t hdr;

  SmpScGetCancelMsgWithReattempt(pCcb->connId, &hdr, 0x04);

  smpSmExecute(pCcb, (smpMsg_t *)&hdr);
}
# 633 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
uint8_t *smpEventStr(uint8_t eventId)
{
  switch(eventId)
  {
    case SMP_MSG_API_PAIR_REQ: return (uint8_t*) "API_PAIR_REQ";
    case SMP_MSG_API_PAIR_RSP: return (uint8_t*) "API_PAIR_RSP";
    case SMP_MSG_API_CANCEL_REQ: return (uint8_t*) "API_CANCEL_REQ";
    case SMP_MSG_API_AUTH_RSP: return (uint8_t*) "API_AUTH_RSP";
    case SMP_MSG_API_SECURITY_REQ: return (uint8_t*) "API_SECURITY_REQ";
    case SMP_MSG_CMD_PKT: return (uint8_t*) "CMD_PKT";
    case SMP_MSG_CMD_PAIRING_FAILED: return (uint8_t*) "CMD_PAIRING_FAILED";
    case SMP_MSG_DM_ENCRYPT_CMPL: return (uint8_t*) "DM_ENCRYPT_CMPL";
    case SMP_MSG_DM_ENCRYPT_FAILED: return (uint8_t*) "DM_ENCRYPT_FAILED";
    case SMP_MSG_DM_CONN_CLOSE: return (uint8_t*) "DM_CONN_CLOSE";
    case SMP_MSG_WSF_AES_CMPL: return (uint8_t*) "WSF_AES_CMPL";
    case SMP_MSG_INT_SEND_NEXT_KEY: return (uint8_t*) "INT_SEND_NEXT_KEY";
    case SMP_MSG_INT_MAX_ATTEMPTS: return (uint8_t*) "INT_MAX_ATTEMPTS";
    case SMP_MSG_INT_PAIRING_CMPL: return (uint8_t*) "INT_PAIRING_CMPL";
    case SMP_MSG_INT_RSP_TIMEOUT: return (uint8_t*) "INT_RSP_TIMEOUT";
    case SMP_MSG_INT_WI_TIMEOUT: return (uint8_t*) "INT_WI_TIMEOUT";
    case SMP_MSG_INT_LESC: return (uint8_t*) "INT_LESC";
    case SMP_MSG_INT_LEGACY: return (uint8_t*) "INT_LEGACY";
    case SMP_MSG_INT_JW_NC: return (uint8_t*) "INT_JW_NC";
    case SMP_MSG_INT_PASSKEY: return (uint8_t*) "INT_PASSKEY";
    case SMP_MSG_INT_OOB: return (uint8_t*) "INT_OOB";
    case SMP_MSG_API_USER_CONFIRM: return (uint8_t*) "API_USER_CONFIRM";
    case SMP_MSG_API_USER_KEYPRESS: return (uint8_t*) "API_USER_KEYPRESS";
    case SMP_MSG_API_KEYPRESS_CMPL: return (uint8_t*) "API_KEYPRESS_CMPL";
    case SMP_MSG_WSF_ECC_CMPL: return (uint8_t*) "WSF_ECC_CMPL";
    case SMP_MSG_INT_PK_NEXT: return (uint8_t*) "INT_PK_NEXT";
    case SMP_MSG_INT_PK_CMPL: return (uint8_t*) "INT_PK_CMPL";
    case SMP_MSG_WSF_CMAC_CMPL: return (uint8_t*) "WSF_CMAC_CMPL";
    case SMP_MSG_DH_CHECK_FAILURE: return (uint8_t*) "DH_CHECK_FAILURE";

    default: return (uint8_t*) "Unknown";
  }
}
# 680 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
uint8_t *smpStateStr(uint8_t state)
{
  uint8_t initiator = smpCb.ccb[0].initiator;

  if (initiator)
  {
    return smpiStateStr(state);
  }

  return smprStateStr(state);
}
# 703 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
void smpLogByteArray(char *str, uint8_t *pArray, uint8_t len)
{
# 757 "/home/jenkins/workspace/RUI_Release/rui-v3/external/AmbiqSuiteSDK/third_party/cordio/ble-host/sources/stack/smp/smp_sc_main.c"
}
