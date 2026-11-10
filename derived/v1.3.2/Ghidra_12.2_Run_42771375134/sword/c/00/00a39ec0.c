/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a39ec0; name: FUN_00a39ec0
 */


void FUN_00a39ec0(long *param_1,int param_2)

{
  if (param_2 == 3) {
    FUN_00ffa290(param_1,0,1);
    FUN_00ffa160(param_1,0,1);
    return;
  }
  if (param_2 == 2) {
    FUN_00ffa290(param_1,1,1);
    (**(code **)(*param_1 + 0x88))(param_1);
    *(undefined4 *)(param_1 + 0xba) = 1;
  }
  return;
}


