/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014add90; name: FUN_014add90
 */


int FUN_014add90(char *param_1,ulong param_2,int param_3,ushort param_4)

{
  int iVar1;
  
  if (param_3 < 199) {
    switch(param_3) {
    case 0x7a:
    case 0x90:
    case 0x91:
    case 0x92:
      break;
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
      goto switchD_014addbc_caseD_7b;
    default:
      if ((param_3 != 0x4d) && (param_3 != 0x4e)) goto switchD_014addbc_caseD_7b;
    }
  }
  else if (param_3 < 0x2d0) {
    if (param_3 != 199) {
      if ((param_3 != 0x22b) || (param_4 != 2)) goto switchD_014addbc_caseD_7b;
      goto LAB_014addcc;
    }
  }
  else if (param_3 != 0x2d0) {
    if ((param_3 != 0x382) || (1 < (ushort)(param_4 - 1))) goto switchD_014addbc_caseD_7b;
    goto LAB_014addcc;
  }
  if (param_4 == 1) {
LAB_014addcc:
    iVar1 = snprintf(param_1,param_2 & 0xffffffff,"ZKN_TYPE_%03d_%03d",param_3,(uint)param_4);
    return iVar1;
  }
switchD_014addbc_caseD_7b:
  iVar1 = snprintf(param_1,param_2 & 0xffffffff,"ZKN_TYPE_%03d",param_3);
  return iVar1;
}


