/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fcd1e0; name: FUN_00fcd1e0
 */


/* WARNING: Removing unreachable block (ram,0x00fcd364) */
/* WARNING: Removing unreachable block (ram,0x00fcdc0c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00fcd1e0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  int *piVar19;
  char *pcVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  uint *puVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  ulong uVar30;
  undefined8 local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  uint local_80;
  ushort local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  
  local_66 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  lVar27 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar27 != 0) {
    (**(code **)(*(long *)(lVar27 + 0x48) + 0x10))();
  }
  lVar29 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x10))();
  }
  if (lVar27 != 0) {
    (**(code **)(*(long *)(lVar27 + 0x48) + 0x18))((long *)(lVar27 + 0x48));
  }
  bVar8 = FUN_01510f00(lVar29,0xe27e36c9e7cfd0e6);
  uVar10 = FUN_01510f00(lVar29,0xeb5178b9a0f65ed4);
  bVar9 = FUN_01510f00(lVar29,0x84c49e353e8b7518);
  uVar11 = FUN_01510f00(lVar29,0x84c4a1353e8b7a31);
  uVar12 = *(uint *)(*(long *)(param_1 + 200) + 0x18);
  uVar24 = (ulong)uVar12;
  if (uVar12 == 0) {
    lVar27 = 0;
    local_7c = 0;
    local_80 = 0;
    do {
      if ((((uVar11 & 1) != 0 || lVar27 != 2) && ((bVar8 & 1) != 0 || lVar27 != 0)) &&
         ((bVar9 & 1) != 0 || lVar27 != 1)) {
        lVar16 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
        if (lVar16 != 0) {
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
        }
        uVar26 = *(ulong *)(lVar16 + 0x3b8);
        uVar24 = (&DAT_02161f98)[lVar27];
        if ((uVar26 - 1 & uVar26) == 0) {
          plVar28 = *(long **)(*(long *)(lVar16 + 0x3b0) + (uVar26 - 1 & uVar24) * 8);
          do {
            do {
              plVar28 = (long *)*plVar28;
            } while (uVar24 != plVar28[1]);
          } while (plVar28[2] != uVar24);
        }
        else {
          uVar30 = uVar24;
          if (uVar26 <= uVar24) {
            uVar30 = 0;
            if (uVar26 != 0) {
              uVar30 = uVar24 / uVar26;
            }
            uVar30 = uVar24 - uVar30 * uVar26;
          }
          plVar28 = *(long **)(*(long *)(lVar16 + 0x3b0) + uVar30 * 8);
          do {
            do {
              plVar28 = (long *)*plVar28;
            } while (uVar24 != plVar28[1]);
          } while (plVar28[2] != uVar24);
        }
        puVar25 = *(uint **)(*(long *)((long)plVar28 + 0x38) + 400);
        uVar12 = *puVar25;
        piVar19 = (int *)((long)puVar25 + (ulong)uVar12);
        if (lVar16 != 0) {
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
        }
        uVar24 = (ulong)*(ushort *)((long)piVar19 + (4 - (long)*piVar19));
        puVar1 = (uint *)((long)piVar19 + uVar24);
        uVar26 = (ulong)*puVar1;
        uVar30 = (ulong)*(uint *)((long)puVar1 + uVar26);
        if (uVar30 != 0) {
          lVar22 = uVar12 + uVar26 + uVar24;
          lVar16 = 0;
          do {
            uVar24 = (ulong)*(uint *)((long)puVar25 + lVar16 + lVar22 + 4);
            lVar21 = lVar16 + (uVar24 - (long)*(int *)((long)puVar25 + lVar16 + uVar24 + lVar22 + 4)
                              ) + lVar22;
            if ((*(ushort *)((long)puVar25 + lVar21 + 4) < 5) ||
               (uVar26 = (ulong)*(ushort *)((long)puVar25 + lVar21 + 8), uVar26 == 0)) {
              piVar19 = (int *)0x0;
            }
            else {
              lVar21 = uVar24 + uVar26;
              piVar19 = (int *)((long)puVar25 +
                               lVar16 + lVar21 + (ulong)*(uint *)((long)puVar25 +
                                                                 lVar16 + lVar21 + lVar22 + 4) +
                               lVar22 + 4);
            }
            if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 7) ||
               (uVar24 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[3], uVar24 == 0)) {
              uVar17 = 0;
            }
            else {
              uVar17 = *(undefined8 *)((long)piVar19 + uVar24);
            }
            uVar12 = FUN_00ece6f0(uVar17);
            uVar5 = (ushort)(1 << (ulong)(uVar12 & 0x1f));
            if (8 < (int)uVar12) {
              uVar5 = 1;
            }
            lVar16 = lVar16 + 4;
            *(ushort *)(auStack_90 + lVar27 * 2 + 0x10) =
                 *(ushort *)(auStack_90 + lVar27 * 2 + 0x10) | uVar5;
          } while (uVar30 * 4 != lVar16);
        }
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 != 3);
    lVar27 = param_1 + 0x68;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    lVar16 = FUN_012b40f0(lVar27);
    uVar5 = local_7c;
    uVar12 = local_80;
    if (lVar16 != 0) {
      bVar3 = bVar8 ^ 1;
      bVar4 = bVar9 ^ 1;
      uVar18 = local_80 & 0xffff;
      uVar24 = 0;
      do {
        FUN_012b4190(auStack_a0,lVar27,uVar24);
        local_b8 = 0x127c2e07bda8e3e0;
        local_b0 = "id";
        local_a8 = 2;
        FUN_012b4250(auStack_90,auStack_a0,&local_b8);
        iVar13 = FUN_012b4420(auStack_90,0);
        switch(iVar13) {
        case 0:
          uVar26 = FUN_01510f00(lVar29,0x11f4e1cbde0eef6f);
          if (((uVar26 & 1) != 0) &&
             (uVar26 = FUN_011f6bc0(*(undefined8 *)PTR_DAT_0271cba8), (uVar26 & 1) != 0)) {
            local_78 = CONCAT71(local_78._1_7_,1);
LAB_00fcdb7c:
            *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
          }
          break;
        case 1:
        case 2:
        case 3:
          if ((uVar10 & 1) == 0) {
            if ((iVar13 == 1 & bVar8) == 0) {
              if ((iVar13 == 2 & bVar9) == 0) {
                if (iVar13 != 3 || ((uVar11 ^ 1) & 1) != 0) break;
                lVar16 = 2;
              }
              else {
                lVar16 = 1;
              }
            }
            else {
              lVar16 = 0;
            }
            lVar22 = *(long *)(*(long *)PTR_DAT_02710798 + 0x248);
            if (lVar22 != 0) {
              (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
            }
            uVar26 = FUN_01526350(lVar22,lVar16);
            if ((uVar26 & 1) != 0) {
              uVar26 = 0;
              pcVar20 = (char *)(lVar22 + lVar16 * 0xa68 + 0x8a);
              do {
                if (((*(long *)(pcVar20 + -0x2a) != -0x340d631b7bddd9bb) &&
                    ((pcVar20[-0x18] == '\x04' || (pcVar20[-0x18] == '\x02')))) ||
                   ((*(long *)(pcVar20 + -0x12) != -0x340d631b7bddd9bb &&
                    ((*pcVar20 == '\x02' || (*pcVar20 == '\x04')))))) {
                  *(char *)((long)&local_78 + (long)iVar13) = '\x01';
                  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
                  break;
                }
                uVar26 = uVar26 + 2;
                pcVar20 = pcVar20 + 0x30;
              } while (uVar26 < 0x6e);
            }
            if (lVar22 != 0) {
              (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
            }
          }
          break;
        case 4:
        case 5:
        case 6:
          if ((uVar10 & 1) == 0) {
            if (iVar13 == 4 && (bVar3 & 1) == 0) {
              uVar2 = uVar18 >> 3;
joined_r0x00fcda84:
              if ((uVar2 & 1) == 0) break;
            }
            else {
              if (iVar13 == 5 && (bVar4 & 1) == 0) {
                uVar2 = uVar12 >> 0x13;
                goto joined_r0x00fcda84;
              }
              bVar7 = iVar13 != 6;
              uVar6 = uVar5 >> 3;
joined_r0x00fcd930:
              if (((uVar6 & 1) == 0) || (bVar7 || ((uVar11 ^ 1) & 1) != 0)) break;
            }
            *(char *)((long)&local_78 + (long)iVar13) = '\x01';
            goto LAB_00fcdb7c;
          }
          break;
        case 7:
        case 8:
        case 9:
          if ((uVar10 & 1) == 0) {
            if (iVar13 == 7 && (bVar3 & 1) == 0) {
              uVar2 = uVar18 >> 5;
            }
            else {
              if (iVar13 != 8 || (bVar4 & 1) != 0) {
                bVar7 = iVar13 != 9;
                uVar6 = uVar5 >> 5;
                goto joined_r0x00fcd930;
              }
              uVar2 = uVar12 >> 0x15;
            }
            goto joined_r0x00fcda84;
          }
          break;
        case 10:
        case 0xb:
        case 0xc:
          if ((uVar10 & 1) == 0) {
            if (iVar13 == 10 && (bVar3 & 1) == 0) {
              uVar2 = uVar18 >> 7;
            }
            else {
              if (iVar13 != 0xb || (bVar4 & 1) != 0) {
                bVar7 = iVar13 != 0xc;
                uVar6 = uVar5 >> 7;
                goto joined_r0x00fcd930;
              }
              uVar2 = uVar12 >> 0x17;
            }
            goto joined_r0x00fcda84;
          }
          break;
        case 0xd:
        case 0xe:
        case 0xf:
          if ((uVar10 & 1) == 0) {
            if (iVar13 == 0xd && (bVar3 & 1) == 0) {
              uVar2 = uVar18 >> 8;
            }
            else {
              if (iVar13 != 0xe || (bVar4 & 1) != 0) {
                bVar7 = iVar13 != 0xf;
                uVar6 = uVar5 >> 8;
                goto joined_r0x00fcd930;
              }
              uVar2 = uVar12 >> 0x18;
            }
            goto joined_r0x00fcda84;
          }
          break;
        case 0x10:
          FUN_0144cfa0(param_1 + 0xd0,0);
          uVar26 = FUN_0144ce20(param_1 + 0xd0);
          if ((uVar26 & 1) != 0) {
            local_68 = CONCAT11(local_68._1_1_,1);
            goto LAB_00fcdb7c;
          }
          break;
        case 0x11:
          if ((*(long *)(param_1 + 0x4c0) != -0x340d631b7bddd9bb) &&
             (*(long *)(param_1 + 0x4c0) != 0)) {
            local_68 = CONCAT11(1,(undefined1)local_68);
            goto LAB_00fcdb7c;
          }
          break;
        default:
          FUN_012b4190(auStack_a0,lVar27,uVar24);
          local_b8 = 0x4dacbeb23664e234;
          local_b0 = "showCheck";
          local_a8 = 9;
          FUN_012b4250(auStack_90,auStack_a0,&local_b8);
          local_c0 = 0;
          uVar17 = FUN_012b4b40(auStack_90,&local_c0);
          uVar26 = FUN_01510f00(lVar29,uVar17);
          if ((uVar26 & 1) != 0) goto LAB_00fcdb7c;
        }
        uVar24 = uVar24 + 1;
        uVar26 = FUN_012b40f0(lVar27);
      } while (uVar24 < uVar26);
    }
    uVar12 = *(uint *)(param_1 + 0xb8);
    uVar24 = (ulong)uVar12;
    if (uVar12 == 0) goto LAB_00fcdf08;
    plVar28 = *(long **)(param_1 + 8);
    lVar16 = (**(code **)(*plVar28 + 0x10))(plVar28,uVar24 << 4,8);
    lVar22 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_00fcdf3c;
    *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = plVar28;
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
    if (uVar12 == 1) {
      lVar21 = 0;
LAB_00fcdc48:
      puVar23 = (undefined8 *)(lVar16 + lVar21 * 0x10);
      *puVar23 = 0xcbf29ce484222645;
      *(undefined1 *)(puVar23 + 1) = 0;
      *(undefined4 *)((long)puVar23 + 0xc) = 0;
    }
    else {
      lVar21 = 0;
      puVar23 = (undefined8 *)(lVar16 + 0x10);
      do {
        lVar21 = lVar21 + 2;
        puVar23[-2] = 0xcbf29ce484222645;
        *(undefined1 *)(puVar23 + -1) = 0;
        *(undefined4 *)((long)puVar23 + -4) = 0;
        *puVar23 = 0xcbf29ce484222645;
        *(undefined1 *)(puVar23 + 1) = 0;
        *(undefined4 *)((long)puVar23 + 0xc) = 0;
        puVar23 = puVar23 + 4;
      } while (uVar24 - (uVar24 & 1) != lVar21);
      if ((uVar12 & 1) != 0) goto LAB_00fcdc48;
    }
    *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
    lVar22 = *(long *)(param_1 + 0x78);
    *(long *)(param_1 + 0x78) = lVar16;
    if (lVar22 != 0) {
      (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
                (*(long **)(param_1 + 0x80),lVar22,*(undefined8 *)(param_1 + 0x88),
                 *(undefined8 *)(param_1 + 0x90));
    }
    *(long **)(param_1 + 0x80) = plVar28;
    *(ulong *)(param_1 + 0x88) = uVar24 << 4;
    *(undefined8 *)(param_1 + 0x90) = 8;
    lVar16 = FUN_012b40f0(lVar27);
    if (lVar16 != 0) {
      uVar24 = 0;
      uVar26 = 0;
      do {
        FUN_012b4190(auStack_a0,lVar27,uVar24);
        local_b8 = 0x127c2e07bda8e3e0;
        local_b0 = "id";
        local_a8 = 2;
        FUN_012b4250(auStack_90,auStack_a0,&local_b8);
        uVar12 = FUN_012b4420(auStack_90,0);
        iVar13 = (int)uVar26;
        if (uVar12 < 0x12) {
          if (*(char *)((long)&local_78 + (long)(int)uVar12) != '\0') {
            if (uVar12 != 0x11) goto LAB_00fcddcc;
            *(undefined8 *)
             (*(long *)(param_1 + 0x78) + (-(uVar26 >> 0x1f) & 0xfffffff000000000 | uVar26 << 4)) =
                 *(undefined8 *)(param_1 + 0x4c0);
            uVar26 = FUN_01510f00(lVar29,0x402094d671f4f522);
            if ((uVar26 & 1) != 0) goto LAB_00fcde40;
LAB_00fcdd5c:
            *(undefined1 *)(*(long *)(param_1 + 0x78) + (long)iVar13 * 0x10 + 8) = 0;
LAB_00fcdeac:
            FUN_012b4190(auStack_a0,lVar27,uVar24);
            local_b8 = 0x127c2e07bda8e3e0;
            local_b0 = "id";
            local_a8 = 2;
            FUN_012b4250(auStack_90,auStack_a0,&local_b8);
            uVar15 = FUN_012b4420(auStack_90,0);
            uVar26 = (ulong)(iVar13 + 1);
            *(undefined4 *)(*(long *)(param_1 + 0x78) + (long)iVar13 * 0x10 + 0xc) = uVar15;
          }
        }
        else {
          FUN_012b4190(auStack_a0,lVar27,uVar24);
          local_b8 = 0x4dacbeb23664e234;
          local_b0 = "showCheck";
          local_a8 = 9;
          FUN_012b4250(auStack_90,auStack_a0,&local_b8);
          local_c0 = 0;
          uVar17 = FUN_012b4b40(auStack_90,&local_c0);
          uVar30 = FUN_01510f00(lVar29,uVar17);
          if ((uVar30 & 1) != 0) {
LAB_00fcddcc:
            FUN_012b4190(auStack_a0,lVar27,uVar24);
            local_b8 = 0x2ef9715b63e290e2;
            local_b0 = "infoMsg";
            local_a8 = 7;
            FUN_012b4250(auStack_90,auStack_a0,&local_b8);
            local_c0 = 0;
            uVar17 = FUN_012b4b40(auStack_90,&local_c0);
            *(undefined8 *)
             (*(long *)(param_1 + 0x78) + (-(uVar26 >> 0x1f) & 0xfffffff000000000 | uVar26 << 4)) =
                 uVar17;
            uVar26 = FUN_01510f00(lVar29,0x402094d671f4f522);
            if ((uVar26 & 1) == 0) goto LAB_00fcdd5c;
LAB_00fcde40:
            FUN_012b4190(auStack_a0,lVar27,uVar24);
            local_b8 = 0xee77392731b02231;
            local_b0 = "map";
            local_a8 = 3;
            FUN_012b4250(auStack_90,auStack_a0,&local_b8);
            iVar14 = FUN_012b4420(auStack_90,0);
            *(bool *)(*(long *)(param_1 + 0x78) + (long)iVar13 * 0x10 + 8) = iVar14 == 1;
            goto LAB_00fcdeac;
          }
        }
        uVar24 = uVar24 + 1;
        uVar30 = FUN_012b40f0(lVar27);
      } while (uVar24 < uVar30);
    }
    goto LAB_00fcdf08;
  }
  plVar28 = *(long **)(param_1 + 8);
  *(uint *)(param_1 + 0xb8) = uVar12;
  lVar27 = (**(code **)(*plVar28 + 0x10))(plVar28,uVar24 << 4,8);
  lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_00fcdf3c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar28;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
  if (uVar12 == 1) {
    lVar22 = 0;
LAB_00fcd624:
    puVar23 = (undefined8 *)(lVar27 + lVar22 * 0x10);
    *puVar23 = 0xcbf29ce484222645;
    *(undefined1 *)(puVar23 + 1) = 0;
    *(undefined4 *)((long)puVar23 + 0xc) = 0;
  }
  else {
    lVar22 = 0;
    puVar23 = (undefined8 *)(lVar27 + 0x10);
    do {
      lVar22 = lVar22 + 2;
      puVar23[-2] = 0xcbf29ce484222645;
      *(undefined1 *)(puVar23 + -1) = 0;
      *(undefined4 *)((long)puVar23 + -4) = 0;
      *puVar23 = 0xcbf29ce484222645;
      *(undefined1 *)(puVar23 + 1) = 0;
      *(undefined4 *)((long)puVar23 + 0xc) = 0;
      puVar23 = puVar23 + 4;
    } while (uVar24 - (uVar24 & 1) != lVar22);
    if ((uVar12 & 1) != 0) goto LAB_00fcd624;
  }
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  lVar16 = *(long *)(param_1 + 0x78);
  *(long *)(param_1 + 0x78) = lVar27;
  if (lVar16 != 0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
              (*(long **)(param_1 + 0x80),lVar16,*(undefined8 *)(param_1 + 0x88),
               *(undefined8 *)(param_1 + 0x90));
  }
  *(long **)(param_1 + 0x80) = plVar28;
  *(ulong *)(param_1 + 0x88) = uVar24 << 4;
  lVar27 = param_1 + 0x68;
  *(undefined8 *)(param_1 + 0x90) = 8;
  lVar16 = FUN_012b40f0(lVar27);
  if (lVar16 != 0) {
    uVar24 = 0;
    uVar26 = 0;
    do {
      if (uVar24 < *(uint *)(param_1 + 0xb8)) {
        FUN_012b4190(auStack_a0,lVar27,uVar24);
        local_b8 = 0x2ef9715b63e290e2;
        local_b0 = "infoMsg";
        local_a8 = 7;
        FUN_012b4250(auStack_90,auStack_a0,&local_b8);
        local_c0 = 0;
        uVar17 = FUN_012b4b40(auStack_90,&local_c0);
        uVar30 = -(uVar26 >> 0x1f) & 0xfffffff000000000 | uVar26 << 4;
        *(undefined8 *)(*(long *)(param_1 + 0x78) + uVar30) = uVar17;
        FUN_012b4190(auStack_a0,lVar27,uVar24);
        local_b8 = 0xee77392731b02231;
        local_b0 = "map";
        local_a8 = 3;
        FUN_012b4250(auStack_90,auStack_a0,&local_b8);
        iVar13 = FUN_012b4420(auStack_90,0);
        uVar26 = (ulong)((int)uVar26 + 1);
        *(bool *)(*(long *)(param_1 + 0x78) + uVar30 + 8) = iVar13 == 1;
        *(int *)(*(long *)(param_1 + 0x78) + uVar30 + 0xc) = (int)uVar24;
      }
      uVar24 = uVar24 + 1;
      uVar30 = FUN_012b40f0(lVar27);
    } while (uVar24 < uVar30);
  }
LAB_00fcdf08:
  if (lVar29 != 0) {
    (**(code **)(*(long *)(lVar29 + 0x48) + 0x18))();
  }
  return;
}


