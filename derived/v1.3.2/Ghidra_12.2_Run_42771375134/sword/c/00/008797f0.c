/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008797f0; name: FUN_008797f0
 */


bool FUN_008797f0(long param_1)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar2 & 1) == 0) {
    return false;
  }
  uVar2 = FUN_008679b0(*(undefined8 *)(param_1 + 0x98));
  if ((uVar2 & 1) == 0) {
    return false;
  }
  cVar1 = FUN_00868a40(*(undefined8 *)(param_1 + 0x98));
  return (byte)(cVar1 - 1U) < 2;
}


