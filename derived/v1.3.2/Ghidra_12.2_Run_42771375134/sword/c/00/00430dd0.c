/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00430dd0; name: FUN_00430dd0
 */


undefined8 FUN_00430dd0(uint param_1,int param_2)

{
  if (param_2 <= *(int *)PTR_DAT_02712d88) {
    *(int *)PTR_DAT_02712d88 = param_2;
    *(uint *)PTR_DAT_02712e00 = param_1 & 0xffff;
  }
  return 1;
}


