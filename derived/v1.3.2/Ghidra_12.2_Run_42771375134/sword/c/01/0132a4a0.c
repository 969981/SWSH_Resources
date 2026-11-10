/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132a4a0; name: FUN_0132a4a0
 */


undefined4 FUN_0132a4a0(long *param_1,long param_2)

{
  long *plVar1;
  
  if (*param_1 != param_2) {
    plVar1 = param_1 + 2;
    if ((param_1[2] == param_2) || (plVar1 = param_1 + 4, param_1[4] == param_2)) {
      param_1 = plVar1;
    }
    else {
      param_1 = param_1 + 6;
      if (*param_1 != param_2) {
        return 0xffffffff;
      }
    }
  }
  return (int)param_1[1];
}


