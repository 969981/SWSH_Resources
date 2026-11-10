/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a81040; name: FUN_00a81040
 */


void FUN_00a81040(long param_1,long *param_2,int param_3,undefined4 *param_4,ulong param_5)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  long local_120;
  undefined4 local_114;
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
  long *local_48;
  undefined1 auStack_38 [4];
  int local_34;
  
  local_34 = param_3;
  FUN_00a80bf0(&local_48,param_1,*param_4);
  if (local_48 != (long *)0x0) {
    uVar4 = (**(code **)(*local_48 + 400))();
    if ((uVar4 & 1) != 0) {
      if ((param_5 & 1) == 0) {
        FUN_00a80300(param_1,param_4,&local_60,&local_70,&local_80,0);
        iVar2 = param_4[8];
        lVar5 = local_f0[0];
      }
      else {
        FUN_00a80300(param_1,param_4,&local_60,&local_70,&local_80,1);
        iVar2 = param_4[8];
        lVar5 = local_f0[0];
      }
      if (iVar2 != 100) {
        fVar13 = (float)iVar2 * DAT_01d4c4d4;
        uVar11 = *(undefined8 *)(*param_2 + 0x3d8);
        uVar8 = *(undefined8 *)(*param_2 + 0x3d0);
        fVar7 = (float)uVar8;
        fVar9 = (float)((ulong)uVar8 >> 0x20);
        fVar10 = (float)uVar11;
        fVar12 = (float)((ulong)uVar11 >> 0x20);
        local_60 = CONCAT44(fVar9 + ((float)((ulong)local_60 >> 0x20) - fVar9) * fVar13,
                            fVar7 + ((float)local_60 - fVar7) * fVar13);
        uStack_58 = CONCAT44(fVar12 + ((float)((ulong)uStack_58 >> 0x20) - fVar12) * fVar13,
                             fVar10 + ((float)uStack_58 - fVar10) * fVar13);
      }
      if (*(char *)((long)param_4 + 0x2a) != '\0') {
        lVar6 = *param_2;
        *(undefined8 *)(lVar6 + 0x458) = local_68;
        *(undefined8 *)(lVar6 + 0x450) = local_70;
      }
      if ((*(char *)((long)param_4 + 0x29) != '\0') && ((param_5 & 1) == 0)) {
        lVar6 = *param_2;
        *(undefined8 *)(lVar6 + 0x418) = local_78;
        *(undefined8 *)(lVar6 + 0x410) = local_80;
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
      if (local_34 == 0) {
        *(ulong *)(local_f0[0] + 0x3d8) = uStack_88;
        *(undefined8 *)(local_f0[0] + 0x3d0) = local_90;
        local_f0[0] = lVar5;
      }
      else {
        local_110 = &LAB_00a8d9d0;
        local_108 = FUN_00a8d9f0;
        local_100 = &LAB_00a8da00;
        local_f8 = &LAB_00a8da10;
        local_114 = param_4[9];
        lVar5 = FUN_00a8d890(auStack_38,*(undefined8 *)(param_1 + 0xd8),&local_110,
                             (undefined8 *)(local_f0[0] + 0x3d0),&local_90,&local_34,&local_114);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        lVar6 = *(long *)(param_1 + 0x530);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        local_120 = lVar5;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        FUN_015f6330(lVar6,&local_120,0x40);
        if (local_120 != 0) {
          (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
          local_120 = 0;
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        }
        pcVar3 = local_108;
        bVar1 = local_108 != (code *)0x0;
        local_108 = (code *)0x0;
        if (bVar1) {
          local_100 = (undefined1 *)0x0;
          local_f8 = (undefined1 *)0x0;
          local_110 = (undefined1 *)0x0;
          local_108 = (code *)0x0;
          (*pcVar3)(local_f0);
        }
      }
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(local_48[9] + 0x18))();
    }
  }
  return;
}


