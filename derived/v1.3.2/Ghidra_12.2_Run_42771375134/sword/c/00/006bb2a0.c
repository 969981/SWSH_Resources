/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bb2a0; name: FUN_006bb2a0
 */


void FUN_006bb2a0(long *param_1,int *param_2)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
    lVar6 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
    lVar6 = 0;
    if (uVar5 != 0) {
      puVar2 = (uint *)((long)param_2 + uVar5);
      lVar6 = (long)puVar2 + (ulong)*puVar2;
    }
  }
  uVar5 = 0xcbf29ce484222645;
  FUN_006bbe00(param_1,lVar6 + 4);
  puVar1 = PTR_DAT_027151e8;
  param_1[0xb] = 0;
  param_1[5] = (long)param_2;
  param_1[6] = -0x340d631b7bddd9bb;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[7] = (long)&DAT_01d38550;
  param_1[8] = 0;
  puVar1 = PTR_DAT_027150e0 + 0x10;
  param_1[9] = 0;
  param_1[10] = (long)puVar1;
  if ((6 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar8 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar8 != 0)) {
    uVar9 = (ulong)*(uint *)((long)param_2 + uVar8);
    lVar6 = (long)((long)param_2 + uVar8) + uVar9;
    if (lVar6 != 0) {
      sVar4 = strlen((char *)(lVar6 + 4));
      bVar3 = *(byte *)(lVar6 + 4);
      if (bVar3 != 0) {
        pbVar7 = (byte *)((long)param_2 + uVar9 + uVar8 + 5);
        do {
          uVar5 = (uVar5 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar3 != 0);
      }
      param_1[6] = uVar5;
      param_1[7] = lVar6 + 4;
      param_1[8] = sVar4;
      param_1[9] = 0;
    }
  }
  return;
}


