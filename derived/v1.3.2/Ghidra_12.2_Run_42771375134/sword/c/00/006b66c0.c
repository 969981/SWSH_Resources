/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b66c0; name: FUN_006b66c0
 */


undefined8 FUN_006b66c0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  do {
    uVar1 = FUN_006b9b40(*(undefined8 *)(param_1 + 0xf0));
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_006b9c10(*(undefined8 *)(param_1 + 0xf0));
      return uVar2;
    }
    param_1 = *(long *)(param_1 + 0x110);
  } while (param_1 != 0);
  return 0x3c;
}


