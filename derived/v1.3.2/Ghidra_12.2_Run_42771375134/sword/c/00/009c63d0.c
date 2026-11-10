/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c63d0; name: FUN_009c63d0
 */


undefined8 FUN_009c63d0(long *param_1)

{
  char cVar1;
  
  if (param_1[0xb] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x8b8))();
    if (cVar1 == '\x01') {
      return 1;
    }
    cVar1 = (**(code **)(*param_1 + 0x8b8))(param_1);
    if (cVar1 == '\x03') {
      return 1;
    }
  }
  return 0;
}


