/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013fcf0; name: FUN_0013fcf0
 */


uint * FUN_0013fcf0(long *param_1,uint param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = *(uint *)(param_1 + 6);
  if (uVar6 == 0x3fffffff) {
    puVar5 = (uint *)0x0;
  }
  else {
    uVar1 = param_2;
    if (param_2 <= param_3) {
      uVar1 = param_3;
      param_3 = param_2;
    }
    uVar3 = param_3 | uVar1 << 0x10;
    uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
    uVar3 = (uVar3 ^ (int)uVar3 >> 10) * 9;
    uVar3 = uVar3 ^ (int)uVar3 >> 6;
    uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
    uVar3 = uVar3 ^ (int)uVar3 >> 0x10;
    uVar7 = *(uint *)(param_1 + 7) & uVar3;
    if ((*(uint *)(param_1 + 2) != 0) &&
       (uVar8 = *(uint *)(*param_1 + (ulong)uVar7 * 4), uVar8 != 0x3fffffff)) {
      do {
        puVar5 = (uint *)(param_1[4] + (ulong)uVar8 * 8);
        if (*puVar5 == param_3 && puVar5[1] == uVar1) {
          if (puVar5 != (uint *)0x0) {
            return puVar5;
          }
          break;
        }
        uVar8 = *(uint *)(param_1[1] + (ulong)uVar8 * 4);
      } while (uVar8 != 0x3fffffff);
    }
    if (*(uint *)(param_1 + 2) <= uVar6) {
      uVar7 = uVar6 + 1 | uVar6 + 1 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar6 = uVar7 + 1;
      *(uint *)(param_1 + 7) = uVar7;
      *(uint *)(param_1 + 2) = uVar6;
      FUN_0013fe50(param_1,*(uint *)((long)param_1 + 0x14) < uVar6);
      uVar7 = *(uint *)(param_1 + 7) & uVar3;
      uVar6 = *(uint *)(param_1 + 6);
    }
    puVar5 = (uint *)(param_1[4] + (ulong)uVar6 * 8);
    *puVar5 = param_3;
    puVar5[1] = uVar1;
    *(undefined1 *)(param_1[5] + (ulong)uVar6) = param_4;
    lVar2 = *param_1;
    *(undefined4 *)(param_1[1] + (ulong)*(uint *)(param_1 + 6) * 4) =
         *(undefined4 *)(lVar2 + (ulong)uVar7 * 4);
    lVar4 = param_1[6];
    *(int *)(param_1 + 6) = (int)lVar4 + 1;
    *(int *)(lVar2 + (ulong)uVar7 * 4) = (int)lVar4;
  }
  return puVar5;
}


