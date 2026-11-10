/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd5860; name: FUN_00cd5860
 */


bool FUN_00cd5860(long param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0xf1) == '\0') {
    bVar1 = FUN_011fca80(*(undefined8 *)PTR_DAT_02718f20);
    bVar1 = bVar1 & 1;
    *(byte *)(param_1 + 0xf2) = bVar1;
    *(undefined1 *)(param_1 + 0xf1) = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xf2);
  }
  return bVar1 != 0;
}


