/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006dbb10; name: FUN_006dbb10
 */


void FUN_006dbb10(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  
  FUN_006db770();
  uVar1 = (**(code **)(*param_4 + 0x80))(param_4,param_5);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  return;
}


