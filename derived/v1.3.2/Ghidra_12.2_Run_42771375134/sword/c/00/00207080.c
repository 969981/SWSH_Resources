/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207080; name: FUN_00207080
 */


void FUN_00207080(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *local_38;
  
  puVar4 = PTR_DAT_02711068;
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 >> 0x1e == 0) {
    return;
  }
  lVar10 = *param_1;
  if (*(char *)(lVar10 + 0x1fb9) == '\0') {
    pbVar3 = (byte *)((long)param_1 +
                     *(long *)(PTR_DAT_02711068 + (ulong)(uVar6 >> 0x18 & 0xf) * 8 + 0x30) + 0xc);
    if ((uVar6 & 1) != 0) {
      pbVar3 = (byte *)param_1[2];
    }
    if ((*pbVar3 >> 3 & 1) == 0) {
      FUN_00206d40(param_2);
      FUN_003d9610(*(long *)(puVar4 + (ulong)(*(byte *)((long)param_1 + 0xb) & 0xf) * 8 + 0x30) +
                   (long)param_1,param_2 + 4);
    }
    uVar6 = *(uint *)(param_2 + 1);
    if ((uVar6 & 0xf000000) != 0x1000000) {
      return;
    }
    uVar7 = 0x80000000;
    goto LAB_00207214;
  }
  if (uVar6 >> 0x1e != 1) {
    lVar5 = param_1[2];
    if (lVar5 == 0) {
      lVar5 = FUN_001d1a00(lVar10,uVar6 >> 0x18 & 0xf);
      param_1[2] = lVar5;
      uVar6 = *(uint *)(lVar5 + 0x90);
      if (uVar6 != 0) goto LAB_0020715c;
LAB_0020718c:
      uVar6 = *(uint *)(lVar5 + 0x38);
      local_38 = param_2;
      if (uVar6 < (*(uint *)(lVar5 + 0x3c) & 0x7fffffff)) {
        *(long **)(*(long *)(lVar5 + 0x30) + (ulong)uVar6 * 8) = param_2;
        *(uint *)(lVar5 + 0x38) = uVar6 + 1;
      }
      else {
        FUN_0020a320(lVar5 + 8,&local_38);
      }
    }
    else {
      uVar6 = *(uint *)(lVar5 + 0x90);
      if (uVar6 == 0) goto LAB_0020718c;
LAB_0020715c:
      lVar9 = *(long *)(lVar5 + 0x88);
      uVar8 = 0;
      do {
        uVar7 = (uint)uVar8;
        if (*(long **)(lVar9 + uVar8 * 0x10) == param_2) break;
        uVar7 = uVar7 + 1;
        uVar8 = (ulong)uVar7;
      } while (uVar7 < uVar6);
      if (uVar7 == uVar6) goto LAB_0020718c;
      *(uint *)(lVar5 + 0x90) = uVar6 - 1;
      puVar1 = (undefined8 *)(lVar9 + (ulong)(uVar6 - 1) * 0x10);
      puVar2 = (undefined8 *)(lVar9 + (ulong)uVar7 * 0x10);
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
      *puVar2 = *puVar1;
    }
    FUN_001d1850(*param_1,param_1);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 8;
  }
  uVar6 = *(uint *)(param_2 + 1);
  if ((uVar6 & 0xf000000) != 0x1000000) {
    return;
  }
  uVar7 = 0x40000000;
LAB_00207214:
  *(uint *)(param_2 + 1) = uVar7 | uVar6 & 0x3fffffff;
  *param_2 = lVar10;
  return;
}


