/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f81e0; name: FUN_007f81e0
 */


bool FUN_007f81e0(int param_1,long *param_2,long *param_3)

{
  void *pvVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte *pbVar16;
  byte *pbVar15;
  int iVar17;
  byte local_100;
  undefined6 uStack_ff;
  undefined1 uStack_f9;
  undefined7 uStack_f8;
  void *local_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  ulong local_b0;
  ulong local_a8;
  void *local_a0;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  
  pbVar3 = (byte *)*param_3;
  if ((byte *)param_3[1] != pbVar3) {
    pbVar16 = (byte *)param_3[1];
    do {
      pbVar15 = pbVar16 + -0x18;
      if ((*pbVar15 & 1) != 0) {
        operator_delete(*(void **)(pbVar16 + -8));
      }
      pbVar16 = pbVar15;
    } while (pbVar3 != pbVar15);
  }
  param_3[1] = (long)pbVar3;
  plVar9 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_80 = (void *)0x0;
  (**(code **)(*plVar9 + 0x80))(plVar9,param_2,&local_80);
  if (local_78 != local_80) {
    uVar14 = 0;
    do {
      if (*(int *)(*(long *)((long)local_80 + uVar14 * 8) + 0x40) == 3) {
        iVar8 = (**(code **)(*plVar9 + 0x30))(plVar9,param_2);
        if (0 < iVar8) {
          bVar7 = true;
          goto LAB_007f82ec;
        }
      }
      else {
        bVar7 = false;
        iVar8 = 1;
LAB_007f82ec:
        iVar17 = 0;
        do {
          while( true ) {
            local_90 = 0;
            local_88 = (void *)0x0;
            local_98 = 0;
            lVar11 = *(long *)((long)local_80 + uVar14 * 8);
            if ((*(uint *)(lVar11 + 0x3c) | 1) == 0xb) {
              local_a8 = 0;
              local_a0 = (void *)0x0;
              local_b0 = 0;
              FUN_00802b70(&local_e8);
              local_e8 = CONCAT44(local_e8._4_4_,param_1 + 1);
              iVar2 = iVar17;
              if (!bVar7) {
                iVar2 = -1;
              }
              FUN_00804430(&local_e8,param_2,*(undefined8 *)((long)local_80 + uVar14 * 8),iVar2,
                           &local_b0);
              std::string::append((char *)&local_98);
              pvVar1 = (void *)((ulong)&local_b0 | 1);
              if ((local_b0 & 1) != 0) {
                pvVar1 = local_a0;
              }
              std::string::append((char *)&local_98,(ulong)pvVar1);
              std::string::append((ulong)&local_98,(char)(param_1 << 1));
              std::string::append((char *)&local_98);
              FUN_00802bd0(&local_e8);
              if ((local_b0 & 1) != 0) {
                operator_delete(local_a0);
              }
            }
            else {
              iVar2 = iVar17;
              if (!bVar7) {
                iVar2 = -1;
              }
              FUN_00805310(param_2,lVar11,iVar2,&local_98);
            }
            local_e0 = 0;
            local_d8 = (undefined1 *)0x0;
            local_e8 = 0;
            puVar12 = *(undefined8 **)((long)local_80 + uVar14 * 8);
            if (*(char *)((long)puVar12 + 0x44) == '\0') {
              std::string::operator=((string *)&local_e8,(string *)*puVar12);
            }
            else {
              std::operator+("(.",(string *)puVar12[1]);
              puVar12 = (undefined8 *)std::string::append((char *)&local_b0);
              uVar13 = *(undefined8 *)((long)puVar12 + 1);
              puVar4 = (undefined1 *)puVar12[2];
              uVar6 = *(undefined1 *)puVar12;
              uStack_f8 = (undefined7)((ulong)puVar12[1] >> 8);
              local_100 = (byte)uVar13;
              uStack_ff = (undefined6)((ulong)uVar13 >> 8);
              uStack_f9 = (undefined1)((ulong)uVar13 >> 0x38);
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
              if ((local_e8 & 1) == 0) {
                local_e8 = local_e8 & 0xffffffffffff0000;
              }
              else {
                *local_d8 = 0;
                local_e0 = 0;
                if ((local_e8 & 1) != 0) {
                  operator_delete(local_d8);
                  local_e8 = 0;
                }
              }
              local_e8 = CONCAT71(local_e8._1_7_,uVar6);
              *(ulong *)((long)((ulong)&local_e8 | 1) + 7) = CONCAT71(uStack_f8,uStack_f9);
              *(ulong *)((ulong)&local_e8 | 1) = CONCAT17(uStack_f9,CONCAT61(uStack_ff,local_100));
              uStack_f8 = 0;
              local_100 = 0;
              uStack_ff = 0;
              uStack_f9 = 0;
              local_d8 = puVar4;
              if ((local_b0 & 1) != 0) {
                operator_delete(local_a0);
              }
            }
            std::operator+((string *)&local_e8," = ");
            pvVar1 = (void *)((ulong)&local_98 | 1);
            if ((local_98 & 1) != 0) {
              pvVar1 = local_88;
            }
            puVar10 = (ulong *)std::string::append((char *)&local_100,(ulong)pvVar1);
            local_b0 = *puVar10;
            local_a8 = puVar10[1];
            local_a0 = (void *)puVar10[2];
            puVar10[1] = 0;
            puVar10[2] = 0;
            *puVar10 = 0;
            puVar10 = (ulong *)param_3[1];
            if (puVar10 < (ulong *)param_3[2]) break;
            FUN_007f85f0(param_3,&local_b0);
            if ((local_b0 & 1) != 0) {
              operator_delete(local_a0);
              goto joined_r0x007f8564;
            }
            if ((local_100 & 1) == 0) goto LAB_007f8538;
LAB_007f8568:
            operator_delete(local_f0);
            if ((local_e8 & 1) == 0) goto LAB_007f8540;
LAB_007f8578:
            operator_delete(local_d8);
            if ((local_98 & 1) == 0) goto LAB_007f8548;
LAB_007f8588:
            operator_delete(local_88);
            iVar17 = iVar17 + 1;
            if (iVar8 == iVar17) goto LAB_007f859c;
          }
          puVar10[1] = local_a8;
          puVar10[2] = (ulong)local_a0;
          *puVar10 = local_b0;
          local_a8 = 0;
          local_a0 = (void *)0x0;
          local_b0 = 0;
          param_3[1] = param_3[1] + 0x18;
joined_r0x007f8564:
          if ((local_100 & 1) != 0) goto LAB_007f8568;
LAB_007f8538:
          if ((local_e8 & 1) != 0) goto LAB_007f8578;
LAB_007f8540:
          if ((local_98 & 1) != 0) goto LAB_007f8588;
LAB_007f8548:
          iVar17 = iVar17 + 1;
        } while (iVar8 != iVar17);
      }
LAB_007f859c:
      uVar14 = uVar14 + 1;
    } while (uVar14 < (ulong)((long)local_78 - (long)local_80 >> 3));
  }
  lVar11 = *param_3;
  lVar5 = param_3[1];
  if (local_80 != (void *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  return lVar11 != lVar5;
}


