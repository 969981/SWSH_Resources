/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1c20; name: FUN_008e1c20
 */


undefined2 FUN_008e1c20(long param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 0x170);
  uVar2 = FUN_008ed0a0(&local_18);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_008ed2f0(&local_18);
    return uVar1;
  }
  return 0;
}


