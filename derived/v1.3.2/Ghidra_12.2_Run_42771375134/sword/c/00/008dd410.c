/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dd410; name: FUN_008dd410
 */


undefined8 FUN_008dd410(ushort param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (param_1 < 0x121) {
    if (param_1 == 0xbf) {
      return uVar1;
    }
    if (param_1 == 0x11e) {
      return uVar1;
    }
  }
  else if (((param_1 == 0x121) || (param_1 == 0x1be)) || (param_1 == 0x186)) {
    return uVar1;
  }
  return 0;
}


