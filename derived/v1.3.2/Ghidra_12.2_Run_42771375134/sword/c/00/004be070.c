/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004be070; name: FUN_004be070
 */


void FUN_004be070(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    do {
      iVar1 = *(int *)(*plVar2 + 0x3c);
      if (iVar1 == 3) {
        uVar3 = 4;
LAB_004be0a0:
        *(undefined4 *)(*plVar2 + 0x3c) = uVar3;
      }
      else if (iVar1 == 2) {
        uVar3 = 1;
        goto LAB_004be0a0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != (long *)(*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 8));
  }
  return;
}


