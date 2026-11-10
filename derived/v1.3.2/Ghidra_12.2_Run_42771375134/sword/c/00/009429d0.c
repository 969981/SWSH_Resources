/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009429d0; name: FUN_009429d0
 */


void FUN_009429d0(long param_1)

{
  byte bVar1;
  
  if (*(byte *)(param_1 + 0x158) < 5) {
    bVar1 = *(byte *)(param_1 + 0x158) + 1;
    *(byte *)(param_1 + 0x158) = bVar1;
    param_1 = param_1 + (ulong)bVar1 * 0x38;
    FUN_00942b10(param_1 + 8);
    FUN_0093adf0(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x3e) = 0;
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
  }
  return;
}


