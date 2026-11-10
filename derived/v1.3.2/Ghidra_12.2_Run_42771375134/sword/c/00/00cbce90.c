/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cbce90; name: FUN_00cbce90
 */


void FUN_00cbce90(long param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (plVar3 != (long *)0x0) {
    *plVar3 = (long)(PTR_DAT_02710808 + 0x10);
    if (plVar3[1] == 0) {
      plVar3[1] = 0;
      pcVar2 = (code *)plVar3[0x13];
    }
    else {
      FUN_006e2100(plVar3[1],plVar3);
      lVar1 = plVar3[1];
      plVar3[1] = 0;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      pcVar2 = (code *)plVar3[0x13];
    }
    if (pcVar2 != (code *)0x0) {
      plVar3[0x14] = 0;
      plVar3[0x15] = 0;
      plVar3[0x12] = 0;
      plVar3[0x13] = 0;
      (*pcVar2)(plVar3 + 0x16);
    }
    pcVar2 = (code *)plVar3[3];
    if (pcVar2 != (code *)0x0) {
      plVar3[4] = 0;
      plVar3[5] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      (*pcVar2)(plVar3 + 6);
    }
    if (plVar3[1] != 0) {
      (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
      plVar3[1] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
              (*(long **)(param_1 + 0x48),plVar3,*(undefined8 *)(param_1 + 0x50),
               *(undefined8 *)(param_1 + 0x58));
  }
  plVar3 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
  *plVar3 = (long)(PTR_DAT_02710808 + 0x10);
  if (plVar3[1] == 0) {
    plVar3[1] = 0;
    pcVar2 = (code *)plVar3[0x13];
  }
  else {
    FUN_006e2100(plVar3[1],plVar3);
    lVar1 = plVar3[1];
    plVar3[1] = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    pcVar2 = (code *)plVar3[0x13];
  }
  if (pcVar2 != (code *)0x0) {
    plVar3[0x14] = 0;
    plVar3[0x15] = 0;
    plVar3[0x12] = 0;
    plVar3[0x13] = 0;
    (*pcVar2)(plVar3 + 0x16);
  }
  pcVar2 = (code *)plVar3[3];
  if (pcVar2 != (code *)0x0) {
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    (*pcVar2)(plVar3 + 6);
  }
  if (plVar3[1] != 0) {
    (**(code **)(*(long *)(plVar3[1] + 0x48) + 0x18))();
    plVar3[1] = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00cbcfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
            (*(long **)(param_1 + 0x18),plVar3,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}


