/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cd4a0; name: FUN_006cd4a0
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006cd4a0(long param_1,uint *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  long *plVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  uint *puVar22;
  undefined8 *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  FUN_006cdd10(param_1 + 0x1e0,*param_2);
  puVar6 = PTR_DAT_02710860;
  if (*param_2 != 0) {
    uVar20 = 0;
    do {
      piVar1 = (int *)((long)(param_2 + uVar20 + 1) + (ulong)param_2[uVar20 + 1]);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 7) {
        puVar22 = (uint *)0x0;
        uVar5 = uRam0000000000000000;
        if (uRam0000000000000000 != 0) goto LAB_006cd550;
LAB_006cd684:
        uVar19 = 0;
        lVar12 = *(long *)(param_1 + 0x178);
      }
      else {
        uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
        puVar22 = (uint *)0x0;
        if (uVar11 != 0) {
          puVar22 = (uint *)((long)piVar1 + uVar11);
          puVar22 = (uint *)((long)puVar22 + (ulong)*puVar22);
        }
        uVar5 = *puVar22;
        if (*puVar22 == 0) goto LAB_006cd684;
LAB_006cd550:
        lVar12 = 0;
        uVar19 = 0;
        do {
          uVar11 = (ulong)*(uint *)((long)puVar22 + lVar12 + 4);
          lVar9 = lVar12 + (uVar11 - (long)*(int *)((long)puVar22 + lVar12 + uVar11 + 4));
          uVar4 = *(ushort *)((long)puVar22 + lVar9 + 4);
          if (uVar4 < 7) {
            uVar14 = 0;
LAB_006cd5c8:
            iVar15 = 0;
          }
          else {
            uVar13 = (ulong)*(ushort *)((long)puVar22 + lVar9 + 10);
            uVar14 = 0;
            if (uVar13 != 0) {
              uVar14 = (ulong)*(uint *)((long)puVar22 + lVar12 + uVar11 + uVar13 + 4);
            }
            if ((uVar4 < 9) ||
               (uVar13 = (ulong)*(ushort *)((long)puVar22 + lVar9 + 0xc), uVar13 == 0))
            goto LAB_006cd5c8;
            iVar15 = *(int *)((long)puVar22 + lVar12 + uVar11 + uVar13 + 4);
          }
          lVar12 = lVar12 + 4;
          uVar19 = *(int *)(PTR_DAT_027152d8 + (long)iVar15 * 4 + uVar14 * 0x10 + -4) + uVar19;
        } while ((ulong)uVar5 * 4 != lVar12);
        lVar12 = *(long *)(param_1 + 0x178);
      }
      if (lVar12 == 0) {
        lVar12 = *(long *)(param_1 + 8);
      }
      FUN_012c3790(&local_80,lVar12);
      puVar8 = *(undefined8 **)(param_1 + 0x1e8);
      if (puVar8 < *(undefined8 **)(param_1 + 0x1f0)) {
        uVar17 = *(undefined8 *)(param_1 + 0x1f8);
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_006cda80:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar17;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        *puVar8 = local_80;
        puVar8[2] = local_70;
        puVar8[3] = local_68;
        puVar8[1] = local_78;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + 0x20;
        local_80 = (undefined8 *)0x0;
      }
      else {
        FUN_012c5a00(param_1 + 0x1e0,&local_80);
        puVar8 = local_80;
        local_80 = (undefined8 *)0x0;
        if (puVar8 != (undefined8 *)0x0) {
          local_80 = (undefined8 *)0x0;
          FUN_012c5900(&local_78);
        }
      }
      puVar22 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
      plVar18 = *(long **)(*(long *)(param_1 + 0x1e8) + -0x20);
      uVar5 = 0;
      if (uVar19 != 0) {
        uVar5 = *(uint *)((long)puVar22 + (ulong)*puVar22) / uVar19;
      }
      pvVar7 = (void *)*plVar18;
      lVar12 = plVar18[1] - (long)pvVar7 >> 2;
      uVar14 = lVar12 * -0x5555555555555555;
      uVar11 = (ulong)(int)uVar5;
      if (uVar14 < uVar11) {
        FUN_006ce9a0(plVar18,uVar11 + lVar12 * 0x5555555555555555);
        pvVar7 = (void *)*plVar18;
      }
      else if (uVar14 != uVar11) {
        plVar18[1] = (long)((long)pvVar7 + uVar11 * 0xc);
      }
      uVar4 = *(ushort *)((long)piVar1 + (8 - (long)*piVar1));
      puVar22 = (uint *)((long)piVar1 + (ulong)uVar4);
      puVar22 = (uint *)((long)puVar22 + (ulong)*puVar22);
      puVar2 = (uint *)0x0;
      if (uVar4 != 0) {
        puVar2 = puVar22;
      }
      memcpy(pvVar7,puVar2 + 1,(ulong)*puVar22);
      puVar22 = (uint *)0x0;
      if (4 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
        if (uVar11 == 0) {
          puVar22 = (uint *)0x0;
        }
        else {
          puVar22 = (uint *)((long)piVar1 + uVar11);
          puVar22 = (uint *)((long)puVar22 + (ulong)*puVar22);
        }
      }
      FUN_006cdec0(plVar18 + 6,*puVar22);
      if (*puVar22 != 0) {
        uVar11 = 0;
        lVar12 = (long)puVar22 + 10;
        do {
          plVar21 = *(long **)(param_1 + 0x178);
          if (plVar21 == (long *)0x0) {
            plVar21 = *(long **)(param_1 + 8);
          }
          puVar8 = (undefined8 *)(**(code **)(*plVar21 + 0x10))(plVar21,0x40,8);
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_006cda80;
          *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar21;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
          if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
             (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
            lVar10 = FUN_0075ecb0();
          }
          puVar8[4] = lVar10;
          puVar8[5] = 0;
          *(undefined4 *)(puVar8 + 6) = 0;
          local_70 = 0x40;
          local_68 = 8;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          puVar3 = (undefined8 *)plVar18[7];
          local_80 = puVar8;
          local_78 = plVar21;
          if (puVar3 < (undefined8 *)plVar18[8]) {
            lVar10 = plVar18[9];
            lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
            if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_006cda80;
            *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar10;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            *puVar3 = local_80;
            puVar3[2] = local_70;
            puVar3[3] = local_68;
            puVar3[1] = local_78;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            plVar18[7] = plVar18[7] + 0x20;
            local_80 = (undefined8 *)0x0;
          }
          else {
            FUN_012c5e00(plVar18 + 6,&local_80);
            puVar8 = local_80;
            local_80 = (undefined8 *)0x0;
            if (puVar8 != (undefined8 *)0x0) {
              local_80 = (undefined8 *)0x0;
              lVar9 = puVar8[1];
              if (lVar9 != 0) {
                puVar8[2] = lVar9;
                (**(code **)(*(long *)puVar8[4] + 0x18))
                          ((long *)puVar8[4],lVar9,puVar8[3] - lVar9,2);
              }
              (**(code **)(*local_78 + 0x18))(local_78,puVar8,local_70,local_68);
            }
          }
          uVar14 = (ulong)*(uint *)(lVar12 + -6);
          lVar9 = lVar12 + uVar14;
          puVar8 = *(undefined8 **)(plVar18[7] + -0x20);
          lVar10 = lVar12 + (uVar14 - (long)*(int *)(lVar9 + -6));
          if (*(ushort *)(lVar10 + -6) < 5) {
            iVar15 = 0;
          }
          else {
            uVar13 = (ulong)*(ushort *)(lVar10 + -2);
            iVar15 = 0;
            if (uVar13 != 0) {
              iVar15 = *(int *)(lVar12 + uVar14 + uVar13 + -6);
            }
          }
          puVar8[7] = *(long *)(param_1 + 0x240) + (long)iVar15 * 0x20;
          *puVar8 = plVar18;
          lVar10 = uVar14 + *(ushort *)(lVar12 + (uVar14 - (long)*(int *)(lVar9 + -6)));
          uVar16 = (ulong)*(uint *)(lVar12 + lVar10 + (ulong)*(uint *)(lVar12 + lVar10 + -6) + -6);
          plVar21 = puVar8 + 1;
          pvVar7 = (void *)*plVar21;
          uVar13 = puVar8[2] - (long)pvVar7 >> 1;
          if (uVar13 < uVar16) {
            FUN_006cebf0(plVar21,uVar16 - uVar13);
            pvVar7 = (void *)*plVar21;
          }
          else if (uVar13 != uVar16) {
            puVar8[2] = (void *)((long)pvVar7 + uVar16 * 2);
          }
          lVar9 = uVar14 - (long)*(int *)(lVar9 + -6);
          if (*(ushort *)(lVar12 + lVar9 + -6) < 7) {
            lVar9 = 0;
          }
          else {
            uVar13 = (ulong)*(ushort *)(lVar12 + lVar9);
            lVar9 = 0;
            if (uVar13 != 0) {
              lVar9 = uVar14 + uVar13;
              lVar9 = lVar12 + lVar9 + (ulong)*(uint *)(lVar12 + lVar9 + -6) + -6;
            }
          }
          memcpy(pvVar7,(void *)(lVar9 + 4),uVar16 << 1);
          uVar11 = uVar11 + 1;
          lVar12 = lVar12 + 4;
        } while (uVar11 < *puVar22);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *param_2);
  }
  return;
}


