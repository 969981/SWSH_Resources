/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01020fb0; name: FUN_01020fb0
 */


void FUN_01020fb0(long *param_1)

{
  undefined *puVar1;
  
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_02723770 + 0x10;
  param_1[2] = 0;
  *param_1 = (long)puVar1;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  nn::hid::SetSupportedNpadStyleSet(0x47);
  nn::hid::SetSupportedNpadIdType((uint *)&DAT_02162794,3);
  nn::hid::SetNpadJoyHoldType(0);
  nn::hid::SetNpadHandheldActivationMode(1);
  nn::hid::BindNpadStyleSetUpdateEvent(&DAT_02162794,param_1 + 0x12,0);
  nn::hid::BindNpadStyleSetUpdateEvent(&DAT_02162798,param_1 + 0x18,0);
  nn::hid::BindNpadStyleSetUpdateEvent(&DAT_0216279c,param_1 + 0x1e,0);
  return;
}


