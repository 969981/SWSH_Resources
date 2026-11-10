/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cf160; name: FUN_006cf160
 */


void FUN_006cf160(long *param_1,char *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  size_t sVar5;
  char *__dest;
  long lVar6;
  byte *pbVar7;
  long *plVar8;
  ulong uVar9;
  
  param_1[7] = 0;
  puVar3 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar3 = PTR_DAT_02715300;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar6 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  uVar9 = 0xcbf29ce484222645;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = lVar6;
  param_1[0xb] = -0x340d631b7bddd9bb;
  param_1[0xc] = (long)&DAT_01d38550;
  puVar2 = PTR_DAT_02710440;
  param_1[9] = (long)(puVar3 + 0x48);
  plVar8 = *(long **)(*(long *)puVar2 + 8);
  sVar5 = strlen(param_2);
  __dest = (char *)(**(code **)(*plVar8 + 0x10))(plVar8,sVar5 + 1,8);
  param_1[0xe] = (long)__dest;
  strcpy(__dest,param_2);
  pbVar7 = (byte *)param_1[0xe];
  param_1[0xc] = (long)pbVar7;
  bVar1 = *pbVar7;
  while (bVar1 != 0) {
    pbVar7 = pbVar7 + 1;
    uVar9 = (uVar9 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar7;
  }
  param_1[0xb] = uVar9;
  param_1[0xd] = sVar5;
  return;
}


