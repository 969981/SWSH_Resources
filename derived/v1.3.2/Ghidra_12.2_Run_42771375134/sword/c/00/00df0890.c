/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df0890; name: FUN_00df0890
 */


void FUN_00df0890(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined1 *)(lVar1 + 0xc0) = 1;
  return;
}


