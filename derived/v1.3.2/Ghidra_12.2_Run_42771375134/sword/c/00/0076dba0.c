/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076dba0; name: FUN_0076dba0
 */


undefined8 FUN_0076dba0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1[10] < param_1[8] + 0x80) {
    return 3;
  }
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    lVar2 = *param_1 + (long)*(int *)(*param_1 + 0x10);
  }
  lVar1 = param_1[10] + -8;
  param_1[10] = lVar1;
  *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
  *(undefined8 *)(lVar2 + (int)lVar1) = param_2;
  if (*(ulong *)((long)param_1 + 0x8c) < (ulong)(param_1[0xb] - param_1[10])) {
    *(long *)((long)param_1 + 0x8c) = param_1[0xb] - param_1[10];
  }
  if (*(ulong *)((long)param_1 + 0x94) < (ulong)(param_1[8] - param_1[9])) {
    *(long *)((long)param_1 + 0x94) = param_1[8] - param_1[9];
    return 0;
  }
  return 0;
}


