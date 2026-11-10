/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fa380; name: FUN_001fa380
 */


void FUN_001fa380(long *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  float *pfVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined1 local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float fStack_e0;
  float local_dc;
  undefined4 local_d8;
  char local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long *local_58;
  
  *(undefined4 *)(param_1 + 0x4ad) = 0;
  *(undefined4 *)(param_1 + 0x4af) = 0;
  *(undefined4 *)(param_1 + 0x4b1) = 0;
  *(undefined4 *)(param_1 + 0x4b3) = 0;
  *(undefined4 *)(param_1 + 0x4b5) = 0;
  fVar10 = (float)(**(code **)(*param_1 + 0x268))(param_1,0);
  if (fVar10 != 0.0) {
    local_58 = param_1 + 0x4ab;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0x3f80000000000000;
    uStack_98 = 0;
    local_60 = 0x3f800000;
    local_90 = 0;
    uStack_88 = 0x3f800000;
    local_80 = 0;
    uStack_78 = 0x3f80000000000000;
    local_70 = 0;
    uStack_68 = 0;
    fVar10 = (float)(**(code **)(*param_1 + 0x268))(param_1,1);
    if (fVar10 != 0.0) {
      local_e4 = -NAN;
      fStack_e0 = -1.7146522e+38;
      local_f0 = CONCAT44(fVar10,fVar10);
      local_dc = -1.7014636e+38;
      local_e8 = fVar10;
      FUN_002190d0(&local_c0,&local_f0);
    }
    if (*(int *)((long)param_1 + 0x262c) != 0) {
      uVar6 = 0;
      do {
        FUN_001d9a10(*(undefined8 *)(param_1[0x4c0] + uVar6 * 8),&local_c0,param_1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)((long)param_1 + 0x262c));
    }
    puVar8 = (undefined8 *)param_1[0x4bd];
    uVar1 = *(uint *)(param_1 + 0x4be);
    uVar6 = (ulong)uVar1;
    if (*(int *)((long)param_1 + 0x271c) != 0) {
      uVar7 = 0;
      do {
        plVar3 = *(long **)(param_1[0x4de] + uVar7 * 8);
        (**(code **)(*plVar3 + 0x408))(plVar3,&local_c0,param_1);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)((long)param_1 + 0x271c));
    }
    if (uVar1 != 0) {
      do {
        while( true ) {
          plVar3 = (long *)*puVar8;
          iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3);
          if (iVar2 != 1) break;
          FUN_001f08a0(plVar3,&local_c0,param_1);
          puVar8 = puVar8 + 1;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_001fa528;
        }
        FUN_001f3ca0(plVar3,&local_c0,param_1);
        puVar8 = puVar8 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
LAB_001fa528:
    fVar10 = (float)(**(code **)(*param_1 + 0x268))(param_1,0x12);
    fVar11 = (float)(**(code **)(*param_1 + 0x268))(param_1,0x13);
    if ((fVar10 != 0.0) && (plVar3 = (long *)param_1[0x486], plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x78))(plVar3,&local_c0,0xff0000ff);
    }
    if ((fVar11 != 0.0) && (plVar3 = (long *)param_1[0x48c], plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x78))(plVar3,&local_c0,0xffff0000);
    }
    fVar10 = (float)(**(code **)(*param_1 + 0x268))(param_1,0x24);
    if (fVar10 != 0.0) {
      local_f0 = 0;
      local_e8 = 0.0;
      local_e4 = 1.0;
      fStack_e0 = 0.0;
      local_dc = 0.0;
      local_d8 = 0;
      FUN_00218620(&local_c0,&local_f0);
      iVar2 = FUN_001d1c10(param_1 + 2);
      if (iVar2 != 0) {
        iVar9 = 0;
        do {
          FUN_001d1c20(param_1 + 2,&local_f0,1,iVar9);
          if (local_c8 == '\0') {
            uVar5 = 0xff000000;
          }
          else {
            uVar5 = 0xffffff00;
          }
          FUN_00218580(&local_c0,uVar5);
          uStack_108 = CONCAT44(local_e4,local_e8);
          local_110 = local_f0;
          local_100 = fStack_e0;
          uStack_fc = local_dc;
          local_f8 = 1;
          FUN_00218ad0(&local_c0,&local_110);
          iVar9 = iVar9 + 1;
        } while (iVar2 != iVar9);
      }
    }
    fVar10 = (float)(**(code **)(*param_1 + 0x268))(param_1,0x1e);
    if (fVar10 != 0.0) {
      if ((char)param_1[0x485] < '\0') {
        pfVar4 = (float *)((long)param_1 + 0x22e4);
        if (*(float *)(param_1 + 0x45e) < *pfVar4) {
          return;
        }
      }
      else {
        pfVar4 = (float *)FUN_003e9410(param_1 + 4);
        if (pfVar4[3] < *pfVar4) {
          return;
        }
      }
      FUN_00218580(&local_c0,0xffffff00);
      local_f0 = *(undefined8 *)pfVar4;
      local_e8 = pfVar4[2];
      local_e4 = pfVar4[3];
      fStack_e0 = pfVar4[4];
      local_dc = pfVar4[5];
      local_d8 = CONCAT31(local_d8._1_3_,1);
      FUN_00218ad0(&local_c0,&local_f0);
    }
  }
  return;
}


