/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c4040; name: FUN_004c4040
 */


void FUN_004c4040(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = *(long **)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x18);
  plVar4 = plVar2;
  if (uVar1 == 0) {
LAB_004c4098:
    if (plVar4 != plVar2 + (ulong)uVar1 * 4) {
      for (plVar4 = (long *)plVar4[2]; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        while (plVar4[3] != param_2) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_004c40d4;
        }
        FUN_004c5310(plVar4);
      }
    }
  }
  else {
    lVar3 = (ulong)uVar1 << 5;
    do {
      if (*plVar4 == *(long *)(param_2 + 0x40)) goto LAB_004c4098;
      lVar3 = lVar3 + -0x20;
      plVar4 = plVar4 + 4;
    } while (lVar3 != 0);
  }
LAB_004c40d4:
  plVar4 = *(long **)(param_1 + 0x28);
  do {
    if (plVar4 == (long *)0x0) {
      return;
    }
    while (plVar4[3] != param_2) {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        return;
      }
    }
    FUN_004c5310(plVar4);
    plVar4 = (long *)*plVar4;
  } while( true );
}


