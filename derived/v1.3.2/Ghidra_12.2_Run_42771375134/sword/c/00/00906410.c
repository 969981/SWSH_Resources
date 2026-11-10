/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00906410; name: FUN_00906410
 */


void FUN_00906410(long param_1,undefined1 *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  byte local_48 [8];
  
  if (param_3 < 2) {
    return;
  }
  if (4 < param_3) {
    param_3 = 5;
  }
  if (param_3 == 0) {
    return;
  }
  uVar8 = 0;
  do {
    while (bVar5 = param_2[uVar8], bVar5 < 5) {
      FUN_00931980(*(undefined8 *)(param_1 + 0x70),bVar5,2);
      uVar6 = FUN_00934630();
      if ((uVar6 & 1) == 0) {
        FUN_00931980(*(undefined8 *)(param_1 + 0x70),bVar5,1);
        uVar6 = FUN_00934630();
        if ((uVar6 & 1) != 0) goto LAB_00906490;
        local_48[uVar8] = 0;
      }
      else {
LAB_00906490:
        local_48[uVar8] = 1;
      }
      uVar8 = uVar8 + 1;
      if (param_3 <= uVar8) goto LAB_009064d4;
    }
    local_48[uVar8] = 0;
    uVar8 = uVar8 + 1;
  } while (uVar8 < param_3);
LAB_009064d4:
  bVar5 = local_48[0];
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 2) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulong)(local_48[0] < local_48[1]);
    bVar3 = local_48[1];
    if (local_48[1] <= local_48[0]) {
      bVar3 = local_48[0];
    }
    if (2 < param_3) {
      uVar7 = 2;
      if (local_48[2] <= bVar3) {
        uVar7 = (uint)(local_48[0] < local_48[1]);
      }
      uVar8 = (ulong)uVar7;
      bVar1 = local_48[2];
      if (local_48[2] <= bVar3) {
        bVar1 = bVar3;
      }
      if (param_3 != 3) {
        uVar2 = 3;
        if (local_48[3] <= bVar1) {
          uVar2 = uVar7;
        }
        uVar8 = (ulong)uVar2;
        if (4 < param_3) {
          bVar3 = local_48[3];
          if (local_48[3] <= bVar1) {
            bVar3 = bVar1;
          }
          uVar7 = 4;
          if (local_48[4] <= bVar3) {
            uVar7 = uVar2;
          }
          uVar8 = (ulong)uVar7;
          goto joined_r0x00906554;
        }
      }
    }
  }
  uVar7 = (uint)uVar8;
joined_r0x00906554:
  if (uVar7 != 0) {
    local_48[0] = local_48[uVar8];
    local_48[uVar8] = bVar5;
    uVar4 = *param_2;
    *param_2 = param_2[uVar8];
    param_2[uVar8] = uVar4;
  }
  bVar5 = local_48[1];
  if (1 < param_3) {
    uVar8 = 1;
    if (param_3 != 2) {
      uVar7 = 1;
      if (local_48[1] < local_48[2]) {
        uVar7 = 2;
      }
      uVar8 = (ulong)uVar7;
      bVar3 = local_48[2];
      if (local_48[2] <= local_48[1]) {
        bVar3 = local_48[1];
      }
      if (3 < param_3) {
        uVar2 = 3;
        if (local_48[3] <= bVar3) {
          uVar2 = uVar7;
        }
        uVar8 = (ulong)uVar2;
        if (param_3 != 4) {
          bVar1 = local_48[3];
          if (local_48[3] <= bVar3) {
            bVar1 = bVar3;
          }
          uVar7 = 4;
          if (local_48[4] <= bVar1) {
            uVar7 = uVar2;
          }
          uVar8 = (ulong)uVar7;
        }
      }
    }
    if ((int)uVar8 != 1) {
      local_48[1] = local_48[uVar8];
      local_48[uVar8] = bVar5;
      uVar4 = param_2[1];
      param_2[1] = param_2[uVar8];
      param_2[uVar8] = uVar4;
    }
    bVar5 = local_48[2];
    if (param_3 != 2) {
      uVar8 = 2;
      if (3 < param_3) {
        uVar7 = 2;
        if (local_48[2] < local_48[3]) {
          uVar7 = 3;
        }
        uVar8 = (ulong)uVar7;
        if (4 < param_3) {
          bVar3 = local_48[3];
          if (local_48[3] <= local_48[2]) {
            bVar3 = local_48[2];
          }
          uVar2 = 4;
          if (local_48[4] <= bVar3) {
            uVar2 = uVar7;
          }
          uVar8 = (ulong)uVar2;
        }
      }
      if ((int)uVar8 != 2) {
        local_48[2] = local_48[uVar8];
        local_48[uVar8] = bVar5;
        uVar4 = param_2[2];
        param_2[2] = param_2[uVar8];
        param_2[uVar8] = uVar4;
      }
      if (3 < param_3) {
        uVar8 = 3;
        if (param_3 != 4) {
          uVar7 = 3;
          if (local_48[3] < local_48[4]) {
            uVar7 = 4;
          }
          uVar8 = (ulong)uVar7;
        }
        if ((int)uVar8 != 3) {
          local_48[uVar8] = local_48[3];
          uVar4 = param_2[3];
          param_2[3] = param_2[uVar8];
          param_2[uVar8] = uVar4;
        }
      }
    }
  }
  return;
}


