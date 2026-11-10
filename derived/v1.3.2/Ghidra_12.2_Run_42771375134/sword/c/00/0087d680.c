/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d680; name: FUN_0087d680
 */


void FUN_0087d680(long param_1)

{
  ulong uVar1;
  
  FUN_0086ad20(*(undefined8 *)(param_1 + 0x98));
  uVar1 = FUN_00867f40(*(undefined8 *)(param_1 + 0x98));
  if ((uVar1 & 1) == 0) {
    FUN_00871a70(*(undefined8 *)(param_1 + 0x98),1);
    return;
  }
  return;
}


