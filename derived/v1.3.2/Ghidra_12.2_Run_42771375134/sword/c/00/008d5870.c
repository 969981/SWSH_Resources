/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d5870; name: FUN_008d5870
 */


void FUN_008d5870(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 4) {
    param_2 = 1;
  }
  uVar1 = FUN_008d56f0(param_1,param_2);
  FUN_008f96b0(*(undefined8 *)(param_1 + 0x58),uVar1);
  return;
}


