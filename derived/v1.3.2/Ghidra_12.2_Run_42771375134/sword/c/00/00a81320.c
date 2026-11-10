/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a81320; name: FUN_00a81320
 */


void FUN_00a81320(long *param_1,long *param_2,int param_3,int param_4,undefined8 *param_5,
                 ulong param_6,ulong param_7)

{
  float *pfVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long local_110;
  undefined4 local_104;
  undefined1 *local_100;
  code *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long alStack_e0 [12];
  undefined4 local_80;
  float fStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_5c;
  undefined1 auStack_58 [8];
  
  local_5c = param_3;
  FUN_00a815a0(param_1,param_4,&local_70,&local_80);
  if ((param_7 & 1) != 0) {
    lVar3 = 0x1704;
    if (1 < param_4 - 1U) {
      lVar3 = 0x16fc;
    }
    (**(code **)(*param_1 + 0x748))(param_1,*(undefined4 *)((long)param_1 + lVar3));
  }
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uVar7 = param_5[1];
    uVar6 = *param_5;
    if ((param_6 & 1) != 0) {
      fVar8 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
      uVar4 = (ulong)-(fStack_7c * (fVar8 / *(float *)PTR_FloatDegree180_027194f0));
      pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar4 >> 0x18 & 0xff) * 0x10);
      fVar8 = (float)((uint)uVar4 & 0xffffff) * DAT_01d4bc78;
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      fVar9 = *pfVar1;
      fVar10 = pfVar1[1];
      *(undefined8 *)(lVar3 + 0x458) = local_78;
      *(ulong *)(lVar3 + 0x450) = CONCAT44(fStack_7c,local_80);
      fVar10 = fVar10 + fVar12 * fVar8;
      fVar9 = fVar9 + fVar11 * fVar8;
      fVar8 = (float)uVar6;
      uVar6 = CONCAT44((int)((ulong)uVar6 >> 0x20),fVar9 * fVar8 - fVar10 * (float)uVar7);
      uVar7 = (ulong)(uint)(fVar10 * fVar8 + fVar9 * (float)uVar7);
    }
    local_70 = CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)local_70 >> 0x20),
                        (float)uVar6 + (float)local_70);
    uStack_68 = CONCAT44((float)(uVar7 >> 0x20) + (float)((ulong)uStack_68 >> 0x20),
                         (float)uVar7 + (float)uStack_68);
    if (param_3 == 0) {
      lVar3 = *param_2;
      *(undefined8 *)(lVar3 + 0x3d8) = uStack_68;
      *(undefined8 *)(lVar3 + 0x3d0) = local_70;
    }
    else {
      alStack_e0[0] = *param_2;
      local_100 = &LAB_00a8da20;
      local_f8 = FUN_00a8da40;
      local_f0 = &LAB_00a8da50;
      local_e8 = &LAB_00a8da60;
      local_104 = 0;
      lVar3 = FUN_00a8d890(auStack_58,param_1[0x1b],&local_100,alStack_e0[0] + 0x3d0,&local_70,
                           &local_5c,&local_104);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar5 = param_1[0xa6];
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      local_110 = lVar3;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      FUN_015f6330(lVar5,&local_110,0x40);
      if (local_110 != 0) {
        (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
        local_110 = 0;
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      pcVar2 = local_f8;
      if (local_f8 != (code *)0x0) {
        local_f0 = (undefined1 *)0x0;
        local_e8 = (undefined1 *)0x0;
        local_100 = (undefined1 *)0x0;
        local_f8 = (code *)0x0;
        (*pcVar2)(alStack_e0);
      }
    }
  }
  return;
}


