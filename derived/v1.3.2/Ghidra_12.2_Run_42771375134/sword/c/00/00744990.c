/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00744990; name: FUN_00744990
 */


void FUN_00744990(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_007449d0:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_007449d0;
  }
  param_1[3] = lVar2;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00744a04:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00744a04;
  }
  param_1[9] = lVar2;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x80) != 0)) {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 != 0) goto LAB_00744a3c;
  }
  lVar2 = FUN_0075ecb0();
LAB_00744a3c:
  param_1[0xf] = lVar2;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_0075ecb0();
  }
  param_1[0x15] = lVar2;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return;
}


