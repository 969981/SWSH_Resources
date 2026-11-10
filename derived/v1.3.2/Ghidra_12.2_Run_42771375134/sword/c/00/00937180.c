/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00937180; name: FUN_00937180
 */


undefined8 FUN_00937180(long param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00931980(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_00934600(uVar1,param_4);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x44,param_3,param_2,*param_4);
  return 1;
}


