/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e7bb0; name: FUN_004e7bb0
 */


undefined8 FUN_004e7bb0(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  void *__src;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  if (puVar7 == (undefined8 *)0x0 || *(uint *)(param_1 + 8) < param_2) {
    if (*(uint *)(param_1 + 8) < param_2) {
      uVar2 = FUN_004e4050();
      puVar7 = (undefined8 *)FUN_00404690(uVar2,param_2 << 6 | 0x10);
      if (puVar7 == (undefined8 *)0x0) {
        return 0;
      }
      __src = *(void **)(param_1 + 0x10);
      if ((__src == (void *)0x0) || (*(int *)((long)__src + 8) == 0)) {
        *puVar7 = 0xffffffffffffffff;
        *(undefined4 *)(puVar7 + 1) = 0;
        lVar3 = *(long *)(param_1 + 0x10);
      }
      else {
        memcpy(puVar7,__src,(ulong)(*(int *)((long)__src + 8) << 6 | 0x10));
        lVar3 = *(long *)(param_1 + 0x10);
      }
      if (lVar3 != 0) {
        uVar2 = FUN_004e4050();
        FUN_00404870(uVar2,*(undefined8 *)(param_1 + 0x10));
      }
      *(undefined8 **)(param_1 + 0x10) = puVar7;
      *(uint *)(param_1 + 8) = param_2;
    }
    if (puVar7 == (undefined8 *)0x0) {
      return 1;
    }
  }
  *puVar7 = 0xffffffffffffffff;
  lVar3 = *(long *)(param_1 + 0x10);
  puVar4 = (uint *)(lVar3 + 8);
  uVar1 = *puVar4;
  if (uVar1 < param_2) {
    uVar5 = (ulong)uVar1 << 6 | 0x24;
    lVar6 = (ulong)param_2 - (ulong)uVar1;
    do {
      puVar7 = (undefined8 *)(lVar3 + uVar5);
      uVar5 = uVar5 + 0x40;
      *(undefined4 *)((long)puVar7 + -0x14) = 0xffffffff;
      puVar7[-2] = 0;
      puVar7[-1] = 0x3f80000000000000;
      lVar6 = lVar6 + -1;
      *puVar7 = 0x13f800000;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((long)puVar7 + 0x1c) = 0;
      *(undefined8 *)((long)puVar7 + 0x24) = 0;
      lVar3 = *(long *)(param_1 + 0x10);
    } while (lVar6 != 0);
    puVar4 = (uint *)(lVar3 + 8);
  }
  *puVar4 = param_2;
  return 1;
}


