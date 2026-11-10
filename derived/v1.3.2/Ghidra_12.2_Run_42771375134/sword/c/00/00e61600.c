/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e61600; name: FUN_00e61600
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e61600(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  pcVar2 = "";
  *param_1 = 0xcbf29ce484222645;
  param_1[1] = &DAT_01d38550;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar5 = 4;
  cVar1 = DAT_01d38550;
  switch(param_3) {
  case 0:
    uVar6 = 0xe62a26a2f676ff7;
    pcVar2 = "to_ba01_land_state";
    uVar4 = 0x12;
    goto LAB_00e616d8;
  case 1:
    uVar6 = 0x7289906d587d8b91;
    pcVar2 = "to_ba01_landC01";
    uVar4 = 0xf;
    goto LAB_00e616d8;
  case 2:
    uVar6 = 0xca14f31f02885dc1;
    pcVar2 = "to_ba02_megaappeal01";
    uVar4 = 0x14;
    goto LAB_00e616d8;
  case 3:
    uVar6 = 0x3d3d95c9c94f145c;
    pcVar2 = "to_ba02_roar01";
    uVar4 = 0xe;
LAB_00e616d8:
    *param_1 = uVar6;
    param_1[1] = pcVar2;
    lVar5 = 0x55;
    param_1[2] = uVar4;
    param_1[3] = 0;
switchD_00e61640_caseD_4:
    cVar1 = *pcVar2;
    break;
  case 4:
    goto switchD_00e61640_caseD_4;
  case 5:
    lVar5 = 5;
    break;
  case 6:
    lVar5 = 7;
    break;
  case 7:
    lVar5 = 8;
    break;
  case 8:
    lVar5 = 9;
    break;
  case 9:
    lVar5 = 10;
    break;
  case 10:
    lVar5 = 0xb;
    break;
  case 0xb:
    lVar5 = 0xc;
    break;
  case 0xc:
    lVar5 = 0xd;
    break;
  case 0xd:
    lVar5 = 0xe;
    break;
  case 0xe:
    lVar5 = 0xf;
    break;
  case 0xf:
    lVar5 = 0x10;
    break;
  case 0x10:
    lVar5 = 0x12;
    break;
  case 0x11:
    lVar5 = 0x13;
    break;
  case 0x12:
    lVar5 = 0x14;
    break;
  case 0x13:
    lVar5 = 0x17;
    break;
  case 0x14:
    lVar5 = 0x18;
    break;
  case 0x15:
    lVar5 = 0x19;
    break;
  case 0x16:
    lVar5 = 0x1a;
    break;
  case 0x17:
    lVar5 = 0x1e;
    break;
  case 0x18:
    lVar5 = 0x1f;
    break;
  case 0x19:
    lVar5 = 0x20;
    break;
  case 0x1a:
    lVar5 = 0x21;
    break;
  case 0x1b:
    lVar5 = 0x22;
    break;
  case 0x1c:
    lVar5 = 0x23;
    break;
  case 0x1d:
    lVar5 = 0x24;
    break;
  case 0x1e:
    lVar5 = 0x25;
    break;
  case 0x1f:
    lVar5 = 0x26;
    break;
  case 0x20:
    lVar5 = 0x27;
    break;
  case 0x21:
    lVar5 = 0x28;
    break;
  case 0x22:
    lVar5 = 0x29;
    break;
  case 0x23:
    lVar5 = 0x2a;
    break;
  case 0x24:
    lVar5 = 0x2b;
    break;
  case 0x25:
    lVar5 = 0x2c;
    break;
  case 0x26:
    lVar5 = 0x30;
    break;
  default:
    lVar5 = 0x55;
  }
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)(PTR_DAT_0271fc78 + lVar5 * 0x18);
    uVar6 = puVar3[1];
    uVar4 = puVar3[2];
    *param_1 = *puVar3;
    param_1[1] = uVar6;
    param_1[2] = uVar4;
    return;
  }
  return;
}


