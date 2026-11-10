/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00716eb0; name: FUN_00716eb0
 */


void FUN_00716eb0(long param_1,uint *param_2)

{
  long *plVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  undefined1 auStack_140 [136];
  long local_b8 [2];
  long local_a8;
  long *plStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  
  if ((param_2 != (uint *)0x0) && (uVar10 = (ulong)*param_2, *param_2 != 0)) {
    lVar13 = *(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200) >> 5;
    uVar14 = lVar13 * -0x5555555555555555;
    if (uVar14 < uVar10) {
      FUN_007206d0((long *)(param_1 + 0x200),uVar10 + lVar13 * 0x5555555555555555);
      uVar5 = *param_2;
    }
    else {
      if (uVar14 != uVar10) {
        lVar17 = *(long *)(param_1 + 0x200) + uVar10 * 0x60;
        lVar13 = *(long *)(param_1 + 0x208);
        while (lVar12 = lVar13, lVar17 != lVar12) {
          lVar16 = *(long *)(lVar12 + -0x50);
          lVar13 = lVar12 + -0x60;
          if (lVar16 != 0) {
            *(long *)(lVar12 + -0x48) = lVar16;
            (**(code **)(**(long **)(lVar12 + -0x38) + 0x18))
                      (*(long **)(lVar12 + -0x38),lVar16,*(long *)(lVar12 + -0x40) - lVar16,8);
          }
        }
        *(long *)(param_1 + 0x208) = lVar17;
      }
      uVar5 = *param_2;
    }
    if (uVar5 != 0) {
      param_2 = param_2 + 1;
      puVar2 = param_2 + uVar5;
      uVar20 = NEON_fmov(0x3f800000,4);
      lVar13 = 0;
      do {
        lVar17 = *(long *)(param_1 + 0x200);
        plVar11 = (long *)(lVar17 + lVar13 * 0x60);
        piVar3 = (int *)((long)param_2 + (ulong)*param_2);
        if (*(ushort *)((long)piVar3 - (long)*piVar3) < 5) {
          iVar9 = 0;
        }
        else {
          uVar10 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
          iVar9 = 0;
          if (uVar10 != 0) {
            iVar9 = *(int *)((long)piVar3 + uVar10);
          }
        }
        *plVar11 = *(long *)(param_1 + 0x1d0) + (long)iVar9 * 0x110;
        if (*(ushort *)((long)piVar3 - (long)*piVar3) < 7) {
          uVar21 = 0;
        }
        else {
          uVar10 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
          uVar21 = 0;
          if (uVar10 != 0) {
            uVar21 = *(undefined4 *)((long)piVar3 + uVar10);
          }
        }
        lVar12 = lVar17 + lVar13 * 0x60;
        *(undefined4 *)(lVar12 + 8) = uVar21;
        puVar4 = (undefined8 *)
                 ((long)piVar3 + (ulong)*(ushort *)((long)piVar3 + (10 - (long)*piVar3)));
        uVar21 = (undefined4)((ulong)uVar20 >> 0x20);
        uVar18 = *puVar4;
        uVar22 = *(undefined4 *)((long)puVar4 + 0x14);
        uVar6 = *(undefined8 *)((long)puVar4 + 0xc);
        *(ulong *)(lVar12 + 0x48) = CONCAT44(uVar21,*(undefined4 *)(puVar4 + 1));
        *(undefined8 *)(lVar12 + 0x40) = uVar18;
        *(ulong *)(lVar12 + 0x58) = CONCAT44(uVar21,uVar22);
        *(undefined8 *)(lVar12 + 0x50) = uVar6;
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 9) ||
           (uVar10 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[4], uVar10 == 0)) {
          puVar15 = (uint *)0x0;
        }
        else {
          puVar15 = (uint *)((long)piVar3 + uVar10);
          puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
        }
        uVar5 = *puVar15;
        lVar12 = lVar17 + lVar13 * 0x60 + 0x10;
        FUN_00718d10(lVar12,(ulong)uVar5);
        if (uVar5 != 0) {
          lVar17 = lVar17 + lVar13 * 0x60;
          uVar10 = 0;
          plVar1 = (long *)(lVar17 + 0x18);
          do {
            lVar19 = (long)(int)puVar15[uVar10 + 1];
            lVar16 = *(long *)(param_1 + 0x1d0);
            plVar7 = (long *)(lVar16 + lVar19 * 0x110);
            local_180 = *plVar7;
            local_178 = plVar7[1];
            local_170 = plVar7[2];
            local_168 = plVar7[3];
            if (local_168 != 0) {
              (**(code **)(*(long *)(local_168 + 0x48) + 0x10))();
            }
            lVar8 = lVar16 + lVar19 * 0x110;
            local_160 = *(undefined8 *)(lVar8 + 0x20);
            local_158 = *(undefined8 *)(lVar8 + 0x28);
            local_150 = *(undefined8 *)(lVar8 + 0x30);
            local_148 = *(long *)(lVar8 + 0x38);
            if (local_148 != 0) {
              (**(code **)(*(long *)(local_148 + 0x48) + 0x10))();
            }
            lVar16 = lVar16 + lVar19 * 0x110;
            memcpy(auStack_140,(void *)(lVar16 + 0x40),0x85);
            FUN_007192a0(local_b8,lVar16 + 200);
            local_88 = *(undefined8 *)(lVar16 + 0xf8);
            local_80 = *(undefined4 *)(lVar16 + 0x100);
            local_7c = *(undefined1 *)(lVar16 + 0x104);
            for (lVar16 = *(long *)(param_1 + 0x260); lVar16 != *(long *)(param_1 + 0x268);
                lVar16 = lVar16 + 0x60) {
              if (*(long *)(lVar16 + 0x20) == local_180) {
                *(undefined1 *)(lVar16 + 0x4c) = 1;
                *(long **)(lVar16 + 0x50) = plVar11;
                plVar7 = (long *)*plVar1;
                local_188 = lVar16;
                if (plVar7 < *(long **)(lVar17 + 0x20)) {
                  uVar18 = *(undefined8 *)(lVar17 + 0x28);
                  lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                  if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar18;
                  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
                  *plVar7 = local_188;
                  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
                  *plVar1 = *plVar1 + 8;
                }
                else {
                  FUN_00720bb0(lVar12,&local_188);
                }
                break;
              }
            }
            if (local_b8[0] != 0) {
              (**(code **)(*plStack_a0 + 0x18))(plStack_a0,local_b8[0],local_a8 - local_b8[0],4);
            }
            if (local_148 != 0) {
              (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
              local_148 = 0;
            }
            if (local_168 != 0) {
              (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
              local_168 = 0;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar5);
        }
        param_2 = param_2 + 1;
        lVar13 = lVar13 + 1;
      } while (param_2 != puVar2);
    }
  }
  return;
}


