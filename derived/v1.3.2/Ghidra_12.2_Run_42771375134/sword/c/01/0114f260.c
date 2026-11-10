/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0114f260; name: FUN_0114f260
 */


void FUN_0114f260(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138;
  undefined1 uStack_137;
  undefined6 uStack_136;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  char local_e0 [16];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  undefined8 *local_90;
  long local_88;
  long local_80;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[3] = uVar3;
  auVar11 = FUN_01025b70(*(undefined8 *)PTR_DAT_02710878);
  lVar6 = *(long *)PTR_DAT_027185f8;
  if (lVar6 != 0) {
    FUN_0120e660(local_e0,lVar6);
    if (local_e0[0] != '\0') {
      lVar7 = *(long *)PTR_DAT_02718f20;
      if ((lVar7 != 0) && (local_88 != 0)) {
        puVar8 = (undefined8 *)((ulong)&local_168 | 2);
        lVar5 = local_88 << 3;
        puVar10 = local_90;
        do {
          uVar3 = *puVar10;
          FUN_011ffbe0(&local_e8,lVar7,uVar3);
          auVar12 = FUN_0120e870(lVar6,uVar3);
          if (((auVar12._0_8_ != 0 || auVar12._8_8_ != 0) && (auVar11 != auVar12)) &&
             (local_e8 != 0)) {
            lVar9 = *(long *)(local_e8 + 8);
            if (lVar9 != 0) {
              (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
            }
            local_168 = FUN_008d3750();
            *(undefined2 *)(puVar8 + 3) = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            *puVar8 = 0;
            local_138 = 0;
            uStack_137 = 0;
            local_148._0_8_ = 0;
            local_148._8_8_ = 0;
            local_110 = 0;
            local_120 = 0;
            local_118 = 0;
            local_130 = 0;
            local_128 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_108 = 0;
            uStack_100 = 0;
            local_168 = FUN_01524c00(lVar9);
            FUN_01524ba0(lVar9,puVar8);
            local_148 = auVar12;
            local_138 = FUN_01524de0(lVar9);
            uStack_137 = FUN_01524bf0(lVar9);
            puVar1 = (undefined8 *)param_1[1];
            if (puVar1 == (undefined8 *)param_1[2]) {
              FUN_011f4250(param_1,&local_168);
            }
            else {
              uVar3 = param_1[3];
              lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar3;
              *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
              puVar1[2] = local_158;
              puVar1[3] = uStack_150;
              *puVar1 = CONCAT71(uStack_167,local_168);
              puVar1[1] = uStack_160;
              puVar1[6] = CONCAT62(uStack_136,CONCAT11(uStack_137,local_138));
              puVar1[7] = local_130;
              *(undefined1 (*) [16])(puVar1 + 4) = local_148;
              puVar1[10] = local_118;
              puVar1[0xb] = CONCAT44(uStack_10c,local_110);
              puVar1[8] = local_128;
              puVar1[9] = local_120;
              puVar1[0xe] = local_f8;
              puVar1[0xf] = uStack_f0;
              puVar1[0xc] = local_108;
              puVar1[0xd] = uStack_100;
              *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
              param_1[1] = param_1[1] + 0x80;
            }
            if (lVar9 != 0) {
              (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
            }
          }
          puVar10 = puVar10 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
        if (local_e0[0] == '\0') {
          return;
        }
      }
      if (local_80 != 0) {
        (**(code **)(*local_d0 + 0x18))(local_d0,local_90,local_80 << 3,8);
      }
      if (alStack_c0 == local_a0) {
        pcVar4 = *(code **)(*local_a0 + 0x20);
      }
      else {
        if (local_a0 == (long *)0x0) {
          return;
        }
        pcVar4 = *(code **)(*local_a0 + 0x28);
      }
      (*pcVar4)();
    }
  }
  return;
}


