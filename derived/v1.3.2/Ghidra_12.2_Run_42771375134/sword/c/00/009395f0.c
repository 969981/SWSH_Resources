/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009395f0; name: FUN_009395f0
 */


void FUN_009395f0(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_008f37f0(*(undefined8 *)(param_1 + 8));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0093cfb0(*(undefined8 *)(param_1 + 0x20),param_2);
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x3a,param_2 & 0xff);
  return;
}


