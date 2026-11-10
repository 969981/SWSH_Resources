/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f0fc0; name: FUN_012f0fc0
 */


void FUN_012f0fc0(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(param_2 + 0x20) == 1) {
    lVar4 = *(long *)(param_1 + 1000);
    if (lVar4 != 0) {
      lVar2 = *(long *)(param_2 + 0x18);
      lVar5 = FUN_013092c0(lVar4);
      if ((lVar5 == lVar2) ||
         ((lVar4 = *(long *)(param_1 + 0x3f0), lVar4 != 0 &&
          ((lVar5 = FUN_013092c0(lVar4), lVar5 == lVar2 ||
           ((lVar4 = *(long *)(param_1 + 0x3f8), lVar4 != 0 &&
            ((lVar5 = FUN_013092c0(lVar4), lVar5 == lVar2 ||
             ((lVar4 = *(long *)(param_1 + 0x400), lVar4 != 0 &&
              (lVar5 = FUN_013092c0(lVar4), lVar5 == lVar2)))))))))))) {
        FUN_0130a910(lVar4,*(undefined4 *)(param_2 + 0x28));
        return;
      }
    }
  }
  else if (*(int *)(param_2 + 0x20) == 0) {
    lVar5 = *(long *)(param_2 + 0x18);
    uVar1 = *(undefined4 *)(param_2 + 0x24);
    lVar4 = *(long *)(param_1 + 1000);
    if ((lVar4 != 0) &&
       ((lVar2 = FUN_013092c0(lVar4), lVar2 == lVar5 ||
        ((lVar4 = *(long *)(param_1 + 0x3f0), lVar4 != 0 &&
         ((lVar2 = FUN_013092c0(lVar4), lVar2 == lVar5 ||
          ((lVar4 = *(long *)(param_1 + 0x3f8), lVar4 != 0 &&
           ((lVar2 = FUN_013092c0(lVar4), lVar2 == lVar5 ||
            ((lVar4 = *(long *)(param_1 + 0x400), lVar4 != 0 &&
             (lVar2 = FUN_013092c0(lVar4), lVar2 == lVar5)))))))))))))) {
      FUN_0130a7f0(lVar4,uVar1);
      return;
    }
    if (*(long *)(param_1 + 0x310) == lVar5) {
      plVar3 = (long *)(param_1 + 0x310);
    }
    else {
      plVar3 = (long *)(param_1 + 800);
      if ((((*(long *)(param_1 + 800) != lVar5) &&
           (plVar3 = (long *)(param_1 + 0x330), *(long *)(param_1 + 0x330) != lVar5)) &&
          (plVar3 = (long *)(param_1 + 0x340), *(long *)(param_1 + 0x340) != lVar5)) &&
         (((plVar3 = (long *)(param_1 + 0x350), *(long *)(param_1 + 0x350) != lVar5 &&
           (plVar3 = (long *)(param_1 + 0x360), *(long *)(param_1 + 0x360) != lVar5)) &&
          ((plVar3 = (long *)(param_1 + 0x370), *(long *)(param_1 + 0x370) != lVar5 &&
           (plVar3 = (long *)(param_1 + 0x380), *plVar3 != lVar5)))))) {
        lVar4 = param_1 + *(long *)(param_1 + 0x390) * 0x10;
        *(long *)(lVar4 + 0x310) = lVar5;
        *(undefined4 *)(lVar4 + 0x318) = uVar1;
        *(ulong *)(param_1 + 0x390) = (ulong)(*(int *)(param_1 + 0x390) + 1) & 7;
        return;
      }
    }
    *plVar3 = lVar5;
    *(undefined4 *)(plVar3 + 1) = uVar1;
  }
  return;
}


