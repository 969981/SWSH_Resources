/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002317c0; name: FUN_002317c0
 */


bool FUN_002317c0(float param_1,float param_2,uint param_3)

{
  int iVar1;
  
  if (param_1 == 0.0) {
    if (param_2 == 0.0) goto switchD_00231814_caseD_0;
    iVar1 = 2;
    if (param_2 != 1.0) {
      iVar1 = 5;
    }
  }
  else if (param_1 == 1.0) {
    iVar1 = 7;
    if (param_2 == 0.0) {
      iVar1 = 1;
    }
  }
  else {
    if (param_2 == 0.0) goto switchD_00231814_caseD_3;
    iVar1 = 6;
    if (DAT_01d4c2dc <= param_1 + param_2) {
      iVar1 = 4;
    }
  }
  if (iVar1 == 7) {
    return false;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(iVar1) {
  case 1:
    return (param_3 & 0x18) == 0;
  case 2:
    return (param_3 & 0x30) == 0;
  case 3:
switchD_00231814_caseD_3:
    return (param_3 & 8) == 0;
  case 4:
    return (param_3 & 0x10) == 0;
  case 5:
    return (param_3 & 0x20) == 0;
  case 6:
    return true;
  }
switchD_00231814_caseD_0:
  return (param_3 & 0x28) == 0;
}


