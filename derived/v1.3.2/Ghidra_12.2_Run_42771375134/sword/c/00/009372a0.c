/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009372a0; name: FUN_009372a0
 */


void FUN_009372a0(long param_1,undefined8 param_2,undefined2 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_008f79e0(*(undefined8 *)(param_1 + 8),param_2,0);
  if ((uVar1 & 0xff) == 5) {
    return;
  }
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xa3,uVar1,param_3);
  return;
}


