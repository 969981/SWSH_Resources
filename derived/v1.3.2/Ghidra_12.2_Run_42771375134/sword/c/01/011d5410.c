/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d5410; name: FUN_011d5410
 */


uint FUN_011d5410(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_011d4d60();
  if ((uVar1 & 1) != 0) {
    FUN_011c5880(*(undefined8 *)(param_1 + 0x20),param_3);
    FUN_006eccd0(*(undefined8 *)(param_1 + 0x28),param_4);
    FUN_008664a0(*param_2,param_1 + 0x40);
  }
  return uVar1 & 1;
}


