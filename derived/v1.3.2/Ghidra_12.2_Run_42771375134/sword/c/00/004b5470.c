/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b5470; name: FUN_004b5470
 */


undefined8 FUN_004b5470(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_02712a90;
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    plVar5 = (long *)0x0;
    do {
      while (plVar3 = plVar2, plVar3[1] != param_2) {
        plVar2 = (long *)*plVar3;
        plVar5 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) {
          return 1;
        }
      }
      if (*(char *)(param_1 + 0x38) == '\0') {
        plVar2 = (long *)*plVar3;
        plVar4 = (long *)(param_1 + 0x10);
        if (*(long **)(param_1 + 0x10) != plVar3) {
          plVar4 = plVar5;
        }
        *plVar4 = (long)plVar2;
        if (*(long **)(param_1 + 0x18) == plVar3) {
          *(long **)(param_1 + 0x18) = plVar5;
          plVar4 = *(long **)(param_1 + 0x28);
          if (plVar4 <= plVar3) goto LAB_004b5520;
LAB_004b5550:
          FUN_00404870(*(undefined4 *)puVar1);
        }
        else {
          plVar4 = *(long **)(param_1 + 0x28);
          if (plVar3 < plVar4) goto LAB_004b5550;
LAB_004b5520:
          if (plVar4 + (ulong)*(uint *)(param_1 + 0x30) * 3 <= plVar3) goto LAB_004b5550;
          *plVar3 = *(long *)(param_1 + 0x20);
          *(long **)(param_1 + 0x20) = plVar3;
        }
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      }
      else {
        plVar2 = (long *)*plVar3;
        plVar3[1] = 0;
        *(undefined1 *)(param_1 + 0x39) = 1;
        plVar5 = plVar3;
      }
    } while (plVar2 != (long *)0x0);
  }
  return 1;
}


