/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011573c0; name: FUN_011573c0
 */


void FUN_011573c0(long param_1)

{
  undefined1 uVar1;
  uint extraout_var;
  ulong uVar2;
  uint extraout_var_00;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  char local_58;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  switch(*(undefined4 *)(param_1 + 0xe0)) {
  case 0:
    if (*(int *)(param_1 + 0xb8) == 0) {
      plVar3 = *(long **)(param_1 + 0xc0);
      if (plVar3 != (long *)0x0) {
        iVar7 = (int)((ulong)plVar3[0xbd] >> 0x20);
        if (iVar7 == 2) {
          iVar7 = 8;
        }
        else if (iVar7 == 1) {
          iVar7 = 9;
        }
        else {
          iVar7 = 10;
          switch(plVar3[0xbd] & 0xffffffff) {
          case 0:
            iVar7 = 0;
            break;
          case 1:
            iVar7 = *(byte *)(param_1 + 0x80) + 0xd;
            break;
          case 2:
            iVar7 = 0xc;
            break;
          case 4:
            iVar7 = 0xb;
          }
        }
        *(int *)(param_1 + 0xb8) = iVar7;
        (**(code **)(*plVar3 + 0xa0))();
        if (*(int *)(param_1 + 0xb8) != 0) goto LAB_011573fc;
      }
      if (*(long *)(param_1 + 200) == 0) goto LAB_011573fc;
      uVar2 = FUN_01160cb0();
      if ((uVar2 & 0xff00000000) == 0) {
        iVar7 = (uint)uVar2 + 2;
        if (5 < (uint)uVar2) {
          iVar7 = 0;
        }
      }
      else {
        iVar7 = 1;
      }
      *(int *)(param_1 + 0xb8) = iVar7;
      FUN_01160360(*(undefined8 *)(param_1 + 200));
      iVar7 = *(int *)(param_1 + 0x78);
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
    else {
LAB_011573fc:
      iVar7 = *(int *)(param_1 + 0x78);
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
    if (iVar7 == 0x20) {
      uVar1 = FUN_0115a530(*(undefined8 *)(param_1 + 0xa8));
      *(undefined1 *)(param_1 + 0x80) = uVar1;
      return;
    }
    if (iVar7 == 0x13) {
      FUN_0115ed30(*(undefined8 *)(param_1 + 0xa0));
      *(char *)(param_1 + 0x80) = (char)extraout_var;
      if ((uint)*(byte *)(param_1 + 0x81) != (extraout_var & 0xff)) {
        *(char *)(param_1 + 0x81) = (char)extraout_var;
        FUN_01157ae0(param_1);
        return;
      }
    }
    break;
  case 1:
    if (2 < *(int *)(param_1 + 0x78) - 1U) {
      FUN_0115a240(*(undefined8 *)(param_1 + 0xa8));
    }
    FUN_0115da80(*(undefined8 *)(param_1 + 0xa0));
    FUN_01157880(param_1);
    FUN_0115ad00(*(undefined8 *)(param_1 + 0xa8),0,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0xd4)
                );
    FUN_0115ad00(*(undefined8 *)(param_1 + 0xa8),1,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0xf8)
                );
    FUN_0115ad00(*(undefined8 *)(param_1 + 0xa8),2,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0xd4)
                );
    FUN_0115ad00(*(undefined8 *)(param_1 + 0xa8),3,*(undefined4 *)(*(long *)(param_1 + 0x70) + 0xf8)
                );
    FUN_0115ad00(*(undefined8 *)(param_1 + 0xa8),4,
                 *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x11c));
    FUN_0115ad00(*(undefined8 *)(param_1 + 0xa8),5,
                 *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x140));
    FUN_011579c0(param_1);
    FUN_01157ae0(param_1);
    FUN_01157bd0(param_1);
    *(undefined4 *)(param_1 + 0xe0) = 2;
    return;
  case 2:
    uVar2 = FUN_01157330(param_1,*(int *)(param_1 + 0x78) == 1);
    if ((uVar2 & 1) != 0) {
      uVar6 = 5;
      if (*(int *)(param_1 + 0x78) != 4) {
        uVar6 = 3;
      }
      *(undefined4 *)(param_1 + 0xe0) = uVar6;
      return;
    }
    break;
  case 3:
    puVar8 = (uint *)(param_1 + 0x78);
    uVar9 = *puVar8;
    if (2 < uVar9 - 1) {
      if ((uVar9 < 0x2b) && ((0x79ff800bfe1U >> ((ulong)uVar9 & 0x3f) & 1) != 0)) {
        puVar8 = (uint *)(&DAT_02165d40 + (long)(int)uVar9 * 4);
      }
      else {
        lVar4 = *(long *)(*(long *)(param_1 + 0xa8) + 0x5f0);
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
      }
      if (0x1a < *puVar8 || (1 << (ulong)(*puVar8 & 0x1f) & 0x7780000U) == 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x5f0);
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
      }
    }
    FUN_01157d10(param_1);
    *(undefined4 *)(param_1 + 0xe0) = 4;
    return;
  case 4:
    uVar2 = FUN_01157330(param_1,*(int *)(param_1 + 0x78) == 1);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar9 = *(uint *)(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x80) = 0;
    if (uVar9 == 0x20) {
      uVar1 = FUN_0115a530(*(undefined8 *)(param_1 + 0xa8));
      *(undefined1 *)(param_1 + 0x80) = uVar1;
    }
    else {
      if (uVar9 != 0x13) goto LAB_01157654;
      FUN_0115ed30(*(undefined8 *)(param_1 + 0xa0));
      *(char *)(param_1 + 0x80) = (char)extraout_var_00;
      if ((uint)*(byte *)(param_1 + 0x81) != (extraout_var_00 & 0xff)) {
        *(char *)(param_1 + 0x81) = (char)extraout_var_00;
        FUN_01157ae0(param_1);
      }
    }
    uVar9 = *(uint *)(param_1 + 0x78);
LAB_01157654:
    if (uVar9 == 0x13) {
      FUN_0115ed70(*(undefined8 *)(param_1 + 0xa0));
      uVar9 = *(uint *)(param_1 + 0x78);
    }
    local_2c = 0;
    uStack_28 = 0;
    local_34 = 0;
    uStack_30 = 0;
    local_3c = 0;
    uStack_38 = 0;
    local_44 = 0;
    uStack_40 = 0;
    if ((uVar9 < 0x29) && ((1L << ((ulong)uVar9 & 0x3f) & 0x11cf8210709U) != 0)) {
      lVar4 = *(long *)(*(long *)(param_1 + 0xb0) + 0x5d0);
      uVar5 = 1;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 0xb0) + 0x5d0);
      uVar5 = 0;
    }
    (**(code **)(*(long *)(lVar4 + 0x60) + 8))((long *)(lVar4 + 0x60),uVar5);
    if (*(int *)(param_1 + 0x78) == 0x21) {
      local_58 = FUN_0115a530(*(undefined8 *)(param_1 + 0xa8));
      local_58 = local_58 + '\x01';
    }
    else {
      local_58 = -1;
    }
    local_7c = CONCAT44(local_44,uStack_48);
    local_5c = uStack_28;
    local_64 = CONCAT44(local_2c,uStack_30);
    local_51 = local_4a;
    local_53 = local_4c;
    local_6c = CONCAT44(local_34,uStack_38);
    local_74 = CONCAT44(local_3c,uStack_40);
    local_57 = local_50;
    local_80 = uVar9;
    FUN_01160cc0(*(undefined8 *)(param_1 + 0xb0),&local_80);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    return;
  case 5:
    *(byte *)(*(long *)(param_1 + 0xd8) + 0x58) = *(byte *)(*(long *)(param_1 + 0xd8) + 0x58) & 0xfe
    ;
  }
  return;
}


