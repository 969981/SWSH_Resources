/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6e210; name: FUN_00d6e210
 */


void FUN_00d6e210(undefined8 *param_1,long *param_2,ulong param_3)

{
  undefined8 uVar1;
  
  param_1[6] = 0;
  *param_1 = param_2;
  param_1[1] = 0x7ffffffffffffff;
  param_1[8] = param_2;
  param_1[9] = 0x7ffffffffffffff;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if (param_3 == 0) {
    return;
  }
  if (param_3 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_3 << 5,8);
  FUN_00d6f940(param_1 + 8,uVar1,param_3,param_1[0x10] + param_1[0x11] * 0x20,0,0);
  return;
}


