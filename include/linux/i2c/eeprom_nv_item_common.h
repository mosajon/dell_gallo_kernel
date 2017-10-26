#ifndef _LINUX_EEPROM_NV_ITEM_COMMON_H
#define _LINUX_EEPROM_NV_ITEM_COMMON_H


/* Size of EEPROM in bytes */
#define EEPROM_SIZE		256

#define EEPROM_NV_ITEM_MAX_NAME_LEN 32
#define EEPROM_NV_ITEM_MAX_NUM 32

enum eeprom_nv_item_enum {
	EEPROM_NV_ITEM_VERSION,
	EEPROM_NV_ITEM_GSENSOR,
	EEPROM_NV_ITEM_GYRO,
	EEPROM_NV_ITEM_BT,
	EEPROM_NV_ITEM_CPU_TYPE,
	EEPROM_NV_ITEM_MODEL_ID,
	EEPROM_NV_ITEM_SKU,
	EEPROM_NV_ITEM_SIM_LOCK,
	EEPROM_NV_ITEM_SW_VERSION,
	EEPROM_NV_ITEM_LOCALE,
	EEPROM_NV_ITEM_ISN,
	EEPROM_NV_ITEM_OTA_VERSION,
	EEPROM_NV_ITEM_COUNTRY_CODE,
	EEPROM_NV_ITEM_SERVICE_TAG,
	EEPROM_NV_ITEM_START_USAGE,
	EEPROM_NV_ITEM_PPID,
	EEPROM_NV_ITEM_WIFI_ONLY,
	EEPROM_NV_ITEM_TOTAL,
};



enum eeprom_nv_item_size{
	EEPROM_SIZE_VERSION = 1,
	EEPROM_SIZE_GSENSOR = 12,
	EEPROM_SIZE_GYRO = 24,
	EEPROM_SIZE_BT = 18,
	EEPROM_SIZE_CPU_TYPE = 4,
	EEPROM_SIZE_MODEL_ID = 4,
	EEPROM_SIZE_SKU = 32,
	EEPROM_SIZE_SIM_LOCK = 16,
	EEPROM_SIZE_SW_VERSION = 16,
	EEPROM_SIZE_LOCALE = 16,
	EEPROM_SIZE_ISN = 14,
	EEPROM_SIZE_OTA_VERSION = 13,
	EEPROM_SIZE_COUNTRY_CODE = 2,
	EEPROM_SIZE_SERVICE_TAG = 7,
	EEPROM_SIZE_START_USAGE = 5,
	EEPROM_SIZE_PPID = 23,
	EEPROM_SIZE_WIFI_ONLY = 1,
};



enum eeprom_nv_item_offset{
	EEPROM_OFFSET_VERSION = 0,
	EEPROM_OFFSET_GSENSOR = EEPROM_OFFSET_VERSION + EEPROM_SIZE_VERSION,
	EEPROM_OFFSET_GYRO = EEPROM_OFFSET_GSENSOR + EEPROM_SIZE_GSENSOR,
	EEPROM_OFFSET_BT = EEPROM_OFFSET_GYRO + EEPROM_SIZE_GYRO,
	EEPROM_OFFSET_CPU_TYPE = EEPROM_OFFSET_BT + EEPROM_SIZE_BT,
	EEPROM_OFFSET_MODEL_ID = EEPROM_OFFSET_CPU_TYPE + EEPROM_SIZE_CPU_TYPE,
	EEPROM_OFFSET_SKU = EEPROM_OFFSET_MODEL_ID + EEPROM_SIZE_MODEL_ID,
	EEPROM_OFFSET_SIM_LOCK = EEPROM_OFFSET_SKU + EEPROM_SIZE_SKU,
	EEPROM_OFFSET_SW_VERSION = EEPROM_OFFSET_SIM_LOCK + EEPROM_SIZE_SIM_LOCK,
	EEPROM_OFFSET_LOCALE = EEPROM_OFFSET_SW_VERSION + EEPROM_SIZE_SW_VERSION,
	EEPROM_OFFSET_ISN = EEPROM_OFFSET_LOCALE + EEPROM_SIZE_LOCALE,
	EEPROM_OFFSET_OTA_VERSION = EEPROM_OFFSET_ISN + EEPROM_SIZE_ISN,
	EEPROM_OFFSET_COUNTRY_CODE = EEPROM_OFFSET_OTA_VERSION + EEPROM_SIZE_OTA_VERSION,
	EEPROM_OFFSET_SERVICE_TAG = EEPROM_OFFSET_COUNTRY_CODE + EEPROM_SIZE_COUNTRY_CODE,
	EEPROM_OFFSET_START_USAGE = EEPROM_OFFSET_SERVICE_TAG + EEPROM_SIZE_SERVICE_TAG,
	EEPROM_OFFSET_PPID = EEPROM_OFFSET_START_USAGE + EEPROM_SIZE_START_USAGE,
	EEPROM_OFFSET_WIFI_ONLY = EEPROM_OFFSET_PPID + EEPROM_SIZE_PPID,
};




#endif /* _LINUX_EEPROM_NV_ITEM_COMMON_H */
