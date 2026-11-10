/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008838c0; name: FUN_008838c0
 */


bool FUN_008838c0(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,
                 undefined4 *param_5)

{
  int iVar1;
  
  switch(*param_5) {
  case 8:
    return *(ushort *)(param_5 + 1) == param_4;
  default:
    return false;
  case 0x11:
    break;
  case 0x12:
    if (*(ushort *)(param_5 + 1) == param_4) {
      iVar1 = FUN_0087ccf0(param_2);
      return iVar1 == 1;
    }
    return false;
  case 0x2a:
    if (*(ushort *)(param_5 + 1) == param_4) {
      return *(char *)(param_3 + 4) != '\0';
    }
    return false;
  }
  if (*(ushort *)(param_5 + 1) == param_4) {
    iVar1 = FUN_0087ccf0(param_2);
    return iVar1 == 0;
  }
  return false;
}


