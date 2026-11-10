/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052de0; name: FUN_01052de0
 */


void FUN_01052de0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x148) + 0x188);
  if (lVar2 != 0) {
    iVar1 = 0;
    if (param_2 < 3) {
      iVar1 = param_2;
    }
    *(int *)(lVar2 + 0x8bc) = iVar1;
  }
  return;
}


