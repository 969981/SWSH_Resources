/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01501290; name: FUN_01501290
 */


void FUN_01501290(long param_1,uint param_2,uint param_3,long *param_4)

{
  if ((((param_3 | param_2) < 2) && (*param_4 != 0)) &&
     (*(char *)(param_1 + (ulong)param_2 * 0x2b8 + (ulong)param_3 * 0x149 + 0x60) != '\0')) {
    thunk_FUN_008787a0(*param_4,param_1 + (ulong)param_2 * 0x2b8 + (ulong)param_3 * 0x149 + 0x61);
    return;
  }
  return;
}


