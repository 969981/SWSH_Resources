/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bbe80; name: FUN_014bbe80
 */


undefined8 FUN_014bbe80(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *param_2;
  if (uVar1 - 0x60 < 0x1b) {
switchD_014bbeb4_caseD_e0:
    uVar2 = uVar1 - 0x20;
    goto switchD_014bbeb4_caseD_153;
  }
  uVar2 = 0x152;
  switch((uint)uVar1) {
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe4:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf1:
  case 0xf3:
  case 0xf4:
  case 0xf6:
  case 0xfa:
  case 0xfb:
  case 0xfc:
    goto switchD_014bbeb4_caseD_e0;
  default:
    return 0;
  case 0x153:
switchD_014bbeb4_caseD_153:
    *param_2 = uVar2;
    return 1;
  }
}


