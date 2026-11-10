/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ac4a0; name: FUN_006ac4a0
 */


/* WARNING: Removing unreachable block (ram,0x006ac5a8) */

void FUN_006ac4a0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  if (*(long *)(param_2 + 8) == param_1) {
    *(undefined8 *)(param_2 + 8) = 0;
    plVar6 = *(long **)(param_1 + 0x10);
    plVar1 = *(long **)(param_1 + 0x18);
    if (plVar6 != plVar1) {
      lVar2 = *plVar6;
      while (lVar2 != param_2) {
        plVar6 = plVar6 + 1;
        if (plVar1 == plVar6) {
          return;
        }
        lVar2 = *plVar6;
      }
    }
    if ((plVar6 == plVar1) || (plVar3 = plVar6 + 1, plVar3 == plVar1)) {
      if (plVar1 != plVar6) goto LAB_006ac594;
    }
    else {
      uVar4 = (long)plVar1 + (-0x10 - (long)plVar6);
      if (((uint)uVar4 >> 3 & 1) == 0) {
        plVar5 = plVar6;
        if (*plVar3 != param_2) {
          plVar5 = plVar6 + 1;
          *plVar6 = *plVar3;
        }
        plVar3 = plVar6 + 2;
        plVar6 = plVar5;
      }
      if (7 < uVar4) {
        do {
          plVar5 = plVar6;
          if (*plVar3 != param_2) {
            plVar5 = plVar6 + 1;
            *plVar6 = *plVar3;
          }
          plVar6 = plVar5;
          if (plVar3[1] != param_2) {
            plVar6 = plVar5 + 1;
            *plVar5 = plVar3[1];
          }
          plVar3 = plVar3 + 2;
        } while (plVar3 != plVar1);
      }
      if (*(long **)(param_1 + 0x18) != plVar6) {
LAB_006ac594:
        *(long **)(param_1 + 0x18) = plVar6;
        return;
      }
    }
  }
  return;
}


