/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e73c0; name: FUN_003e73c0
 */


undefined8 FUN_003e73c0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = *(long *)(param_1 + 0x728);
  uVar1 = *(uint *)(lVar6 + 0x130);
  if (uVar1 == 0) {
    uVar8 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x128);
    lVar10 = *(long *)(param_1 + 0x1118);
    uVar9 = 0;
    uVar8 = 0;
    do {
      while( true ) {
        uVar3 = *(uint *)(*(long *)(param_1 + 0x11e8) + uVar9 * 4);
        lVar11 = *(long *)(lVar6 + uVar9 * 8);
        uVar2 = uVar3 >> 5;
        if (((*(uint *)(lVar10 + 0x28) & 0x7fffffff) <= uVar2) ||
           ((*(uint *)(*(long *)(lVar10 + 0x20) + (ulong)uVar2 * 4) & 1 << (ulong)(uVar3 & 0x1f)) ==
            0)) break;
joined_r0x003e74a0:
        uVar9 = uVar9 + 1;
        if (uVar1 == uVar9) goto LAB_003e74b8;
      }
      plVar4 = (long *)FUN_003d9790(*(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x50));
      uVar3 = (**(code **)(*plVar4 + 0x88))();
      plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 0x10f0) + (ulong)(uVar3 & 0xff) * 8) + 0x50)
      ;
      if (plVar7 != (long *)0x0) {
        uVar5 = FUN_003f8c90(*(undefined8 *)(lVar11 + 0x40));
        (**(code **)(*plVar7 + 0x10))(plVar7,uVar5,plVar4);
        goto joined_r0x003e74a0;
      }
      uVar8 = 1;
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar9);
LAB_003e74b8:
    lVar6 = *(long *)(param_1 + 0x728);
  }
  *(undefined4 *)(lVar6 + 0x130) = 0;
  return uVar8;
}


