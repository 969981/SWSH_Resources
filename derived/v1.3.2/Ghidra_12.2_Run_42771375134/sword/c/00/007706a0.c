/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007706a0; name: FUN_007706a0
 */


undefined8 FUN_007706a0(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    lVar1 = *param_1 + (long)*(int *)(*param_1 + 0x10);
    if (param_1[8] <= param_2) goto LAB_007706ec;
LAB_007706b4:
    if (param_2 < 0) goto LAB_007706fc;
  }
  else {
    if (param_2 < param_1[8]) goto LAB_007706b4;
LAB_007706ec:
    if ((param_2 < 0) || (param_2 < param_1[10])) goto LAB_007706fc;
  }
  if (param_2 < param_1[0xb]) {
    *param_3 = lVar1 + (int)param_2;
    return 0;
  }
LAB_007706fc:
  *param_3 = 0;
  return 5;
}


