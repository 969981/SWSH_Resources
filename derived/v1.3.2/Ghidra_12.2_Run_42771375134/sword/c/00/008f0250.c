/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f0250; name: FUN_008f0250
 */


bool FUN_008f0250(int param_1,char param_2,undefined1 param_3,uint param_4)

{
  if (param_1 == 2) {
    if (4 < (int)param_4) {
      return false;
    }
    if (param_2 == '\0') {
switchD_008f02f8_caseD_3:
      return param_4 != 0;
    }
    switch(param_3) {
    case 0:
      return param_4 == 4;
    case 1:
    case 7:
      return (ulong)param_4 - 3 < 2;
    case 2:
    case 6:
      return 1 < param_4;
    case 3:
    case 4:
    case 5:
      goto switchD_008f02f8_caseD_3;
    default:
      return true;
    }
  }
  if (param_1 == 1) {
    switch(param_3) {
    case 0:
      goto switchD_008f02a8_caseD_0;
    default:
      return false;
    case 2:
    case 4:
      return (int)param_4 < 5 && (param_4 | 2) == 3;
    case 3:
    case 5:
      return (int)param_4 < 5 && (param_4 | 4) != 4;
    }
  }
  if (param_1 != 0) {
    return false;
  }
  if (4 < (int)param_4) {
    return false;
  }
LAB_008f0334:
  if (param_2 == '\0') {
    return param_4 == 1;
  }
  return (&DAT_02149d24)[param_4] != '\0';
switchD_008f02a8_caseD_0:
  if (4 < (int)param_4) {
    return false;
  }
  goto LAB_008f0334;
}


