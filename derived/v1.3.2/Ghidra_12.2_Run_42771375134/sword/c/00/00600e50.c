/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00600e50; name: FUN_00600e50
 */


void FUN_00600e50(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00601c50();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  puVar3 = (undefined8 *)(param_1 + 0xe0);
  plVar2 = (long *)*puVar3;
  do {
    if (plVar2 == (long *)0x0) {
      if (0 < *(int *)(param_1 + 0x108)) {
        lVar4 = 0;
        do {
          *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x120) + lVar4 * 8) + 0xc) = 0;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_1 + 0x108));
      }
      return;
    }
    lVar4 = *plVar2;
    plVar1 = (long *)plVar2[1];
    if (lVar4 == 0) {
      if (((long *)*puVar3 == plVar2) && ((long *)*puVar3 != (long *)0x0)) {
        if (plVar1 == (long *)0x0) {
          *puVar3 = 0;
          *(undefined8 *)(param_1 + 0xe8) = 0;
        }
        else {
          *plVar1 = 0;
          *puVar3 = plVar1;
        }
        goto LAB_00600ef4;
      }
    }
    else {
      if (plVar1 == (long *)0x0) {
        if ((*(long **)(param_1 + 0xe8) != plVar2) || (*(long **)(param_1 + 0xe8) == (long *)0x0))
        goto LAB_00600f04;
        *(undefined8 *)(lVar4 + 8) = 0;
        *(long *)(param_1 + 0xe8) = lVar4;
      }
      else {
        *plVar1 = lVar4;
        *(long **)(lVar4 + 8) = plVar1;
      }
LAB_00600ef4:
      *plVar2 = 0;
      plVar2[1] = 0;
      *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + -1;
    }
LAB_00600f04:
    if (*(long *)(param_1 + 0xb8) == 0) {
      *(long **)(param_1 + 0xb8) = plVar2;
    }
    else {
      *(long **)(*(long *)(param_1 + 0xc0) + 8) = plVar2;
      *plVar2 = *(long *)(param_1 + 0xc0);
    }
    *(long **)(param_1 + 0xc0) = plVar2;
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
    *(undefined1 *)(plVar2 + 3) = 0;
    plVar2 = plVar1;
  } while( true );
}


