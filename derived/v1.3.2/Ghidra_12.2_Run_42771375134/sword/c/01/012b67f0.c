/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b67f0; name: FUN_012b67f0
 */


undefined1 FUN_012b67f0(long param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
  if (cVar1 == -1) {
    return 3;
  }
  bVar2 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
  if (bVar2 < 100) {
    bVar2 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
    return 4 < bVar2;
  }
  return 2;
}


