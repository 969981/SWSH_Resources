/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf3850; name: FUN_00bf3850
 */


void FUN_00bf3850(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 local_58;
  undefined8 local_54;
  uint local_4c;
  uint uStack_48;
  undefined4 local_44;
  long local_40;
  undefined4 local_38;
  
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  uVar3 = FUN_00bfb270(*(undefined8 *)(param_1 + 0xf8));
  if ((uVar3 & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 3:
  case 7:
  case 8:
  case 0xe:
  case 0x14:
  case 0x17:
  case 0x1b:
  case 0x21:
  case 0x40:
  case 0x44:
  case 0x52:
  case 0x56:
  case 0x5b:
  case 0x67:
  case 0x71:
  case 0x80:
    lVar4 = *(long *)(*(long *)(param_1 + 0xf0) + 0x5d0);
    uVar5 = 1;
    break;
  default:
    lVar4 = *(long *)(*(long *)(param_1 + 0xf0) + 0x5d0);
    uVar5 = 0;
  }
  (**(code **)(*(long *)(lVar4 + 0x60) + 8))((long *)(lVar4 + 0x60),uVar5);
  lVar4 = 0;
  local_54 = 0xffffffffffffffff;
  local_44 = 0xffffffff;
  uVar7 = 10;
  uVar2 = 10;
  if (0x81 < *(uint *)(param_1 + 0x68)) goto LAB_00bf3900;
  lVar6 = *(long *)(param_1 + 0x90);
  uStack_48 = 0xffffffff;
  local_4c = 0xffffffff;
  switch(*(uint *)(param_1 + 0x68)) {
  case 0:
  case 5:
  case 0x11:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x42:
  case 0x43:
  case 0x58:
  case 0x6c:
  case 0x6d:
  case 0x6e:
    local_54 = *(undefined8 *)(param_1 + 0x9c);
    lVar4 = 0;
    uVar2 = 10;
    goto LAB_00bf3900;
  default:
    goto switchD_00bf38ec_caseD_1;
  case 0x10:
    lVar4 = *(long *)(lVar6 + 0x1400);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar6 = *(long *)(param_1 + 0x90);
    }
    local_4c = (uint)*(byte *)(lVar6 + 0x1408);
    uStack_48 = (uint)*(byte *)(lVar6 + 0x1409);
    break;
  case 0x22:
    local_4c = *(uint *)(param_1 + 0x150);
    goto LAB_00bf3a5c;
  case 0x23:
    local_4c = *(uint *)(param_1 + 0x154);
    lVar4 = 0;
    uStack_48 = 1;
    break;
  case 0x26:
    local_4c = *(uint *)(param_1 + 0x154);
    goto LAB_00bf3a5c;
  case 0x27:
    local_4c = *(uint *)(lVar6 + 0x1424);
    uStack_48 = *(uint *)(lVar6 + 0x1428);
    goto LAB_00bf39b4;
  case 0x28:
    local_4c = *(uint *)(lVar6 + 0x142c);
    goto LAB_00bf3a5c;
  case 0x29:
    local_4c = *(uint *)(lVar6 + 0x1430);
    uStack_48 = *(uint *)(lVar6 + 0x1434);
LAB_00bf39b4:
    lVar4 = 0;
    break;
  case 0x2a:
    local_4c = *(uint *)(lVar6 + 0x1438);
    goto LAB_00bf3a5c;
  case 0x2b:
    lVar4 = *(long *)(lVar6 + 0x1400);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar6 = *(long *)(param_1 + 0x90);
    }
    uStack_48 = (uint)*(byte *)(lVar6 + 0x1409);
    local_4c = (uint)*(byte *)(lVar6 + 0x1408);
    if (*(char *)(lVar6 + 0x140c) == '\0') break;
    local_44 = *(undefined4 *)(lVar6 + 0x1410);
    goto LAB_00bf3ab4;
  case 0x2c:
    lVar4 = *(long *)(lVar6 + 0x1400);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar6 = *(long *)(param_1 + 0x90);
    }
    uStack_48 = (uint)*(byte *)(lVar6 + 0x1409);
    local_4c = (uint)*(byte *)(lVar6 + 0x1408);
    if (*(char *)(lVar6 + 0x1414) != '\0') {
      local_44 = *(undefined4 *)(lVar6 + 0x1418);
      goto LAB_00bf3ab4;
    }
    break;
  case 0x35:
    local_4c = *(uint *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x60) * 0x2c + 0x1ac);
LAB_00bf3a5c:
    lVar4 = 0;
    local_44 = 0xffffffff;
    local_54 = 0xffffffffffffffff;
    uVar7 = 10;
    uStack_48 = 0xffffffff;
    goto switchD_00bf38ec_caseD_1;
  case 0x45:
  case 0x46:
    lVar4 = *(long *)(lVar6 + 0x1400);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    local_54 = 0xffffffffffffffff;
    uVar2 = 0;
LAB_00bf3900:
    uVar7 = uVar2;
    local_44 = 0xffffffff;
    uStack_48 = 0xffffffff;
    local_4c = uStack_48;
    goto switchD_00bf38ec_caseD_1;
  case 0x81:
    lVar4 = *(long *)(lVar6 + 0x1400);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar6 = *(long *)(param_1 + 0x90);
    }
    uStack_48 = (uint)*(byte *)(lVar6 + 0x1409);
    local_4c = (uint)*(byte *)(lVar6 + 0x1408);
    if (*(char *)(lVar6 + 0x141c) != '\0') {
      local_44 = *(undefined4 *)(lVar6 + 0x1420);
      goto LAB_00bf3ab4;
    }
  }
  local_44 = 0xffffffff;
LAB_00bf3ab4:
  local_54 = 0xffffffffffffffff;
  uVar7 = 10;
switchD_00bf38ec_caseD_1:
  uVar5 = *(undefined8 *)(param_1 + 0xf0);
  local_58 = uVar1;
  local_40 = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_38 = uVar7;
  FUN_00c04c90(uVar5,&local_58);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


