/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e60120; name: FUN_00e60120
 */


void FUN_00e60120(long param_1,byte param_2)

{
  undefined1 uVar1;
  
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0xc2c) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(param_1 + 0xc2d);
  }
  else {
    if (*(char *)(param_1 + 0xc2c) != '\0') {
      return;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x218);
    *(undefined1 *)(param_1 + 0x218) = 0;
    *(undefined1 *)(param_1 + 0xc2d) = uVar1;
  }
  *(byte *)(param_1 + 0xc2c) = param_2 & 1;
  return;
}


