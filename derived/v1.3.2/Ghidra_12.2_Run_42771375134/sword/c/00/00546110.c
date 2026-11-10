/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546110; name: FUN_00546110
 */


undefined8 FUN_00546110(long *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (((param_3 & 1) == 0) || (uVar1 = (**(code **)(*param_1 + 0x30))(param_1), -1 < (int)uVar1)) {
    uVar1 = 0;
    *(undefined1 *)((long)param_1 + 0x21) = 1;
  }
  return uVar1;
}


