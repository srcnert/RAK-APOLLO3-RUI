# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
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
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
# 20 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
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
# 21 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 2

# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
#define __UTILITIES_H__ 






# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 1 3 4
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdint.h" 3 4
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 1 3 4
# 10 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 3 4
#define _STDINT_H 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 1 3 4





#define _MACHINE__DEFAULT_TYPES_H 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 1 3 4
# 22 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define _SYS_FEATURES_H 





# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_newlib_version.h" 1 3 4



#define _NEWLIB_VERSION_H__ 1

#define _NEWLIB_VERSION "3.3.0"
#define __NEWLIB__ 3
#define __NEWLIB_MINOR__ 3
#define __NEWLIB_PATCHLEVEL__ 0
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 2 3 4




#define __GNUC_PREREQ(maj,min) ((__GNUC__ << 16) + __GNUC_MINOR__ >= ((maj) << 16) + (min))






#define __GNUC_PREREQ__(ma,mi) __GNUC_PREREQ(ma, mi)
# 249 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __ATFILE_VISIBLE 0





#define __BSD_VISIBLE 0





#define __GNU_VISIBLE 0







#define __ISO_C_VISIBLE 1999







#define __LARGEFILE_VISIBLE 0





#define __MISC_VISIBLE 0
# 299 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __POSIX_VISIBLE 0





#define __SVID_VISIBLE 0
# 319 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __XSI_VISIBLE 0
# 330 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/features.h" 3 4
#define __SSP_FORTIFY_LEVEL 0
# 9 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 2 3 4






#define __EXP(x) __ ##x ##__
# 26 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
#define __have_longlong64 1






#define __have_long32 1







typedef signed char __int8_t;

typedef unsigned char __uint8_t;



#define ___int8_t_defined 1







typedef short int __int16_t;

typedef short unsigned int __uint16_t;



#define ___int16_t_defined 1
# 77 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int32_t;

typedef long unsigned int __uint32_t;



#define ___int32_t_defined 1
# 103 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;



#define ___int64_t_defined 1
# 134 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;



#define ___int_least8_t_defined 1
# 160 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;



#define ___int_least16_t_defined 1
# 182 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;



#define ___int_least32_t_defined 1
# 200 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;



#define ___int_least64_t_defined 1







typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 244 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/_default_types.h" 3 4
#undef __EXP
# 13 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/stdint.h" 2 3 4
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
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h" 2





#define SUCCESS 1



#define FAIL 0
# 52 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
#define MIN(a,b) ( ( ( a ) < ( b ) ) ? ( a ) : ( b ) )
# 63 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
#define MAX(a,b) ( ( ( a ) > ( b ) ) ? ( a ) : ( b ) )
# 72 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
#define POW2(n) ( 1 << n )





# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
typedef union Version_u
{
    struct Version_s
    {
        uint8_t Revision;
        uint8_t Patch;
        uint8_t Minor;
        uint8_t Major;
    }Fields;
    uint32_t Value;
}Version_t;






void srand1( uint32_t seed );
# 103 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
int32_t randr( int32_t min, int32_t max );
# 114 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
void memcpy1( uint8_t *dst, const uint8_t *src, uint16_t size );
# 123 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
void memcpyr( uint8_t *dst, const uint8_t *src, uint16_t size );
# 134 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
void memset1( uint8_t *dst, uint8_t value, uint16_t size );







int8_t Nibble2HexChar( uint8_t a );
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
uint32_t Crc32( uint8_t *buffer, uint16_t length );







uint32_t Crc32Init( void );
# 171 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
uint32_t Crc32Update( uint32_t crcInit, uint8_t *buffer, uint16_t length );
# 180 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
uint32_t Crc32Finalize( uint32_t crc );




#define CRITICAL_SECTION_BEGIN() uint32_t mask; BoardCriticalSectionBegin( &mask )




#define CRITICAL_SECTION_END() BoardCriticalSectionEnd( &mask )
# 203 "/home/jenkins/workspace/RUI_Release/rui-v3/component/core/board/rak11720/utilities.h"
void BoardCriticalSectionBegin( uint32_t *mask );






void BoardCriticalSectionEnd( uint32_t *mask );
# 23 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h" 1
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
#define __LORAMAC_COMMANDS_H__ 







# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 45 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 1
# 36 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define __LORAMAC_TYPES_H__ 







# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 1 3 4
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 3 4
#define _STDBOOL_H 



#define bool _Bool
#define true 1
#define false 0
# 52 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stdbool.h" 3 4
#define __bool_true_false_are_defined 1
# 45 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 1
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
#define __TIMER_H__ 






# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
# 32 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 2






typedef struct TimerEvent_s
{
    uint32_t Timestamp;
    uint32_t ReloadValue;
    
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
   _Bool 
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
        IsStarted;
    
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
   _Bool 
# 43 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
        IsNext2Expire;
    void ( *Callback )( void* context );
    void *Context;
    struct TimerEvent_s *Next;
}TimerEvent_t;





typedef uint32_t TimerTime_t;
#define TIMERTIME_T_MAX ( ( uint32_t )~0 )
# 66 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
void TimerInit( TimerEvent_t *obj, void ( *callback )( void *context ) );







void TimerSetContext( TimerEvent_t *obj, void* context );




void TimerIrqHandler( void );






void TimerStart( TimerEvent_t *obj );
# 96 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"

# 96 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h" 3 4
_Bool 
# 96 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
    TimerIsStarted( TimerEvent_t *obj );






void TimerStop( TimerEvent_t *obj );






void TimerReset( TimerEvent_t *obj );







void TimerSetValue( TimerEvent_t *obj, uint32_t value );






TimerTime_t TimerGetCurrentTime( void );
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
TimerTime_t TimerGetElapsedTime( TimerTime_t past );
# 146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/timer.h"
TimerTime_t TimerTempCompensation( TimerTime_t period, float temperature );




void TimerProcess( void );
# 46 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h" 1
# 26 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
#define __SYS_TIME_H__ 







# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 1 3







#define _TIME_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 1 3







#define _ANSIDECL_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 1 3







#define __NEWLIB_H__ 1
# 18 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/newlib.h" 3
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
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3
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
# 12 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 1 3
# 11 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 3
#define _SYS_REENT_H_ 

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/_ansi.h" 1 3
# 14 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/reent.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 1 3 4
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





# 350 "/opt/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/include/stddef.h" 3 4
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
# 13 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3

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
# 17 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/time.h" 1 3

#define _MACHTIME_H_ 




#define _CLOCKS_PER_SEC_ 100
# 20 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3





#define CLOCKS_PER_SEC _CLOCKS_PER_SEC_
#define CLK_TCK CLOCKS_PER_SEC

# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 1 3
# 28 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3
typedef __uint8_t u_int8_t;


typedef __uint16_t u_int16_t;


typedef __uint32_t u_int32_t;


typedef __uint64_t u_int64_t;

typedef __intptr_t register_t;
#define __BIT_TYPES_DEFINED__ 1



#define _SYS_TYPES_H 
# 97 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3
typedef __blkcnt_t blkcnt_t;
#define _BLKCNT_T_DECLARED 



typedef __blksize_t blksize_t;
#define _BLKSIZE_T_DECLARED 



typedef unsigned long clock_t;
#define __clock_t_defined 
#define _CLOCK_T_DECLARED 



typedef __int_least64_t time_t;
#define __time_t_defined 
#define _TIME_T_DECLARED 



typedef long daddr_t;
#define __daddr_t_defined 


typedef char * caddr_t;
#define __caddr_t_defined 



typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
#define _FSBLKCNT_T_DECLARED 



typedef __id_t id_t;
#define _ID_T_DECLARED 



typedef __ino_t ino_t;
#define _INO_T_DECLARED 
# 157 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 3
typedef __off_t off_t;
#define _OFF_T_DECLARED 


typedef __dev_t dev_t;
#define _DEV_T_DECLARED 


typedef __uid_t uid_t;
#define _UID_T_DECLARED 


typedef __gid_t gid_t;
#define _GID_T_DECLARED 



typedef __pid_t pid_t;
#define _PID_T_DECLARED 



typedef __key_t key_t;
#define _KEY_T_DECLARED 



typedef _ssize_t ssize_t;
#define _SSIZE_T_DECLARED 



typedef __mode_t mode_t;
#define _MODE_T_DECLARED 



typedef __nlink_t nlink_t;
#define _NLINK_T_DECLARED 



typedef __clockid_t clockid_t;
#define __clockid_t_defined 
#define _CLOCKID_T_DECLARED 



typedef __timer_t timer_t;
#define __timer_t_defined 
#define _TIMER_T_DECLARED 



typedef __useconds_t useconds_t;
#define _USECONDS_T_DECLARED 



typedef __suseconds_t suseconds_t;
#define _SUSECONDS_T_DECLARED 


typedef __int64_t sbintime_t;


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_pthreadtypes.h" 1 3
# 19 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_pthreadtypes.h" 3
#define _SYS__PTHREADTYPES_H_ 
# 224 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/types.h" 1 3
# 225 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/types.h" 2 3



#undef __need_inttypes
# 29 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3
# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/timespec.h" 1 3
# 35 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/timespec.h" 3
#define _SYS_TIMESPEC_H_ 


# 1 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_timespec.h" 1 3
# 37 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_timespec.h" 3
#define _SYS__TIMESPEC_H_ 
# 47 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_timespec.h" 3
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 39 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/timespec.h" 2 3
# 58 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/timespec.h" 3
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
# 30 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 2 3







struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;






};

clock_t clock (void);
double difftime (time_t _time2, time_t _time1);
time_t mktime (struct tm *_timeptr);
time_t time (time_t *_timer);

char *asctime (const struct tm *_tblock);
char *ctime (const time_t *_time);
struct tm *gmtime (const time_t *_timer);
struct tm *localtime (const time_t *_timer);

size_t strftime (char *restrict _s,
        size_t _maxsize, const char *restrict _fmt,
        const struct tm *restrict _t);







char *asctime_r (const struct tm *restrict,
     char *restrict);
char *ctime_r (const time_t *, char *);
struct tm *gmtime_r (const time_t *restrict,
     struct tm *restrict);
struct tm *localtime_r (const time_t *restrict,
     struct tm *restrict);


# 103 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 3
void _tzset_r (struct _reent *);

typedef struct __tzrule_struct
{
  char ch;
  int m;
  int n;
  int d;
  int s;
  time_t change;
  long offset;
} __tzrule_type;

typedef struct __tzinfo_struct
{
  int __tznorth;
  int __tzyear;
  __tzrule_type __tzrule[2];
} __tzinfo_type;

__tzinfo_type *__gettzinfo (void);
# 240 "/opt/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/time.h" 3
#define CLOCK_ENABLED 1
#define CLOCK_DISABLED 0



#define CLOCK_ALLOWED 1


#define CLOCK_DISALLOWED 0






#define TIMER_ABSTIME 4







#define CLOCK_REALTIME ((clockid_t) 1)
# 35 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h" 2




#define TM_DAYS_IN_LEAP_YEAR ( ( uint32_t ) 366U )
#define TM_DAYS_IN_YEAR ( ( uint32_t ) 365U )
#define TM_SECONDS_IN_1DAY ( ( uint32_t )86400U )
#define TM_SECONDS_IN_1HOUR ( ( uint32_t ) 3600U )
#define TM_SECONDS_IN_1MINUTE ( ( uint32_t ) 60U )
#define TM_MINUTES_IN_1HOUR ( ( uint32_t ) 60U )
#define TM_HOURS_IN_1DAY ( ( uint32_t ) 24U )





#define TM_MONTH_JANUARY ( ( uint8_t ) 0U )
#define TM_MONTH_FEBRUARY ( ( uint8_t ) 1U )
#define TM_MONTH_MARCH ( ( uint8_t ) 2U )
#define TM_MONTH_APRIL ( ( uint8_t ) 3U )
#define TM_MONTH_MAY ( ( uint8_t ) 4U )
#define TM_MONTH_JUNE ( ( uint8_t ) 5U )
#define TM_MONTH_JULY ( ( uint8_t ) 6U )
#define TM_MONTH_AUGUST ( ( uint8_t ) 7U )
#define TM_MONTH_SEPTEMBER ( ( uint8_t ) 8U )
#define TM_MONTH_OCTOBER ( ( uint8_t ) 9U )
#define TM_MONTH_NOVEMBER ( ( uint8_t )10U )
#define TM_MONTH_DECEMBER ( ( uint8_t )11U )




#define TM_WEEKDAY_SUNDAY ( ( uint8_t )0U )
#define TM_WEEKDAY_MONDAY ( ( uint8_t )1U )
#define TM_WEEKDAY_TUESDAY ( ( uint8_t )2U )
#define TM_WEEKDAY_WEDNESDAY ( ( uint8_t )3U )
#define TM_WEEKDAY_THURSDAY ( ( uint8_t )4U )
#define TM_WEEKDAY_FRIDAY ( ( uint8_t )5U )
#define TM_WEEKDAY_SATURDAY ( ( uint8_t )6U )




#define UNIX_GPS_EPOCH_OFFSET 315964800





# 83 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
typedef struct SysTime_s
{
    uint32_t Seconds;
    int16_t SubSeconds;
}SysTime_t;
# 97 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
SysTime_t SysTimeAdd( SysTime_t a, SysTime_t b );
# 107 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
SysTime_t SysTimeSub( SysTime_t a, SysTime_t b );






void SysTimeSet( SysTime_t sysTime );






SysTime_t SysTimeGet( void );






SysTime_t SysTimeGetMcuTime( void );
# 137 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
uint32_t SysTimeToMs( SysTime_t sysTime );
# 146 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
SysTime_t SysTimeFromMs( uint32_t timeMs );







uint32_t SysTimeMkTime( const struct tm* localtime );
# 163 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/system/systime.h"
void SysTimeLocalTime( const uint32_t timestamp, struct tm *localtime );
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 2




#define LORAMAC_CRYPTO_UNICAST_KEYS 0




#define LORAMAC_CRYPTO_MULTICAST_KEYS 127




#define LORAMAC_MAX_MC_CTX 4
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_0 0
# 93 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_1 1
# 109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_2 2
# 125 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_3 3
# 141 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_4 4
# 157 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_5 5
# 173 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_6 6
# 189 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_7 7
# 205 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_8 8
# 221 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_9 9
# 237 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_10 10
# 253 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_11 11
# 269 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_12 12
# 285 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_13 13
# 301 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_14 14
# 317 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define DR_15 15
# 335 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_0 0
# 351 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_1 1
# 367 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_2 2
# 383 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_3 3
# 399 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_4 4
# 415 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_5 5
# 431 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_6 6
# 447 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_7 7
# 463 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_8 8
# 479 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_9 9
# 495 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_10 10
# 511 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_11 11
# 527 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_12 12
# 543 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_13 13
# 559 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
#define TX_POWER_14 14




#define TX_POWER_15 15






typedef enum DeviceClass_e
{





    CLASS_A = 0x00,





    CLASS_B = 0x01,





    CLASS_C = 0x02,
}DeviceClass_t;







typedef enum eFType
{





    FRAME_TYPE_A,





    FRAME_TYPE_B,





    FRAME_TYPE_C,





    FRAME_TYPE_D,
}FType_t;




typedef enum eFCntIdentifier
{



    FCNT_UP = 0,




    N_FCNT_DOWN,




    A_FCNT_DOWN,




    FCNT_DOWN,



    MC_FCNT_DOWN_0,



    MC_FCNT_DOWN_1,



    MC_FCNT_DOWN_2,



    MC_FCNT_DOWN_3,
}FCntIdentifier_t;




typedef enum eKeyIdentifier
{



    APP_KEY = 0,



    NWK_KEY,



    J_S_INT_KEY,



    J_S_ENC_KEY,



    F_NWK_S_INT_KEY,



    S_NWK_S_INT_KEY,



    NWK_S_ENC_KEY,



    APP_S_KEY,



    MC_ROOT_KEY,



    MC_KE_KEY = 127,



    MC_KEY_0,



    MC_APP_S_KEY_0,



    MC_NWK_S_KEY_0,



    MC_KEY_1,



    MC_APP_S_KEY_1,



    MC_NWK_S_KEY_1,



    MC_KEY_2,



    MC_APP_S_KEY_2,



    MC_NWK_S_KEY_2,



    MC_KEY_3,



    MC_APP_S_KEY_3,



    MC_NWK_S_KEY_3,



    SLOT_RAND_ZERO_KEY,



    NO_KEY,
}KeyIdentifier_t;




typedef enum eAddressIdentifier
{



    MULTICAST_0_ADDR = 0,



    MULTICAST_1_ADDR = 1,



    MULTICAST_2_ADDR = 2,



    MULTICAST_3_ADDR = 3,



    UNICAST_DEV_ADDR = 4,
}AddressIdentifier_t;




typedef union uMcRxParams
{
    struct
    {



        uint32_t Frequency;



        int8_t Datarate;




        uint16_t Periodicity;
    }ClassB;
    struct
    {



        uint32_t Frequency;



        int8_t Datarate;
    }ClassC;
}McRxParams_t;




typedef struct sMcChannelParams
{




    
# 842 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 3 4
   _Bool 
# 842 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
        IsRemotelySetup;



    DeviceClass_t Class;



    
# 850 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 3 4
   _Bool 
# 850 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
        IsEnabled;



    AddressIdentifier_t GroupID;



    uint32_t Address;



    union uMcKeys
    {




        uint8_t *McKeyE;



        struct
        {



            uint8_t *McAppSKey;



            uint8_t *McNwkSKey;
        }Session;
    }McKeys;



    uint32_t FCountMin;



    uint32_t FCountMax;



    McRxParams_t RxParams;
}McChannelParams_t;




typedef struct sMulticastCtx
{



    McChannelParams_t ChannelParams;



    uint32_t* DownLinkCounter;
# 920 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
    uint8_t PingNb;





    uint16_t PingPeriod;



    uint16_t PingOffset;
}MulticastCtx_t;




typedef enum eJoinReqIdentifier
{



    REJOIN_REQ_0 = 0x00,



    REJOIN_REQ_1 = 0x01,



    REJOIN_REQ_2 = 0x02,



    JOIN_REQ = 0xFF,
}JoinReqIdentifier_t;






typedef enum eLoRaMacMoteCmd
{



    MOTE_MAC_LINK_CHECK_REQ = 0x02,



    MOTE_MAC_LINK_ADR_ANS = 0x03,



    MOTE_MAC_DUTY_CYCLE_ANS = 0x04,



    MOTE_MAC_RX_PARAM_SETUP_ANS = 0x05,



    MOTE_MAC_DEV_STATUS_ANS = 0x06,



    MOTE_MAC_NEW_CHANNEL_ANS = 0x07,



    MOTE_MAC_RX_TIMING_SETUP_ANS = 0x08,



    MOTE_MAC_TX_PARAM_SETUP_ANS = 0x09,



    MOTE_MAC_DL_CHANNEL_ANS = 0x0A,



    MOTE_MAC_DEVICE_TIME_REQ = 0x0D,



    MOTE_MAC_PING_SLOT_INFO_REQ = 0x10,



    MOTE_MAC_PING_SLOT_FREQ_ANS = 0x11,



    MOTE_MAC_BEACON_TIMING_REQ = 0x12,



    MOTE_MAC_BEACON_FREQ_ANS = 0x13,
}LoRaMacMoteCmd_t;






typedef enum eLoRaMacSrvCmd
{



    SRV_MAC_RESET_CONF = 0x01,



    SRV_MAC_LINK_CHECK_ANS = 0x02,



    SRV_MAC_LINK_ADR_REQ = 0x03,



    SRV_MAC_DUTY_CYCLE_REQ = 0x04,



    SRV_MAC_RX_PARAM_SETUP_REQ = 0x05,



    SRV_MAC_DEV_STATUS_REQ = 0x06,



    SRV_MAC_NEW_CHANNEL_REQ = 0x07,



    SRV_MAC_RX_TIMING_SETUP_REQ = 0x08,



    SRV_MAC_TX_PARAM_SETUP_REQ = 0x09,



    SRV_MAC_DL_CHANNEL_REQ = 0x0A,



    SRV_MAC_DEVICE_TIME_ANS = 0x0D,



    SRV_MAC_PING_SLOT_INFO_ANS = 0x10,



    SRV_MAC_PING_SLOT_CHANNEL_REQ = 0x11,



    SRV_MAC_BEACON_TIMING_ANS = 0x12,



    SRV_MAC_BEACON_FREQ_REQ = 0x13,
}LoRaMacSrvCmd_t;




typedef struct sBand
{



    uint16_t DCycle;



    int8_t TxMaxPower;




    TimerTime_t LastBandUpdateTime;




    TimerTime_t LastMaxCreditAssignTime;




    TimerTime_t TimeCredits;




    TimerTime_t MaxTimeCredits;



    
# 1126 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 3 4
   _Bool 
# 1126 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h"
        ReadyForTransmission;
}Band_t;




typedef union uDrRange
{



    int8_t Value;



    struct sFields
    {







        int8_t Min : 4;







        int8_t Max : 4;
    }Fields;
}DrRange_t;




typedef struct sChannelParams
{



    uint32_t Frequency;



    uint32_t Rx1Frequency;



    DrRange_t DrRange;



    uint8_t Band;
}ChannelParams_t;






typedef enum eLoRaMacFrameType
{



    FRAME_TYPE_JOIN_REQ = 0x00,



    FRAME_TYPE_JOIN_ACCEPT = 0x01,



    FRAME_TYPE_DATA_UNCONFIRMED_UP = 0x02,



    FRAME_TYPE_DATA_UNCONFIRMED_DOWN = 0x03,



    FRAME_TYPE_DATA_CONFIRMED_UP = 0x04,



    FRAME_TYPE_DATA_CONFIRMED_DOWN = 0x05,



    FRAME_TYPE_PROPRIETARY = 0x07,
}LoRaMacFrameType_t;




typedef enum eLoRaMacBatteryLevel
{



    BAT_LEVEL_EXT_SRC = 0x00,



    BAT_LEVEL_EMPTY = 0x01,



    BAT_LEVEL_FULL = 0xFE,



    BAT_LEVEL_NO_MEASURE = 0xFF,
}LoRaMacBatteryLevel_t;
# 46 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h" 2





#define LORAMAC_COMMADS_MAX_NUM_OF_PARAMS 2




typedef struct sMacCommand MacCommand_t;

struct sMacCommand
{



    MacCommand_t* Next;



    uint8_t CID;



    uint8_t Payload[2];



    size_t PayloadSize;



    
# 79 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h" 3 4
   _Bool 
# 79 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
        IsSticky;
};




typedef enum eLoRaMacCommandsStatus
{



    LORAMAC_COMMANDS_SUCCESS = 0,



    LORAMAC_COMMANDS_ERROR_NPE,



    LORAMAC_COMMANDS_ERROR_MEMORY,



    LORAMAC_COMMANDS_ERROR_CMD_NOT_FOUND,



    LORAMAC_COMMANDS_ERROR_UNKNOWN_CMD,



    LORAMAC_COMMANDS_ERROR,
}LoRaMacCommandStatus_t;





typedef void ( *LoRaMacCommandsNvmEvent )( void );






LoRaMacCommandStatus_t LoRaMacCommandsInit( void );
# 135 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsAddCmd( uint8_t cid, uint8_t* payload, size_t payloadSize );
# 144 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsRemoveCmd( MacCommand_t* macCmd );
# 154 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsGetCmd( uint8_t cid, MacCommand_t** macCmd );






LoRaMacCommandStatus_t LoRaMacCommandsRemoveNoneStickyCmds( void );






LoRaMacCommandStatus_t LoRaMacCommandsRemoveStickyAnsCmds( void );
# 177 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsGetSizeSerializedCmds( size_t* size );
# 188 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsSerializeCmds( size_t availableSize, size_t* effectiveSize, uint8_t* buffer );
# 197 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
LoRaMacCommandStatus_t LoRaMacCommandsStickyCmdsPending( 
# 197 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h" 3 4
                                                        _Bool
# 197 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
                                                            * cmdsPending );
# 206 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.h"
uint8_t LoRaMacCommandsGetCmdSize( uint8_t cid );
# 24 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 1
# 40 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
#define __LORAMAC_CONFIRMQUEUE_H__ 
# 50 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 1
# 67 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
#define __LORAMAC_H__ 
# 81 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionNvm.h" 1
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionNvm.h"
#define __REGIONNVM_H__ 






# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacTypes.h" 1
# 42 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionNvm.h" 2



#define REGION_NVM_MAX_NB_CHANNELS 96
# 59 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionNvm.h"
#define REGION_NVM_MAX_NB_BANDS 6
# 68 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionNvm.h"
#define REGION_NVM_CHANNELS_MASK_SIZE 6
# 77 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/region/RegionNvm.h"
typedef struct sRegionNvmDataGroup1
{



    Band_t Bands[ 6 ];




    uint16_t ChannelsMaskRemaining[ 6 ];




    uint8_t JoinChannelGroupsCurrentIndex;



    uint8_t JoinTrialsCounter;




    uint32_t Crc32;
}RegionNvmDataGroup1_t;





typedef struct sRegionNvmDataGroup2
{



    ChannelParams_t Channels[ 96 ];



    uint16_t ChannelsMask[ 6 ];



    uint16_t ChannelsDefaultMask[ 6 ];



    uint32_t Crc32;
}RegionNvmDataGroup2_t;
# 82 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCryptoNvm.h" 1
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCryptoNvm.h"
#define __LORAMAC_CRYPTO_NVM_H__ 
# 49 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCryptoNvm.h"
typedef struct sFCntList
{



    uint32_t FCntUp;




    uint32_t NFCntDown;




    uint32_t AFCntDown;




    uint32_t FCntDown;



    uint32_t McFCntDown[4];






}FCntList_t;




typedef struct sLoRaMacCryptoNvmData
{




    Version_t LrWanVersion;




    uint16_t DevNonce;




    uint32_t JoinNonce;



    FCntList_t FCntList;





    uint32_t LastDownFCnt;



    uint32_t Crc32;
}LoRaMacCryptoNvmData_t;
# 83 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element-nvm.h" 1
# 35 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element-nvm.h"
#define __SECURE_ELEMENT_NVM_H__ 
# 48 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/secure-element-nvm.h"
#define SE_KEY_SIZE 16




#define SE_EUI_SIZE 8




#define SE_PIN_SIZE 4





#define NUM_OF_KEYS 23




typedef struct sKey
{



    KeyIdentifier_t KeyID;



    uint8_t KeyValue[16];
} Key_t;


typedef struct sSecureElementNvCtx
{



    uint8_t DevEui[8];



    uint8_t JoinEui[8];



    uint8_t Pin[4];





    Key_t KeyList[23];




    uint32_t Crc32;
} SecureElementNvmData_t;
# 84 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 2
# 1 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassBNvm.h" 1
# 34 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassBNvm.h"
#define __LORAMACCLASSBNVM_H__ 
# 47 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacClassBNvm.h"
typedef struct sLoRaMacClassBPingSlotNvmData
{
    struct sPingSlotCtrlNvm
    {



        uint8_t Assigned : 1;



        uint8_t CustomFreq : 1;
    }Ctrl;



    uint8_t PingNb;



    uint16_t PingPeriod;



    uint32_t Frequency;



    int8_t Datarate;
} LoRaMacClassBPingSlotNvmData_t;





typedef struct sLoRaMacClassBBeaconNvmData
{
    struct sBeaconCtrlNvm
    {



        uint8_t CustomFreq : 1;
    }Ctrl;



    uint32_t Frequency;
} LoRaMacClassBBeaconNvmData_t;




typedef struct sLoRaMacClassBNvmData
{



    LoRaMacClassBPingSlotNvmData_t PingSlotCtx;



    LoRaMacClassBBeaconNvmData_t BeaconCtx;



    uint32_t Crc32;
} LoRaMacClassBNvmData_t;
# 85 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 2




#define MAX_ACK_RETRIES 8




#define UP_LINK 0




#define DOWN_LINK 1




#define LORA_MAC_MLME_CONFIRM_QUEUE_LEN 5




#define LORAMAC_CRYPTO_MULTICAST_KEYS 127




#define LORA_MAC_COMMAND_MAX_LENGTH 128





#define LORAMAC_NVM_NOTIFY_FLAG_NONE 0x00




#define LORAMAC_NVM_NOTIFY_FLAG_CRYPTO 0x01




#define LORAMAC_NVM_NOTIFY_FLAG_MAC_GROUP1 0x02




#define LORAMAC_NVM_NOTIFY_FLAG_MAC_GROUP2 0x04




#define LORAMAC_NVM_NOTIFY_FLAG_SECURE_ELEMENT 0x08




#define LORAMAC_NVM_NOTIFY_FLAG_REGION_GROUP1 0x10




#define LORAMAC_NVM_NOTIFY_FLAG_REGION_GROUP2 0x20




#define LORAMAC_NVM_NOTIFY_FLAG_CLASS_B 0x40




typedef enum eActivationType
{



    ACTIVATION_TYPE_NONE = 0,



    ACTIVATION_TYPE_ABP = 1,



    ACTIVATION_TYPE_OTAA = 2,
}ActivationType_t;




typedef struct sRxChannelParams
{



    uint32_t Frequency;







    uint8_t Datarate;
}RxChannelParams_t;




typedef enum eLoRaMacRxSlot
{



    RX_SLOT_WIN_1,



    RX_SLOT_WIN_2,



    RX_SLOT_WIN_CLASS_C,



    RX_SLOT_WIN_CLASS_C_MULTICAST,



    RX_SLOT_WIN_CLASS_B_PING_SLOT,



    RX_SLOT_WIN_CLASS_B_MULTICAST_SLOT,



    RX_SLOT_NONE,
}LoRaMacRxSlot_t;




typedef struct sLoRaMacParams
{





    uint32_t SystemMaxRxError;




    uint8_t MinRxSymbols;



    uint32_t MaxRxWindow;



    uint32_t ReceiveDelay1;



    uint32_t ReceiveDelay2;



    uint32_t JoinAcceptDelay1;



    uint32_t JoinAcceptDelay2;



    uint8_t ChannelsNbTrans;



    uint8_t Rx1DrOffset;



    RxChannelParams_t Rx2Channel;



    RxChannelParams_t RxCChannel;



    uint8_t UplinkDwellTime;



    uint8_t DownlinkDwellTime;



    float MaxEirp;



    float AntennaGain;
}LoRaMacParams_t;






typedef union uPingSlotInfo
{



    uint8_t Value;



    struct sInfoFields
    {




        uint8_t Periodicity : 3;



        uint8_t RFU : 5;
    }Fields;
}PingSlotInfo_t;






typedef struct sBeaconInfo
{




    SysTime_t Time;



    uint32_t Frequency;



    uint8_t Datarate;



    int16_t Rssi;



    int8_t Snr;




    struct sGwSpecific
    {



        uint8_t InfoDesc;



        uint8_t Info[6];
    }GwSpecific;
}BeaconInfo_t;




typedef enum eLoRaMacEventInfoStatus
{



    LORAMAC_EVENT_INFO_STATUS_OK = 0,



    LORAMAC_EVENT_INFO_STATUS_ERROR,



    LORAMAC_EVENT_INFO_STATUS_TX_TIMEOUT,



    LORAMAC_EVENT_INFO_STATUS_RX1_TIMEOUT,



    LORAMAC_EVENT_INFO_STATUS_RX2_TIMEOUT,



    LORAMAC_EVENT_INFO_STATUS_RX1_ERROR,



    LORAMAC_EVENT_INFO_STATUS_RX2_ERROR,



    LORAMAC_EVENT_INFO_STATUS_JOIN_FAIL,





    LORAMAC_EVENT_INFO_STATUS_DOWNLINK_REPEATED,




    LORAMAC_EVENT_INFO_STATUS_TX_DR_PAYLOAD_SIZE_ERROR,



    LORAMAC_EVENT_INFO_STATUS_DOWNLINK_TOO_MANY_FRAMES_LOSS,



    LORAMAC_EVENT_INFO_STATUS_ADDRESS_FAIL,



    LORAMAC_EVENT_INFO_STATUS_MIC_FAIL,



    LORAMAC_EVENT_INFO_STATUS_MULTICAST_FAIL,



    LORAMAC_EVENT_INFO_STATUS_BEACON_LOCKED,



    LORAMAC_EVENT_INFO_STATUS_BEACON_LOST,



    LORAMAC_EVENT_INFO_STATUS_BEACON_NOT_FOUND,
}LoRaMacEventInfoStatus_t;




typedef union eLoRaMacFlags_t
{



    uint8_t Value;



    struct sMacFlagBits
    {



        uint8_t McpsReq : 1;



        uint8_t McpsInd : 1;



        uint8_t MlmeReq : 1;



        uint8_t MlmeInd : 1;



        uint8_t MlmeSchedUplinkInd : 1;



        uint8_t MacDone : 1;
    }Bits;
}LoRaMacFlags_t;




typedef enum eLoRaMacRegion
{



    LORAMAC_REGION_AS923,



    LORAMAC_REGION_AU915,



    LORAMAC_REGION_CN470,



    LORAMAC_REGION_CN779,



    LORAMAC_REGION_EU433,



    LORAMAC_REGION_EU868,



    LORAMAC_REGION_KR920,



    LORAMAC_REGION_IN865,



    LORAMAC_REGION_US915,



    LORAMAC_REGION_RU864,
    LORAMAC_REGION_LA915,
}LoRaMacRegion_t;

typedef struct sLoRaMacNvmDataGroup1
{



    uint32_t AdrAckCounter;



    TimerTime_t LastTxDoneTime;



    TimerTime_t AggregatedTimeOff;



    uint32_t LastRxMic;



    int8_t ChannelsTxPower;



    int8_t ChannelsDatarate;




    
# 570 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 570 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        SrvAckRequested;



    uint32_t Crc32;
}LoRaMacNvmDataGroup1_t;

typedef struct sLoRaMacNvmDataGroup2
{



    LoRaMacRegion_t Region;



    LoRaMacParams_t MacParams;



    LoRaMacParams_t MacParamsDefaults;



    int8_t ChannelsTxPowerDefault;



    int8_t ChannelsDatarateDefault;



    uint32_t NetID;



    uint32_t DevAddr;



    MulticastCtx_t MulticastChannelList[4];



    DeviceClass_t DeviceClass;




    
# 619 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 619 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        PublicNetwork;



    
# 623 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 623 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        AdrCtrlOn;




    uint8_t MaxDCycle;



    
# 632 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 632 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        DutyCycleOn;



    uint16_t AggregatedDCycle;





    SysTime_t InitializationTime;



    Version_t Version;



    ActivationType_t NetworkActivation;



    uint32_t Crc32;
}LoRaMacNvmDataGroup2_t;





typedef struct sLoRaMacNvmData
{




    LoRaMacCryptoNvmData_t Crypto;




    LoRaMacNvmDataGroup1_t MacGroup1;




    LoRaMacNvmDataGroup2_t MacGroup2;



    SecureElementNvmData_t SecureElement;




    RegionNvmDataGroup1_t RegionGroup1;




    RegionNvmDataGroup2_t RegionGroup2;



    LoRaMacClassBNvmData_t ClassB;
}LoRaMacNvmData_t;
# 721 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
typedef enum eMcps
{



    MCPS_UNCONFIRMED,



    MCPS_CONFIRMED,



    MCPS_MULTICAST,



    MCPS_PROPRIETARY,
}Mcps_t;




typedef struct sRequestReturnParam
{





    TimerTime_t DutyCycleWaitTime;
}RequestReturnParam_t;




typedef struct sMcpsReqUnconfirmed
{






    uint8_t fPort;



    void* fBuffer;



    uint16_t fBufferSize;



    int8_t Datarate;
}McpsReqUnconfirmed_t;




typedef struct sMcpsReqConfirmed
{






    uint8_t fPort;



    void* fBuffer;



    uint16_t fBufferSize;



    int8_t Datarate;
# 824 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
    uint8_t NbTrials;
}McpsReqConfirmed_t;




typedef struct sMcpsReqProprietary
{



    void* fBuffer;



    uint16_t fBufferSize;



    int8_t Datarate;
}McpsReqProprietary_t;




typedef struct sMcpsReq
{



    Mcps_t Type;




    union uMcpsParam
    {



        McpsReqUnconfirmed_t Unconfirmed;



        McpsReqConfirmed_t Confirmed;



        McpsReqProprietary_t Proprietary;
    }Req;




    RequestReturnParam_t ReqReturn;
}McpsReq_t;




typedef struct sMcpsConfirm
{



    Mcps_t McpsRequest;



    LoRaMacEventInfoStatus_t Status;



    uint8_t Datarate;



    int8_t TxPower;



    
# 905 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 905 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        AckReceived;



    uint8_t NbRetries;



    TimerTime_t TxTimeOnAir;



    uint32_t UpLinkCounter;



    uint32_t Channel;
}McpsConfirm_t;




typedef struct sMcpsIndication
{



    Mcps_t McpsIndication;



    LoRaMacEventInfoStatus_t Status;



    uint8_t Multicast;



    uint8_t Port;



    uint8_t RxDatarate;



    uint8_t FramePending;



    uint8_t* Buffer;



    uint8_t BufferSize;



    
# 964 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 964 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        RxData;



    int16_t Rssi;



    int8_t Snr;



    LoRaMacRxSlot_t RxSlot;



    
# 980 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 980 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        AckReceived;



    uint32_t DownLinkCounter;



    uint32_t DevAddress;



    
# 992 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 992 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        DeviceTimeAnsReceived;
}McpsIndication_t;
# 1019 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
typedef enum eMlme
{



    MLME_UNKNOWN,





    MLME_JOIN,





    MLME_REJOIN_0,





    MLME_REJOIN_1,





    MLME_LINK_CHECK,





    MLME_TXCW,





    MLME_TXCW_1,




    MLME_SCHEDULE_UPLINK,



    MLME_DERIVE_MC_KE_KEY,



    MLME_DERIVE_MC_KEY_PAIR,





    MLME_DEVICE_TIME,






    MLME_BEACON,






    MLME_BEACON_ACQUISITION,





    MLME_PING_SLOT_INFO,





    MLME_BEACON_TIMING,







    MLME_BEACON_LOST,
}Mlme_t;




typedef struct sMlmeReqJoin
{



    uint8_t Datarate;
}MlmeReqJoin_t;




typedef struct sMlmeReqTxCw
{



    uint16_t Timeout;



    uint32_t Frequency;



    int8_t Power;
}MlmeReqTxCw_t;




typedef struct sMlmeReqPingSlotInfo
{
    PingSlotInfo_t PingSlot;
}MlmeReqPingSlotInfo_t;




typedef struct sMlmeReqDeriveMcKEKey
{



    KeyIdentifier_t KeyID;



    uint16_t Nonce;



    uint8_t* DevEUI;
}MlmeReqDeriveMcKEKey_t;




typedef struct sMlmeReqDeriveMcSessionKeyPair
{



    AddressIdentifier_t GroupID;
}MlmeReqDeriveMcSessionKeyPair_t;




typedef struct sMlmeReq
{



    Mlme_t Type;




    union uMlmeParam
    {



        MlmeReqJoin_t Join;



        MlmeReqTxCw_t TxCw;



        MlmeReqPingSlotInfo_t PingSlotInfo;



        MlmeReqDeriveMcKEKey_t DeriveMcKEKey;



        MlmeReqDeriveMcSessionKeyPair_t DeriveMcSessionKeyPair;
    }Req;




    RequestReturnParam_t ReqReturn;
}MlmeReq_t;




typedef struct sMlmeConfirm
{



    Mlme_t MlmeRequest;



    LoRaMacEventInfoStatus_t Status;



    TimerTime_t TxTimeOnAir;




    uint8_t DemodMargin;



    uint8_t NbGateways;



    uint8_t NbRetries;




    TimerTime_t BeaconTimingDelay;



    uint8_t BeaconTimingChannel;
}MlmeConfirm_t;




typedef struct sMlmeIndication
{



    Mlme_t MlmeIndication;



    LoRaMacEventInfoStatus_t Status;




    BeaconInfo_t BeaconInfo;
}MlmeIndication_t;
# 1370 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
typedef enum eMib
{





    MIB_DEVICE_CLASS,





    MIB_NETWORK_ACTIVATION,





    MIB_DEV_EUI,





    MIB_JOIN_EUI,



    MIB_SE_PIN,







    MIB_ADR,





    MIB_NET_ID,





    MIB_DEV_ADDR,





    MIB_APP_KEY,





    MIB_NWK_KEY,





    MIB_J_S_INT_KEY,





    MIB_J_S_ENC_KEY,





    MIB_F_NWK_S_INT_KEY,





    MIB_S_NWK_S_INT_KEY,





    MIB_NWK_S_ENC_KEY,





    MIB_APP_S_KEY,





    MIB_MC_KE_KEY,





    MIB_MC_KEY_0,





    MIB_MC_APP_S_KEY_0,





    MIB_MC_NWK_S_KEY_0,





    MIB_MC_KEY_1,





    MIB_MC_APP_S_KEY_1,





    MIB_MC_NWK_S_KEY_1,





    MIB_MC_KEY_2,





    MIB_MC_APP_S_KEY_2,





    MIB_MC_NWK_S_KEY_2,





    MIB_MC_KEY_3,





    MIB_MC_APP_S_KEY_3,





    MIB_MC_NWK_S_KEY_3,







    MIB_PUBLIC_NETWORK,







    MIB_CHANNELS,





    MIB_RX2_CHANNEL,





    MIB_RX2_DEFAULT_CHANNEL,





    MIB_RXC_CHANNEL,





    MIB_RXC_DEFAULT_CHANNEL,





    MIB_CHANNELS_MASK,





    MIB_CHANNELS_DEFAULT_MASK,





    MIB_CHANNELS_NB_TRANS,





    MIB_MAX_RX_WINDOW_DURATION,





    MIB_RECEIVE_DELAY_1,





    MIB_RECEIVE_DELAY_2,





    MIB_JOIN_ACCEPT_DELAY_1,





    MIB_JOIN_ACCEPT_DELAY_2,







    MIB_CHANNELS_DEFAULT_DATARATE,







    MIB_CHANNELS_DATARATE,







    MIB_CHANNELS_TX_POWER,







    MIB_CHANNELS_DEFAULT_TX_POWER,





    MIB_SYSTEM_MAX_RX_ERROR,




    MIB_MIN_RX_SYMBOLS,
# 1687 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
    MIB_ANTENNA_GAIN,
# 1698 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
    MIB_DEFAULT_ANTENNA_GAIN,



    MIB_NVM_CTXS,



    MIB_ABP_LORAWAN_VERSION,



    MIB_LORAWAN_VERSION,



    MIB_BEACON_INTERVAL,



    MIB_BEACON_RESERVED,



    MIB_BEACON_GUARD,



    MIB_BEACON_WINDOW,



    MIB_BEACON_WINDOW_SLOTS,



    MIB_PING_SLOT_WINDOW,



    MIB_BEACON_SYMBOL_TO_DEFAULT,



    MIB_BEACON_SYMBOL_TO_EXPANSION_MAX,



    MIB_PING_SLOT_SYMBOL_TO_EXPANSION_MAX,




    MIB_BEACON_SYMBOL_TO_EXPANSION_FACTOR,




    MIB_PING_SLOT_SYMBOL_TO_EXPANSION_FACTOR,



    MIB_MAX_BEACON_LESS_PERIOD,







     MIB_PING_SLOT_DATARATE,
}Mib_t;




typedef union uMibParam
{





    DeviceClass_t Class;





    ActivationType_t NetworkActivation;





    uint8_t* DevEui;





    uint8_t* JoinEui;





    uint8_t* SePin;





    
# 1811 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 1811 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        AdrEnable;





    uint32_t NetID;





    uint32_t DevAddr;





    uint8_t* AppKey;





    uint8_t* NwkKey;





    uint8_t* JSIntKey;





    uint8_t* JSEncKey;





    uint8_t* FNwkSIntKey;





    uint8_t* SNwkSIntKey;





    uint8_t* NwkSEncKey;





    uint8_t* AppSKey;





    uint8_t* McKEKey;





    uint8_t* McKey0;





    uint8_t* McAppSKey0;





    uint8_t* McNwkSKey0;





    uint8_t* McKey1;





    uint8_t* McAppSKey1;





    uint8_t* McNwkSKey1;





    uint8_t* McKey2;





    uint8_t* McAppSKey2;





    uint8_t* McNwkSKey2;





    uint8_t* McKey3;





    uint8_t* McAppSKey3;





    uint8_t* McNwkSKey3;





    
# 1955 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
   _Bool 
# 1955 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
        EnablePublicNetwork;





    ChannelParams_t* ChannelList;





    RxChannelParams_t Rx2Channel;





    RxChannelParams_t Rx2DefaultChannel;





    RxChannelParams_t RxCChannel;





    RxChannelParams_t RxCDefaultChannel;





    uint16_t* ChannelsMask;





    uint16_t* ChannelsDefaultMask;





    uint8_t ChannelsNbTrans;





    uint32_t MaxRxWindow;





    uint32_t ReceiveDelay1;





    uint32_t ReceiveDelay2;





    uint32_t JoinAcceptDelay1;





    uint32_t JoinAcceptDelay2;





    int8_t ChannelsDefaultDatarate;





    int8_t ChannelsDatarate;





    int8_t ChannelsDefaultTxPower;





    int8_t ChannelsTxPower;





    McChannelParams_t MulticastChannel;





    uint32_t SystemMaxRxError;





    uint8_t MinRxSymbols;





    float AntennaGain;





    float DefaultAntennaGain;






    LoRaMacNvmData_t* Contexts;





    Version_t AbpLrWanVersion;





    struct sLrWanVersion
    {
        Version_t LoRaWan;
        Version_t LoRaWanRegion;
    }LrWanVersion;





    uint32_t BeaconInterval;





    uint32_t BeaconReserved;





    uint32_t BeaconGuard;





    uint32_t BeaconWindow;





    uint32_t BeaconWindowSlots;





    uint32_t PingSlotWindow;





    uint32_t BeaconSymbolToDefault;





    uint32_t BeaconSymbolToExpansionMax;





    uint32_t PingSlotSymbolToExpansionMax;






    uint32_t BeaconSymbolToExpansionFactor;






    uint32_t PingSlotSymbolToExpansionFactor;





    uint32_t MaxBeaconLessPeriod;





    int8_t PingSlotDatarate;
}MibParam_t;




typedef struct eMibRequestConfirm
{



    Mib_t Type;




    MibParam_t Param;
}MibRequestConfirm_t;




typedef struct sLoRaMacTxInfo
{



    uint8_t MaxPossibleApplicationDataSize;




    uint8_t CurrentPossiblePayloadSize;
}LoRaMacTxInfo_t;




typedef enum eLoRaMacStatus
{



    LORAMAC_STATUS_OK,



    LORAMAC_STATUS_BUSY,



    LORAMAC_STATUS_SERVICE_UNKNOWN,



    LORAMAC_STATUS_PARAMETER_INVALID,



    LORAMAC_STATUS_FREQUENCY_INVALID,



    LORAMAC_STATUS_DATARATE_INVALID,



    LORAMAC_STATUS_FREQ_AND_DR_INVALID,



    LORAMAC_STATUS_NO_NETWORK_JOINED,



    LORAMAC_STATUS_LENGTH_ERROR,




    LORAMAC_STATUS_REGION_NOT_SUPPORTED,




    LORAMAC_STATUS_SKIPPED_APP_DATA,
# 2289 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
    LORAMAC_STATUS_DUTYCYCLE_RESTRICTED,



    LORAMAC_STATUS_NO_CHANNEL_FOUND,



    LORAMAC_STATUS_NO_FREE_CHANNEL_FOUND,



    LORAMAC_STATUS_BUSY_BEACON_RESERVED_TIME,



    LORAMAC_STATUS_BUSY_PING_SLOT_WINDOW_TIME,



    LORAMAC_STATUS_BUSY_UPLINK_COLLISION,



    LORAMAC_STATUS_CRYPTO_ERROR,



    LORAMAC_STATUS_FCNT_HANDLER_ERROR,



    LORAMAC_STATUS_MAC_COMMAD_ERROR,



    LORAMAC_STATUS_CLASS_B_ERROR,



    LORAMAC_STATUS_CONFIRM_QUEUE_ERROR,



    LORAMAC_STATUS_MC_GROUP_UNDEFINED,



    LORAMAC_STATUS_ERROR
}LoRaMacStatus_t;





typedef struct sLoRaMacPrimitives
{





    void ( *MacMcpsConfirm )( McpsConfirm_t* McpsConfirm );





    void ( *MacMcpsIndication )( McpsIndication_t* McpsIndication );





    void ( *MacMlmeConfirm )( MlmeConfirm_t* MlmeConfirm );





    void ( *MacMlmeIndication )( MlmeIndication_t* MlmeIndication );
}LoRaMacPrimitives_t;




typedef struct sLoRaMacCallback
{
# 2385 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
    uint8_t ( *GetBatteryLevel )( void );





    float ( *GetTemperatureLevel )( void );






    void ( *NvmDataChange )( uint16_t notifyFlags );






    void ( *MacProcessNotify )( void );
}LoRaMacCallback_t;





static const uint8_t LoRaMacMaxEirpTable[] = { 8, 10, 12, 13, 14, 16, 18, 20, 21, 24, 26, 27, 29, 30, 33, 36 };
# 2436 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacInitialization( LoRaMacPrimitives_t* primitives, LoRaMacCallback_t* callbacks, LoRaMacRegion_t region );
# 2445 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacStart( void );
# 2454 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacStop( void );







# 2461 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h" 3 4
_Bool 
# 2461 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
    LoRaMacIsBusy( void );






void LoRaMacProcess( void );
# 2495 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacQueryTxPossible( uint8_t size, LoRaMacTxInfo_t* txInfo );
# 2513 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacChannelAdd( uint8_t id, ChannelParams_t params );
# 2527 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacChannelRemove( uint8_t id );
# 2542 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMcChannelSetup( McChannelParams_t *channel );
# 2556 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMcChannelDelete( AddressIdentifier_t groupID );
# 2566 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
uint8_t LoRaMacMcChannelGetGroupId( uint32_t mcAddress );
# 2583 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMcChannelSetupRxParams( AddressIdentifier_t groupID, McRxParams_t *rxParams, uint8_t *status );
# 2611 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMibGetRequestConfirm( MibRequestConfirm_t* mibGet );
# 2642 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMibSetRequestConfirm( MibRequestConfirm_t* mibSet );
# 2675 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMlmeRequest( MlmeReq_t* mlmeRequest );
# 2709 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacMcpsRequest( McpsReq_t* mcpsRequest );
# 2721 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMac.h"
LoRaMacStatus_t LoRaMacDeInitialization( void );
# 51 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 2




#define LORA_MAC_MLME_CONFIRM_QUEUE_LEN 5




typedef struct sMlmeConfirmQueue
{



    Mlme_t Request;



    LoRaMacEventInfoStatus_t Status;



    
# 73 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
   _Bool 
# 73 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
        ReadyToHandle;




    
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
   _Bool 
# 78 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
        RestrictCommonReadyToHandle;
}MlmeConfirmQueue_t;






void LoRaMacConfirmQueueInit( LoRaMacPrimitives_t* primitive );
# 95 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"

# 95 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 95 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueAdd( MlmeConfirmQueue_t* mlmeConfirm );







# 102 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 102 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueRemoveLast( void );







# 109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 109 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueRemoveFirst( void );
# 118 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
void LoRaMacConfirmQueueSetStatus( LoRaMacEventInfoStatus_t status, Mlme_t request );
# 127 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
LoRaMacEventInfoStatus_t LoRaMacConfirmQueueGetStatus( Mlme_t request );






void LoRaMacConfirmQueueSetStatusCmn( LoRaMacEventInfoStatus_t status );






LoRaMacEventInfoStatus_t LoRaMacConfirmQueueGetStatusCmn( void );
# 150 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"

# 150 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 150 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueIsCmdActive( Mlme_t request );






void LoRaMacConfirmQueueHandleCb( MlmeConfirm_t* mlmeConfirm );






uint8_t LoRaMacConfirmQueueGetCnt( void );







# 171 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h" 3 4
_Bool 
# 171 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacConfirmQueue.h"
    LoRaMacConfirmQueueIsFull( void );
# 25 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 2




#define NUM_OF_MAC_COMMANDS 15




#define CID_FIELD_SIZE 1




typedef struct sMacCommandsList
{



    MacCommand_t* First;



    MacCommand_t* Last;
} MacCommandsList_t;




typedef struct sLoRaMacCommandsCtx
{



    MacCommandsList_t MacCommandList;



    MacCommand_t MacCommandSlots[15];



    size_t SerializedCmdsSize;
} LoRaMacCommandsCtx_t;




static LoRaMacCommandsCtx_t CommandsCtx;
# 83 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
static 
# 83 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
      _Bool 
# 83 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
           IsSlotFree( const MacCommand_t* slot )
{
    uint8_t* mem = ( uint8_t* )slot;

    for( uint16_t size = 0; size < sizeof( MacCommand_t ); size++ )
    {
        if( mem[size] != 0x00 )
        {
            return 
# 91 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                  0
# 91 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                       ;
        }
    }
    return 
# 94 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
          1
# 94 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
              ;
}






static MacCommand_t* MallocNewMacCommandSlot( void )
{
    uint8_t itr = 0;

    while( IsSlotFree( ( const MacCommand_t* )&CommandsCtx.MacCommandSlots[itr] ) == 
# 106 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                                                                                    0 
# 106 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                                                                          )
    {
        itr++;
        if( itr == 15 )
        {
            return 
# 111 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                  ((void *)0)
# 111 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                      ;
        }
    }

    return &CommandsCtx.MacCommandSlots[itr];
}
# 125 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
static 
# 125 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
      _Bool 
# 125 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
           FreeMacCommandSlot( MacCommand_t* slot )
{
    if( slot == 
# 127 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
               ((void *)0) 
# 127 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                    )
    {
        return 
# 129 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
              0
# 129 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                   ;
    }

    memset1( ( uint8_t* )slot, 0x00, sizeof( MacCommand_t ) );

    return 
# 134 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
          1
# 134 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
              ;
}
# 145 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
static 
# 145 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
      _Bool 
# 145 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
           LinkedListInit( MacCommandsList_t* list )
{
    if( list == 
# 147 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
               ((void *)0) 
# 147 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                    )
    {
        return 
# 149 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
              0
# 149 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                   ;
    }

    list->First = 
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                 ((void *)0)
# 152 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                     ;
    list->Last = 
# 153 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                ((void *)0)
# 153 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                    ;

    return 
# 155 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
          1
# 155 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
              ;
}
# 165 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
static 
# 165 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
      _Bool 
# 165 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
           LinkedListAdd( MacCommandsList_t* list, MacCommand_t* element )
{
    if( ( list == 
# 167 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                 ((void *)0) 
# 167 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                      ) || ( element == 
# 167 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                                        ((void *)0) 
# 167 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                             ) )
    {
        return 
# 169 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
              0
# 169 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                   ;
    }


    if( list->First == 
# 173 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                      ((void *)0) 
# 173 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                           )
    {
        list->First = element;
    }


    if( list->Last )
    {
        list->Last->Next = element;
    }


    element->Next = 
# 185 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                   ((void *)0)
# 185 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                       ;


    list->Last = element;

    return 
# 190 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
          1
# 190 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
              ;
}
# 200 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
static MacCommand_t* LinkedListGetPrevious( MacCommandsList_t* list, MacCommand_t* element )
{
    if( ( list == 
# 202 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                 ((void *)0) 
# 202 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                      ) || ( element == 
# 202 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                                        ((void *)0) 
# 202 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                             ) )
    {
        return 
# 204 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
              ((void *)0)
# 204 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                  ;
    }

    MacCommand_t* curElement;


    curElement = list->First;


    if( element != curElement )
    {

        while( ( curElement != 
# 216 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                              ((void *)0) 
# 216 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                   ) && ( curElement->Next != element ) )
        {
            curElement = curElement->Next;
        }
    }
    else
    {
        curElement = 
# 223 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                    ((void *)0)
# 223 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                        ;
    }

    return curElement;
}
# 236 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
static 
# 236 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
      _Bool 
# 236 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
           LinkedListRemove( MacCommandsList_t* list, MacCommand_t* element )
{
    if( ( list == 
# 238 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                 ((void *)0) 
# 238 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                      ) || ( element == 
# 238 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                                        ((void *)0) 
# 238 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                             ) )
    {
        return 
# 240 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
              0
# 240 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                   ;
    }

    MacCommand_t* PrevElement = LinkedListGetPrevious( list, element );

    if( list->First == element )
    {
        list->First = element->Next;
    }

    if( list->Last == element )
    {
        list->Last = PrevElement;
    }

    if( PrevElement != 
# 255 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                      ((void *)0) 
# 255 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                           )
    {
        PrevElement->Next = element->Next;
    }

    element->Next = 
# 260 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                   ((void *)0)
# 260 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                       ;

    return 
# 262 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
          1
# 262 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
              ;
}
# 272 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
static 
# 272 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
      _Bool 
# 272 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
           IsSticky( uint8_t cid )
{
    switch( cid )
    {
        case MOTE_MAC_DL_CHANNEL_ANS:
        case MOTE_MAC_RX_PARAM_SETUP_ANS:
        case MOTE_MAC_RX_TIMING_SETUP_ANS:
        case MOTE_MAC_TX_PARAM_SETUP_ANS:
            return 
# 280 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                  1
# 280 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                      ;
        default:
            return 
# 282 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                  0
# 282 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                       ;
    }
}

LoRaMacCommandStatus_t LoRaMacCommandsInit( void )
{

    memset1( ( uint8_t* )&CommandsCtx, 0, sizeof( CommandsCtx ) );

    LinkedListInit( &CommandsCtx.MacCommandList );

    return LORAMAC_COMMANDS_SUCCESS;
}

LoRaMacCommandStatus_t LoRaMacCommandsAddCmd( uint8_t cid, uint8_t* payload, size_t payloadSize )
{
    if( payload == 
# 298 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                  ((void *)0) 
# 298 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                       )
    {
        return LORAMAC_COMMANDS_ERROR_NPE;
    }
    MacCommand_t* newCmd;


    newCmd = MallocNewMacCommandSlot( );

    if( newCmd == 
# 307 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                 ((void *)0) 
# 307 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                      )
    {
        return LORAMAC_COMMANDS_ERROR_MEMORY;
    }


    if( LinkedListAdd( &CommandsCtx.MacCommandList, newCmd ) == 
# 313 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                                                               0 
# 313 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                                                     )
    {
        return LORAMAC_COMMANDS_ERROR;
    }


    newCmd->CID = cid;
    newCmd->PayloadSize = payloadSize;
    memcpy1( ( uint8_t* )newCmd->Payload, payload, payloadSize );
    newCmd->IsSticky = IsSticky( cid );

    CommandsCtx.SerializedCmdsSize += ( 1 + payloadSize );

    return LORAMAC_COMMANDS_SUCCESS;
}

LoRaMacCommandStatus_t LoRaMacCommandsRemoveCmd( MacCommand_t* macCmd )
{
    if( macCmd == 
# 331 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                 ((void *)0) 
# 331 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                      )
    {
        return LORAMAC_COMMANDS_ERROR_NPE;
    }


    if( LinkedListRemove( &CommandsCtx.MacCommandList, macCmd ) == 
# 337 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                                                                  0 
# 337 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                                                        )
    {
        return LORAMAC_COMMANDS_ERROR_CMD_NOT_FOUND;
    }

    CommandsCtx.SerializedCmdsSize -= ( 1 + macCmd->PayloadSize );


    if( FreeMacCommandSlot( macCmd ) == 
# 345 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                                       0 
# 345 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                             )
    {
        return LORAMAC_COMMANDS_ERROR;
    }

    return LORAMAC_COMMANDS_SUCCESS;
}

LoRaMacCommandStatus_t LoRaMacCommandsGetCmd( uint8_t cid, MacCommand_t** macCmd )
{
    MacCommand_t* curElement;


    curElement = CommandsCtx.MacCommandList.First;


    while( ( curElement != 
# 361 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                          ((void *)0) 
# 361 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                               ) && ( curElement->CID != cid ) )
    {
        curElement = curElement->Next;
    }


    *macCmd = curElement;


    if( curElement == 
# 370 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                     ((void *)0) 
# 370 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                          )
    {
        return LORAMAC_COMMANDS_ERROR_CMD_NOT_FOUND;
    }
    return LORAMAC_COMMANDS_SUCCESS;
}

LoRaMacCommandStatus_t LoRaMacCommandsRemoveNoneStickyCmds( void )
{
    MacCommand_t* curElement;
    MacCommand_t* nexElement;


    curElement = CommandsCtx.MacCommandList.First;


    while( curElement != 
# 386 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                        ((void *)0) 
# 386 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                             )
    {
        if( curElement->IsSticky == 
# 388 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                                   0 
# 388 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                         )
        {
            nexElement = curElement->Next;
            LoRaMacCommandsRemoveCmd( curElement );
            curElement = nexElement;
        }
        else
        {
            curElement = curElement->Next;
        }
    }

    return LORAMAC_COMMANDS_SUCCESS;
}

LoRaMacCommandStatus_t LoRaMacCommandsRemoveStickyAnsCmds( void )
{
    MacCommand_t* curElement;
    MacCommand_t* nexElement;


    curElement = CommandsCtx.MacCommandList.First;


    while( curElement != 
# 412 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                        ((void *)0) 
# 412 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                             )
    {
        nexElement = curElement->Next;
        if( IsSticky( curElement->CID ) == 
# 415 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                                          1 
# 415 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                               )
        {
            LoRaMacCommandsRemoveCmd( curElement );
        }
        curElement = nexElement;
    }

    return LORAMAC_COMMANDS_SUCCESS;
}

LoRaMacCommandStatus_t LoRaMacCommandsGetSizeSerializedCmds( size_t* size )
{
    if( size == 
# 427 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
               ((void *)0) 
# 427 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                    )
    {
        return LORAMAC_COMMANDS_ERROR_NPE;
    }
    *size = CommandsCtx.SerializedCmdsSize;
    return LORAMAC_COMMANDS_SUCCESS;
}

LoRaMacCommandStatus_t LoRaMacCommandsSerializeCmds( size_t availableSize, size_t* effectiveSize, uint8_t* buffer )
{
    MacCommand_t* curElement = CommandsCtx.MacCommandList.First;
    MacCommand_t* nextElement;
    uint8_t itr = 0;

    if( ( buffer == 
# 441 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                   ((void *)0) 
# 441 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                        ) || ( effectiveSize == 
# 441 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                                                ((void *)0) 
# 441 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                                     ) )
    {
        return LORAMAC_COMMANDS_ERROR_NPE;
    }


    while( curElement != 
# 447 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                        ((void *)0) 
# 447 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                             )
    {

        if( ( availableSize - itr ) >= ( 1 + curElement->PayloadSize ) )
        {
            buffer[itr++] = curElement->CID;
            memcpy1( &buffer[itr], curElement->Payload, curElement->PayloadSize );
            itr += curElement->PayloadSize;
        }
        else
        {
            break;
        }
        curElement = curElement->Next;
    }


    while( curElement != 
# 464 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                        ((void *)0) 
# 464 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                             )
    {

        nextElement = curElement->Next;
        LoRaMacCommandsRemoveCmd( curElement );
        curElement = nextElement;
    }


    LoRaMacCommandsGetSizeSerializedCmds( effectiveSize );

    return LORAMAC_COMMANDS_SUCCESS;
}

LoRaMacCommandStatus_t LoRaMacCommandsStickyCmdsPending( 
# 478 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                                                        _Bool
# 478 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                                            * cmdsPending )
{
    if( cmdsPending == 
# 480 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                      ((void *)0) 
# 480 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                           )
    {
        return LORAMAC_COMMANDS_ERROR_NPE;
    }
    MacCommand_t* curElement;
    curElement = CommandsCtx.MacCommandList.First;

    *cmdsPending = 
# 487 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                  0
# 487 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                       ;


    while( curElement != 
# 490 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                        ((void *)0) 
# 490 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                             )
    {
        if( curElement->IsSticky == 
# 492 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                                   1 
# 492 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                                        )
        {

            *cmdsPending = 
# 495 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c" 3 4
                          1
# 495 "/home/jenkins/workspace/RUI_Release/rui-v3/external/lora/LoRaMac-node-4.4.7/src/mac/LoRaMacCommands.c"
                              ;
            return LORAMAC_COMMANDS_SUCCESS;
        }
        curElement = curElement->Next;
    }

    return LORAMAC_COMMANDS_SUCCESS;
}

uint8_t LoRaMacCommandsGetCmdSize( uint8_t cid )
{
    uint8_t cidSize = 0;


    switch( cid )
    {
        case SRV_MAC_LINK_CHECK_ANS:
        {

            cidSize = 3;
            break;
        }
        case SRV_MAC_LINK_ADR_REQ:
        {

            cidSize = 5;
            break;
        }
        case SRV_MAC_DUTY_CYCLE_REQ:
        {

            cidSize = 2;
            break;
        }
        case SRV_MAC_RX_PARAM_SETUP_REQ:
        {

            cidSize = 5;
            break;
        }
        case SRV_MAC_DEV_STATUS_REQ:
        {

            cidSize = 1;
            break;
        }
        case SRV_MAC_NEW_CHANNEL_REQ:
        {

            cidSize = 6;
            break;
        }
        case SRV_MAC_RX_TIMING_SETUP_REQ:
        {

            cidSize = 2;
            break;
        }
        case SRV_MAC_TX_PARAM_SETUP_REQ:
        {

            cidSize = 2;
            break;
        }
        case SRV_MAC_DL_CHANNEL_REQ:
        {

            cidSize = 5;
            break;
        }
        case SRV_MAC_DEVICE_TIME_ANS:
        {

            cidSize = 6;
            break;
        }
        case SRV_MAC_PING_SLOT_INFO_ANS:
        {

            cidSize = 1;
            break;
        }
        case SRV_MAC_PING_SLOT_CHANNEL_REQ:
        {

            cidSize = 5;
            break;
        }
        case SRV_MAC_BEACON_TIMING_ANS:
        {

            cidSize = 4;
            break;
        }
        case SRV_MAC_BEACON_FREQ_REQ:
        {

            cidSize = 4;
            break;
        }
        default:
        {

            break;
        }
    }
    return cidSize;
}
