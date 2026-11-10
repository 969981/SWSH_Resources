/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00889360; name: FUN_00889360
 */


undefined8 FUN_00889360(byte param_1,byte param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((param_1 != 0x12) && (param_2 != 0x12)) {
    uVar1 = 1;
    switch((&UNK_02144600)[(ulong)param_2 + (ulong)param_1 * 0x12]) {
    case 0:
      if ((param_3 & 1) != 0) {
        return 2;
      }
    default:
      return 0;
    case 2:
      if ((param_3 & 1) != 0) {
        return 2;
      }
      break;
    case 4:
      goto switchD_008893b8_caseD_4;
    case 8:
      if ((param_3 & 1) == 0) {
        return 2;
      }
    }
    uVar1 = 3;
  }
switchD_008893b8_caseD_4:
  return uVar1;
}


