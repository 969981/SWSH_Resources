/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044f5e0; name: FUN_0044f5e0
 */


void FUN_0044f5e0(long *param_1,undefined4 *param_2)

{
  if ((((((*(byte *)((long)param_1 + 0x155) >> 3 & 1) == 0) &&
        ((*(long *)(param_2 + 2) == 0 || (param_1[2] == *(long *)(param_2 + 2))))) &&
       ((param_2[4] == 0 || ((int)param_1[3] == param_2[4])))) &&
      ((((param_2[6] == 0 || ((int)param_1[4] == param_2[6])) &&
        ((*(char *)(param_2 + 8) == -1 || ((char)param_1[5] == *(char *)(param_2 + 8))))) &&
       ((*(char *)(param_2 + 10) == -1 || ((char)param_1[6] == *(char *)(param_2 + 10))))))) &&
     ((*(long *)(param_2 + 0xc) == 0 || (param_1[7] == *(long *)(param_2 + 0xc))))) {
                    /* WARNING: Could not recover jumptable at 0x0044f684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_2[0x12],param_2[0x12],param_1,*param_2);
    return;
  }
  return;
}


