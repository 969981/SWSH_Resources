/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001308f0; name: FUN_001308f0
 */


void FUN_001308f0(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(int *)(param_1 + 0x230) != 0) {
    uVar2 = **(uint **)(param_1 + 0x228);
    if (uVar2 == 0xffffffff) {
      uVar3 = 1;
      do {
        uVar4 = uVar3;
        if (*(uint *)(param_1 + 0x234) == uVar4) goto LAB_001309a0;
        uVar2 = (*(uint **)(param_1 + 0x228))[uVar4];
        uVar3 = uVar4 + 1;
      } while (uVar2 == 0xffffffff);
    }
    else {
      uVar4 = 0;
    }
    do {
      do {
        plVar1 = *(long **)(*(long *)(param_1 + 0x218) + (ulong)uVar2 * 0x10 + 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        uVar2 = *(uint *)(*(long *)(param_1 + 0x220) + (ulong)uVar2 * 4);
      } while (uVar2 != 0xffffffff);
      do {
        if (*(int *)(param_1 + 0x234) - 1U == uVar4) goto LAB_001309a0;
        uVar4 = uVar4 + 1;
        uVar2 = *(uint *)(*(long *)(param_1 + 0x228) + (ulong)uVar4 * 4);
      } while (uVar2 == 0xffffffff);
    } while( true );
  }
LAB_001309a0:
  if (*(int *)(param_1 + 0x268) != 0) {
    uVar2 = **(uint **)(param_1 + 0x260);
    if (uVar2 == 0xffffffff) {
      uVar3 = 1;
      do {
        uVar4 = uVar3;
        if (*(uint *)(param_1 + 0x26c) == uVar4) goto LAB_00130a3c;
        uVar2 = (*(uint **)(param_1 + 0x260))[uVar4];
        uVar3 = uVar4 + 1;
      } while (uVar2 == 0xffffffff);
    }
    else {
      uVar4 = 0;
    }
    do {
      do {
        plVar1 = *(long **)(*(long *)(param_1 + 0x250) + (ulong)uVar2 * 0x10 + 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        uVar2 = *(uint *)(*(long *)(param_1 + 600) + (ulong)uVar2 * 4);
      } while (uVar2 != 0xffffffff);
      do {
        if (*(int *)(param_1 + 0x26c) - 1U == uVar4) goto LAB_00130a3c;
        uVar4 = uVar4 + 1;
        uVar2 = *(uint *)(*(long *)(param_1 + 0x260) + (ulong)uVar4 * 4);
      } while (uVar2 == 0xffffffff);
    } while( true );
  }
LAB_00130a3c:
  uVar2 = *(uint *)(param_1 + 0x1f0);
  if (uVar2 != 0) {
    uVar6 = 0;
    do {
      uVar3 = *(uint *)(param_1 + 0x1e4);
      if (uVar3 == 0xffffffff) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x1e8) + uVar6 * 8);
      }
      else {
        do {
          if (uVar6 == uVar3) goto LAB_00130aa8;
          uVar3 = *(uint *)(*(long *)(param_1 + 0x1e8) + (ulong)uVar3 * 8);
        } while (uVar3 != 0xffffffff);
        lVar5 = *(long *)(*(long *)(param_1 + 0x1e8) + uVar6 * 8);
      }
      if (lVar5 != 0) {
        FUN_0012fb10(lVar5);
                    /* try { // try from 00130a94 to 00130aa7 has its CatchHandler @ 00130ae4 */
        plVar1 = (long *)FUN_00400d30();
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar5);
      }
LAB_00130aa8:
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  FUN_00130af0(param_1);
                    /* try { // try from 00130abc to 00130acf has its CatchHandler @ 00130ae0 */
  plVar1 = (long *)FUN_00400d30();
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  return;
}


