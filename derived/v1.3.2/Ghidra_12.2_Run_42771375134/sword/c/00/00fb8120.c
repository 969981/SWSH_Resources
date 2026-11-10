/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb8120; name: FUN_00fb8120
 */


void FUN_00fb8120(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined8 *)((long)param_1 + 0x44) = 0x300000100;
  *param_1 = (long)(PTR_DAT_02722ec0 + 0x10);
  param_1[1] = lVar3;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x452be0000000001e;
  *(undefined8 *)((long)param_1 + 0x54) = 0x453b80004ae6ca08;
  *(undefined8 *)((long)param_1 + 0x5c) = 0x459c40004b095440;
  *(undefined4 *)((long)param_1 + 100) = 0x4b262b10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00fb821c:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00fb821c;
  }
  param_1[0x10] = lVar2;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00fb8250:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00fb8250;
  }
  param_1[0x19] = 0;
  param_1[0x16] = lVar2;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00fb8288:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00fb8288;
  }
  param_1[0x1f] = 0;
  param_1[0x1c] = lVar2;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00fb82c0:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00fb82c0;
  }
  param_1[0x22] = lVar2;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00fb82f4:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00fb82f4;
  }
  param_1[0x28] = lVar2;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
LAB_00fb8328:
    lVar2 = FUN_0075ecb0();
  }
  else {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 == 0) goto LAB_00fb8328;
  }
  param_1[0x2e] = lVar2;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x31] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) ||
     (lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8), lVar2 == 0)) {
    lVar2 = FUN_0075ecb0();
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x34] = lVar2;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0xffffffff;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  lVar2 = *(long *)PTR_DAT_027152c0;
  lVar3 = *(long *)(PTR_DAT_027152c0 + 8);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3c] = lVar2;
  param_1[0x3d] = lVar3;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x80) != 0)) {
    lVar2 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    if (lVar2 != 0) goto LAB_00fb83cc;
  }
  lVar2 = FUN_0075ecb0();
LAB_00fb83cc:
  param_1[0x41] = lVar2;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  FUN_00fb8470(param_1 + 0xd,0x100);
  FUN_00fb85f0(param_1 + 0x19,0x100);
  FUN_00fb8740(param_1 + 0x1f,(long)(int)param_1[9]);
  FUN_00fb88f0(param_1 + 0x25,(long)(int)param_1[9]);
  FUN_00fb8aa0(param_1 + 0x2b,(long)(int)param_1[9]);
  FUN_00fb8c50(param_1 + 0x31,(long)*(int *)((long)param_1 + 0x4c));
  FUN_00fb8e00(param_1,param_1[1]);
  nn::os::GetSystemTick();
  lVar2 = nn::os::ConvertToTimeSpan();
  param_1[0x4a] = lVar2;
  FUN_00fb91d0(param_1 + 0x3e,3);
  return;
}


