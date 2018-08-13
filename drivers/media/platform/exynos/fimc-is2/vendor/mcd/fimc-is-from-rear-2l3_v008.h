#ifndef FIMC_IS_FROM_REAR_2L3_V008_H
#define FIMC_IS_FROM_REAR_2L3_V008_H

/* Header referenced section */
#define FROM_HEADER_START_ADDR				0x30
#define FROM_HEADER_END_ADDR				0x34
#define FROM_HEADER_VERSION_START_ADDR			0x50
#define FROM_HEADER2_VERSION_START_ADDR			0x40 /* REAR SECOND SENSOR (TELE) */
#define FROM_HEADER_MODULE_ID_START_ADDR		0x0
#define FROM_HEADER_MODULE_ID_SIZE			0x2
#define FROM_HEADER_CAL_MAP_VER_START_ADDR		0x70
#define FROM_HEADER_ISP_SETFILE_VER_START_ADDR		0x74
#define FROM_HEADER_PROJECT_NAME_START_ADDR		0x7E

#define FROM_HEADER_ISP_BINARY_START_ADDR		0x110	/*DDK*/
#define FROM_HEADER_ISP_BINARY_END_ADDR			0x114	/*DDK*/
#define FROM_HEADER_RTA_BINARY_LY_START_ADDR		0x100 /*RTA*/ /* rear : SONY(imx333) front : S.LSI(3H1) */
#define FROM_HEADER_RTA_BINARY_LY_END_ADDR		0x104 /*RTA*/ /* rear : SONY(imx333) front : LSI(3H1) */
#define FROM_HEADER_RTA_BINARY_LS_START_ADDR		0x108 /*RTA*/ /* rear : SONY(imx333) front : Sony(IMX320) */
#define FROM_HEADER_RTA_BINARY_LS_END_ADDR		0x10C /*RTA*/ /* rear : SONY(imx333) front : Sony(IMX320) */

#define FROM_HEADER_ISP_SETFILE_LL_START_ADDR		0xE0	/* 3M3 TELE*/
#define FROM_HEADER_ISP_SETFILE_LL_END_ADDR		0xE4	/* 3M3 TELE*/
#define FROM_HEADER_ISP_SETFILE2_LL_START_ADDR		0xE0	/* 3M3 TELE*/
#define FROM_HEADER_ISP_SETFILE2_LL_END_ADDR		0xE4	/* 3M3 TELE*/
#define FROM_HEADER_ISP_SETFILE_LS_START_ADDR		0xE8	/* IMX333 */
#define FROM_HEADER_ISP_SETFILE_LS_END_ADDR		0xEC	/* IMX333 */

#define FROM_HEADER_ISP_FRONT_SETFILE_LL_START_ADDR		0xF0	/* 3H1 */
#define FROM_HEADER_ISP_FRONT_SETFILE_LL_END_ADDR		0xF4	/* 3H1 */
#define FROM_HEADER_ISP_FRONT_SETFILE_LS_START_ADDR		0xF8	/* IMX320 */
#define FROM_HEADER_ISP_FRONT_SETFILE_LS_END_ADDR		0xFC	/* IMX320 */

#define FROM_HEADER_HIFI_TUNNINGFILE_LS_START_ADDR		0x118	/* IMX333 */
#define FROM_HEADER_HIFI_TUNNINGFILE_LS_END_ADDR		0x11C	/* IMX333 */

#define FROM_HEADER_SHADING_START_ADDR			0x00
#define FROM_HEADER_SHADING_END_ADDR			0x04
#define FROM_HEADER_SHADING_F2_START_ADDR		0x08	/* WIDE2 */
#define FROM_HEADER_SHADING_F2_END_ADDR			0x0C	/* WIDE2 */

#define FROM_HEADER_PDAF_CAL_START_ADDR			0x10
#define FROM_HEADER_PDAF_CAL_END_ADDR			0x14
#define FROM_HEADER_PDAF_CAL_F2_START_ADDR		0x18	/* WIDE2 */
#define FROM_HEADER_PDAF_CAL_F2_END_ADDR		0x1C	/* WIDE2 */

#define FROM_HEADER_SHADING2_START_ADDR			0x20	/* TELE */
#define FROM_HEADER_SHADING2_END_ADDR			0x24	/* TELE */
#define FROM_HEADER_PDAF2_CAL_START_ADDR		0x28	/* TELE */
#define FROM_HEADER_PDAF2_CAL_END_ADDR			0x2C	/* TELE */

#define FROM_HEADER_MODULE_ID_ADDR			(0xA8 + 6)  /* 0xA8 + reserved bytes*/
#define FROM_HEADER_SENSOR_ID_ADDR			0xB8	/* WIDE Sensor ID */
#define FROM_HEADER_SENSOR2_ID_ADDR			0xC8	/* TELE Sensor ID */
#define FROM_HEADER_SENSOR_VERSION_ADDR			0xC0
#define FROM_HEADER_MTF_DATA_ADDR			0x160	/* WIDE */
#define FROM_HEADER_MTF_DATA_F2_ADDR			0x196	/* WIDE2 */
#define FROM_HEADER_MTF_DATA2_ADDR			0x1CC	/* TELE */

#define FROM_HEADER_CAL_DATA_START_ADDR			0x1000

/* Shading referenced section */
#define FROM_SHADING_LSC_I0_GAIN_ADDR			0x1006
#define FROM_SHADING_LSC_J0_GAIN_ADDR			0x1008
#define FROM_SHADING_LSC_A_GAIN_ADDR			0x100A
#define FROM_SHADING_LSC_K4_GAIN_ADDR			0x100E
#define FROM_SHADING_LSC_SCALE_GAIN_ADDR		0x1012
#define FROM_SHADING_LSC_GAIN_START_ADDR		0x1014
#define FROM_SHADING_LSC_GAIN_END_ADDR			0x29DB
#define FROM_PAF_CAL_DATA_START_ADDR			0x43E0
#define FROM_CAL_PAF_ERROR_CHECK_CODE_ADDR		0x43F4 /* TEMP */

#define FROM_F2_SHADING_LSC_I0_GAIN_ADDR		0x29F6
#define FROM_F2_SHADING_LSC_J0_GAIN_ADDR		0x29F8
#define FROM_F2_SHADING_LSC_A_GAIN_ADDR			0x29FA
#define FROM_F2_SHADING_LSC_K4_GAIN_ADDR		0x29FE
#define FROM_F2_SHADING_LSC_SCALE_GAIN_ADDR		0x2A02
#define FROM_F2_SHADING_LSC_GAIN_START_ADDR		0x2A04
#define FROM_F2_SHADING_LSC_GAIN_END_ADDR		0x43CB
#define FROM_F2_CAL_PAF_ERROR_CHECK_CODE_ADDR		0x5824 /* TEMP */

/* Shading referenced section - REAR2 (TELE) */
#define FROM_REAR2_SHADING_LSC_I0_GAIN_ADDR			0x8006
#define FROM_REAR2_SHADING_LSC_J0_GAIN_ADDR			0x8008
#define FROM_REAR2_SHADING_LSC_A_GAIN_ADDR			0x800A
#define FROM_REAR2_SHADING_LSC_K4_GAIN_ADDR			0x800E
#define FROM_REAR2_SHADING_LSC_SCALE_GAIN_ADDR			0x8012
#define FROM_REAR2_SHADING_LSC_GAIN_START_ADDR			0x8014
#define FROM_REAR2_SHADING_LSC_GAIN_END_ADDR			0x99DB

#define FROM_REAR2_CAL_PAF_ERROR_CHECK_CODE_ADDR		0x9A04 /* TEMP */
/* CRC section */
#define FROM_REAR2_SHADING_LSC_GAIN_CRC_ADDR			0x99DC
#define FROM_REAR2_DUAL_CAM_CAL_DATA_CRC_ADDR			0xB91C /* SW IP */
#define FROM_REAR2_DUAL_CAM_F2_CAL_DATA_CRC_ADDR		0xC93C /* HW IP */

/* AWB referenced section */
#define FROM_REAR_AWB_MASTER_ADDR				0x6C70 /* WIDE */
#define FROM_REAR_AWB_MODULE_ADDR				0x6C94
#define FROM_REAR_F2_AWB_MASTER_ADDR				0x6CB0 /* WIDE2 */
#define FROM_REAR_F2_AWB_MODULE_ADDR				0x6CD4
#define FROM_REAR2_AWB_MASTER_ADDR				0xA850
#define FROM_REAR2_AWB_MODULE_ADDR				0xA874

/* Rear2 Cal Dual Calibration */
#define FROM_REAR2_DUAL_CAL					0xA900

/* Rear2 Cal Dual Calibration Data2 */
#define FROM_REAR2_DUAL_SW_CAL2					0xA900
#define FROM_REAR2_DUAL_SW_CAL2_SIZE				4112

#define FROM_REAR2_DUAL_HW_CAL2					0xB920
#define FROM_REAR2_DUAL_HW_CAL2_SIZE				4112

#define FROM_REAR2_DUAL_TILT_X			(FROM_REAR2_DUAL_CAL + 96)
#define FROM_REAR2_DUAL_TILT_Y			(FROM_REAR2_DUAL_CAL + 100)
#define FROM_REAR2_DUAL_TILT_Z			(FROM_REAR2_DUAL_CAL + 104)
#define FROM_REAR2_DUAL_TILT_SX			(FROM_REAR2_DUAL_CAL + 192)
#define FROM_REAR2_DUAL_TILT_SY			(FROM_REAR2_DUAL_CAL + 196)
#define FROM_REAR2_DUAL_TILT_RANGE		(FROM_REAR2_DUAL_CAL + 4080)
#define FROM_REAR2_DUAL_TILT_MAX_ERR		(FROM_REAR2_DUAL_CAL + 4084)
#define FROM_REAR2_DUAL_TILT_AVG_ERR		(FROM_REAR2_DUAL_CAL + 4088)
#define FROM_REAR2_DUAL_TILT_DLL_VERSION	(FROM_REAR2_DUAL_CAL + 0)

/* ISP binary referenced section */
#define FROM_ISP_BINARY_SETFILE_START_ADDR		0xC000
#define FROM_ISP_BINARY_SETFILE_END_ADDR		0x3CEFFF

/* Checksum referenced section */
#define FROM_CHECKSUM_HEADER_ADDR				0xFFC
#define FROM_CHECKSUM_CAL_DATA_ADDR				0x7FFC
#define FROM_CAL_DATA_START_ADDR				0x1000
#define FROM_CAL_DATA_END_ADDR					0x761F

#define FROM_REAR2_CHECKSUM_CAL_DATA_ADDR		0xCFFC
#define FROM_REAR2_CAL_DATA_START_ADDR			0x8000
#define FROM_REAR2_CAL_DATA_END_ADDR			0xCD9F

/* etc section */
#define FIMC_IS_MAX_CAL_SIZE				(64 * 1024)
#define FIMC_IS_FROM_ERASE_SIZE				(64 * 1024)
#define FIMC_IS_MAX_FW_SIZE					(1300 * 1024)
#define FIMC_IS_MAX_RTA_FW_SIZE				(700 * 1024)
#define FIMC_IS_MAX_SETFILE_SIZE_LS			(288 * 1024)
#define FIMC_IS_MAX_SETFILE_SIZE_LL			(288 * 1024)
#define FIMC_IS_MAX_SETFILE_SIZE_FRONT_LL	(288 * 1024)
#define FIMC_IS_MAX_SETFILE_SIZE_FRONT_LS	(288 * 1024)
#define FIMC_IS_MAX_HIFI_TUNNING_SIZE_LS	(64 * 1024)


#define HEADER_CRC32_LEN					(0x170)
#define FROM_AF_CAL_D10_ADDR				0x6C50
#define FROM_AF_CAL_D50_ADDR				0x6C48
#define FROM_AF_CAL_PAN_ADDR				0x6C44
#define FROM_AF_CAL_MACRO_ADDR				FROM_AF_CAL_D10_ADDR
#define FROM_AF_CAL_D1_ADDR				0x6C4C

#define FROM_AF2_CAL_PAN_ADDR				0xA824 /* 120cm */
#define FROM_AF2_CAL_D50_ADDR				0xA828
#define FROM_AF2_CAL_MACRO_ADDR				0xA830	/* REAR SECOND SENSOR (TELE) */
#define FROM_AF2_CAL_D1_ADDR				0xA82C	/* REAR SECOND SENSOR (TELE) */
#define FROM_PAF_OFFSET_MID_ADDR		(FROM_PAF_CAL_DATA_START_ADDR + 0x0730) /* REAR PAF OFFSET MID (30CM, WIDE) */
#define FROM_PAF_OFFSET_MID_SIZE		936
#define FROM_PAF_OFFSET_PAN_ADDR		(FROM_PAF_CAL_DATA_START_ADDR + 0x0CD0) /* REAR PAF OFFSET FAR (1M, WIDE) */
#define FROM_PAF_OFFSET_PAN_SIZE		234

#define FROM_REAR2_FLAG_DUMMY_ADDR			0xB896
#define FROM_REAR2_IMAGE_CROP_NUM_ADDR			0xB897

#define CHECKSUM_SEED_SETF_LL				0x54FFC		/* 3M3 */
#define CHECKSUM_SEED_SETF2_LL				0x54FFC		/* 3M3 */
#define CHECKSUM_SEED_SETF_LS				0x9CFFC		/* IMX333 */
#define CHECKSUM_SEED_FRONT_SETF_LL			0xE4FFC		/* 3H1 */
#define CHECKSUM_SEED_FRONT_SETF_LS			0x12CFFC	/* IMX320 */


#define CHECKSUM_SEED_ISP_FW_RTA_LY			0x1DBFFC
#define CHECKSUM_SEED_ISP_FW_RTA_LS			0x28AFFC
#define CHECKSUM_SEED_ISP_FW				0x3CFFFC

#define CHECKSUM_SEED_HIFI_TUNNING_LS			0x3DFFFC

#define FROM_WRITE_CHECKSUM_SETF_LS			0x9CFFC
#define FROM_WRITE_CHECKSUM_SETF_LL			0x54FFC

/* TUNNING HIFI LLS DATA */
#define FIMC_IS_TUNNING_HIFILLS			"libhifills_LSIRe_imx333.dat"

#endif /* FIMC_IS_FROM_REAR_2L3_V008_H */
