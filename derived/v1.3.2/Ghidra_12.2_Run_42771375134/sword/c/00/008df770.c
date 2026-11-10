/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008df770; name: FUN_008df770
 */


undefined8 FUN_008df770(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte local_18 [4];
  byte local_14 [4];
  
  FUN_008f8e50(*param_1,param_2,local_14,local_18);
  if ((ulong)local_14[0] == 5) {
    return 0;
  }
  bVar1 = FUN_009141c0(param_1 + (ulong)local_14[0] * 7 + 1);
  if (local_18[0] < bVar1) {
    uVar2 = FUN_00914330(param_1 + (ulong)local_14[0] * 7 + 1);
    return uVar2;
  }
  return 0;
}


