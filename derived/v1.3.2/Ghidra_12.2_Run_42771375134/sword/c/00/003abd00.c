/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003abd00; name: FUN_003abd00
 */


void FUN_003abd00(long param_1,undefined8 param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  long local_100;
  int local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  ushort local_c0 [4];
  undefined1 auStack_b8 [4];
  int local_b4;
  long *local_a8;
  long local_a0;
  int local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ushort local_48 [4];
  
  local_98 = 0xc;
  local_88 = 0xc;
  local_a0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_78 = 4;
  local_70 = 0;
  local_68 = 4;
  plVar4 = (long *)(**(code **)**(undefined8 **)(param_1 + 0x58))();
  (**(code **)(*plVar4 + 0x28))(plVar4,auStack_b8,0,0);
  if (local_b4 == 0) {
    return;
  }
  FUN_003a9c10(local_48,*(undefined8 *)(param_1 + 0x50));
  FUN_003a9c10(local_c0,*(undefined8 *)(param_1 + 0x50));
  fVar11 = (float)FUN_003e6620(*(undefined8 *)(param_1 + 0x48),0x19);
  if ((local_c0[0] >> 4 & 1) == 0) {
    return;
  }
  if ((local_48[0] & 1) == 0) {
    return;
  }
  if (fVar11 <= 0.0) {
    return;
  }
  local_108 = 4;
  local_f8 = 0xc;
  local_e8 = 0xc;
  local_d8 = 0xc;
  local_110 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c8 = 8;
  (**(code **)(**(long **)(param_1 + 0x58) + 8))(*(long **)(param_1 + 0x58),&local_110,0);
  fVar11 = (float)FUN_003e6620(*(undefined8 *)(param_1 + 0x48),0x19);
  fVar12 = *(float *)(*(long *)(param_1 + 0x48) + 0x1288);
  uVar5 = FUN_00218580(param_2,0xff00ff00);
  local_150 = 0x3f800000;
  local_148 = 0;
  local_140 = 0x3f80000000000000;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0x3f800000;
  local_120 = 0;
  uStack_118 = 0x3f80000000000000;
  FUN_00218590(uVar5,&local_150);
  puVar3 = PTR_DAT_02710c28;
  if (local_100 == 0) {
    return;
  }
  uVar7 = *(uint *)(local_a8 + 1) & 0x7fffffff;
  if (uVar7 == 0) {
    return;
  }
  fVar11 = fVar11 * fVar12;
  uVar6 = 0;
  uVar9 = 0;
  while (uVar10 = *(uint *)(*local_a8 + uVar9 * 4), uVar10 == 0) {
    uVar9 = uVar9 + 1;
    uVar6 = uVar6 + 0x20;
    if (uVar7 <= uVar9) {
      return;
    }
  }
  uVar6 = *(uint *)(PTR_DAT_02710c28 + (ulong)((uVar10 & -uVar10) * 0x77cb531 >> 0x1b) * 4) | uVar6;
  uVar10 = uVar10 - 1 & uVar10;
  if (uVar10 == 0) {
    uVar8 = uVar9 + 1;
    do {
      uVar9 = uVar8 & 0xffffffff;
      if (uVar7 <= (uint)uVar8) {
        uVar10 = 0;
        break;
      }
      uVar10 = *(uint *)(*local_a8 + (uVar8 & 0xffffffff) * 4);
      uVar8 = (ulong)((uint)uVar8 + 1);
    } while (uVar10 == 0);
  }
  if (uVar6 != 0xffffffff) {
    fVar12 = fVar11 * DAT_01d4bec4;
LAB_003abf08:
    do {
      pfVar1 = (float *)(local_100 + (ulong)(local_f8 * uVar6));
      if (((*pfVar1 != 0.0) || (pfVar1[1] != 0.0)) || (pfVar1[2] != 0.0)) {
        pfVar2 = (float *)(local_a0 + (ulong)(local_98 * uVar6));
        local_150 = *(undefined8 *)pfVar2;
        local_148 = CONCAT44(fVar11 * *pfVar1 + *pfVar2,pfVar2[2]);
        local_140 = CONCAT44(fVar11 * pfVar1[2] + pfVar2[2],fVar11 * pfVar1[1] + pfVar2[1]);
        uStack_138 = CONCAT44(uStack_138._4_4_,fVar12);
        FUN_00218e10(param_2,&local_150);
      }
      if (uVar10 == 0) {
        return;
      }
      uVar7 = (uint)uVar9;
      uVar6 = *(uint *)(puVar3 + (ulong)((uVar10 & -uVar10) * 0x77cb531 >> 0x1b) * 4) | uVar7 << 5;
      uVar10 = uVar10 - 1 & uVar10;
      if (uVar10 == 0) {
        do {
          uVar7 = uVar7 + 1;
          uVar9 = (ulong)uVar7;
          if ((*(uint *)(local_a8 + 1) & 0x7fffffff) <= uVar7) {
            uVar10 = 0;
            if (uVar6 == 0xffffffff) {
              return;
            }
            goto LAB_003abf08;
          }
          uVar10 = *(uint *)(*local_a8 + (ulong)uVar7 * 4);
        } while (uVar10 == 0);
      }
    } while (uVar6 != 0xffffffff);
  }
  return;
}


