/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f8db0; name: FUN_003f8db0
 */


void FUN_003f8db0(long param_1,uint param_2,undefined2 param_3)

{
  int iVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 0x42) = param_3;
    iVar1 = *(int *)(param_1 + 0x48);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x48);
  }
  if (iVar1 == 5) {
    plVar2 = (long *)(param_1 + 0x88);
  }
  else {
    if (iVar1 != 6) {
      return;
    }
    plVar2 = (long *)(param_1 + 0x70);
  }
  *(undefined2 *)(*plVar2 + (ulong)param_2 * 2) = param_3;
  return;
}


