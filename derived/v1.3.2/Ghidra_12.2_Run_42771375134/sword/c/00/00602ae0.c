/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00602ae0; name: FUN_00602ae0
 */


int FUN_00602ae0(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar8 = (ulong)uVar2;
  lVar7 = *param_1;
  uVar1 = *(short *)((long)param_1 + 0x1a) + param_2 + (int)*(short *)((long)param_1 + 0x62);
  if (uVar2 < uVar1) {
    uVar1 = uVar1 + 7;
    if (uVar1 >> 0xf != 0) {
      return 10;
    }
    lVar11 = param_1[4];
    uVar1 = uVar1 & 0xfffffff8;
    uVar9 = (ulong)uVar1;
    if (uVar1 == 0) {
      if (lVar11 == 0) {
        iVar10 = 0;
      }
      else {
        (**(code **)(lVar7 + 0x10))(lVar7,lVar11);
        iVar10 = 0;
        lVar11 = 0;
      }
    }
    else if (uVar2 == 0) {
      lVar11 = (**(code **)(lVar7 + 8))(lVar7,uVar9 << 4);
      iVar10 = (uint)(lVar11 == 0) << 6;
      if (uVar1 != 0) goto LAB_00602b74;
    }
    else {
      lVar5 = (**(code **)(lVar7 + 0x18))(lVar7,uVar8 << 4,uVar9 << 4,lVar11);
      iVar10 = (uint)(lVar5 == 0) << 6;
      if (lVar5 != 0) {
        lVar11 = lVar5;
      }
      if (uVar2 < uVar1) {
LAB_00602b74:
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          memset((void *)(lVar11 + uVar8 * 0x10),0,(uVar9 - uVar8) * 0x10);
        }
      }
    }
    param_1[4] = lVar11;
    if (iVar10 != 0) goto LAB_00602ef0;
    lVar11 = param_1[5];
    if (uVar1 == 0) {
      if (lVar11 == 0) {
        iVar10 = 0;
      }
      else {
        (**(code **)(lVar7 + 0x10))(lVar7,lVar11);
        iVar10 = 0;
        lVar11 = 0;
      }
    }
    else if (uVar2 == 0) {
      lVar11 = (**(code **)(lVar7 + 8))(lVar7,uVar9);
      iVar10 = (uint)(lVar11 == 0) << 6;
      if (uVar1 != 0) goto LAB_00602d34;
    }
    else {
      lVar5 = (**(code **)(lVar7 + 0x18))(lVar7,uVar8,uVar9,lVar11);
      iVar10 = (uint)(lVar5 == 0) << 6;
      if (lVar5 != 0) {
        lVar11 = lVar5;
      }
      if (uVar2 < uVar1) {
LAB_00602d34:
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          memset((void *)(lVar11 + uVar8),0,uVar9 - uVar8);
        }
      }
    }
    param_1[5] = lVar11;
    if (iVar10 != 0) goto LAB_00602ef0;
    if (*(char *)((long)param_1 + 0x14) != '\0') {
      lVar11 = param_1[8];
      uVar2 = uVar2 * 2;
      uVar12 = (ulong)uVar2;
      uVar3 = uVar1 * 2;
      uVar13 = (ulong)uVar3;
      if (uVar3 == 0) {
        if (lVar11 == 0) {
          iVar10 = 0;
        }
        else {
          (**(code **)(lVar7 + 0x10))(lVar7,lVar11);
          iVar10 = 0;
          lVar11 = 0;
        }
      }
      else if (uVar2 == 0) {
        lVar11 = (**(code **)(lVar7 + 8))(lVar7,uVar13 << 4);
        iVar10 = (uint)(lVar11 == 0) << 6;
        if (uVar3 != 0) goto LAB_00602ec8;
      }
      else {
        lVar5 = (**(code **)(lVar7 + 0x18))(lVar7,uVar12 << 4,uVar13 << 4,lVar11);
        iVar10 = (uint)(lVar5 == 0) << 6;
        if (lVar5 != 0) {
          lVar11 = lVar5;
        }
        if (uVar2 < uVar3) {
LAB_00602ec8:
          if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            memset((void *)(lVar11 + uVar12 * 0x10),0,(uVar13 - uVar12) * 0x10);
          }
        }
      }
      param_1[8] = lVar11;
      if (iVar10 != 0) goto LAB_00602ef0;
      memmove((void *)(lVar11 + uVar9 * 0x10),(void *)(lVar11 + uVar8 * 0x10),uVar8 * 0x10);
      param_1[9] = param_1[8] + uVar9 * 0x10;
    }
    bVar4 = true;
    *(uint *)(param_1 + 1) = uVar1;
  }
  else {
    bVar4 = false;
  }
  sVar6 = (short)param_1[3];
  uVar2 = *(uint *)((long)param_1 + 0xc);
  uVar8 = (ulong)uVar2;
  uVar1 = sVar6 + param_3 + (int)(short)param_1[0xc];
  if (uVar1 <= uVar2) {
    if (!bVar4) {
      return 0;
    }
    lVar11 = param_1[6];
    goto LAB_00602e00;
  }
  uVar1 = uVar1 + 3;
  if (uVar1 >> 0xf != 0) {
    return 10;
  }
  lVar11 = param_1[6];
  uVar1 = uVar1 & 0xfffffffc;
  uVar9 = (ulong)uVar1;
  if (uVar1 == 0) {
    if (lVar11 != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7,lVar11);
    }
    iVar10 = 0;
    lVar11 = 0;
  }
  else if (uVar2 == 0) {
    lVar11 = (**(code **)(lVar7 + 8))(lVar7,uVar9 << 1);
    iVar10 = (uint)(lVar11 == 0) << 6;
    if (uVar1 != 0) goto LAB_00602c48;
  }
  else {
    lVar7 = (**(code **)(lVar7 + 0x18))(lVar7,uVar8 << 1,uVar9 << 1,lVar11);
    iVar10 = (uint)(lVar7 == 0) << 6;
    if (lVar7 != 0) {
      lVar11 = lVar7;
    }
    if (uVar2 < uVar1) {
LAB_00602c48:
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        memset((void *)(lVar11 + uVar8 * 2),0,(uVar9 - uVar8) * 2);
      }
    }
  }
  param_1[6] = lVar11;
  if (iVar10 != 0) {
LAB_00602ef0:
    lVar7 = *param_1;
    if (param_1[4] != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7);
    }
    param_1[4] = 0;
    if (param_1[5] != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7);
    }
    param_1[5] = 0;
    if (param_1[6] != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7);
    }
    param_1[6] = 0;
    if (param_1[8] != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7);
    }
    param_1[8] = 0;
    if (param_1[0xb] != 0) {
      (**(code **)(lVar7 + 0x10))(lVar7);
    }
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[0xf] = param_1[6];
    param_1[0x10] = param_1[7];
    *(undefined4 *)(param_1 + 10) = 0;
    param_1[9] = 0;
    param_1[0xd] = param_1[4];
    param_1[0xe] = param_1[5];
    param_1[0x11] = param_1[8];
    param_1[0x12] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = param_1[3];
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[0x13] = param_1[10];
    param_1[0x14] = 0;
    return iVar10;
  }
  sVar6 = (short)param_1[3];
  *(uint *)((long)param_1 + 0xc) = uVar1;
LAB_00602e00:
  lVar7 = (long)*(short *)((long)param_1 + 0x1a);
  param_1[0xf] = lVar11 + (long)sVar6 * 2;
  param_1[0xd] = param_1[4] + lVar7 * 0x10;
  param_1[0xe] = param_1[5] + lVar7;
  if (*(char *)((long)param_1 + 0x14) == '\0') {
    return 0;
  }
  param_1[0x11] = param_1[8] + lVar7 * 0x10;
  param_1[0x12] = param_1[9] + lVar7 * 0x10;
  return 0;
}


