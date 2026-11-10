/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00905410; name: FUN_00905410
 */


bool FUN_00905410(long param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_008f9310(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
  bVar2 = FUN_009141d0(*(undefined8 *)(param_1 + 0x340));
  return bVar1 < bVar2;
}


