/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01252f90; name: FUN_01252f90
 */


void FUN_01252f90(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_01252f90(param_1,*param_2);
  FUN_01252f90(param_1,param_2[1]);
  param_2[5] = PTR_DAT_027167e8 + 0x10;
  FUN_017d0720();
  FUN_017cd7a0(param_2);
  return;
}


