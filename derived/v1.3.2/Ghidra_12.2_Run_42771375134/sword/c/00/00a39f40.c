/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a39f40; name: FUN_00a39f40
 */


undefined8 FUN_00a39f40(long *param_1)

{
  int iVar1;
  
  if ((int)param_1[0xba] != 0) {
    iVar1 = (int)param_1[0xba] + -1;
    *(int *)(param_1 + 0xba) = iVar1;
    if (iVar1 == 0) {
      FUN_00ffa160(param_1,1,1);
      (**(code **)(*param_1 + 0x90))(param_1);
      return 1;
    }
  }
  return 1;
}


