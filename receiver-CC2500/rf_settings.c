#ifndef RF_SETTING
#define RF_SETTING
struct rf_setting {
    uint8_t address;
    uint8_t value;
};
typedef struct rf_setting RF_setting;
#endif
RF_setting radio_settings[] = {
    {.address = 0x0002, .value = 0x06}, // CC2500_IOCFG0: GDO0Output Pin Configuration 

RF_setting radio_settings[] = {
    {.address = 0x0008, .value = 0x05}, // CC2500_PKTCTRL0: Packet Automation Control

RF_setting radio_settings[] = {
    {.address = 0x000a, .value = 0x03}, // CC2500_CHANNR: Channel Number 

RF_setting radio_settings[] = {
    {.address = 0x000b, .value = 0x0A}, // CC2500_FSCTRL1: Frequency Synthesizer Control 

RF_setting radio_settings[] = {
    {.address = 0x000d, .value = 0x5D}, // CC2500_FREQ2: Frequency Control Word, High Byte 

RF_setting radio_settings[] = {
    {.address = 0x000e, .value = 0x44}, // CC2500_FREQ1: Frequency Control Word, Middle Byte 

RF_setting radio_settings[] = {
    {.address = 0x0010, .value = 0x2D}, // CC2500_MDMCFG4: Modem Configuration 

RF_setting radio_settings[] = {
    {.address = 0x0011, .value = 0x3B}, // CC2500_MDMCFG3: Modem Configuration 

RF_setting radio_settings[] = {
    {.address = 0x0012, .value = 0x73}, // CC2500_MDMCFG2: Modem Configuration

RF_setting radio_settings[] = {
    {.address = 0x0013, .value = 0x23}, // CC2500_MDMCFG1: Modem Configuration

RF_setting radio_settings[] = {
    {.address = 0x0014, .value = 0x3B}, // CC2500_MDMCFG0: Modem Configuration 

RF_setting radio_settings[] = {
    {.address = 0x0015, .value = 0x01}, // CC2500_DEVIATN: Modem Deviation Setting 

RF_setting radio_settings[] = {
    {.address = 0x0018, .value = 0x18}, // CC2500_MCSM0: Main Radio Control State Machine Configuration 

RF_setting radio_settings[] = {
    {.address = 0x0019, .value = 0x1D}, // CC2500_FOCCFG: Frequency Offset Compensation Configuration

RF_setting radio_settings[] = {
    {.address = 0x001a, .value = 0x1C}, // CC2500_BSCFG: Bit Synchronization Configuration

RF_setting radio_settings[] = {
    {.address = 0x001b, .value = 0xC7}, // CC2500_AGCCTRL2: AGC Control

RF_setting radio_settings[] = {
    {.address = 0x001c, .value = 0x00}, // CC2500_AGCCTRL1: AGC Control

RF_setting radio_settings[] = {
    {.address = 0x001d, .value = 0xB0}, // CC2500_AGCCTRL0: AGC Control

RF_setting radio_settings[] = {
    {.address = 0x0021, .value = 0xB6}, // CC2500_FREND1: Front End RX Configuration 

RF_setting radio_settings[] = {
    {.address = 0x0023, .value = 0xEA}, // CC2500_FSCAL3: Frequency Synthesizer Calibration 

RF_setting radio_settings[] = {
    {.address = 0x0025, .value = 0x00}, // CC2500_FSCAL1: Frequency Synthesizer Calibration 

RF_setting radio_settings[] = {
    {.address = 0x0026, .value = 0x11}, // CC2500_FSCAL0: Frequency Synthesizer Calibration 

};
