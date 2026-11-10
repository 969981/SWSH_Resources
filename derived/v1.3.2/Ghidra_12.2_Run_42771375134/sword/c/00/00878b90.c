/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00878b90; name: FUN_00878b90
 */


void FUN_00878b90(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_008767f0(*(undefined8 *)(param_1 + 0x98));
  uVar1 = FUN_008807d0(uVar2,param_2);
  FUN_008766a0(*(undefined8 *)(param_1 + 0x98),uVar1);
  return;
}


