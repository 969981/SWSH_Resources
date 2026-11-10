/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00442f50; name: FUN_00442f50
 */


/* WARNING: Removing unreachable block (ram,0x00443320) */
/* WARNING: Removing unreachable block (ram,0x0044332c) */
/* WARNING: Removing unreachable block (ram,0x00443334) */
/* WARNING: Removing unreachable block (ram,0x00443350) */
/* WARNING: Removing unreachable block (ram,0x00443354) */
/* WARNING: Removing unreachable block (ram,0x00443370) */
/* WARNING: Removing unreachable block (ram,0x00443384) */
/* WARNING: Removing unreachable block (ram,0x004433a0) */
/* WARNING: Removing unreachable block (ram,0x004433a4) */
/* WARNING: Removing unreachable block (ram,0x004433a8) */
/* WARNING: Removing unreachable block (ram,0x004433c8) */

int FUN_00442f50(long param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_210 [72];
  undefined1 auStack_1c8 [72];
  undefined1 auStack_180 [72];
  undefined1 auStack_138 [72];
  undefined1 auStack_f0 [72];
  undefined4 local_a8;
  uint uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  char local_74;
  undefined2 local_73;
  undefined1 local_71;
  ulong local_70;
  undefined8 uStack_68;
  
  iVar4 = 1;
  switch(*param_2) {
  case 0:
    memcpy(&local_98,param_2,0x48);
    iVar4 = FUN_00444030(param_1,&local_98,auStack_f0 + 0xa8,0,0,0);
    if (iVar4 == 0x45) {
LAB_00443310:
      iVar10 = 1;
    }
    else {
      if (iVar4 == 1) {
        DAT_00000078 = DAT_00000078 | 1;
        uVar9 = *(undefined8 *)(param_2 + 0xe);
        if (param_2[10] != 2) {
          uVar9 = 0;
        }
        FUN_0044a8b0(param_1 + 0x88,param_2[1],uVar9);
        goto LAB_00443310;
      }
      iVar10 = iVar4;
    }
    uVar2 = *param_2;
    uVar11 = 0;
    uVar6 = 0xffffffff;
    if (uVar2 < 8) {
      uVar3 = 1 << (ulong)(uVar2 & 0x1f);
      if ((uVar3 & 3) == 0) {
        if ((uVar3 & 0xc) == 0) {
          if ((1 << (ulong)(uVar2 & 0x1f) & 0xc0U) == 0) goto LAB_0044343c;
          uVar11 = param_2[1];
        }
        else {
          uVar11 = param_2[0xe];
          if (param_2[0xc] != 1) {
            uVar11 = 0;
          }
        }
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = param_2[0xc];
        uVar11 = param_2[1];
      }
    }
LAB_0044343c:
    uVar2 = param_2[10];
    uVar9 = *(undefined8 *)(param_2 + 0xe);
    uVar7 = *(undefined8 *)(param_2 + 6);
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(int *)(param_1 + 0xd4) = iVar4;
    if (uVar2 != 2) {
      uVar9 = 0;
    }
    FUN_0044d500(param_1 + 0xd8,uVar7,uVar11,uVar9,iVar4,uVar6,uVar1);
    return iVar10;
  case 1:
    memcpy(auStack_f0,param_2,0x48);
    iVar4 = FUN_00443480(param_1,auStack_f0);
    break;
  case 2:
    memcpy(auStack_138,param_2,0x48);
    iVar4 = FUN_00443680(param_1,auStack_138);
    break;
  case 3:
    uVar2 = param_2[0xc];
    uVar9 = *(undefined8 *)(param_2 + 6);
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar6 = param_2[10];
    uVar12 = *(ulong *)(param_2 + 0xe);
    if (uVar2 == 1) {
      iVar4 = FUN_00446610(param_1,uVar12 & 0xffffffff);
    }
    else if (uVar2 == 0) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,uVar12);
      uVar12 = 0;
      iVar4 = 1;
    }
    else {
      uVar13 = 0;
      do {
        iVar4 = FUN_00446610(param_1,*(undefined4 *)(uVar12 + uVar13 * 4));
        if (iVar4 != 1) goto LAB_004431f4;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar2);
      iVar4 = 1;
LAB_004431f4:
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,uVar12);
      uVar12 = 0;
    }
    uVar11 = (uint)uVar12;
    if (uVar2 != 1) {
      uVar11 = 0;
    }
    if (uVar6 != 2) {
      uVar12 = 0;
    }
    *(int *)(param_1 + 0xd4) = iVar4;
    goto LAB_00443254;
  case 4:
    memcpy(auStack_180,param_2,0x48);
    iVar4 = FUN_00443930(param_1,auStack_180);
    break;
  case 5:
    uVar9 = *(undefined8 *)(param_2 + 6);
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar11 = param_2[10];
    uVar12 = *(ulong *)(param_2 + 0xe);
    FUN_00446cd0(param_1);
    iVar4 = 1;
    if (uVar11 != 2) {
      uVar12 = 0;
    }
    *(undefined4 *)(param_1 + 0xd4) = 1;
    uVar11 = 0;
    goto LAB_00443254;
  case 6:
    uVar11 = param_2[1];
    local_78 = param_2[0xc];
    uVar9 = *(undefined8 *)(param_2 + 6);
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar2 = param_2[10];
    uStack_7c = param_2[0xb];
    local_74 = (char)param_2[0xd];
    uVar12 = *(ulong *)(param_2 + 0xe);
    uStack_68 = *(undefined8 *)(param_2 + 0x10);
    local_a8 = 6;
    uVar8 = 1;
    if (local_78 != 1) {
      uVar8 = 2;
    }
    local_98 = *(undefined8 *)(param_2 + 4);
    local_a0 = *(undefined8 *)(param_2 + 2);
    local_71 = *(undefined1 *)((long)param_2 + 0x37);
    local_73 = *(undefined2 *)((long)param_2 + 0x35);
    uStack_a4 = uVar11;
    uStack_90 = uVar9;
    local_88 = uVar7;
    local_80 = uVar2;
    local_70 = uVar12;
    iVar4 = FUN_00446a60(param_1,&local_a8,uVar8,1,local_74 != '\0');
    if (uVar2 != 2) {
      uVar12 = 0;
    }
    *(int *)(param_1 + 0xd4) = iVar4;
    goto LAB_00443254;
  case 7:
    uVar11 = param_2[1];
    uVar9 = *(undefined8 *)(param_2 + 6);
    uVar7 = *(undefined8 *)(param_2 + 8);
    uVar2 = param_2[10];
    uVar12 = *(ulong *)(param_2 + 0xe);
    lVar5 = FUN_0044a9b0(param_1 + 0x88,uVar11,0);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x7c) != 0) {
        *(int *)(lVar5 + 0x7c) = *(int *)(lVar5 + 0x7c) + -1;
      }
      FUN_00442640(lVar5,0);
    }
    iVar4 = 1;
    if (uVar2 != 2) {
      uVar12 = 0;
    }
    *(undefined4 *)(param_1 + 0xd4) = 1;
LAB_00443254:
    FUN_0044d500(param_1 + 0xd8,uVar9,uVar11,uVar12,iVar4,0xffffffff,uVar7);
    return iVar4;
  case 8:
    memcpy(auStack_1c8,param_2,0x48);
    FUN_00443c00(param_1,auStack_1c8);
    return 1;
  case 10:
    memcpy(auStack_210,param_2,0x48);
    iVar4 = FUN_00443e40(param_1,auStack_210);
  }
  return iVar4;
}


