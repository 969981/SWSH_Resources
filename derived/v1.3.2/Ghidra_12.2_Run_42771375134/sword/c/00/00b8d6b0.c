/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8d6b0; name: FUN_00b8d6b0
 */


void FUN_00b8d6b0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x21a0) = param_2;
  if (*(int *)(param_1 + 0x98) == 4) {
    FUN_00a713b0(param_1,0,0,0);
    FUN_00a71a00(param_1,0,0);
    FUN_00a713b0(param_1,1,0,0);
    FUN_00a71a00(param_1,1,0);
    FUN_00a713b0(param_1,2,0,0);
    FUN_00a71a00(param_1,2,0);
    FUN_00a713b0(param_1,3,0,0);
    FUN_00a71a00(param_1,3,0);
    FUN_00a713b0(param_1,4,0,0);
    FUN_00a71a00(param_1,4,0);
    FUN_00a713b0(param_1,5,0,0);
    FUN_00a71a00(param_1,5,0);
    FUN_00a713b0(param_1,6,0,0);
    FUN_00a71a00(param_1,6,0);
    FUN_00a71b20(param_1,0,0);
    return;
  }
  return;
}


