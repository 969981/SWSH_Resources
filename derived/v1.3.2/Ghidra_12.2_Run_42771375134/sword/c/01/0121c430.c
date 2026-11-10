/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121c430; name: FUN_0121c430
 */


bool FUN_0121c430(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_012228f0();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  if (*(char *)(param_1 + 0x1c) != *(char *)(param_2 + 0x1c)) {
    return false;
  }
  if (*(char *)(param_1 + 0x1d) != *(char *)(param_2 + 0x1d)) {
    return false;
  }
  if (*(char *)(param_1 + 0x1e) != *(char *)(param_2 + 0x1e)) {
    return false;
  }
  if (*(char *)(param_1 + 0x1f) != *(char *)(param_2 + 0x1f)) {
    return false;
  }
  if (*(char *)(param_1 + 0x20) != *(char *)(param_2 + 0x20)) {
    return false;
  }
  if (*(char *)(param_1 + 0x21) != *(char *)(param_2 + 0x21)) {
    return false;
  }
  if (*(short *)(param_1 + 0x22) != *(short *)(param_2 + 0x22)) {
    return false;
  }
  if (*(short *)(param_1 + 0x24) != *(short *)(param_2 + 0x24)) {
    return false;
  }
  if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28)) {
    return false;
  }
  if (*(short *)(param_1 + 0x2c) != *(short *)(param_2 + 0x2c)) {
    return false;
  }
  if (*(short *)(param_1 + 0x2e) != *(short *)(param_2 + 0x2e)) {
    return false;
  }
  if (*(short *)(param_1 + 0x30) != *(short *)(param_2 + 0x30)) {
    return false;
  }
  if (*(short *)(param_1 + 0x32) != *(short *)(param_2 + 0x32)) {
    return false;
  }
  if (*(char *)(param_1 + 0x34) == *(char *)(param_2 + 0x34)) {
    return *(char *)(param_1 + 0x35) == *(char *)(param_2 + 0x35);
  }
  return false;
}


