/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004798d0; name: FUN_004798d0
 */


void FUN_004798d0(long *param_1,ulong *param_2,int *param_3,int *param_4)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  
  *param_4 = 0;
  *param_3 = 0;
  for (param_1 = (long *)*param_1; param_1 != (long *)0x0; param_1 = (long *)*param_1) {
    if ((param_1[1] != 0) && (*(int *)(param_1 + 3) != 0)) {
      lVar1 = param_1[2];
      do {
        if ((1L << ((ulong)*(uint *)(lVar1 + 8) & 0x3f) & *param_2) != 0) {
          plVar2 = *(long **)(param_1[1] + 0x50);
          if (((plVar2 == (long *)0x0) || (*(int *)(param_1[1] + 0x78) == 0)) ||
             (piVar3 = param_3, *plVar2 == 0)) {
            piVar3 = param_4;
          }
          *piVar3 = *piVar3 + 1;
        }
        lVar1 = lVar1 + 0xc;
      } while (lVar1 != param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0xc);
    }
  }
  return;
}


