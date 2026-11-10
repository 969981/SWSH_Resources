/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00546f60; name: FUN_00546f60
 */


undefined8 FUN_00546f60(uint param_1,int param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x10;
  if (-1 < (int)param_1) {
    uVar1 = param_1;
  }
  if (param_1 == 0) {
    uVar1 = 1;
  }
  if (param_2 < 0) {
    param_2 = 0x10;
    if ((int)uVar1 < 0x10) goto LAB_00546f84;
switchD_00546ff0_caseD_10:
    uVar2 = 0x10;
switchD_00546ff0_caseD_1:
    goto joined_r0x00547070;
  }
  if (0xf < param_2) {
    param_2 = 0x10;
  }
  if (0xf < (int)uVar1) goto switchD_00546ff0_caseD_10;
LAB_00546f84:
  if (uVar1 == 1) {
    param_2 = 0;
joined_r0x00547004:
    uVar2 = 0;
    goto joined_r0x00547070;
  }
  if ((int)uVar1 < 2) goto joined_r0x00547004;
  uVar2 = 0;
  switch(uVar1 & 0x7fffffff) {
  case 0:
    uVar2 = 1;
    goto joined_r0x00547010;
  default:
    goto switchD_00546ff0_caseD_1;
  case 2:
    uVar2 = 2;
joined_r0x00547010:
    if (param_3 == (undefined4 *)0x0) goto LAB_00546fb4;
    goto LAB_00546fb0;
  case 3:
    uVar2 = 3;
    break;
  case 4:
    uVar2 = 4;
    break;
  case 5:
    uVar2 = 5;
    break;
  case 6:
    uVar2 = 6;
    break;
  case 7:
    uVar2 = 7;
    break;
  case 8:
    uVar2 = 8;
    break;
  case 9:
    uVar2 = 9;
    break;
  case 10:
    uVar2 = 10;
    break;
  case 0xb:
    uVar2 = 0xb;
    break;
  case 0xc:
    uVar2 = 0xc;
    break;
  case 0xd:
    uVar2 = 0xd;
    break;
  case 0xe:
    uVar2 = 0xe;
    break;
  case 0xf:
    uVar2 = 0xf;
    break;
  case 0x10:
    goto switchD_00546ff0_caseD_10;
  }
joined_r0x00547070:
  if (param_3 != (undefined4 *)0x0) {
LAB_00546fb0:
    *param_3 = uVar2;
  }
LAB_00546fb4:
  if (param_4 != (int *)0x0) {
    *param_4 = param_2;
  }
  return 0;
}


