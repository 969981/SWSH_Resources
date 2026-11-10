/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b5a50; name: FUN_004b5a50
 */


undefined8 FUN_004b5a50(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_02712a90;
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 != (long *)0x0) {
    plVar5 = (long *)0x0;
    do {
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar3[1] == param_2) {
        plVar4 = (long *)(param_1 + 0x40);
        if (*(long **)(param_1 + 0x40) != plVar3) {
          plVar4 = plVar5;
        }
        *plVar4 = (long)plVar2;
        if (*(long **)(param_1 + 0x48) == plVar3) {
          *(long **)(param_1 + 0x48) = plVar5;
          plVar4 = *(long **)(param_1 + 0x58);
          if (plVar4 <= plVar3) goto LAB_004b5ac8;
LAB_004b5af8:
          FUN_00404870(*(undefined4 *)puVar1);
        }
        else {
          plVar4 = *(long **)(param_1 + 0x58);
          if (plVar3 < plVar4) goto LAB_004b5af8;
LAB_004b5ac8:
          if (plVar4 + (ulong)*(uint *)(param_1 + 0x60) * 4 <= plVar3) goto LAB_004b5af8;
          *plVar3 = *(long *)(param_1 + 0x50);
          *(long **)(param_1 + 0x50) = plVar3;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
        if (plVar2 == (long *)0x0) {
          return 1;
        }
      }
      plVar5 = plVar3;
    } while (plVar2 != (long *)0x0);
  }
  return 1;
}


