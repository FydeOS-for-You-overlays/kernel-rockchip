/****************************************************************************/
/*                                                                          */
/*                                               */
/*                                                                          */
/*              Copyright 2020 All rights reserved                 */
/*                                                                          */
/****************************************************************************/

#ifndef _SND_SOC_AIC3106_H_
#define _SND_SOC_AIC3106_H_

/****************************************************************************/
/*                                                                          */
/*              宏定义                                                      */
/*                                                                          */
/****************************************************************************/
// AIC3106 Slave Address
#define I2C_SLAVE_CODEC_AIC31                 (0x18)
#define I2C_SLAVE_CODEC_AIC31_1               (0x1B)

#define AIC31_RESET                 (0x80)

//#define I2S_SLOTS					(2u)					// I2S \u4f7f\u75282\u4e2a slot
#define SLOT_SIZE					(16u)					// \u53d1\u9001/\u63a5\u6536 \u6bcf\u4e2a slot \u5927\u5c0f
//#define WORD_SIZE					(16u)	

#define AIC31_SLOT_WIDTH_16         (0 << 4)
#define AIC31_SLOT_WIDTH_20         (1 << 4)
#define AIC31_SLOT_WIDTH_24         (2 << 4)
#define AIC31_SLOT_WIDTH_32         (3 << 4)

// AIC3106 数据类型模式配置
#define AIC31_DATATYPE_I2S             (0 << 6) /* I2S 模式 */
#define AIC31_DATATYPE_DSP             (1 << 6) /* DSP 模式 */
#define AIC31_DATATYPE_RIGHTJ          (2 << 6) /* 右对齐模式 */
#define AIC31_DATATYPE_LEFTJ           (3 << 6) /* 左对齐模式 */

// AIC31 ADC 输入选择
#define AIC31_LINE_IN                  (0)
#define AIC31_MIC_IN                   (1)

// AIC31SampleRateConfig 函数的传入参数
#define AIC31_MODE_ADC                 (0xF0)
#define AIC31_MODE_DAC                 (0x0F)
#define AIC31_MODE_BOTH                (0xFF)

// 采样率
#define FS_8000_HZ 					(8000)
#define FS_11025_HZ 					(11025)
#define FS_16000_HZ 					(16000)
#define FS_22050_HZ 					(22050)
#define FS_24000_HZ 					(24000)
#define FS_32000_HZ 					(32000)
#define FS_44100_HZ 					(44100)
#define FS_48000_HZ 					(48000)
#define FS_96000_HZ 					(96000)

// ADC 增益 列出部分增益值
#define ADC_GAIN_0DB 					(0)
#define ADC_GAIN_3DB 					(3)
#define ADC_GAIN_6DB 					(6)
#define ADC_GAIN_9DB 					(9)
#define ADC_GAIN_12DB 					(12)
#define ADC_GAIN_15DB 					(15)
#define ADC_GAIN_18DB 					(18)
#define ADC_GAIN_21DB 					(21)
#define ADC_GAIN_24DB 					(24)
#define ADC_GAIN_27DB 					(27)
#define ADC_GAIN_30DB 					(30)
#define ADC_GAIN_33DB 					(33)
#define ADC_GAIN_36DB 					(36)
#define ADC_GAIN_39DB 					(39)
#define ADC_GAIN_42DB 					(42)
#define ADC_GAIN_45DB 					(45)
#define ADC_GAIN_48DB 					(48)
#define ADC_GAIN_51DB 					(51)
#define ADC_GAIN_54DB 					(54)
#define ADC_GAIN_57DB 					(57)
#define ADC_GAIN_59DB 					(59)

// DAC 衰减 列出部分衰减值
#define DAC_ATTEN_0DB 					(0)
#define DAC_ATTEN_3DB 					(3)
#define DAC_ATTEN_6DB 					(6)
#define DAC_ATTEN_9DB 					(9)
#define DAC_ATTEN_12DB 					(12)
#define DAC_ATTEN_15DB 					(15)
#define DAC_ATTEN_18DB 					(18)
#define DAC_ATTEN_21DB 					(21)
#define DAC_ATTEN_24DB 					(24)

// AIC3106 寄存器地址
#define AIC31_P0_REG0               (0)  /* Page Select  */
#define AIC31_P0_REG1               (1)  /* Software Reset */
#define AIC31_P0_REG2               (2)  /* Codec Sample Rate Select */
#define AIC31_P0_REG3               (3)  /* PLL Programming A */
#define AIC31_P0_REG4               (4)  /* PLL Programming B */
#define AIC31_P0_REG5               (5)  /* PLL Programming C */
#define AIC31_P0_REG6               (6)  /* PLL Programming D */
#define AIC31_P0_REG7               (7)  /* Codec Datapath Setup */
#define AIC31_P0_REG8               (8)  /* Audio Serial Data I/f Control A */
#define AIC31_P0_REG9               (9)  /* Audio Serial Data I/f Control B */
#define AIC31_P0_REG10              (10) /* Audio Serial Data I/f Control C */
#define AIC31_P0_REG11              (11) /* Audio Codec Overflow Flag */
#define AIC31_P0_REG12              (12) /* Audio Codec Digital Filter Ctrl */
#define AIC31_P0_REG13              (13) /* Headset / Button Press Detect A */
#define AIC31_P0_REG14              (14) /* Headset / Button Press Detect B */
#define AIC31_P0_REG15              (15) /* Left ADC PGA Gain Control */
#define AIC31_P0_REG16              (16) /* Right ADC PGA Gain Control */
#define AIC31_P0_REG17              (17) /* MIC3L/R to Left ADC Control */
#define AIC31_P0_REG18              (18) /* MIC3L/R to Right ADC Control */
#define AIC31_P0_REG19              (19) /* LINE1L to Left ADC Control */
#define AIC31_P0_REG20              (20) /* LINE2L to Left ADC Control */
#define AIC31_P0_REG21              (21) /* LINE1R to Left ADC Control */
#define AIC31_P0_REG22              (22) /* LINE1R to Right ADC Control */
#define AIC31_P0_REG23              (23) /* LINE2R to Right ADC Control */
#define AIC31_P0_REG24              (24) /* LINE1L to Right ADC Control */
#define AIC31_P0_REG25              (25) /* MICBIAS Control */
#define AIC31_P0_REG26              (26) /* Left AGC Control A */
#define AIC31_P0_REG27              (27) /* Left AGC Control B */
#define AIC31_P0_REG28              (28) /* Left AGC Control C */
#define AIC31_P0_REG29              (29) /* Right AGC Control A */
#define AIC31_P0_REG30              (30) /* Right AGC Control B */
#define AIC31_P0_REG31              (31) /* Right AGC Control C */
#define AIC31_P0_REG32              (32) /* Left AGC Gain */
#define AIC31_P0_REG33              (33) /* Right AGC Gain */
#define AIC31_P0_REG34              (34) /* Left AGC Noise Gate Debounce */
#define AIC31_P0_REG35              (35) /* Right AGC Noise Gate Debounce */
#define AIC31_P0_REG36              (36) /* ADC Flag */
#define AIC31_P0_REG37              (37) /* DAC Power and Output Driver Control */
#define AIC31_P0_REG38              (38) /* High Power Output Driver Control*/
#define AIC31_P0_REG40              (40) /* High Power Output Stage Control*/
#define AIC31_P0_REG41              (41) /* DAC Output Switching Control */
#define AIC31_P0_REG42              (42) /* Output Driver Pop Reduction */
#define AIC31_P0_REG43              (43) /* Left DAC Digital Volume Control */
#define AIC31_P0_REG44              (44) /* Right DAC Digital Volume Control */
#define AIC31_P0_REG45              (45) /* LINE2L to HPLOUT Volume Control */
#define AIC31_P0_REG46              (46) /* PGA_L to HPLOUT Volume Control */
#define AIC31_P0_REG47              (47) /* DAC_L1 to HPLOUT Volume Control */
#define AIC31_P0_REG48              (48) /* LINE2R to HPLOUT Volume Control */
#define AIC31_P0_REG49              (49) /* PGA_R to HPLOUT Volume Control */
#define AIC31_P0_REG50              (50) /* DAC_R1 to HPLOUT Volume Control */
#define AIC31_P0_REG51              (51) /* HPLOUT Output Level Control */
#define AIC31_P0_REG52              (52) /* LINE2L to HPLCOM Volume Control */
#define AIC31_P0_REG53              (53) /* PGA_L to HPLCOM Volume Control */
#define AIC31_P0_REG54              (54) /* DAC_L1 to HPLCOM Volume Control */
#define AIC31_P0_REG55              (55) /* LINE2R to HPLCOM Volume Control */
#define AIC31_P0_REG56              (56) /* PGA_R to HPLCOM Volume Control */
#define AIC31_P0_REG57              (57) /* DAC_R1 to HPLCOM Volume Control */
#define AIC31_P0_REG58              (58) /* HPLCOM Output Level Control */
#define AIC31_P0_REG59              (59) /* LINE2L to HPROUT Volume Control */
#define AIC31_P0_REG60              (60) /* PGA_L to HPROUT Volume Control */
#define AIC31_P0_REG61              (61) /* DAC_L1 to HPROUT Volume Control */
#define AIC31_P0_REG62              (62) /* LINE2R to HPROUT Volume Control */
#define AIC31_P0_REG63              (63) /* PGA_R to HPROUT Volume Control  */
#define AIC31_P0_REG64              (64) /* DAC_R1 to HPROUT Volume Control */
#define AIC31_P0_REG65              (65) /* HPROUT Output Level Control */
#define AIC31_P0_REG66              (66) /* LINE2L to HPRCOM Volume Control  */
#define AIC31_P0_REG67              (67) /* PGA_L to HPRCOM Volume Control */
#define AIC31_P0_REG68              (68) /* DAC_L1 to HPRCOM Volume Control */
#define AIC31_P0_REG69              (69) /* LINE2R to HPRCOM Volume Control */
#define AIC31_P0_REG70              (70) /* PGA_R to HPRCOM Volume Control */
#define AIC31_P0_REG71              (71) /* DAC_R1 to HPRCOM Volume Control */
#define AIC31_P0_REG72              (72) /* HPRCOM Output Level Control */
#define AIC31_P0_REG73              (73) /* LINE2L to MONO_LOP/M Volume Control*/
#define AIC31_P0_REG74              (74) /* PGA_L to MONO_LOP/M Volume Control */
#define AIC31_P0_REG75              (75) /* DAC_L1 to MONO_LOP/M Volume Control */
#define AIC31_P0_REG76              (76) /* LINE2R to MONO_LOP/M Volume Control */
#define AIC31_P0_REG77              (77) /* PGA_R to MONO_LOP/M Volume Control */
#define AIC31_P0_REG78              (78) /* DAC_R1 to MONO_LOP/M Volume Control */
#define AIC31_P0_REG79              (79) /* MONO_LOP/M Output Level Control */
#define AIC31_P0_REG80              (80) /* LINE2L to LEFT_LOP/M Volume Control */
#define AIC31_P0_REG81              (81) /* PGA_L to LEFT_LOP/M Volume Control */
#define AIC31_P0_REG82              (82) /* DAC_L1 to LEFT_LOP/M Volume Control */
#define AIC31_P0_REG83              (83) /* LINE2R to LEFT_LOP/M Volume Control */
#define AIC31_P0_REG84              (84) /* PGA_R to LEFT_LOP/M Volume Control */
#define AIC31_P0_REG85              (85) /* DAC_R1 to LEFT_LOP/M Volume Control */
#define AIC31_P0_REG86              (86) /* LEFT_LOP/M Output Level Control */
#define AIC31_P0_REG87              (87) /* LINE2L to RIGHT_LOP/M Volume Control */
#define AIC31_P0_REG88              (88) /* PGA_L to RIGHT_LOP/M Volume Control */
#define AIC31_P0_REG89              (89) /* DAC_L1 to RIGHT_LOP/M Volume Control */
#define AIC31_P0_REG90              (90) /* LINE2R to RIGHT_LOP/M Volume Control */
#define AIC31_P0_REG91              (91) /* PGA_R to RIGHT_LOP/M Volume Control */
#define AIC31_P0_REG92              (92) /* DAC_R1 to RIGHT_LOP/M Volume Control*/
#define AIC31_P0_REG93              (93) /* RIGHT_LOP/M Output Level Control */
#define AIC31_P0_REG94              (94) /* Module Power Status */
#define AIC31_P0_REG95              (95) /**< O/P Driver Short Circuit Detection Status*/
#define AIC31_P0_REG96              (96) /* Sticky Interrupt Flags */
#define AIC31_P0_REG97              (97) /* Real-time Interrupt Flags  */
#define AIC31_P0_REG98              (98) /* GPIO1 Control */
#define AIC31_P0_REG99              (99) /* GPIO2 Control */
#define AIC31_P0_REG100             (100)  /* Additional GPIO Control A */
#define AIC31_P0_REG101             (101)  /* Additional GPIO Control B */
#define AIC31_P0_REG102             (102)  /* Clock Generation Control */
#define AIC31_P0_REG107             (107)  /* New Programmable ADC Digital Path And I2C Bus Condition Register */

struct aic3106_data{
	struct snd_soc_codec *codec;
	int reset_pin;
	struct regulator* dvdd;
	struct regulator* drvdd;
};

static void AIC31Reset(struct i2c_client *client);
static void AIC31DataConfig(struct i2c_client *client, unsigned char dataType,
                            unsigned char slotWidth, unsigned char dataOff);
static void AIC31SampleRateConfig(struct i2c_client *client, unsigned int mode,
                                  unsigned int sampleRate);
static void AIC31ADCInit(struct i2c_client *client, int adcGain, unsigned char inSource);
static void AIC31DACInit(struct i2c_client *client, int dacAtten);
//static void AIC31ADCInitMaster(struct i2c_client *client, float adcGain, unsigned char inSource);

#endif
