/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01031e00; name: FUN_01031e00
 */


void FUN_01031e00(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (plVar4 != (long *)0x0) {
    lVar1 = *plVar4;
    if (lVar1 != 0) {
      lVar3 = lVar1;
      lVar2 = plVar4[1];
      if (plVar4[1] != lVar1) {
        do {
          lVar3 = lVar2 + -0x98;
          if (*(char *)(lVar2 + -0x48) != '\0') {
            *(undefined1 *)(lVar2 + -0x48) = 0;
          }
          lVar2 = lVar3;
        } while (lVar1 != lVar3);
        lVar3 = *plVar4;
      }
      plVar4[1] = lVar1;
      (**(code **)(*(long *)plVar4[3] + 0x18))((long *)plVar4[3],lVar3,plVar4[2] - lVar3,8);
    }
    (**(code **)(**(long **)(param_1 + 0x50) + 0x18))
              (*(long **)(param_1 + 0x50),plVar4,*(undefined8 *)(param_1 + 0x58),
               *(undefined8 *)(param_1 + 0x60));
  }
  plVar4 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar1 = *plVar4;
  if (lVar1 != 0) {
    lVar3 = lVar1;
    lVar2 = plVar4[1];
    if (plVar4[1] != lVar1) {
      do {
        lVar3 = lVar2 + -0x98;
        if (*(char *)(lVar2 + -0x48) != '\0') {
          *(undefined1 *)(lVar2 + -0x48) = 0;
        }
        lVar2 = lVar3;
      } while (lVar1 != lVar3);
      lVar3 = *plVar4;
    }
    plVar4[1] = lVar1;
    (**(code **)(*(long *)plVar4[3] + 0x18))((long *)plVar4[3],lVar3,plVar4[2] - lVar3,8);
  }
                    /* WARNING: Could not recover jumptable at 0x01031f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
            (*(long **)(param_1 + 0x30),plVar4,*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x40));
  return;
}


