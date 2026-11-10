/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043bc30; name: FUN_0043bc30
 */


void FUN_0043bc30(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x50);
  if (plVar6 != (long *)0x0) {
    plVar5 = (long *)0x0;
    do {
      lVar4 = plVar6[2];
      plVar2 = (long *)FUN_0043e8c0(*(undefined8 *)(lVar4 + 8));
      if (*(long *)(lVar4 + 8) == param_2) {
        if (*(int *)(lVar4 + 0x34) != 0) {
          *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + -1;
          goto LAB_0043bce0;
        }
        FUN_0043aba0(param_1,lVar4);
        plVar3 = (long *)*plVar6;
        plVar1 = (long *)(param_1 + 0x50);
        if (*(long **)(param_1 + 0x50) != plVar6) {
          plVar1 = plVar5;
        }
        *plVar1 = (long)plVar3;
        if (*(long **)(param_1 + 0x58) == plVar6) {
          *(long **)(param_1 + 0x58) = plVar5;
        }
        *plVar6 = *(long *)(param_1 + 0x60);
        *(long **)(param_1 + 0x60) = plVar6;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
      }
      else {
LAB_0043bce0:
        plVar3 = (long *)*plVar6;
        plVar5 = plVar6;
      }
      plVar6 = plVar3;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    } while (plVar6 != (long *)0x0);
  }
  plVar6 = *(long **)(param_1 + 0x28);
  while (plVar6 != (long *)0x0) {
    lVar4 = *(long *)(plVar6[2] + 8);
    plVar5 = (long *)FUN_0043e8c0(lVar4);
    if ((lVar4 == param_2) && (*(short *)(param_2 + 0x34) == 0x503)) {
      FUN_00441dc0(param_2);
    }
    plVar6 = (long *)*plVar6;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  return;
}


