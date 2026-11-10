/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523530; name: FUN_00523530
 */


undefined8 FUN_00523530(uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x1d) {
    if ((1 << (ulong)(param_1 & 0x1f) & 0x11000404U) == 0) {
      if (param_1 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  if ((param_1 & 0xfffffff7) - 1 < 4) {
switchD_00523588_caseD_f:
    return 1;
  }
  switch(param_1) {
  case 0xd:
  case 0xe:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x41:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x52:
  case 0x53:
  case 0x56:
  case 0x57:
    goto switchD_00523588_caseD_f;
  default:
    return uVar1;
  }
}


