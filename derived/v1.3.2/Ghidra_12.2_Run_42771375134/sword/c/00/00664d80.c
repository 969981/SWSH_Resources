/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00664d80; name: FUN_00664d80
 */


void FUN_00664d80(long param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  
  *(undefined8 *)(param_1 + 0x400) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_1 + 0x408) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_1 + 0x410) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_1 + 0x418) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_1 + 0x420) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_1 + 0x428) = 0x7fffffff7fffffff;
  *(undefined8 *)(param_1 + 0x430) = 0x7fffffff7fffffff;
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  *(undefined8 *)(param_1 + 0x6d8) = 0;
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  *(undefined8 *)(param_1 + 0x6f0) = 0;
  *(undefined8 *)(param_1 + 0x6f8) = 0;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x43c) = 0x7fffffff;
  if (0 < *(int *)(param_1 + 0x3fc)) {
    puVar7 = (undefined4 *)(param_1 + 0x90);
    uVar8 = 1;
    do {
      uVar4 = puVar7[-2];
      if (uVar4 < 0x10) {
        iVar3 = puVar7[-1];
        iVar5 = FUN_005ed170(puVar7[-3]);
        lVar6 = param_1 + (long)(int)uVar4 * 4;
        if (*(int *)(lVar6 + 0x6c8) < iVar5 + iVar3) {
          *(int *)(lVar6 + 0x6c8) = iVar5 + iVar3;
        }
        if (*(int *)(lVar6 + 0x400) == 0x7fffffff) {
          *(undefined4 *)(lVar6 + 0x400) = *puVar7;
        }
      }
      if (0x1f < uVar8) break;
      puVar7 = puVar7 + 7;
      bVar1 = (long)uVar8 < (long)*(int *)(param_1 + 0x3fc);
      uVar8 = uVar8 + 1;
    } while (bVar1);
  }
  lVar6 = 0;
  do {
    lVar2 = param_1 + lVar6;
    if (0 < *(int *)(lVar2 + 0x6c8)) {
      iVar3 = *(int *)(lVar2 + 0x708);
      if (0 < iVar3) {
        *(uint *)(lVar2 + 0x6c8) = (*(int *)(lVar2 + 0x6c8) + iVar3) - 1U & -iVar3;
      }
      *(int *)(param_1 + 0x440) = *(int *)(param_1 + 0x440) + 1;
    }
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x40);
  return;
}


