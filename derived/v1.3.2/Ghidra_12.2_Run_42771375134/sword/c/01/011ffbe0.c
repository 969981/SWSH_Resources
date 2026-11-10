/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ffbe0; name: FUN_011ffbe0
 */


void FUN_011ffbe0(long *param_1,long param_2,long param_3)

{
  if ((*(char *)(param_2 + 0x140) != '\0') && (*(long *)(param_2 + 0x170) == param_3)) {
    *param_1 = param_2 + 0x148;
    return;
  }
  if ((*(char *)(param_2 + 0x178) != '\0') && (*(long *)(param_2 + 0x1a8) == param_3)) {
    *param_1 = param_2 + 0x180;
    return;
  }
  if ((*(char *)(param_2 + 0x1b0) != '\0') && (*(long *)(param_2 + 0x1e0) == param_3)) {
    *param_1 = param_2 + 0x1b8;
    return;
  }
  if ((*(char *)(param_2 + 0x1e8) != '\0') && (*(long *)(param_2 + 0x218) == param_3)) {
    *param_1 = param_2 + 0x1f0;
    return;
  }
  if ((*(char *)(param_2 + 0x220) != '\0') && (*(long *)(param_2 + 0x250) == param_3)) {
    *param_1 = param_2 + 0x228;
    return;
  }
  if ((*(char *)(param_2 + 600) != '\0') && (*(long *)(param_2 + 0x288) == param_3)) {
    *param_1 = param_2 + 0x260;
    return;
  }
  if ((*(char *)(param_2 + 0x290) != '\0') && (*(long *)(param_2 + 0x2c0) == param_3)) {
    *param_1 = param_2 + 0x298;
    return;
  }
  if ((*(char *)(param_2 + 0x2c8) != '\0') && (*(long *)(param_2 + 0x2f8) == param_3)) {
    *param_1 = param_2 + 0x2d0;
    return;
  }
  if (*(long *)(param_2 + 0x130) == 0) {
    *param_1 = 0;
    return;
  }
  FUN_0120cba0();
  return;
}


