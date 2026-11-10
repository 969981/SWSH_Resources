/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d70700; name: FUN_00d70700
 */


ulong FUN_00d70700(undefined4 *param_1,int *param_2,char *param_3,char *param_4)

{
  ulong uVar1;
  long lVar2;
  uint local_14;
  
  switch(*param_1) {
  case 2:
    lVar2 = 2;
    break;
  case 3:
    lVar2 = 3;
    break;
  case 4:
    lVar2 = 4;
    break;
  case 5:
    lVar2 = 5;
    break;
  case 6:
    lVar2 = 6;
    break;
  case 7:
    lVar2 = 7;
    break;
  case 8:
    lVar2 = 8;
    break;
  case 9:
    lVar2 = 9;
    break;
  case 10:
    lVar2 = 10;
    break;
  case 0xb:
    return 1;
  default:
    lVar2 = 1;
  }
  local_14 = *(uint *)(PTR_DAT_0271e2b8 + lVar2 * 4);
  uVar1 = (ulong)local_14;
  if ((lVar2 == 3) && (*param_3 == '\0')) {
LAB_00d707b0:
    uVar1 = FUN_00d70700(&local_14);
    return uVar1;
  }
  if (lVar2 == 10) {
    if ((*param_2 == 2) || (*param_4 == '\0')) goto LAB_00d707b0;
    uVar1 = 0xb;
  }
  return uVar1;
}


