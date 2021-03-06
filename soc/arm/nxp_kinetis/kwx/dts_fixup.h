/* SPDX-License-Identifier: Apache-2.0 */

/* SoC level DTS fixup file */

#define DT_ADC_0_NAME			DT_NXP_KINETIS_ADC16_4003B000_LABEL

#define DT_RTC_0_NAME				DT_LABEL(DT_INST(0, nxp_kinetis_rtc))

#if defined(CONFIG_SOC_MKW22D5) || defined(CONFIG_SOC_MKW24D5)
#define DT_FLASH_DEV_BASE_ADDRESS		DT_NXP_KINETIS_FTFL_40020000_BASE_ADDRESS
#define DT_FLASH_DEV_NAME			DT_NXP_KINETIS_FTFL_40020000_LABEL

#endif /* CONFIG_SOC_MKW22D5 || CONFIG_SOC_MKW24D5 */

#if defined(CONFIG_SOC_MKW40Z4) || defined(CONFIG_SOC_MKW41Z4)

#define DT_FLASH_DEV_BASE_ADDRESS		DT_NXP_KINETIS_FTFA_40020000_BASE_ADDRESS
#define DT_FLASH_DEV_NAME			DT_NXP_KINETIS_FTFA_40020000_LABEL

#endif /* CONFIG_SOC_MKW40Z4 || CONFIG_SOC_MKW41Z4 */
/* End of SoC Level DTS fixup file */
