/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00717fe0; name: FUN_00717fe0
 */


void FUN_00717fe0(long param_1,long *param_2,uint *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  size_t sVar7;
  int iVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ushort *puVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  int *piVar22;
  undefined4 uVar23;
  undefined1 auStack_3a0 [496];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  long local_198;
  undefined *local_190;
  long local_188;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [112];
  
  if ((param_2 != (long *)0x0) && (param_3 != (uint *)0x0)) {
    uVar9 = (ulong)*param_3;
    lVar14 = param_2[1] - *param_2 >> 6;
    uVar15 = lVar14 * -0x71c71c71c71c71c7;
    if (uVar15 < uVar9) {
      FUN_0071cf40(param_2,uVar9 + lVar14 * 0x71c71c71c71c71c7);
      uVar4 = *param_3;
    }
    else {
      if (uVar15 != uVar9) {
        lVar21 = *param_2 + uVar9 * 0x240;
        lVar14 = param_2[1];
        while (lVar21 != lVar14) {
          FUN_00784490(lVar14 + -0x200);
          lVar19 = *(long *)(lVar14 + -0x208);
          if (lVar19 != 0) {
            (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))();
            *(long *)(lVar14 + -0x208) = 0;
          }
          lVar18 = lVar14 + -0x240;
          plVar20 = (long *)(lVar14 + -0x228);
          lVar19 = *plVar20;
          lVar14 = lVar18;
          if (lVar19 != 0) {
            (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))();
            *plVar20 = 0;
          }
        }
        param_2[1] = lVar21;
      }
      uVar4 = *param_3;
    }
    if (uVar4 != 0) {
      uVar9 = 0;
      puVar1 = PTR_DAT_02710808 + 0x10;
      puVar2 = PTR_DAT_02710818 + 0x10;
      do {
        piVar22 = (int *)((long)(param_3 + uVar9 + 1) + (ulong)param_3[uVar9 + 1]);
        puVar16 = (ushort *)((long)piVar22 - (long)*piVar22);
        uVar6 = *puVar16;
        if (uVar6 < 5) {
          iVar8 = 0;
          lVar14 = 0;
LAB_007181d0:
          piVar22 = (int *)0x0;
        }
        else {
          if ((ulong)puVar16[2] == 0) {
            lVar14 = 0;
          }
          else {
            puVar3 = (uint *)((long)piVar22 + (ulong)puVar16[2]);
            lVar14 = (long)puVar3 + (ulong)*puVar3;
          }
          if (uVar6 < 7) {
            iVar8 = 0;
            goto LAB_007181d0;
          }
          iVar8 = 0;
          if ((ulong)puVar16[3] != 0) {
            iVar8 = *(int *)((long)piVar22 + (ulong)puVar16[3]);
          }
          if ((uVar6 < 9) || ((ulong)puVar16[4] == 0)) goto LAB_007181d0;
          puVar3 = (uint *)((long)piVar22 + (ulong)puVar16[4]);
          piVar22 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
        lVar21 = *(long *)(param_1 + 0x300);
        lVar19 = (long)iVar8;
        local_188 = *(long *)(lVar21 + (long)iVar8 * 0x110 + 8);
        local_190 = puVar1;
        if (local_188 != 0) {
          (**(code **)(*(long *)(local_188 + 0x48) + 0x10))();
        }
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        local_178 = (code *)0x0;
        pcVar10 = *(code **)(lVar21 + lVar19 * 0x110 + 0x20);
        if (pcVar10 != (code *)0x0) {
          lVar18 = lVar21 + lVar19 * 0x110;
          (*pcVar10)(lVar18 + 0x30,auStack_160);
          local_180 = *(undefined8 *)(lVar18 + 0x10);
          local_178 = *(code **)(lVar18 + 0x18);
          local_170 = *(undefined8 *)(lVar18 + 0x20);
          uStack_168 = *(undefined8 *)(lVar18 + 0x28);
        }
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        local_f8 = (code *)0x0;
        pcVar10 = *(code **)(lVar21 + lVar19 * 0x110 + 0xa0);
        if (pcVar10 != (code *)0x0) {
          lVar21 = lVar21 + lVar19 * 0x110;
          (*pcVar10)(lVar21 + 0xb0,auStack_e0);
          local_100 = *(undefined8 *)(lVar21 + 0x90);
          local_f8 = *(code **)(lVar21 + 0x98);
          local_f0 = *(undefined8 *)(lVar21 + 0xa0);
          uStack_e8 = *(undefined8 *)(lVar21 + 0xa8);
        }
        puVar11 = (undefined8 *)(*(long *)(param_1 + 0x330) + lVar19 * 0x20);
        local_1b0 = *puVar11;
        local_1a8 = puVar11[1];
        local_1a0 = puVar11[2];
        local_198 = puVar11[3];
        local_190 = puVar2;
        if (local_198 != 0) {
          (**(code **)(*(long *)(local_198 + 0x48) + 0x10))();
        }
        lVar19 = local_198;
        lVar21 = *param_2;
        if ((ulong)((param_2[1] - lVar21 >> 6) * -0x71c71c71c71c71c7) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        puVar11 = (undefined8 *)(lVar21 + uVar9 * 0x240);
        *puVar11 = local_1b0;
        puVar11[1] = local_1a8;
        puVar11[2] = local_1a0;
        if (local_198 != 0) {
          (**(code **)(*(long *)(local_198 + 0x48) + 0x10))();
        }
        lVar18 = puVar11[3];
        puVar11[3] = lVar19;
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
        }
        sVar7 = strlen((char *)(lVar14 + 4));
        bVar5 = *(byte *)(lVar14 + 4);
        uVar15 = 0xcbf29ce484222645;
        if (bVar5 != 0) {
          uVar15 = 0xcbf29ce484222645;
          pbVar17 = (byte *)(lVar14 + 5);
          do {
            uVar15 = (uVar15 ^ bVar5) * 0x100000001b3;
            bVar5 = *pbVar17;
            pbVar17 = pbVar17 + 1;
          } while (bVar5 != 0);
        }
        lVar19 = lVar21 + uVar9 * 0x240;
        plVar20 = (long *)(lVar19 + 0x38);
        *(size_t *)(lVar19 + 0x30) = sVar7;
        *(ulong *)(lVar19 + 0x20) = uVar15;
        *(char **)(lVar19 + 0x28) = (char *)(lVar14 + 4);
        if (*plVar20 != 0) {
          plVar12 = (long *)(*plVar20 + 0x48);
          (**(code **)(*plVar12 + 0x18))(plVar12);
          *plVar20 = 0;
        }
        lVar21 = lVar21 + uVar9 * 0x240;
        *plVar20 = 0;
        *(int **)(lVar21 + 0x230) = piVar22;
        FUN_006fbcf0(auStack_3a0,&local_190,&local_1b0);
        lVar21 = lVar21 + 0x40;
        FUN_007185f0(lVar21,auStack_3a0);
        FUN_00784490(auStack_3a0);
        if (*(ushort *)((long)piVar22 - (long)*piVar22) < 7) {
          uVar15 = 0;
        }
        else {
          uVar13 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[3];
          uVar15 = 0;
          if (uVar13 != 0) {
            uVar15 = (ulong)*(uint *)((long)piVar22 + uVar13);
          }
        }
        FUN_006fc670(lVar21,(&DAT_01d4b1d0)[uVar15]);
        if (*(ushort *)((long)piVar22 - (long)*piVar22) < 9) {
          uVar15 = 0;
        }
        else {
          uVar13 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[4];
          uVar15 = 0;
          if (uVar13 != 0) {
            uVar15 = (ulong)*(uint *)((long)piVar22 + uVar13);
          }
        }
        FUN_006fc690(lVar21,(&DAT_01d4b1d0)[uVar15]);
        if (*(ushort *)((long)piVar22 - (long)*piVar22) < 0xb) {
          uVar15 = 0;
        }
        else {
          uVar13 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[5];
          uVar15 = 0;
          if (uVar13 != 0) {
            uVar15 = (ulong)*(uint *)((long)piVar22 + uVar13);
          }
        }
        FUN_006fc6b0(lVar21,(&DAT_01d4b1d0)[uVar15]);
        uVar23 = 0;
        if (0xe < *(ushort *)((long)piVar22 - (long)*piVar22)) {
          uVar15 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[7];
          uVar23 = 0;
          if (uVar15 != 0) {
            uVar23 = *(undefined4 *)((long)piVar22 + uVar15);
          }
        }
        FUN_006fc6d0(uVar23,lVar21);
        if (*(ushort *)((long)piVar22 - (long)*piVar22) < 5) {
          uVar15 = 0;
        }
        else {
          uVar13 = (ulong)((ushort *)((long)piVar22 - (long)*piVar22))[2];
          uVar15 = 0;
          if (uVar13 != 0) {
            uVar15 = (ulong)*(uint *)((long)piVar22 + uVar13);
          }
        }
        iVar8 = (&DAT_0213f1c0)[uVar15];
        FUN_006fc650(lVar21,iVar8);
        if (iVar8 - 9U < 9) {
          FUN_006fc6e0(lVar21,3);
        }
        if (local_198 != 0) {
          (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
          local_198 = 0;
        }
        local_190 = PTR_DAT_02710808 + 0x10;
        if (local_188 == 0) {
          local_188 = 0;
          pcVar10 = local_f8;
        }
        else {
          FUN_006e2100(local_188,&local_190);
          lVar14 = local_188;
          local_188 = 0;
          pcVar10 = local_f8;
          if (lVar14 != 0) {
            (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
            pcVar10 = local_f8;
          }
        }
        local_f8 = pcVar10;
        if (pcVar10 != (code *)0x0) {
          local_f0 = 0;
          uStack_e8 = 0;
          local_100 = 0;
          local_f8 = (code *)0x0;
          (*pcVar10)(auStack_e0);
        }
        pcVar10 = local_178;
        if (local_178 != (code *)0x0) {
          local_170 = 0;
          uStack_168 = 0;
          local_180 = 0;
          local_178 = (code *)0x0;
          (*pcVar10)(auStack_160);
        }
        if (local_188 != 0) {
          (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
        }
        uVar4 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar4;
      } while (uVar4 < *param_3);
    }
  }
  return;
}


