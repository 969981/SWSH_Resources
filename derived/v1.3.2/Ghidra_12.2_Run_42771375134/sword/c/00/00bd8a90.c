/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd8a90; name: FUN_00bd8a90
 */


void FUN_00bd8a90(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0xd00) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xd00) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xd00) = 0;
  }
  if (*(long *)(param_1 + 0xce8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xce8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xce8) = 0;
  }
  if (*(long *)(param_1 + 0xcd0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xcd0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xcd0) = 0;
  }
  if (*(long *)(param_1 + 0xcb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xcb8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xcb8) = 0;
  }
  if (*(long *)(param_1 + 0xca0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xca0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xca0) = 0;
  }
  if (*(long *)(param_1 + 0xc88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xc88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xc88) = 0;
  }
  if (*(long *)(param_1 + 0xa98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa98) = 0;
  }
  if (*(long *)(param_1 + 0xa80) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa80) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa80) = 0;
  }
  if (*(long *)(param_1 + 0xa68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa68) = 0;
  }
  if (*(long *)(param_1 + 0xa50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa50) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa50) = 0;
  }
  if (*(long *)(param_1 + 0xa38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa38) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa38) = 0;
  }
  if (*(long *)(param_1 + 0xa20) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa20) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa20) = 0;
  }
  plVar3 = *(long **)(param_1 + 0x9c0);
  if (plVar3 != (long *)0x0) {
    if (*(long **)(param_1 + 0x9c8) == plVar3) {
      plVar1 = plVar3;
    }
    else {
      plVar1 = *(long **)(param_1 + 0x9c8);
      do {
        plVar4 = plVar1 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          plVar1[-1] = 0;
        }
        plVar1 = plVar4;
      } while (plVar3 != plVar4);
      plVar1 = *(long **)(param_1 + 0x9c0);
    }
    *(long **)(param_1 + 0x9c8) = plVar3;
    (**(code **)(**(long **)(param_1 + 0x9e0) + 0x18))
              (*(long **)(param_1 + 0x9e0),plVar1,*(long *)(param_1 + 0x9d0) - (long)plVar1,8);
  }
  plVar3 = *(long **)(param_1 + 0xa10);
  if ((long *)(param_1 + 0x9f0) == plVar3) {
    pcVar2 = *(code **)(*plVar3 + 0x20);
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_00bd8c58;
    pcVar2 = *(code **)(*plVar3 + 0x28);
  }
  (*pcVar2)();
LAB_00bd8c58:
  plVar3 = *(long **)(param_1 + 0x960);
  if (plVar3 != (long *)0x0) {
    if (*(long **)(param_1 + 0x968) == plVar3) {
      plVar1 = plVar3;
    }
    else {
      plVar1 = *(long **)(param_1 + 0x968);
      do {
        plVar4 = plVar1 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          plVar1[-1] = 0;
        }
        plVar1 = plVar4;
      } while (plVar3 != plVar4);
      plVar1 = *(long **)(param_1 + 0x960);
    }
    *(long **)(param_1 + 0x968) = plVar3;
    (**(code **)(**(long **)(param_1 + 0x980) + 0x18))
              (*(long **)(param_1 + 0x980),plVar1,*(long *)(param_1 + 0x970) - (long)plVar1,8);
  }
  plVar3 = *(long **)(param_1 + 0x9b0);
  if ((long *)(param_1 + 0x990) == plVar3) {
                    /* WARNING: Could not recover jumptable at 0x00bd8d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))();
    return;
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00bd8ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))();
  return;
}


