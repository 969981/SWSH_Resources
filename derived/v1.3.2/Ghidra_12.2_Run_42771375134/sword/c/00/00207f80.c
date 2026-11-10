/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207f80; name: FUN_00207f80
 */


undefined8 FUN_00207f80(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_00217f90();
  puVar2 = (undefined8 *)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x18) != 1) {
    puVar2 = (undefined8 *)*puVar2;
  }
  return puVar2[uVar1 & 0xffffffff];
}


