/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a09650; name: FUN_00a09650
 */


undefined8 FUN_00a09650(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00a1f010(*(undefined8 *)(param_1 + 0x20),1);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_00a1f010(*(undefined8 *)(param_1 + 0x20),0);
  return uVar2;
}


