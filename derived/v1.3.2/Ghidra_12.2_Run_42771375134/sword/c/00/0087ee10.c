/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087ee10; name: FUN_0087ee10
 */


undefined8 FUN_0087ee10(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0x25) {
    uVar1 = FUN_00876260(*(undefined8 *)(param_1 + 0x98),0);
    return uVar1;
  }
  if (param_2 == 0x26) {
    uVar1 = FUN_00876260(*(undefined8 *)(param_1 + 0x98),1);
    return uVar1;
  }
  return 0;
}


