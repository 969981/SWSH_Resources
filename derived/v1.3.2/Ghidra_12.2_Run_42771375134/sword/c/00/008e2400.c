/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e2400; name: FUN_008e2400
 */


void FUN_008e2400(long param_1,byte param_2,undefined1 param_3)

{
  long lVar1;
  
  if (param_2 < *(byte *)(param_1 + 0x33c)) {
    lVar1 = param_1 + (ulong)param_2 * 0x1c;
    *(undefined1 *)(lVar1 + 0x2dd) = param_3;
    if (*(char *)(lVar1 + 0x2e0) != '\0') {
      *(undefined1 *)(param_1 + (ulong)param_2 * 0x1c + 0x2d1) = param_3;
    }
  }
  return;
}


