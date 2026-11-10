/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bd890; name: FUN_005bd890
 */


void FUN_005bd890(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)(param_1 + 0x48);
  plVar2 = (long *)*puVar3;
  do {
    if (plVar2 == (long *)0x0) {
      if (0 < *(int *)(param_1 + 0x70)) {
        lVar4 = 0;
        do {
          *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x88) + lVar4 * 8) + 0xc) = 0;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_1 + 0x70));
      }
      return;
    }
    lVar4 = *plVar2;
    plVar1 = (long *)plVar2[1];
    if (lVar4 == 0) {
      if (((long *)*puVar3 == plVar2) && ((long *)*puVar3 != (long *)0x0)) {
        if (plVar1 == (long *)0x0) {
          *puVar3 = 0;
          *(undefined8 *)(param_1 + 0x50) = 0;
        }
        else {
          *plVar1 = 0;
          *puVar3 = plVar1;
        }
        goto LAB_005bd8f4;
      }
    }
    else {
      if (plVar1 == (long *)0x0) {
        if ((*(long **)(param_1 + 0x50) != plVar2) || (*(long **)(param_1 + 0x50) == (long *)0x0))
        goto LAB_005bd904;
        *(undefined8 *)(lVar4 + 8) = 0;
        *(long *)(param_1 + 0x50) = lVar4;
      }
      else {
        *plVar1 = lVar4;
        *(long **)(lVar4 + 8) = plVar1;
      }
LAB_005bd8f4:
      *plVar2 = 0;
      plVar2[1] = 0;
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
    }
LAB_005bd904:
    if (*(long *)(param_1 + 0x20) == 0) {
      *(long **)(param_1 + 0x20) = plVar2;
    }
    else {
      *(long **)(*(long *)(param_1 + 0x28) + 8) = plVar2;
      *plVar2 = *(long *)(param_1 + 0x28);
    }
    *(long **)(param_1 + 0x28) = plVar2;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    *(undefined1 *)(plVar2 + 3) = 0;
    plVar2 = plVar1;
  } while( true );
}


