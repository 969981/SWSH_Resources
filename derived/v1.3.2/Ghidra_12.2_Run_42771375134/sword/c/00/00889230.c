/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00889230; name: FUN_00889230
 */


undefined4 FUN_00889230(byte param_1,byte param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0x12) {
    return 7;
  }
  if (param_2 == 0x12) {
    return 7;
  }
  uVar1 = 7;
  uVar2 = 0;
  switch((&UNK_02144600)[(ulong)param_2 + (ulong)param_1 * 0x12]) {
  case 0:
    uVar1 = 8;
    if ((param_3 & 1) == 0) {
      uVar1 = 0;
    }
    break;
  default:
    goto switchD_0088928c_caseD_1;
  case 2:
    uVar2 = 6;
    uVar1 = 8;
    goto LAB_008892bc;
  case 4:
    break;
  case 8:
    uVar2 = 8;
    uVar1 = 6;
LAB_008892bc:
    if ((param_3 & 1) == 0) {
      uVar1 = uVar2;
    }
  }
  uVar2 = uVar1;
switchD_0088928c_caseD_1:
  return uVar2;
}


