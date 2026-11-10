/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00714940; name: FUN_00714940
 */


void FUN_00714940(long param_1,uint *param_2)

{
  char *pcVar1;
  int *piVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  size_t sVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  code *pcVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  int iVar23;
  ulong *puVar24;
  long lVar25;
  undefined8 uVar26;
  uint *puVar27;
  ulong local_80;
  char *local_78;
  size_t local_70;
  ulong local_68;
  
  if (param_2 != (uint *)0x0) {
    lVar25 = *(long *)(param_1 + 0x298);
    uVar9 = (ulong)*param_2;
    lVar17 = lVar25 - *(long *)(param_1 + 0x290) >> 6;
    uVar18 = lVar17 * -0x79435e50d79435e5;
    if (uVar18 < uVar9) {
      FUN_0071c030((long *)(param_1 + 0x290),uVar9 + lVar17 * 0x79435e50d79435e5);
      uVar12 = *param_2;
    }
    else {
      if (uVar18 != uVar9) {
        lVar17 = *(long *)(param_1 + 0x290) + uVar9 * 0x4c0;
        while (lVar17 != lVar25) {
          lVar25 = lVar25 + -0x4c0;
          FUN_00719980(lVar25);
        }
        *(long *)(param_1 + 0x298) = lVar17;
      }
      uVar12 = *param_2;
    }
    if (uVar12 != 0) {
      uVar9 = 0;
      do {
        lVar25 = *(long *)(param_1 + 0x290);
        piVar19 = (int *)((long)(param_2 + uVar9 + 1) + (ulong)param_2[uVar9 + 1]);
        *(int *)(lVar25 + uVar9 * 0x4c0 + 0x4a0) = (int)uVar9;
        if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 5) ||
           (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[2], uVar18 == 0)) {
          lVar17 = 0;
        }
        else {
          puVar27 = (uint *)((long)piVar19 + uVar18);
          lVar17 = (long)puVar27 + (ulong)*puVar27;
        }
        sVar7 = strlen((char *)(lVar17 + 4));
        bVar6 = *(byte *)(lVar17 + 4);
        uVar18 = 0xcbf29ce484222645;
        if (bVar6 != 0) {
          uVar18 = 0xcbf29ce484222645;
          pbVar15 = (byte *)(lVar17 + 5);
          do {
            uVar18 = (uVar18 ^ bVar6) * 0x100000001b3;
            bVar6 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar6 != 0);
        }
        puVar24 = (ulong *)(lVar25 + uVar9 * 0x4c0);
        *puVar24 = uVar18;
        puVar24[1] = (ulong)(lVar17 + 4);
        puVar24[2] = sVar7;
        puVar24 = puVar24 + 3;
        if (*puVar24 != 0) {
          (**(code **)(*(long *)(*puVar24 + 0x48) + 0x18))();
          *puVar24 = 0;
        }
        *puVar24 = 0;
        lVar17 = 0;
        if (6 < *(ushort *)((long)piVar19 - (long)*piVar19)) {
          uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[3];
          if (uVar18 == 0) {
            lVar17 = 0;
          }
          else {
            puVar27 = (uint *)((long)piVar19 + uVar18);
            lVar17 = (long)puVar27 + (ulong)*puVar27;
          }
        }
        sVar7 = strlen((char *)(lVar17 + 4));
        bVar6 = *(byte *)(lVar17 + 4);
        uVar18 = 0xcbf29ce484222645;
        if (bVar6 != 0) {
          uVar18 = 0xcbf29ce484222645;
          pbVar15 = (byte *)(lVar17 + 5);
          do {
            uVar18 = (uVar18 ^ bVar6) * 0x100000001b3;
            bVar6 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar6 != 0);
        }
        lVar21 = lVar25 + uVar9 * 0x4c0;
        plVar22 = (long *)(lVar21 + 0x38);
        *(ulong *)(lVar21 + 0x20) = uVar18;
        *(char **)(lVar21 + 0x28) = (char *)(lVar17 + 4);
        *(size_t *)(lVar21 + 0x30) = sVar7;
        if (*plVar22 != 0) {
          plVar10 = (long *)(*plVar22 + 0x48);
          (**(code **)(*plVar10 + 0x18))(plVar10);
          *plVar22 = 0;
        }
        lVar21 = lVar25 + uVar9 * 0x4c0;
        *plVar22 = 0;
        lVar17 = 0;
        plVar22 = (long *)(lVar21 + 0x40);
        *plVar22 = (long)piVar19;
        if (0x1c < *(ushort *)((long)piVar19 - (long)*piVar19)) {
          uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[0xe];
          if (uVar18 == 0) {
            lVar17 = 0;
          }
          else {
            puVar27 = (uint *)((long)piVar19 + uVar18);
            lVar17 = (long)puVar27 + (ulong)*puVar27;
          }
        }
        FUN_00717e30(lVar21 + 0x78,lVar17);
        if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 0x1f) ||
           (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[0xf], uVar18 == 0)) {
          puVar27 = (uint *)0x0;
        }
        else {
          puVar27 = (uint *)((long)piVar19 + uVar18);
          puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27);
        }
        lVar17 = lVar25 + uVar9 * 0x4c0 + 0xa8;
        FUN_006dca10(lVar17,*puVar27);
        if (*puVar27 != 0) {
          lVar21 = lVar25 + uVar9 * 0x4c0;
          uVar18 = 0;
          plVar10 = (long *)(lVar21 + 0xb0);
          do {
            piVar2 = (int *)((long)(puVar27 + uVar18 + 1) + (ulong)puVar27[uVar18 + 1]);
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
               (uVar14 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar14 == 0)) {
              lVar8 = 0;
            }
            else {
              puVar13 = (uint *)((long)piVar2 + uVar14);
              lVar8 = (long)puVar13 + (ulong)*puVar13;
            }
            pcVar1 = (char *)(lVar8 + 4);
            local_70 = strlen(pcVar1);
            bVar6 = *(byte *)(lVar8 + 4);
            local_80 = 0xcbf29ce484222645;
            if (bVar6 != 0) {
              local_80 = 0xcbf29ce484222645;
              pbVar15 = (byte *)(lVar8 + 5);
              do {
                local_80 = (local_80 ^ bVar6) * 0x100000001b3;
                bVar6 = *pbVar15;
                pbVar15 = pbVar15 + 1;
              } while (bVar6 != 0);
            }
            local_68 = 0;
            puVar24 = (ulong *)*plVar10;
            local_78 = pcVar1;
            if (puVar24 < *(ulong **)(lVar21 + 0xb8)) {
              uVar26 = *(undefined8 *)(lVar21 + 0xc0);
              lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              uVar14 = local_68;
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_007156e4;
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar26;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
              *puVar24 = local_80;
              puVar24[1] = (ulong)local_78;
              puVar24[2] = local_70;
              local_68 = 0;
              puVar24[3] = uVar14;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
              *plVar10 = *plVar10 + 0x20;
            }
            else {
              FUN_0071cce0(lVar17,&local_80);
              if (local_68 != 0) {
                (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                local_68 = 0;
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < *puVar27);
        }
        if (*(ushort *)((long)piVar19 - (long)*piVar19) < 0x21) {
          puVar27 = (uint *)0x0;
        }
        else {
          uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[0x10];
          if (uVar18 == 0) {
            puVar27 = (uint *)0x0;
          }
          else {
            puVar27 = (uint *)((long)piVar19 + uVar18);
            puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27);
          }
        }
        lVar17 = lVar25 + uVar9 * 0x4c0 + 0xd8;
        FUN_006dca10(lVar17,*puVar27);
        if (*puVar27 != 0) {
          lVar21 = lVar25 + uVar9 * 0x4c0;
          uVar18 = 0;
          plVar10 = (long *)(lVar21 + 0xe0);
          do {
            piVar2 = (int *)((long)(puVar27 + uVar18 + 1) + (ulong)puVar27[uVar18 + 1]);
            if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
               (uVar14 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar14 == 0)) {
              lVar8 = 0;
            }
            else {
              puVar13 = (uint *)((long)piVar2 + uVar14);
              lVar8 = (long)puVar13 + (ulong)*puVar13;
            }
            pcVar1 = (char *)(lVar8 + 4);
            local_70 = strlen(pcVar1);
            bVar6 = *(byte *)(lVar8 + 4);
            local_80 = 0xcbf29ce484222645;
            if (bVar6 != 0) {
              local_80 = 0xcbf29ce484222645;
              pbVar15 = (byte *)(lVar8 + 5);
              do {
                local_80 = (local_80 ^ bVar6) * 0x100000001b3;
                bVar6 = *pbVar15;
                pbVar15 = pbVar15 + 1;
              } while (bVar6 != 0);
            }
            local_68 = 0;
            puVar24 = (ulong *)*plVar10;
            local_78 = pcVar1;
            if (puVar24 < *(ulong **)(lVar21 + 0xe8)) {
              uVar26 = *(undefined8 *)(lVar21 + 0xf0);
              lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
              uVar14 = local_68;
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_007156e4;
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar26;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
              *puVar24 = local_80;
              puVar24[1] = (ulong)local_78;
              puVar24[2] = local_70;
              local_68 = 0;
              puVar24[3] = uVar14;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
              *plVar10 = *plVar10 + 0x20;
            }
            else {
              FUN_0071cce0(lVar17,&local_80);
              if (local_68 != 0) {
                (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                local_68 = 0;
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < *puVar27);
        }
        if (((0x2c < *(ushort *)((long)piVar19 - (long)*piVar19)) &&
            (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[0x16], uVar18 != 0)) &&
           (puVar27 = (uint *)((long)piVar19 + uVar18),
           piVar2 = (int *)((long)puVar27 + (ulong)*puVar27), piVar2 != (int *)0x0)) {
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
             (uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar18 == 0)) {
            lVar17 = 0;
          }
          else {
            puVar27 = (uint *)((long)piVar2 + uVar18);
            lVar17 = (long)puVar27 + (ulong)*puVar27;
          }
          FUN_00717e30(lVar25 + uVar9 * 0x4c0 + 0x108,lVar17);
          if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
             (uVar18 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar18 == 0)) {
            puVar27 = (uint *)0x0;
          }
          else {
            puVar27 = (uint *)((long)piVar2 + uVar18);
            puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27);
          }
          lVar17 = lVar25 + uVar9 * 0x4c0 + 0x138;
          FUN_006dca10(lVar17,*puVar27);
          if (*puVar27 != 0) {
            lVar21 = lVar25 + uVar9 * 0x4c0;
            uVar18 = 0;
            plVar10 = (long *)(lVar21 + 0x140);
            do {
              piVar2 = (int *)((long)(puVar27 + uVar18 + 1) + (ulong)puVar27[uVar18 + 1]);
              if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
                 (uVar14 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar14 == 0)) {
                lVar8 = 0;
              }
              else {
                puVar13 = (uint *)((long)piVar2 + uVar14);
                lVar8 = (long)puVar13 + (ulong)*puVar13;
              }
              pcVar1 = (char *)(lVar8 + 4);
              local_70 = strlen(pcVar1);
              bVar6 = *(byte *)(lVar8 + 4);
              local_80 = 0xcbf29ce484222645;
              if (bVar6 != 0) {
                local_80 = 0xcbf29ce484222645;
                pbVar15 = (byte *)(lVar8 + 5);
                do {
                  local_80 = (local_80 ^ bVar6) * 0x100000001b3;
                  bVar6 = *pbVar15;
                  pbVar15 = pbVar15 + 1;
                } while (bVar6 != 0);
              }
              local_68 = 0;
              puVar24 = (ulong *)*plVar10;
              local_78 = pcVar1;
              if (puVar24 < *(ulong **)(lVar21 + 0x148)) {
                uVar26 = *(undefined8 *)(lVar21 + 0x150);
                lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
                uVar14 = local_68;
                if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_007156e4:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar26;
                *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
                *puVar24 = local_80;
                puVar24[1] = (ulong)local_78;
                puVar24[2] = local_70;
                local_68 = 0;
                puVar24[3] = uVar14;
                *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
                *plVar10 = *plVar10 + 0x20;
              }
              else {
                FUN_0071cce0(lVar17,&local_80);
                if (local_68 != 0) {
                  (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                  local_68 = 0;
                }
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < *puVar27);
          }
        }
        if (*(ushort *)((long)piVar19 - (long)*piVar19) < 0x15) {
          iVar23 = 0;
LAB_007152d4:
          lVar17 = *(long *)(param_1 + 0x360);
          plVar10 = (long *)(lVar25 + uVar9 * 0x4c0 + 0x178);
          lVar21 = *(long *)(lVar17 + (long)iVar23 * 0x110 + 8);
          if (lVar21 != 0) {
            (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
          }
          lVar8 = *plVar10;
          *plVar10 = lVar21;
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
          }
          lVar21 = lVar25 + uVar9 * 0x4c0;
          pcVar11 = *(code **)(lVar21 + 0x188);
          lVar8 = (long)iVar23;
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar21 + 400) = 0;
            *(undefined8 *)(lVar21 + 0x198) = 0;
            *(undefined8 *)(lVar21 + 0x180) = 0;
            *(undefined8 *)(lVar21 + 0x188) = 0;
            (*pcVar11)(lVar25 + uVar9 * 0x4c0 + 0x1a0);
          }
          pcVar11 = *(code **)(lVar17 + lVar8 * 0x110 + 0x20);
          if (pcVar11 != (code *)0x0) {
            lVar16 = lVar17 + lVar8 * 0x110;
            (*pcVar11)(lVar17 + lVar8 * 0x110 + 0x30,lVar25 + uVar9 * 0x4c0 + 0x1a0);
            uVar26 = *(undefined8 *)(lVar16 + 0x10);
            uVar4 = *(undefined8 *)(lVar16 + 0x18);
            uVar5 = *(undefined8 *)(lVar16 + 0x28);
            *(undefined8 *)(lVar21 + 400) = *(undefined8 *)(lVar16 + 0x20);
            *(undefined8 *)(lVar21 + 0x198) = uVar5;
            *(undefined8 *)(lVar21 + 0x180) = uVar26;
            *(undefined8 *)(lVar21 + 0x188) = uVar4;
          }
          lVar21 = lVar25 + uVar9 * 0x4c0;
          pcVar11 = *(code **)(lVar21 + 0x208);
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar21 + 0x210) = 0;
            *(undefined8 *)(lVar21 + 0x218) = 0;
            *(undefined8 *)(lVar21 + 0x200) = 0;
            *(undefined8 *)(lVar21 + 0x208) = 0;
            (*pcVar11)(lVar25 + uVar9 * 0x4c0 + 0x220);
          }
          pcVar11 = *(code **)(lVar17 + lVar8 * 0x110 + 0xa0);
          if (pcVar11 != (code *)0x0) {
            lVar16 = lVar17 + lVar8 * 0x110;
            (*pcVar11)(lVar17 + lVar8 * 0x110 + 0xb0,lVar25 + uVar9 * 0x4c0 + 0x220);
            uVar26 = *(undefined8 *)(lVar16 + 0x90);
            uVar4 = *(undefined8 *)(lVar16 + 0x98);
            uVar5 = *(undefined8 *)(lVar16 + 0xa8);
            *(undefined8 *)(lVar21 + 0x210) = *(undefined8 *)(lVar16 + 0xa0);
            *(undefined8 *)(lVar21 + 0x218) = uVar5;
            *(undefined8 *)(lVar21 + 0x200) = uVar26;
            *(undefined8 *)(lVar21 + 0x208) = uVar4;
          }
        }
        else {
          uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[10];
          if (uVar18 == 0) {
            iVar23 = 0;
            goto LAB_007152d4;
          }
          iVar23 = *(int *)((long)piVar19 + uVar18);
          if (-1 < iVar23) goto LAB_007152d4;
        }
        if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 0x17) ||
           (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[0xb], uVar18 == 0)) {
          iVar23 = 0;
LAB_00715404:
          lVar17 = *(long *)(param_1 + 0x390);
          plVar10 = (long *)(lVar25 + uVar9 * 0x4c0 + 0x288);
          lVar21 = *(long *)(lVar17 + (long)iVar23 * 0x110 + 8);
          if (lVar21 != 0) {
            (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
          }
          lVar8 = *plVar10;
          *plVar10 = lVar21;
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
          }
          lVar21 = lVar25 + uVar9 * 0x4c0;
          pcVar11 = *(code **)(lVar21 + 0x298);
          lVar8 = (long)iVar23;
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar21 + 0x2a0) = 0;
            *(undefined8 *)(lVar21 + 0x2a8) = 0;
            *(undefined8 *)(lVar21 + 0x290) = 0;
            *(undefined8 *)(lVar21 + 0x298) = 0;
            (*pcVar11)(lVar25 + uVar9 * 0x4c0 + 0x2b0);
          }
          pcVar11 = *(code **)(lVar17 + lVar8 * 0x110 + 0x20);
          if (pcVar11 != (code *)0x0) {
            lVar16 = lVar17 + lVar8 * 0x110;
            (*pcVar11)(lVar17 + lVar8 * 0x110 + 0x30,lVar25 + uVar9 * 0x4c0 + 0x2b0);
            uVar26 = *(undefined8 *)(lVar16 + 0x10);
            uVar4 = *(undefined8 *)(lVar16 + 0x18);
            uVar5 = *(undefined8 *)(lVar16 + 0x28);
            *(undefined8 *)(lVar21 + 0x2a0) = *(undefined8 *)(lVar16 + 0x20);
            *(undefined8 *)(lVar21 + 0x2a8) = uVar5;
            *(undefined8 *)(lVar21 + 0x290) = uVar26;
            *(undefined8 *)(lVar21 + 0x298) = uVar4;
          }
          lVar21 = lVar25 + uVar9 * 0x4c0;
          pcVar11 = *(code **)(lVar21 + 0x318);
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar21 + 800) = 0;
            *(undefined8 *)(lVar21 + 0x328) = 0;
            *(undefined8 *)(lVar21 + 0x310) = 0;
            *(undefined8 *)(lVar21 + 0x318) = 0;
            (*pcVar11)(lVar25 + uVar9 * 0x4c0 + 0x330);
          }
          pcVar11 = *(code **)(lVar17 + lVar8 * 0x110 + 0xa0);
          if (pcVar11 != (code *)0x0) {
            lVar16 = lVar17 + lVar8 * 0x110;
            (*pcVar11)(lVar17 + lVar8 * 0x110 + 0xb0,lVar25 + uVar9 * 0x4c0 + 0x330);
            uVar26 = *(undefined8 *)(lVar16 + 0x90);
            uVar4 = *(undefined8 *)(lVar16 + 0x98);
            uVar5 = *(undefined8 *)(lVar16 + 0xa8);
            *(undefined8 *)(lVar21 + 800) = *(undefined8 *)(lVar16 + 0xa0);
            *(undefined8 *)(lVar21 + 0x328) = uVar5;
            *(undefined8 *)(lVar21 + 0x310) = uVar26;
            *(undefined8 *)(lVar21 + 0x318) = uVar4;
          }
        }
        else {
          iVar23 = *(int *)((long)piVar19 + uVar18);
          if (-1 < iVar23) goto LAB_00715404;
        }
        if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 0x19) ||
           (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[0xc], uVar18 == 0)) {
          iVar23 = 0;
LAB_00715534:
          lVar17 = *(long *)(param_1 + 0x3c0);
          plVar10 = (long *)(lVar25 + uVar9 * 0x4c0 + 0x398);
          lVar21 = *(long *)(lVar17 + (long)iVar23 * 0x110 + 8);
          if (lVar21 != 0) {
            (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
          }
          lVar8 = *plVar10;
          *plVar10 = lVar21;
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
          }
          lVar21 = lVar25 + uVar9 * 0x4c0;
          pcVar11 = *(code **)(lVar21 + 0x3a8);
          lVar8 = (long)iVar23;
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar21 + 0x3b0) = 0;
            *(undefined8 *)(lVar21 + 0x3b8) = 0;
            *(undefined8 *)(lVar21 + 0x3a0) = 0;
            *(undefined8 *)(lVar21 + 0x3a8) = 0;
            (*pcVar11)(lVar25 + uVar9 * 0x4c0 + 0x3c0);
          }
          pcVar11 = *(code **)(lVar17 + lVar8 * 0x110 + 0x20);
          if (pcVar11 != (code *)0x0) {
            lVar16 = lVar17 + lVar8 * 0x110;
            (*pcVar11)(lVar17 + lVar8 * 0x110 + 0x30,lVar25 + uVar9 * 0x4c0 + 0x3c0);
            uVar26 = *(undefined8 *)(lVar16 + 0x10);
            uVar4 = *(undefined8 *)(lVar16 + 0x18);
            uVar5 = *(undefined8 *)(lVar16 + 0x28);
            *(undefined8 *)(lVar21 + 0x3b0) = *(undefined8 *)(lVar16 + 0x20);
            *(undefined8 *)(lVar21 + 0x3b8) = uVar5;
            *(undefined8 *)(lVar21 + 0x3a0) = uVar26;
            *(undefined8 *)(lVar21 + 0x3a8) = uVar4;
          }
          lVar21 = lVar25 + uVar9 * 0x4c0;
          pcVar11 = *(code **)(lVar21 + 0x428);
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)(lVar21 + 0x430) = 0;
            *(undefined8 *)(lVar21 + 0x438) = 0;
            *(undefined8 *)(lVar21 + 0x420) = 0;
            *(undefined8 *)(lVar21 + 0x428) = 0;
            (*pcVar11)(lVar25 + uVar9 * 0x4c0 + 0x440);
          }
          pcVar11 = *(code **)(lVar17 + lVar8 * 0x110 + 0xa0);
          if (pcVar11 != (code *)0x0) {
            lVar16 = lVar17 + lVar8 * 0x110;
            (*pcVar11)(lVar17 + lVar8 * 0x110 + 0xb0,lVar25 + uVar9 * 0x4c0 + 0x440);
            uVar26 = *(undefined8 *)(lVar16 + 0x90);
            uVar4 = *(undefined8 *)(lVar16 + 0x98);
            uVar5 = *(undefined8 *)(lVar16 + 0xa8);
            *(undefined8 *)(lVar21 + 0x430) = *(undefined8 *)(lVar16 + 0xa0);
            *(undefined8 *)(lVar21 + 0x438) = uVar5;
            *(undefined8 *)(lVar21 + 0x420) = uVar26;
            *(undefined8 *)(lVar21 + 0x428) = uVar4;
          }
        }
        else {
          iVar23 = *(int *)((long)piVar19 + uVar18);
          if (-1 < iVar23) goto LAB_00715534;
        }
        if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 0x1b) ||
           (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[0xd], uVar18 == 0)) {
          lVar17 = 0;
        }
        else {
          puVar27 = (uint *)((long)piVar19 + uVar18);
          lVar17 = (long)puVar27 + (ulong)*puVar27;
        }
        FUN_00717fe0(param_1,lVar25 + uVar9 * 0x4c0 + 0x48,lVar17);
        lVar17 = lVar25 + uVar9 * 0x4c0;
        uVar12 = *(uint *)(lVar17 + 0x4a8);
        if (uVar12 == 0xffffffff) {
          lVar21 = lVar25 + uVar9 * 0x4c0;
          plVar10 = *(long **)(lVar21 + 0x108);
          plVar3 = *(long **)(lVar21 + 0x110);
          puVar27 = (uint *)(lVar17 + 0x4a8);
          if (plVar3 != plVar10) {
            plVar20 = plVar10;
            if (*plVar10 != -0x7f76dc493353b935) {
              do {
                plVar20 = plVar20 + 4;
                if (plVar3 == plVar20) goto LAB_00714aec;
              } while (*plVar20 != -0x7f76dc493353b935);
            }
            uVar12 = (uint)((ulong)((long)plVar20 - (long)plVar10) >> 5);
            if (plVar20 == plVar3) {
              uVar12 = 0xffffffff;
            }
            if (-1 < (int)uVar12) {
              piVar19 = (int *)*plVar22;
              puVar13 = (uint *)((long)piVar19 +
                                (ulong)*(ushort *)((long)piVar19 + (0x2c - (long)*piVar19)));
              piVar19 = (int *)((long)puVar13 + (ulong)*puVar13);
              puVar13 = (uint *)((long)piVar19 +
                                (ulong)*(ushort *)((long)piVar19 + (4 - (long)*piVar19)));
              puVar13 = (uint *)((long)puVar13 + (ulong)uVar12 * 4 + (ulong)*puVar13 + 4);
              piVar19 = (int *)((long)puVar13 + (ulong)*puVar13);
              if ((6 < *(ushort *)((long)piVar19 - (long)*piVar19)) &&
                 (uVar18 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[3], uVar18 != 0)) {
                uVar12 = (uint)(*(char *)((long)piVar19 + uVar18) != '\0');
                *puVar27 = uVar12;
                goto joined_r0x00714ae4;
              }
            }
          }
LAB_00714aec:
          *puVar27 = 0;
        }
        else {
joined_r0x00714ae4:
          if (uVar12 == 1) {
            *(undefined1 *)(lVar25 + uVar9 * 0x4c0 + 0x4a4) = 0xfe;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *param_2);
    }
  }
  return;
}


