/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01072130; name: FUN_01072130
 */


void FUN_01072130(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_01072174:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_01072174;
  }
  param_1[5] = lVar2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_010721a8:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_010721a8;
  }
  param_1[0xb] = lVar2;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_010721dc:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_010721dc;
  }
  param_1[0x11] = lVar2;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_01072210:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_01072210;
  }
  param_1[0x17] = lVar2;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_01072244:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_01072244;
  }
  param_1[0x1d] = lVar2;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_01072278:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_01072278;
  }
  param_1[0x23] = lVar2;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x80) != 0)) {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 != 0) goto LAB_010722b0;
  }
  lVar2 = FUN_0075ecb0();
LAB_010722b0:
  param_1[0x29] = lVar2;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_0075ecb0();
  }
  param_1[0x2f] = lVar2;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  return;
}


