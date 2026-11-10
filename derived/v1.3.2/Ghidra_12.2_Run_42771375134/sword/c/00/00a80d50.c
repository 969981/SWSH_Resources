/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a80d50; name: FUN_00a80d50
 */


void FUN_00a80d50(long param_1,long *param_2,int param_3,uint *param_4,ulong param_5)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  long local_120;
  uint local_114;
  undefined1 *local_110;
  code *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  long local_f0 [12];
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [4];
  int local_44;
  
  if ((*param_4 != 0xff) &&
     (plVar7 = *(long **)(param_1 + (ulong)*param_4 * 8 + 0x548), plVar7 != (long *)0x0)) {
    plVar6 = plVar7 + 9;
    local_44 = param_3;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar3 = (**(code **)(*plVar7 + 400))(plVar7);
    if ((uVar3 & 1) != 0) {
      if ((param_5 & 1) == 0) {
        FUN_00a80300(param_1,param_4,&local_60,&local_70,&local_80,0);
        uVar1 = param_4[8];
        lVar4 = local_f0[0];
      }
      else {
        FUN_00a80300(param_1,param_4,&local_60,&local_70,&local_80,1);
        uVar1 = param_4[8];
        lVar4 = local_f0[0];
      }
      if (uVar1 != 100) {
        fVar14 = (float)(int)uVar1 * DAT_01d4c4d4;
        uVar12 = *(undefined8 *)(*param_2 + 0x3d8);
        uVar9 = *(undefined8 *)(*param_2 + 0x3d0);
        fVar8 = (float)uVar9;
        fVar10 = (float)((ulong)uVar9 >> 0x20);
        fVar11 = (float)uVar12;
        fVar13 = (float)((ulong)uVar12 >> 0x20);
        local_60 = CONCAT44(fVar10 + ((float)((ulong)local_60 >> 0x20) - fVar10) * fVar14,
                            fVar8 + ((float)local_60 - fVar8) * fVar14);
        uStack_58 = CONCAT44(fVar13 + ((float)((ulong)uStack_58 >> 0x20) - fVar13) * fVar14,
                             fVar11 + ((float)uStack_58 - fVar11) * fVar14);
      }
      if (*(char *)((long)param_4 + 0x2a) != '\0') {
        lVar5 = *param_2;
        *(undefined8 *)(lVar5 + 0x458) = local_68;
        *(undefined8 *)(lVar5 + 0x450) = local_70;
      }
      if ((*(char *)((long)param_4 + 0x29) != '\0') && ((param_5 & 1) == 0)) {
        lVar5 = *param_2;
        *(undefined8 *)(lVar5 + 0x418) = local_78;
        *(undefined8 *)(lVar5 + 0x410) = local_80;
      }
      local_f0[0] = *param_2;
      uStack_88 = *(ulong *)(local_f0[0] + 0x3d8);
      local_90 = *(undefined8 *)(local_f0[0] + 0x3d0);
      if (*(char *)((long)param_4 + 0x2d) != '\0') {
        local_90 = CONCAT44((int)((ulong)local_90 >> 0x20),(undefined4)local_60);
      }
      if (*(char *)((long)param_4 + 0x2e) != '\0') {
        local_90 = CONCAT44(*(undefined4 *)((ulong)&local_60 | 4),(int)local_90);
      }
      if (*(char *)((long)param_4 + 0x2f) != '\0') {
        uStack_88 = (ulong)*(uint *)((ulong)&local_60 | 8);
      }
      if (local_44 == 0) {
        *(ulong *)(local_f0[0] + 0x3d8) = uStack_88;
        *(undefined8 *)(local_f0[0] + 0x3d0) = local_90;
        local_f0[0] = lVar4;
      }
      else {
        local_110 = &LAB_00a8d840;
        local_108 = FUN_00a8d860;
        local_100 = &LAB_00a8d870;
        local_f8 = &LAB_00a8d880;
        local_114 = param_4[9];
        lVar4 = FUN_00a8d890(auStack_48,*(undefined8 *)(param_1 + 0xd8),&local_110,
                             (undefined8 *)(local_f0[0] + 0x3d0),&local_90,&local_44,&local_114);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        lVar5 = *(long *)(param_1 + 0x530);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        local_120 = lVar4;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        FUN_015f6330(lVar5,&local_120,0x40);
        if (local_120 != 0) {
          (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
          local_120 = 0;
        }
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        }
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        }
        pcVar2 = local_108;
        if (local_108 != (code *)0x0) {
          local_100 = (undefined1 *)0x0;
          local_f8 = (undefined1 *)0x0;
          local_110 = (undefined1 *)0x0;
          local_108 = (code *)0x0;
          (*pcVar2)(local_f0);
        }
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  return;
}


