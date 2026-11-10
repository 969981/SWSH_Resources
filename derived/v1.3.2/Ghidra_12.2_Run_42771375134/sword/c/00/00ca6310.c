/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca6310; name: FUN_00ca6310
 */


void FUN_00ca6310(long param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  long *plVar5;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ushort *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long local_100 [7];
  int *local_c8;
  int *local_c0;
  int *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70 [2];
  
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar6 = *(uint **)(*(long *)(*(long *)(&DAT_00001588 + param_1) + 0x138) + 400);
  piVar4 = (int *)((long)puVar6 + (ulong)*puVar6);
  puVar10 = (ushort *)((long)piVar4 - (long)*piVar4);
  uVar2 = *puVar10;
  if (uVar2 < 9) {
    lVar12 = 0;
LAB_00ca63b0:
    lVar13 = 0;
  }
  else {
    if ((ulong)puVar10[4] == 0) {
      lVar12 = 0;
      if (10 < uVar2) goto LAB_00ca6394;
      goto LAB_00ca63b0;
    }
    puVar6 = (uint *)((long)piVar4 + (ulong)puVar10[4]);
    lVar12 = (long)puVar6 + (ulong)*puVar6;
    if (uVar2 < 0xb) goto LAB_00ca63b0;
LAB_00ca6394:
    if ((ulong)puVar10[5] == 0) goto LAB_00ca63b0;
    puVar6 = (uint *)((long)piVar4 + (ulong)puVar10[5]);
    lVar13 = (long)puVar6 + (ulong)*puVar6;
  }
  piVar4 = (int *)FUN_00cb34b0(param_1,lVar12,lVar13,param_3);
  if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
    param_2[2] = 4;
    if (*(long *)(param_1 + 0x1580) != 0) goto LAB_00ca63f8;
LAB_00ca641c:
    local_c8 = (int *)0x0;
  }
  else {
    uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
    lVar12 = 0;
    if (uVar7 != 0) {
      puVar6 = (uint *)((long)piVar4 + uVar7);
      lVar12 = (long)puVar6 + (ulong)*puVar6;
    }
    param_2[2] = lVar12 + 4;
    if (*(long *)(param_1 + 0x1580) == 0) goto LAB_00ca641c;
LAB_00ca63f8:
    FUN_00c80dd0(&local_c8);
  }
  plVar5 = (long *)FUN_00cbe970(local_c8,0x18);
  lVar12 = *plVar5;
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_100[0] = 0;
  }
  else {
    FUN_00c80dd0(local_100);
  }
  plVar5 = (long *)FUN_00cbe970(local_100[0],0x19);
  lVar13 = *plVar5;
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_70[0] = 0;
  }
  else {
    FUN_00c80dd0(local_70);
  }
  plVar5 = (long *)FUN_00cbe970(local_70[0],0x1a);
  lVar14 = *plVar5;
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_78 = 0;
  }
  else {
    FUN_00c80dd0(&local_78);
  }
  plVar5 = (long *)FUN_00cbe970(local_78,0x1b);
  lVar15 = *plVar5;
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_80 = 0;
  }
  else {
    FUN_00c80dd0(&local_80);
  }
  plVar5 = (long *)FUN_00cbe970(local_80,0x1c);
  lVar16 = *plVar5;
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_88 = 0;
  }
  else {
    FUN_00c80dd0(&local_88);
  }
  plVar5 = (long *)FUN_00cbe970(local_88,0x1d);
  lVar17 = *plVar5;
  if (*(long *)(param_1 + 0x1580) == 0) {
    local_90 = 0;
  }
  else {
    FUN_00c80dd0(&local_90);
  }
  plVar5 = (long *)FUN_00cbe970(local_90,0x1e);
  lVar11 = *plVar5;
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  if (local_100[0] != 0) {
    (**(code **)(*(long *)(local_100[0] + 0x48) + 0x18))();
    local_100[0] = 0;
  }
  if (local_c8 != (int *)0x0) {
    (**(code **)(*(long *)(local_c8 + 0x12) + 0x18))();
  }
  puVar10 = (ushort *)((long)piVar4 - (long)*piVar4);
  uVar2 = *puVar10;
  if (uVar2 < 0xb) {
    local_c8 = (int *)0x0;
LAB_00ca6640:
    local_c0 = (int *)0x0;
    local_a0 = (int *)0x0;
    local_98 = (int *)0x0;
    local_b0 = (int *)0x0;
    local_a8 = (int *)0x0;
LAB_00ca664c:
    local_100[0] = 0;
LAB_00ca6650:
    local_100[1] = 0;
    local_100[2] = 0;
    local_100[4] = 0;
    local_100[5] = 0;
    local_100[3] = 0;
    local_100[6] = 0;
    lVar9 = *param_4;
joined_r0x00ca666c:
    if (lVar12 != lVar9) goto LAB_00ca6898;
LAB_00ca6670:
    lVar12 = 0;
    local_98 = local_c8;
joined_r0x00ca667c:
    if (local_98 != (int *)0x0) {
LAB_00ca6680:
      if (*local_98 != 0) {
        param_2[3] = local_98 + 1;
      }
    }
  }
  else {
    local_c8 = (int *)0x0;
    if ((ulong)puVar10[5] != 0) {
      puVar6 = (uint *)((long)piVar4 + (ulong)puVar10[5]);
      local_c8 = (int *)((long)puVar6 + (ulong)*puVar6);
    }
    if (uVar2 < 0xf) goto LAB_00ca6640;
    uVar3 = puVar10[7];
    puVar6 = (uint *)((long)piVar4 + (ulong)uVar3);
    if ((ulong)uVar3 != 0) {
      local_c0 = (int *)((long)puVar6 + (ulong)*puVar6);
      if (uVar2 < 0x15) goto LAB_00ca6728;
LAB_00ca6618:
      local_b0 = (int *)0x0;
      if ((ulong)puVar10[10] != 0) {
        puVar1 = (uint *)((long)piVar4 + (ulong)puVar10[10]);
        local_b0 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
      uVar7 = (ulong)puVar10[9];
      if (uVar7 != 0) goto LAB_00ca673c;
      local_a8 = (int *)0x0;
LAB_00ca6748:
      if ((uVar2 < 0x17) || ((ulong)puVar10[0xb] == 0)) goto joined_r0x00ca6800;
      puVar1 = (uint *)((long)piVar4 + (ulong)puVar10[0xb]);
      local_a0 = (int *)((long)puVar1 + (ulong)*puVar1);
      if (uVar3 == 0) goto LAB_00ca6804;
LAB_00ca6780:
      local_98 = (int *)((long)puVar6 + (ulong)*puVar6);
      if (0x1e < uVar2) goto LAB_00ca6794;
      goto LAB_00ca664c;
    }
    local_c0 = (int *)0x0;
    if (0x14 < uVar2) goto LAB_00ca6618;
LAB_00ca6728:
    local_b0 = (int *)0x0;
    if (0x12 < uVar2) {
      uVar7 = (ulong)puVar10[9];
      local_a8 = (int *)0x0;
      if (uVar7 != 0) {
LAB_00ca673c:
        local_a8 = (int *)((long)((long)piVar4 + uVar7) + (ulong)*(uint *)((long)piVar4 + uVar7));
      }
      goto LAB_00ca6748;
    }
    local_a8 = (int *)0x0;
joined_r0x00ca6800:
    local_a0 = (int *)0x0;
    if (uVar3 != 0) goto LAB_00ca6780;
LAB_00ca6804:
    local_98 = (int *)0x0;
    if (uVar2 < 0x1f) goto LAB_00ca664c;
LAB_00ca6794:
    local_100[0] = 0;
    if ((ulong)puVar10[0xf] != 0) {
      puVar6 = (uint *)((long)piVar4 + (ulong)puVar10[0xf]);
      local_100[0] = (long)puVar6 + (ulong)*puVar6;
    }
    if (uVar2 < 0x23) goto LAB_00ca6650;
    uVar3 = puVar10[0x11];
    puVar6 = (uint *)((long)piVar4 + (ulong)uVar3);
    if ((ulong)uVar3 == 0) {
      local_100[1] = 0;
      local_100[2] = 0;
      if (0x28 < uVar2) goto LAB_00ca67d4;
LAB_00ca6828:
      local_100[3] = 0;
      if (0x26 < uVar2) {
        uVar7 = (ulong)puVar10[0x13];
        local_100[4] = 0;
        if (uVar7 != 0) goto LAB_00ca683c;
        goto LAB_00ca6848;
      }
      local_100[4] = 0;
      local_100[5] = 0;
joined_r0x00ca687c:
      if (uVar3 == 0) goto LAB_00ca6930;
LAB_00ca6880:
      local_100[6] = (long)puVar6 + (ulong)*puVar6;
      lVar9 = *param_4;
      goto joined_r0x00ca666c;
    }
    local_100[1] = (long)puVar6 + (ulong)*puVar6;
    local_100[2] = 0;
    if (uVar2 < 0x29) goto LAB_00ca6828;
LAB_00ca67d4:
    local_100[3] = 0;
    if ((ulong)puVar10[0x14] != 0) {
      puVar1 = (uint *)((long)piVar4 + (ulong)puVar10[0x14]);
      local_100[3] = (long)puVar1 + (ulong)*puVar1;
    }
    uVar7 = (ulong)puVar10[0x13];
    if (uVar7 == 0) {
      local_100[4] = 0;
    }
    else {
LAB_00ca683c:
      local_100[4] = (long)((long)piVar4 + uVar7) + (ulong)*(uint *)((long)piVar4 + uVar7);
    }
LAB_00ca6848:
    if ((uVar2 < 0x2b) || ((ulong)puVar10[0x15] == 0)) {
      local_100[5] = 0;
      goto joined_r0x00ca687c;
    }
    puVar1 = (uint *)((long)piVar4 + (ulong)puVar10[0x15]);
    local_100[5] = (long)puVar1 + (ulong)*puVar1;
    if (uVar3 != 0) goto LAB_00ca6880;
LAB_00ca6930:
    local_100[6] = 0;
    lVar9 = *param_4;
    if (lVar12 == lVar9) goto LAB_00ca6670;
LAB_00ca6898:
    if (lVar13 == lVar9) {
      lVar12 = 1;
      local_98 = local_c0;
      goto joined_r0x00ca667c;
    }
    if (lVar14 != lVar9) {
      if (lVar15 != lVar9) {
        if (lVar16 == lVar9) {
          lVar12 = 4;
          local_98 = local_a8;
        }
        else {
          if (lVar17 != lVar9) {
            if (lVar11 != lVar9) goto LAB_00ca66ac;
            lVar12 = 6;
            goto joined_r0x00ca695c;
          }
          lVar12 = 5;
          local_98 = local_a0;
        }
        goto joined_r0x00ca667c;
      }
      lVar12 = 3;
      local_98 = local_b0;
joined_r0x00ca695c:
      if (local_98 == (int *)0x0) goto LAB_00ca6690;
      goto LAB_00ca6680;
    }
    lVar12 = 2;
  }
LAB_00ca6690:
  piVar8 = (int *)local_100[lVar12];
  if ((piVar8 != (int *)0x0) && (*piVar8 != 0)) {
    param_2[7] = piVar8 + 1;
  }
LAB_00ca66ac:
  if ((((0x1a < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
       (uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xd], uVar7 != 0)) &&
      (puVar6 = (uint *)((long)piVar4 + uVar7), piVar4 = (int *)((long)puVar6 + (ulong)*puVar6),
      piVar4 != (int *)0x0)) && (*piVar4 != 0)) {
    param_2[6] = piVar4 + 1;
  }
  return;
}


