/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011cb4e0; name: FUN_011cb4e0
 */


void FUN_011cb4e0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  puVar3 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar3 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  puVar1 = PTR_DAT_02725810 + 0x50;
  puVar2 = PTR_DAT_02725810 + 0xa8;
  *param_1 = (long)(PTR_DAT_02725810 + 0x10);
  param_1[1] = lVar5;
  param_1[9] = (long)puVar1;
  plVar6 = param_1 + 10;
  *plVar6 = (long)puVar2;
  param_1[0xb] = 0;
  FUN_011c6cf0(param_1 + 0xb,plVar6);
  puVar1 = PTR_DAT_02725818;
  *param_1 = (long)(PTR_DAT_02725818 + 0x10);
  param_1[9] = (long)(puVar1 + 0x70);
  *plVar6 = (long)(puVar1 + 200);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x80) != 0)) {
    lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    if (lVar4 != 0) goto LAB_011cb5c4;
  }
  lVar4 = FUN_0075ecb0();
LAB_011cb5c4:
  param_1[0xf] = lVar4;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_006cee90((long)param_1 + 0x94,1,0);
  param_1[0x14] = 0;
  return;
}


