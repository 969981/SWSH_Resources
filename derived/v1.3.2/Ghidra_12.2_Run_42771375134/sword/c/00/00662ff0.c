/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00662ff0; name: FUN_00662ff0
 */


void FUN_00662ff0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  undefined4 uVar1;
  
  *param_5 = 0;
  switch(param_1) {
  case 0:
  case 0x1a:
    *param_2 = 0;
    goto LAB_00663068;
  case 1:
  case 6:
  case 7:
    *param_2 = 0;
    goto LAB_0066308c;
  case 2:
  case 8:
    uVar1 = 1;
    goto LAB_00663064;
  case 3:
  case 9:
    *param_2 = 1;
    goto LAB_0066308c;
  case 4:
    uVar1 = 2;
LAB_00663064:
    *param_2 = uVar1;
LAB_00663068:
    *param_3 = 0;
    goto LAB_00663090;
  case 5:
    uVar1 = 4;
    break;
  case 10:
    uVar1 = 3;
    break;
  case 0xb:
    uVar1 = 5;
    break;
  case 0xc:
    *param_2 = 5;
    *param_3 = 1;
    *param_4 = 0;
    *param_5 = 1;
    return;
  case 0xd:
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = 1;
    return;
  case 0xe:
  case 0x13:
  case 0x14:
    *param_2 = 0;
    *param_3 = 1;
    *param_4 = 1;
    return;
  case 0xf:
  case 0x15:
  case 0x16:
    *param_2 = 1;
    *param_3 = 0;
    *param_4 = 1;
    return;
  case 0x10:
    *param_2 = 1;
    *param_3 = 1;
    *param_4 = 1;
    return;
  case 0x11:
    *param_2 = 2;
    *param_3 = 0;
    *param_4 = 1;
    return;
  case 0x12:
    *param_2 = 4;
    *param_3 = 1;
    *param_4 = 1;
    return;
  case 0x17:
    *param_2 = 3;
    *param_3 = 1;
    *param_4 = 1;
    return;
  case 0x18:
    *param_2 = 5;
    *param_3 = 1;
    *param_4 = 1;
    return;
  case 0x19:
    *param_2 = 1;
    *param_3 = 1;
    *param_4 = 1;
    *param_5 = 1;
    return;
  default:
    goto switchD_00663010_default;
  }
  *param_2 = uVar1;
LAB_0066308c:
  *param_3 = 1;
LAB_00663090:
  *param_4 = 0;
switchD_00663010_default:
  return;
}


