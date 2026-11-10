/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00751820; name: FUN_00751820
 */


void FUN_00751820(undefined8 param_1,long param_2,int *param_3,undefined8 param_4,uint param_5,
                 undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  ulong *puVar4;
  byte *__s;
  uint uVar5;
  byte bVar6;
  code *pcVar7;
  int iVar8;
  size_t sVar9;
  char *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  uint *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  ushort *puVar24;
  ulong local_3e0;
  byte *pbStack_3d8;
  size_t local_3d0;
  long local_3c8;
  undefined *local_1f0;
  ulong local_1e8;
  long local_1e0;
  code *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [96];
  long local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [104];
  long local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  long local_c0;
  long local_b8;
  ulong local_a8;
  byte *pbStack_a0;
  size_t local_98;
  long local_90;
  ulong local_88;
  byte *pbStack_80;
  size_t local_78;
  long local_70;
  
  if (((param_2 != 0) && (param_3 != (int *)0x0)) &&
     (lVar11 = *(long *)(param_2 + 0x328) - *(long *)(param_2 + 800), lVar11 != 0)) {
    puVar12 = (undefined8 *)((ulong)&local_1f0 | 8);
    puVar4 = &local_88;
    if ((param_5 & 1) == 0) {
      puVar4 = &local_a8;
    }
    puVar13 = (uint *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + (4 - (long)*param_3)));
    uVar18 = 0;
    uVar5 = *(uint *)((long)puVar13 + (ulong)*puVar13);
    puVar1 = PTR_DAT_02710818 + 0x10;
    puVar2 = PTR_DAT_02710808 + 0x10;
    do {
      if (uVar5 != 0) {
        uVar19 = 0;
        do {
          puVar13 = (uint *)((long)param_3 +
                            (ulong)*(ushort *)((long)param_3 + (4 - (long)*param_3)));
          puVar13 = (uint *)((long)puVar13 + uVar19 * 4 + (ulong)*puVar13 + 4);
          piVar3 = (int *)((long)puVar13 + (ulong)*puVar13);
          puVar24 = (ushort *)((long)piVar3 - (long)*piVar3);
          if (((10 < *puVar24) && ((ulong)puVar24[5] != 0)) &&
             ((*(char *)((long)piVar3 + (ulong)puVar24[5]) == '\x04' &&
              (((ulong)puVar24[4] != 0 && (*(int *)((long)piVar3 + (ulong)puVar24[4]) == 3)))))) {
            if ((ulong)puVar24[3] == 0) {
              lVar22 = 0;
            }
            else {
              puVar13 = (uint *)((long)piVar3 + (ulong)puVar24[3]);
              lVar22 = (long)puVar13 + (ulong)*puVar13;
            }
            pbVar14 = (byte *)(lVar22 + 4);
            sVar9 = strlen((char *)pbVar14);
            bVar6 = *(byte *)(lVar22 + 4);
            uVar20 = 0xcbf29ce484222645;
            if (bVar6 != 0) {
              uVar20 = 0xcbf29ce484222645;
              pbVar15 = (byte *)(lVar22 + 5);
              do {
                uVar20 = (uVar20 ^ bVar6) * 0x100000001b3;
                bVar6 = *pbVar15;
                pbVar15 = pbVar15 + 1;
              } while (bVar6 != 0);
            }
            lVar22 = 0;
            local_70 = 0;
            piVar3 = (int *)((long)((long)piVar3 + (ulong)puVar24[6]) +
                            (ulong)*(uint *)((long)piVar3 + (ulong)puVar24[6]));
            if (4 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
              uVar16 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2];
              if (uVar16 == 0) {
                lVar22 = 0;
              }
              else {
                puVar13 = (uint *)((long)piVar3 + uVar16);
                lVar22 = (long)puVar13 + (ulong)*puVar13;
              }
            }
            pbVar15 = (byte *)(lVar22 + 4);
            local_88 = uVar20;
            pbStack_80 = pbVar14;
            local_78 = sVar9;
            pcVar10 = strrchr((char *)pbVar15,0x2f);
            __s = pbVar15;
            if (pcVar10 != (char *)0x0) {
              __s = (byte *)(pcVar10 + 1);
            }
            local_98 = strlen((char *)__s);
            bVar6 = *__s;
            local_a8 = 0xcbf29ce484222645;
            if (bVar6 != 0) {
              local_a8 = 0xcbf29ce484222645;
              pbVar17 = __s;
              do {
                pbVar17 = pbVar17 + 1;
                local_a8 = (local_a8 ^ bVar6) * 0x100000001b3;
                bVar6 = *pbVar17;
              } while (bVar6 != 0);
            }
            local_90 = 0;
            pbStack_a0 = __s;
            if ((param_5 & 1) == 0) {
              sVar9 = strlen((char *)pbVar15);
              bVar6 = *pbVar15;
              if (bVar6 == 0) {
                uVar20 = 0xcbf29ce484222645;
              }
              else {
                uVar20 = 0xcbf29ce484222645;
                pbVar14 = (byte *)(lVar22 + 5);
                do {
                  uVar20 = (uVar20 ^ bVar6) * 0x100000001b3;
                  bVar6 = *pbVar14;
                  pbVar14 = pbVar14 + 1;
                } while (bVar6 != 0);
              }
              pbVar14 = pbVar15;
            }
            local_3c8 = 0;
            local_3e0 = uVar20;
            pbStack_3d8 = pbVar14;
            local_3d0 = sVar9;
            FUN_00752b80(&local_d8,param_4,&local_3e0,".bntx");
            if (local_3c8 != 0) {
              (**(code **)(*(long *)(local_3c8 + 0x48) + 0x18))();
              local_3c8 = 0;
            }
            iVar8 = FUN_006e5970(&local_d8);
            if (iVar8 == 1) {
              local_150 = 0;
              uStack_148 = 0;
              local_160 = 0;
              local_158 = (code *)0x0;
              *puVar12 = 0;
              puVar12[3] = 0;
              puVar12[4] = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              local_1f0 = puVar1;
              FUN_0010ecd0(&local_3e0,*(undefined8 *)PTR_DAT_02710788,0,&local_d8,0,param_6,0);
              if (local_1e8 != 0) {
                (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
              }
              uVar20 = local_3e0;
              local_1e8 = local_3e0;
              if (local_3e0 != 0) {
                plVar23 = (long *)(local_3e0 + 0x48);
                (**(code **)(*plVar23 + 0x10))(plVar23);
                if (local_1e0 != 0 || local_160 != 0) {
                  FUN_006e1e70(uVar20,&local_1f0,1);
                }
                FUN_006e1be0(uVar20);
                (**(code **)(*(long *)(uVar20 + 0x48) + 0x18))(plVar23);
              }
              FUN_006fbcf0(&local_3e0,&local_1f0,puVar4);
              lVar21 = *(long *)(param_2 + 0x370);
              for (lVar22 = *(long *)(param_2 + 0x368); lVar22 != lVar21; lVar22 = lVar22 + 0x48) {
                if ((*(byte *)(lVar22 + 0x38) & 1) != 0) {
                  FUN_0072f680(lVar22,&local_88,&local_3e0,0);
                }
              }
              FUN_00784490(&local_3e0);
              local_1f0 = puVar2;
              if (local_1e8 == 0) {
                local_1e8 = 0;
              }
              else {
                FUN_006e2100(local_1e8,&local_1f0);
                uVar20 = local_1e8;
                local_1e8 = 0;
                if (uVar20 != 0) {
                  (**(code **)(*(long *)(uVar20 + 0x48) + 0x18))();
                }
              }
              if (local_158 != (code *)0x0) {
                local_150 = 0;
                uStack_148 = 0;
                (*local_158)(auStack_140);
              }
              pcVar7 = local_1d8;
              if (local_1d8 != (code *)0x0) {
                local_1d0 = 0;
                uStack_1c8 = 0;
                local_1e0 = 0;
                local_1d8 = (code *)0x0;
                (*pcVar7)(auStack_1c0);
              }
              if (local_1e8 != 0) {
                (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
                local_1e8 = 0;
              }
            }
            if ((local_c0 != 0) && (local_d8 != 0)) {
              (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
            }
            local_d8 = 0;
            uStack_d0 = 0xcbf29ce484222645;
            local_c8 = &DAT_01d38550;
            local_c0 = 0;
            if (local_b8 != 0) {
              (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
              local_b8 = 0;
            }
            if (local_90 != 0) {
              (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
              local_90 = 0;
            }
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
              local_70 = 0;
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar5);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < (ulong)((lVar11 >> 3) * -0x70a3d70a3d70a3d7));
  }
  return;
}


