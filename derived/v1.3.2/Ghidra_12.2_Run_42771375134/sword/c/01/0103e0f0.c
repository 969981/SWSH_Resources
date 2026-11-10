/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103e0f0; name: FUN_0103e0f0
 */


bool FUN_0103e0f0(long param_1)

{
  ulong *puVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_138;
  undefined1 *puStack_130;
  undefined8 local_128;
  long local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  undefined1 auStack_100 [16];
  undefined8 local_f0 [2];
  ulong local_e0;
  char *local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  char *local_b8;
  ulong local_b0;
  ulong local_a8;
  char *local_a0;
  ulong local_98;
  ulong local_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  
  iVar7 = *(int *)(param_1 + 0xa0);
  if (iVar7 == 0) {
    lVar8 = *(long *)(param_1 + 0xb8);
    iVar7 = 0;
    if (lVar8 != 0) {
      if (*(char *)(lVar8 + 0x170) == '\0') {
        iVar7 = 0;
      }
      else {
        FUN_012b4da0(auStack_78,*(undefined8 *)(lVar8 + 400),*(undefined8 *)(lVar8 + 0x180));
        local_c0 = 0xb0d637e220750c41;
        local_b8 = "bgmData";
        local_b0 = 7;
        FUN_012b4250(auStack_88,auStack_78,&local_c0);
        lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        plVar10 = *(long **)(param_1 + 0x60);
        lVar12 = *plVar10;
        lVar6 = plVar10[1];
        while (lVar2 = lVar6, lVar2 != lVar12) {
          lVar6 = lVar2 + -0x38;
          if (*(long *)(lVar2 + -8) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar2 + -8) + 0x48) + 0x18))();
            *(undefined8 *)(lVar2 + -8) = 0;
          }
        }
        plVar10[1] = lVar12;
        plVar10 = *(long **)(param_1 + 0x80);
        lVar12 = *plVar10;
        lVar6 = plVar10[1];
        while (lVar2 = lVar6, lVar2 != lVar12) {
          lVar6 = lVar2 + -0x38;
          if (*(long *)(lVar2 + -8) != 0) {
            (**(code **)(*(long *)(*(long *)(lVar2 + -8) + 0x48) + 0x18))();
            *(undefined8 *)(lVar2 + -8) = 0;
          }
        }
        plVar10[1] = lVar12;
        uVar4 = FUN_012b40f0(auStack_88);
        if (uVar4 != 0) {
          uVar11 = 0;
          do {
            local_c0 = local_c0 & 0xffffffff00000000;
            local_b8 = (char *)0xcbf29ce484222645;
            local_b0 = 0xcbf29ce484222645;
            local_a8 = 0xcbf29ce484222645;
            local_a0 = "";
            local_98 = 0;
            local_90 = 0;
            FUN_012b4190(&local_118,auStack_88,uVar11);
            local_e0 = 0x120f4e07bd4c4860;
            local_d8 = "ID";
            local_d0 = 2;
            FUN_012b4250(&local_138,&local_118,&local_e0);
            uVar3 = FUN_012b4420(&local_138,0);
            local_c0 = CONCAT44(local_c0._4_4_,uVar3);
            FUN_012b4190(&local_118,auStack_88,uVar11);
            local_e0 = 0x2959b62423299598;
            local_d8 = "MsgLabel";
            local_d0 = 8;
            FUN_012b4250(&local_138,&local_118,&local_e0);
            local_f0[0] = 0;
            local_b8 = (char *)FUN_012b4b40(&local_138,local_f0);
            FUN_012b4190(&local_118,auStack_88,uVar11);
            local_e0 = 0xbd9392233ed31075;
            local_d8 = "Unlock";
            local_d0 = 6;
            FUN_012b4250(&local_138,&local_118,&local_e0);
            local_f0[0] = 0;
            local_b0 = FUN_012b4b40(&local_138,local_f0);
            FUN_012b4190(auStack_100,auStack_88,uVar11);
            local_118 = 0x2e252b4afbe75aa6;
            local_110 = "PostEventName";
            local_108 = 0xd;
            FUN_012b4250(local_f0,auStack_100,&local_118);
            local_138 = 0xcbf29ce484222645;
            puStack_130 = &DAT_01d38550;
            local_128 = 0;
            local_120 = 0;
            FUN_012b4820(&local_e0,local_f0,&local_138);
            local_a8 = local_e0;
            local_a0 = local_d8;
            local_98 = local_d0;
            if (local_90 != 0) {
              (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
            }
            local_90 = local_c8;
            local_c8 = 0;
            if (local_120 != 0) {
              (**(code **)(*(long *)(local_120 + 0x48) + 0x18))();
              local_120 = 0;
            }
            if ((local_b0 == 0xb6751baa76ea93c4) || (uVar5 = FUN_01510f00(lVar8), (uVar5 & 1) != 0))
            {
              lVar12 = *(long *)(param_1 + 0x60);
              puVar1 = *(ulong **)(lVar12 + 8);
              if (puVar1 == *(ulong **)(lVar12 + 0x10)) {
                FUN_0103eda0(lVar12,&local_c0);
              }
              else {
                uVar13 = *(undefined8 *)(lVar12 + 0x18);
                lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0103e72c;
                *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar13;
                *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
                *puVar1 = local_c0;
                puVar1[1] = (ulong)local_b8;
                puVar1[2] = local_b0;
                puVar1[3] = local_a8;
                puVar1[4] = (ulong)local_a0;
                puVar1[5] = local_98;
                puVar1[6] = local_90;
                if (local_90 != 0) {
                  (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
                }
                *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
                *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 0x38;
              }
              if (local_b8 != (char *)0x83f48976e4060ce4) {
                lVar12 = *(long *)(param_1 + 0x80);
                puVar1 = *(ulong **)(lVar12 + 8);
                if (puVar1 == *(ulong **)(lVar12 + 0x10)) {
                  FUN_0103eda0(lVar12,&local_c0);
                }
                else {
                  uVar13 = *(undefined8 *)(lVar12 + 0x18);
                  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_0103e72c:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar13;
                  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
                  *puVar1 = local_c0;
                  puVar1[1] = (ulong)local_b8;
                  puVar1[2] = local_b0;
                  puVar1[3] = local_a8;
                  puVar1[4] = (ulong)local_a0;
                  puVar1[5] = local_98;
                  puVar1[6] = local_90;
                  if (local_90 != 0) {
                    (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
                  }
                  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
                  *(long *)(lVar12 + 8) = *(long *)(lVar12 + 8) + 0x38;
                }
              }
            }
            if (local_90 != 0) {
              (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
              local_90 = 0;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar4);
        }
        *(int *)(param_1 + 0xac) =
             (int)((ulong)((*(long **)(param_1 + 0x60))[1] - **(long **)(param_1 + 0x60)) >> 3) *
             -0x49249249 + -1;
        lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
        if (lVar12 == 0) {
          uVar3 = FUN_01539250(0);
          *(undefined4 *)(param_1 + 0x1c0) = uVar3;
        }
        else {
          plVar10 = (long *)(lVar12 + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10);
          uVar3 = FUN_01539250(lVar12);
          *(undefined4 *)(param_1 + 0x1c0) = uVar3;
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
        piVar9 = (int *)**(long **)(param_1 + 0x60);
        lVar12 = (*(long **)(param_1 + 0x60))[1] - (long)piVar9;
        if (lVar12 != 0) {
          uVar4 = 0;
          do {
            if (*piVar9 == *(int *)(param_1 + 0x1c0)) {
              *(int *)(param_1 + 0xa4) = (int)uVar4;
              *(undefined4 *)(param_1 + 0xa0) = 1;
              goto joined_r0x0103e714;
            }
            uVar4 = uVar4 + 1;
            piVar9 = piVar9 + 0xe;
          } while (uVar4 < (ulong)((lVar12 >> 3) * 0x6db6db6db6db6db7));
        }
        *(int *)(param_1 + 0x1c0) = -1;
        *(undefined4 *)(param_1 + 0xa0) = 1;
joined_r0x0103e714:
        iVar7 = 1;
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
          iVar7 = *(int *)(param_1 + 0xa0);
        }
      }
    }
  }
  return iVar7 == 1;
}


