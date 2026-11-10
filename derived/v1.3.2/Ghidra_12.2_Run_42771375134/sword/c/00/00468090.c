/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468090; name: FUN_00468090
 */


void FUN_00468090(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  puVar3 = PTR_DAT_02713108;
  puVar2 = PTR_DAT_02712e28;
  if (*(long **)PTR_DAT_02713108 != (long *)0x0) {
    plVar1 = *(long **)PTR_DAT_02713108;
    plVar6 = (long *)0x0;
    do {
      while (plVar4 = plVar1, plVar1 = (long *)*plVar4, plVar4[1] == param_1) {
        plVar5 = (long *)puVar3;
        if (*(long **)puVar3 != plVar4) {
          plVar5 = plVar6;
        }
        *plVar5 = (long)plVar1;
        if (*(long **)(puVar3 + 8) == plVar4) {
          *(long **)(puVar3 + 8) = plVar6;
          plVar5 = *(long **)(puVar3 + 0x18);
          if (plVar5 <= plVar4) goto LAB_0046810c;
LAB_0046813c:
          FUN_00404870(*(undefined4 *)puVar2);
        }
        else {
          plVar5 = *(long **)(puVar3 + 0x18);
          if (plVar4 < plVar5) goto LAB_0046813c;
LAB_0046810c:
          if (plVar5 + (ulong)*(uint *)(puVar3 + 0x20) * 3 <= plVar4) goto LAB_0046813c;
          *plVar4 = *(long *)(puVar3 + 0x10);
          *(long **)(puVar3 + 0x10) = plVar4;
        }
        *(int *)(puVar3 + 0x24) = *(int *)(puVar3 + 0x24) + -1;
        if (plVar1 == (long *)0x0) {
          return;
        }
      }
      plVar6 = plVar4;
    } while (plVar1 != (long *)0x0);
  }
  return;
}


