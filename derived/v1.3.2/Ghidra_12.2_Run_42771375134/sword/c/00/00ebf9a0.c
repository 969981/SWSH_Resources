/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebf9a0; name: FUN_00ebf9a0
 */


void FUN_00ebf9a0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  float *pfVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  float local_130 [4];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar2 = PTR_DAT_02710860;
  local_78 = *(long **)(*(long *)PTR_DAT_0271e860 + 0xa8);
  local_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_90 = (long *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  plVar8 = *(long **)(*(long *)(param_1 + 200) + 0xb8);
  for (plVar9 = *(long **)(*(long *)(param_1 + 200) + 0xb0); plVar9 != plVar8; plVar9 = plVar9 + 1)
  {
    while (uVar5 = (**(code **)(*(long *)*plVar9 + 0x88))(), (uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)*plVar9;
      uVar5 = FUN_01593610(puVar7 + 10);
      plVar4 = local_78;
      plVar3 = local_88;
      if ((uVar5 & 1) == 0) break;
      local_150 = puVar7;
      if (local_88 < local_80) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar4;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        *plVar3 = (long)local_150;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        local_88 = local_88 + 1;
        break;
      }
      FUN_00dbbe90(&local_90,&local_150);
      plVar9 = plVar9 + 1;
      if (plVar8 == plVar9) goto LAB_00ebfad0;
    }
  }
LAB_00ebfad0:
  local_150 = param_2;
  FUN_00ec0920(local_90,local_88,&local_150);
  local_100 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130[0] = 0.0;
  local_150 = (undefined8 *)0x0;
  local_148 = 0;
  local_d0 = 0;
  local_a0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  plVar9 = local_90;
  if (local_88 != local_90) {
    uVar11 = *(uint *)PTR_DAT_027202b8;
    fVar13 = *(float *)PTR_DAT_027202b0;
    pfVar10 = local_130;
    plVar8 = local_90;
    uVar5 = 0;
    do {
      fVar12 = (float)(**(code **)(*(long *)plVar8[uVar5] + 0x130))();
      uVar1 = uVar5 + 1;
      pfVar10[-2] = 0.0;
      pfVar10[-1] = 0.0;
      *(ulong *)(pfVar10 + -4) = (ulong)uVar11 << 0x20;
      *pfVar10 = fVar13 * fVar12;
      plVar9 = local_90;
      lVar6 = plVar8[uVar5];
      *(undefined8 *)(pfVar10 + -6) = *(undefined8 *)(lVar6 + 0xb8);
      *(undefined8 *)(pfVar10 + -8) = *(undefined8 *)(lVar6 + 0xb0);
      if (3 < uVar1) break;
      pfVar10 = pfVar10 + 0xc;
      plVar8 = plVar9;
      uVar5 = uVar1;
    } while (uVar1 < (ulong)((long)local_88 - (long)plVar9 >> 3));
  }
  if (plVar9 == local_88) {
    local_148 = param_2[1];
    local_150 = (undefined8 *)*param_2;
  }
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x20))(*(long **)(param_1 + 0xd8),&local_150);
  if (local_90 != (long *)0x0) {
    local_88 = local_90;
    (**(code **)(*local_78 + 0x18))(local_78,local_90,(long)local_80 - (long)local_90,8);
  }
  return;
}


