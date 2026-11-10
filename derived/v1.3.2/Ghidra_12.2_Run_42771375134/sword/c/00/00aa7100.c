/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa7100; name: FUN_00aa7100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aa7100(undefined8 param_1,undefined4 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_2 = *(undefined4 *)(param_3 + 0x228);
  param_2[1] = *(undefined4 *)(param_3 + 0x228);
  param_2[10] = 0x1010000;
  param_2[8] = 100;
  *(undefined1 *)(param_2 + 0xb) = 0;
  uVar4 = _UNK_01d4b6f8;
  uVar3 = _DAT_01d4b6f0;
  uVar2 = _DAT_01d4b5e0;
  uVar1 = _DAT_01d4b310;
  uVar8 = _UNK_01d4a5d8;
  uVar7 = _DAT_01d4a5d0;
  uVar5 = 0;
  switch(*(undefined2 *)(param_3 + 0x22c)) {
  case 0x2a:
    *(undefined8 *)(param_2 + 6) = _UNK_01d4b318;
    *(undefined8 *)(param_2 + 4) = uVar1;
    uVar7 = _DAT_01d4b700;
    uVar8 = _UNK_01d4b708;
    goto LAB_00aa71f0;
  case 0x2b:
    param_2[2] = 0xf;
    *(undefined8 *)(param_2 + 6) = uVar4;
    *(undefined8 *)(param_2 + 4) = uVar3;
    return;
  case 0x2c:
    uVar7 = _DAT_01d4a870;
    uVar8 = _UNK_01d4a878;
    goto LAB_00aa71bc;
  case 0x2d:
    uVar7 = _DAT_01d4a090;
    uVar8 = _UNK_01d4a098;
LAB_00aa71bc:
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    lVar6 = *(long *)(param_3 + 0x220);
    *(undefined1 *)(lVar6 + 0xc0) = 1;
    *(undefined8 *)(lVar6 + 0xd8) = uVar8;
    *(undefined8 *)(lVar6 + 0xd0) = uVar7;
    param_2[2] = 0xf;
    return;
  case 0x2e:
  case 0xcb:
  case 0xcc:
    *(undefined8 *)(param_2 + 4) = 0;
    uVar5 = 0xf;
    break;
  case 0x2f:
  case 0xb1:
  case 0xb6:
    *(undefined8 *)(param_2 + 4) = 0;
    uVar5 = 4;
    break;
  case 0x30:
    *(undefined8 *)(param_2 + 6) = _UNK_01d4b5e8;
    *(undefined8 *)(param_2 + 4) = uVar2;
    uVar7 = _DAT_01d4a860;
    uVar8 = _UNK_01d4a868;
LAB_00aa71f0:
    lVar6 = *(long *)(param_3 + 0x220);
    *(undefined1 *)(lVar6 + 0xc0) = 1;
    *(undefined8 *)(lVar6 + 0xd8) = uVar8;
    *(undefined8 *)(lVar6 + 0xd0) = uVar7;
    param_2[2] = 6;
    return;
  case 0x31:
  case 0x88:
  case 0x89:
  case 0xb8:
    uVar5 = 0;
    goto LAB_00aa7264;
  case 0x32:
    *(undefined1 *)((long)param_2 + 0x29) = 1;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    param_2[2] = 0xf;
    return;
  case 0x33:
    param_2[2] = 0xf;
    *(undefined8 *)(param_2 + 6) = uVar8;
    *(undefined8 *)(param_2 + 4) = uVar7;
    return;
  default:
    goto switchD_00aa7148_caseD_34;
  case 0xb2:
  case 0xb3:
  case 0xb5:
  case 0xb7:
    *(undefined8 *)(param_2 + 4) = 0;
    uVar5 = 5;
    break;
  case 0xb4:
    *(undefined1 *)((long)param_2 + 0x29) = 1;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    param_2[2] = 5;
    return;
  case 0xca:
    *(undefined8 *)(param_2 + 4) = 0;
    uVar5 = 8;
    break;
  case 0xcd:
    uVar5 = 0x1f;
LAB_00aa7264:
    *(undefined8 *)(param_2 + 4) = 0;
  }
  *(undefined8 *)(param_2 + 6) = 0;
switchD_00aa7148_caseD_34:
  param_2[2] = uVar5;
  return;
}


