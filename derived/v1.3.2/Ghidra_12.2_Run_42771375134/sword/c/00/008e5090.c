/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5090; name: FUN_008e5090
 */


void FUN_008e5090(long param_1)

{
  if ((*(byte *)(param_1 + 0x87) >> 5 & 1) == 0) {
    FUN_008e0660(param_1,1,1,0,1);
    FUN_008e0c80(param_1);
    return;
  }
  FUN_008e0760(param_1,*(undefined8 *)(param_1 + 0x60),0);
  return;
}


