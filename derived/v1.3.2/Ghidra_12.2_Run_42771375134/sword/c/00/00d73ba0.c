/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d73ba0; name: FUN_00d73ba0
 */


void FUN_00d73ba0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00d73be8:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00d73be8;
  }
  param_1[4] = lVar2;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00d73c1c:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00d73c1c;
  }
  param_1[10] = lVar2;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00d73c50:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00d73c50;
  }
  param_1[0x10] = lVar2;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00d73c84:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00d73c84;
  }
  param_1[0x16] = lVar2;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00d73cb8:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00d73cb8;
  }
  param_1[0x1c] = lVar2;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00d73cec:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00d73cec;
  }
  param_1[0x22] = lVar2;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00d73d20:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00d73d20;
  }
  param_1[0x28] = lVar2;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00d73d54:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00d73d54;
  }
  param_1[0x2e] = lVar2;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00d73d88:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00d73d88;
  }
  param_1[0x34] = lVar2;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x80) != 0)) {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 != 0) goto LAB_00d73dc0;
  }
  lVar2 = FUN_0075ecb0();
LAB_00d73dc0:
  param_1[0x3a] = lVar2;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_0075ecb0();
  }
  param_1[0x40] = lVar2;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *param_1 = param_2;
  return;
}


