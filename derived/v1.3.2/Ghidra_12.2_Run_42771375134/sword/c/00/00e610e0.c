/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e610e0; name: FUN_00e610e0
 */


undefined4 FUN_00e610e0(long param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
  case 3:
    return *(undefined4 *)(param_1 + 0x998);
  case 1:
    return *(undefined4 *)(param_1 + 0x99c);
  case 2:
    return *(undefined4 *)(param_1 + 0x9a0);
  default:
    return 0;
  }
}


