/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00684800; name: FUN_00684800
 */


undefined8 FUN_00684800(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(param_3 + 0x18);
  if ((long)uVar4 < 1) {
    return 1;
  }
  if (*(ulong *)(param_1 + 0x108) != uVar4) {
    if ((*(ulong *)(param_1 + 0x110) <= uVar4) &&
       (uVar1 = FUN_00686cd0(param_1 + 0xf8,uVar4,1), (uVar1 & 1) == 0)) {
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      return 0;
    }
    *(ulong *)(param_1 + 0x108) = uVar4;
    *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x120);
    *(ulong *)(param_1 + 0x130) = *(long *)(param_1 + 0x120) + uVar4 * 0x170;
    uVar4 = *(ulong *)(param_3 + 0x18);
  }
  if (*(ulong *)(param_1 + 0x158) != uVar4) {
    if ((*(ulong *)(param_1 + 0x160) <= uVar4) &&
       (uVar1 = FUN_006870f0(param_1 + 0x148,uVar4,1), (uVar1 & 1) == 0)) {
      *(undefined8 *)(param_1 + 0x158) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      return 0;
    }
    *(ulong *)(param_1 + 0x158) = uVar4;
    if (uVar4 == 0) {
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
      lVar3 = *(long *)(param_3 + 0x18);
      plVar2 = *(long **)(param_1 + 0x120);
      goto joined_r0x006848bc;
    }
    *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x170);
    *(ulong *)(param_1 + 0x180) = *(long *)(param_1 + 0x170) + uVar4 * 8;
  }
  lVar3 = *(long *)(param_3 + 0x18);
  plVar2 = *(long **)(param_1 + 0x120);
joined_r0x006848bc:
  if (0 < lVar3) {
    lVar5 = 0;
    lVar3 = 0;
    do {
      *(long *)((long)plVar2 + lVar5 + 0x18) = param_1;
      *(long *)((long)plVar2 + lVar5 + 0xb8) = lVar3;
      FUN_00684970(param_1,param_2,param_3);
      plVar2 = *(long **)(param_1 + 0x120);
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x170;
    } while (lVar3 < *(long *)(param_3 + 0x18));
  }
  *(long **)(param_1 + 0xe8) = plVar2;
  (**(code **)(*plVar2 + 0x10))();
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_006863c0(param_1);
  }
  return 1;
}


