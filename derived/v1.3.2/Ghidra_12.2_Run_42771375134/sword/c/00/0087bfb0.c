/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087bfb0; name: FUN_0087bfb0
 */


void FUN_0087bfb0(long param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xff) < 4) {
    uVar1 = FUN_00880a40(param_3,0);
    FUN_00870bc0(*(undefined8 *)(param_1 + 0x98),param_2,param_3);
    FUN_00870e80(*(undefined8 *)(param_1 + 0x98),param_2,0);
    FUN_00870d20(*(undefined8 *)(param_1 + 0x98),param_2,uVar1);
    return;
  }
  return;
}


