/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01050510; name: FUN_01050510
 */


void FUN_01050510(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  FUN_006dae20(param_1,0);
  *(undefined1 *)((long)param_1 + 0xf1) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  puVar9 = PTR_DAT_02723990;
  puVar8 = PTR_DAT_02715420;
  param_1[0x29] = 0;
  puVar10 = PTR_DAT_02723998;
  lVar11 = *(long *)puVar8;
  lVar3 = *(long *)(puVar8 + 8);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  puVar8 = PTR_DAT_02715410;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *param_1 = (long)(puVar9 + 0x10);
  lVar1 = *(long *)(puVar8 + 0x30);
  lVar4 = *(long *)(puVar8 + 0x38);
  param_1[9] = (long)(puVar9 + 0xa8);
  param_1[10] = (long)(puVar9 + 0x118);
  param_1[0x28] = 0;
  param_1[0x26] = lVar11;
  param_1[0x27] = lVar3;
  lVar11 = *(long *)(puVar10 + 8);
  param_1[0x2a] = *(long *)puVar10;
  param_1[0x2b] = lVar11;
  lVar11 = *(long *)(puVar8 + 0x20);
  lVar5 = *(long *)(puVar8 + 0x28);
  lVar3 = *(long *)puVar8;
  lVar6 = *(long *)(puVar8 + 8);
  lVar2 = *(long *)(puVar8 + 0x10);
  lVar7 = *(long *)(puVar8 + 0x18);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x34] = lVar1;
  param_1[0x35] = lVar4;
  param_1[0x30] = lVar2;
  param_1[0x31] = lVar7;
  param_1[0x2e] = lVar3;
  param_1[0x2f] = lVar6;
  param_1[0x32] = lVar11;
  param_1[0x33] = lVar5;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  puVar8 = PTR_DAT_02710860;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
     (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) {
    lVar11 = FUN_0075ecb0();
  }
  param_1[0x3a] = lVar11;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}


