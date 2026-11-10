/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5a80; name: FUN_008e5a80
 */


undefined8 FUN_008e5a80(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x298) == '\0') ||
     (uVar1 = FUN_009a3d80(*(undefined2 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x33d)),
     (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN_00879860(*(undefined8 *)(param_1 + 0x60));
  return uVar2;
}


