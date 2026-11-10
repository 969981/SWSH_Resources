/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b4ce0; name: FUN_006b4ce0
 */


void FUN_006b4ce0(long *param_1,int *param_2,long param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  byte *pbVar9;
  long *plVar10;
  ulong uVar11;
  
  puVar3 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar6 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar3 = PTR_DAT_027151d0;
  uVar11 = 0xcbf29ce484222645;
  param_1[0xb] = (long)param_2;
  param_1[0xc] = param_3;
  param_1[9] = (long)(puVar3 + 0x48);
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = lVar6;
  param_1[0xd] = -0x340d631b7bddd9bb;
  param_1[0xe] = (long)&DAT_01d38550;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (((param_2 == (int *)0x0) || (*(ushort *)((long)param_2 - (long)*param_2) < 9)) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar7 == 0)) {
    lVar4 = 0;
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar7);
    lVar4 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00696df0(param_1 + 0x11,lVar4);
  piVar8 = (int *)param_1[0xb];
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  if (piVar8 != (int *)0x0) {
    if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 7) ||
       (uVar7 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[3], uVar7 == 0)) {
      lVar4 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar8 + uVar7);
      lVar4 = (long)puVar1 + (ulong)*puVar1;
    }
    sVar5 = strlen((char *)(lVar4 + 4));
    bVar2 = *(byte *)(lVar4 + 4);
    if (bVar2 != 0) {
      pbVar9 = (byte *)(lVar4 + 5);
      do {
        uVar11 = (uVar11 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
    }
    param_1[0xd] = uVar11;
    param_1[0xe] = lVar4 + 4;
    param_1[0xf] = sVar5;
    if (param_1[0x10] != 0) {
      plVar10 = (long *)(param_1[0x10] + 0x48);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      param_1[0x10] = 0;
    }
    param_1[0x10] = 0;
  }
  return;
}


