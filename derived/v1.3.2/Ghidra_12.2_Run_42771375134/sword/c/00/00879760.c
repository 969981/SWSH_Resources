/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00879760; name: FUN_00879760
 */


undefined8 FUN_00879760(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_00868a40(*(undefined8 *)(param_1 + 0x98));
  return uVar2;
}


