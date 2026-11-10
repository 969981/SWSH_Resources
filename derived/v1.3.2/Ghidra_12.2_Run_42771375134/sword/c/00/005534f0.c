/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005534f0; name: FUN_005534f0
 */


undefined8 FUN_005534f0(long param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == -1) {
    *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_1 + 0xe4);
  }
  else {
    *(int *)(param_1 + 0x2e0) = param_2;
  }
  if (param_3 == -1) {
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_1 + 0xe8);
  }
  else {
    *(int *)(param_1 + 0x2e4) = param_3;
  }
  if (param_4 == -1) {
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0xec);
    return 0;
  }
  *(int *)(param_1 + 0x2e8) = param_4;
  return 0;
}


