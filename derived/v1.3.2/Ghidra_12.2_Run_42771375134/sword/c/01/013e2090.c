/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e2090; name: FUN_013e2090
 */


void FUN_013e2090(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined1 *local_2b0;
  code *local_2a8;
  undefined1 *local_2a0;
  undefined1 *local_298;
  long *local_290;
  long *local_288;
  long local_228;
  undefined1 *local_220;
  code *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  byte *local_200 [13];
  byte local_194 [4];
  undefined1 *local_190;
  code *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  long *local_170;
  byte *local_168;
  byte local_104 [4];
  long local_100;
  long local_f8;
  undefined *local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 **local_d0 [14];
  
  lVar12 = *(long *)(param_1 + 0x60);
  plVar6 = (long *)(*(code *)**(undefined8 **)(lVar12 + 0x50))((undefined8 *)(lVar12 + 0x50));
  lVar7 = FUN_0132d9a0();
  do {
    if (plVar6 == (long *)0x0) {
      lVar12 = 0;
      lVar7 = lRam0000000000000358;
joined_r0x013e2604:
      local_f8 = lVar7;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar13 = *(long *)(param_1 + 0x220);
      plVar6 = *(long **)(lVar13 + 200);
      if ((long *)(lVar13 + 0xc0) != plVar6) {
        do {
          local_100 = plVar6[2];
          if (local_100 != 0) {
            (**(code **)(*(long *)(local_100 + 0x48) + 0x10))();
          }
          uVar8 = FUN_012d5170(local_100,&local_f0);
          local_104[0] = 1;
          local_170 = &local_100;
          local_168 = local_104;
          local_190 = &LAB_013e5290;
          local_188 = FUN_013e5360;
          local_180 = &LAB_013e5370;
          local_178 = &LAB_013e5380;
          local_d0[0] = &local_190;
          local_f0 = PTR_LAB_02727810;
          local_e8 = (code *)PTR_FUN_02727818;
          local_e0 = PTR_LAB_02727820;
          local_d8 = PTR_LAB_02727828;
          FUN_01306a00(local_f8,&local_f0);
          pcVar3 = local_e8;
          if (local_e8 != (code *)0x0) {
            local_e0 = (undefined *)0x0;
            local_d8 = (undefined *)0x0;
            local_f0 = (undefined *)0x0;
            local_e8 = (code *)0x0;
            (*pcVar3)(local_d0);
          }
          pcVar3 = local_188;
          if (local_188 != (code *)0x0) {
            local_180 = (undefined1 *)0x0;
            local_178 = (undefined1 *)0x0;
            local_190 = (undefined1 *)0x0;
            local_188 = (code *)0x0;
            (*pcVar3)(&local_170);
          }
          bVar4 = FUN_013092f0(uVar8);
          uVar14 = *(undefined8 *)PTR_DAT_027185f8;
          lVar9 = *(long *)(param_1 + 0x220);
          uVar10 = *(ulong *)(lVar9 + 0x38);
          lVar7 = *(long *)(lVar9 + 8);
          plVar15 = (long *)(lVar7 + (uVar10 >> 6 & 0x3fffffffffffff8));
          local_194[0] = bVar4;
          if (*(long *)(lVar9 + 0x10) != lVar7) {
            uVar1 = *(long *)(lVar9 + 0x40) + uVar10;
            puVar11 = (undefined8 *)(*plVar15 + (uVar10 & 0x1ff) * 8);
            puVar2 = (undefined8 *)
                     (*(long *)(lVar7 + (uVar1 >> 6 & 0x3fffffffffffff8)) + (uVar1 & 0x1ff) * 8);
            if (puVar11 != puVar2) {
              bVar5 = FUN_0120e630(uVar14,*puVar11);
              if (bVar4 != bVar5) {
                do {
                  bVar4 = local_194[0];
                  puVar11 = puVar11 + 1;
                  if ((long)puVar11 - *plVar15 == 0x1000) {
                    plVar15 = plVar15 + 1;
                    puVar11 = (undefined8 *)*plVar15;
                  }
                  if (puVar11 == puVar2) goto LAB_013e230c;
                  bVar5 = FUN_0120e630(uVar14,*puVar11);
                } while (bVar4 != bVar5);
              }
              local_104[0] = 1;
            }
          }
LAB_013e230c:
          lVar7 = *(long *)(lVar12 + 0x358);
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
          }
          local_200[0] = local_194;
          local_220 = &LAB_013e5390;
          local_218 = FUN_013e53d0;
          local_210 = &LAB_013e53e0;
          local_208 = &LAB_013e53f0;
          local_d0[0] = &local_220;
          local_f0 = PTR_LAB_027293f8;
          local_e8 = (code *)PTR_FUN_02729400;
          local_e0 = PTR_LAB_02729408;
          local_d8 = PTR_LAB_02729410;
          uVar10 = FUN_01307550(lVar7,&local_f0);
          pcVar3 = local_e8;
          if (local_e8 != (code *)0x0) {
            local_e0 = (undefined *)0x0;
            local_d8 = (undefined *)0x0;
            local_f0 = (undefined *)0x0;
            local_e8 = (code *)0x0;
            (*pcVar3)(local_d0);
          }
          pcVar3 = local_218;
          local_104[0] = local_104[0] | 1 < uVar10;
          if (local_218 != (code *)0x0) {
            local_210 = (undefined1 *)0x0;
            local_208 = (undefined1 *)0x0;
            local_220 = (undefined1 *)0x0;
            local_218 = (code *)0x0;
            (*pcVar3)(local_200);
          }
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
          }
          if (local_104[0] == 0) {
            plVar6 = (long *)plVar6[1];
          }
          else {
            local_290 = &local_100;
            local_288 = &local_f8;
            local_2b0 = &LAB_013e5400;
            local_2a8 = FUN_013e5850;
            local_2a0 = &LAB_013e59f0;
            local_298 = &LAB_013e5a00;
            local_d0[0] = &local_2b0;
            local_f0 = PTR_LAB_027277e8;
            local_e8 = (code *)PTR_FUN_027277f0;
            local_e0 = PTR_LAB_027277f8;
            local_d8 = PTR_LAB_02727800;
            FUN_01307150(&local_228,local_f8,&local_f0);
            pcVar3 = local_e8;
            if (local_e8 != (code *)0x0) {
              local_e0 = (undefined *)0x0;
              local_d8 = (undefined *)0x0;
              local_f0 = (undefined *)0x0;
              local_e8 = (code *)0x0;
              (*pcVar3)(local_d0);
            }
            if (local_228 != 0) {
              (**(code **)(*(long *)(local_228 + 0x48) + 0x18))();
              local_228 = 0;
            }
            pcVar3 = local_2a8;
            if (local_2a8 != (code *)0x0) {
              local_2a0 = (undefined1 *)0x0;
              local_298 = (undefined1 *)0x0;
              local_2b0 = (undefined1 *)0x0;
              local_2a8 = (code *)0x0;
              (*pcVar3)(&local_290);
            }
            uVar14 = FUN_012d5170(local_100,&local_f0);
            lVar7 = *(long *)(lVar12 + 0x620);
            if (lVar7 == 0) {
              FUN_0132bff0(0,uVar14);
            }
            else {
              plVar15 = (long *)(lVar7 + 0x48);
              (**(code **)(*plVar15 + 0x10))(plVar15);
              FUN_0132bff0(lVar7,uVar14);
              (**(code **)(*plVar15 + 0x18))(plVar15);
            }
            FUN_01309310(uVar8);
            plVar15 = (long *)plVar6[1];
            *(long **)(*plVar6 + 8) = plVar15;
            *(long *)plVar6[1] = *plVar6;
            *(long *)(lVar13 + 0xd0) = *(long *)(lVar13 + 0xd0) + -1;
            if (plVar6[2] != 0) {
              (**(code **)(*(long *)(plVar6[2] + 0x48) + 0x18))();
              plVar6[2] = 0;
            }
            (**(code **)(**(long **)(lVar13 + 0xd8) + 0x18))
                      (*(long **)(lVar13 + 0xd8),plVar6,0x18,8);
            plVar6 = plVar15;
          }
          if (local_100 != 0) {
            (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
            local_100 = 0;
          }
        } while ((long *)(lVar13 + 0xc0) != plVar6);
        lVar7 = local_f8;
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      return;
    }
    if (plVar6 == (long *)lVar7) {
      lVar7 = *(long *)(lVar12 + 0x358);
      goto joined_r0x013e2604;
    }
    plVar6 = (long *)*plVar6;
  } while( true );
}


