/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fc830; name: FUN_006fc830
 */


void FUN_006fc830(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
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
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar4;
  puVar2 = PTR_DAT_02715848;
  *PTR_DAT_02715840 = 1;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x40);
  FUN_0199e500(param_1 + 10);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = -1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x80) != 0)) {
    lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    if (lVar3 != 0) goto LAB_006fc8fc;
  }
  lVar3 = FUN_0075ecb0();
LAB_006fc8fc:
  param_1[0x19] = lVar3;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_006cee90((long)param_1 + 0xe4,1,0);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0x22] = lVar3;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  return;
}


