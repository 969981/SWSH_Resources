/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f35d0; name: FUN_005f35d0
 */


long FUN_005f35d0(long param_1,int param_2,int param_3)

{
  switch(*(undefined4 *)(param_1 + 0x58)) {
  case 2:
    if (0 < param_2) {
      return 0;
    }
    break;
  default:
    goto switchD_005f35f8_caseD_3;
  case 4:
    if (5 < param_2) {
      return 0;
    }
    break;
  case 5:
    if (param_2 < 0) {
      return 0;
    }
    if (param_3 < 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x70) <= param_2) {
      return 0;
    }
    goto LAB_005f360c;
  case 6:
    if (((-1 < param_2) && (-1 < param_3)) && (param_2 < *(int *)(param_1 + 0x70) * 6))
    goto LAB_005f360c;
    goto switchD_005f35f8_caseD_3;
  }
  if (-1 < param_3) {
LAB_005f360c:
    if (param_3 < *(int *)(param_1 + 0x6c)) {
      return *(long *)(param_1 + 0x108) +
             (long)(param_3 + *(int *)(param_1 + 0x6c) * param_2) * 0x20;
    }
    return 0;
  }
switchD_005f35f8_caseD_3:
  return 0;
}


