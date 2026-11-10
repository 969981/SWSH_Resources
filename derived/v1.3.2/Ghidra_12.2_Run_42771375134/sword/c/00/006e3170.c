/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e3170; name: FUN_006e3170
 */


void FUN_006e3170(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
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
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar5;
  *PTR_DAT_02715530 = 1;
  puVar2 = PTR_DAT_02715538;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x40);
  FUN_006e32d0(param_1 + 0xe);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x80) != 0)) {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 != 0) goto LAB_006e3234;
  }
  lVar3 = FUN_0075ecb0();
LAB_006e3234:
  param_1[0x1b] = lVar3;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0x1f] = lVar3;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x3f800000;
  FUN_006cee90((long)param_1 + 0x124,1,0);
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2f] = 0x900000000;
  param_1[0x30] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  FUN_006cee90((long)param_1 + 0x1c4,1,0);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  puVar4 = (undefined8 *)FUN_006d0890();
  FUN_006e5950(*(undefined1 *)*puVar4);
  return;
}


