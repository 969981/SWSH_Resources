/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00604370; name: FUN_00604370
 */


undefined8 FUN_00604370(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(int *)(*(long *)(param_1 + 0xf0) + 0x78) = *(int *)(*(long *)(param_1 + 0xf0) + 0x78) + -1;
    if (0 < *(int *)(*(long *)(param_1 + 0xf0) + 0x78)) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0xb0);
    lVar6 = *(long *)(lVar5 + 0x10);
    plVar4 = *(long **)(lVar5 + 0x20);
    if (plVar4 == (long *)0x0) {
      return 0x23;
    }
    do {
      if (plVar4[2] == param_1) {
        lVar3 = *plVar4;
        plVar4 = (long *)plVar4[1];
        puVar1 = (undefined8 *)(lVar5 + 0x20);
        if (lVar3 != 0) {
          puVar1 = (undefined8 *)(lVar3 + 8);
        }
        *puVar1 = plVar4;
        plVar2 = (long *)(lVar5 + 0x28);
        if (plVar4 != (long *)0x0) {
          plVar2 = plVar4;
        }
        *plVar2 = lVar3;
        (**(code **)(lVar6 + 0x10))(lVar6);
        FUN_006044b0(lVar6,param_1,lVar5);
        return 0;
      }
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != (long *)0x0);
  }
  return 0x23;
}


