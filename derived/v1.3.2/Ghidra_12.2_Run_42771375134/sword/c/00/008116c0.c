/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008116c0; name: FUN_008116c0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_008116c0(ulong *param_1,long *param_2)

{
  void *pvVar1;
  undefined1 *puVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  byte *local_e8;
  ulong *local_e0;
  undefined6 uStack_d8;
  undefined2 local_d2;
  undefined6 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  ulong local_80;
  ulong local_78;
  undefined1 *local_70;
  
  plVar7 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  local_78 = 0;
  local_70 = (undefined1 *)0x0;
  uVar13 = 0;
  uVar12 = 0;
  local_80 = 0;
  do {
    while (pbVar11 = (byte *)*param_1, pbVar11 < (byte *)param_1[1]) {
      uVar6 = (uint)*pbVar11;
      uVar8 = (ulong)uVar6;
      if ((char)*pbVar11 < '\0') goto LAB_00811790;
      *(uint *)(param_1 + 4) = uVar6;
      *param_1 = (ulong)(pbVar11 + 1);
      if (uVar6 < 0x1b) goto LAB_008117a8;
switchD_008117b8_caseD_8117dc:
      uVar8 = FUN_00810550(param_1,uVar8,0);
      if ((uVar8 & 1) == 0) {
switchD_008117b8_caseD_811a30:
        goto joined_r0x00811a8c;
      }
    }
    uVar8 = 0;
LAB_00811790:
    uVar6 = FUN_0080d8c0(param_1,uVar8);
    uVar8 = (ulong)uVar6;
    *(uint *)(param_1 + 4) = uVar6;
    if (0x1a < uVar6) goto switchD_008117b8_caseD_8117dc;
LAB_008117a8:
    switch((long)&switchD_008117b8::switchdataD_021407dc +
           (long)(int)(&switchD_008117b8::switchdataD_021407dc)[uVar8]) {
    case 0x8117bc:
      if ((int)uVar13 == 0) {
        local_98 = 0;
        local_90 = (void *)0x0;
        local_a0 = 0;
        pbVar11 = (byte *)*param_1;
        if (pbVar11 < (byte *)param_1[1]) {
          uVar13 = (ulong)*pbVar11;
          if ((char)*pbVar11 < '\0') goto LAB_00811844;
          *param_1 = (ulong)(pbVar11 + 1);
LAB_00811858:
          uVar6 = (uint)uVar13;
          uVar8 = FUN_0080cff0(param_1,&local_a0,uVar13 & 0xffffffff);
          if ((uVar8 & 1) == 0) goto LAB_008118c4;
          FUN_0080ea30(auStack_100,&local_80);
          FUN_0080db00(&local_f0,auStack_100);
          if ((int)local_e0 < 5) {
            FUN_0080dfa0(&local_f0,uVar13 & 0xffffffff);
          }
          else {
            if (uVar6 < 0x80) {
              pbVar11 = local_e8;
            }
            else {
              uVar8 = uVar13 & 0xffffffff;
              pbVar10 = local_e8;
              do {
                bVar4 = (byte)uVar8;
                uVar8 = uVar13 >> 7 & 0x1ffffff;
                uVar6 = (uint)uVar8;
                uVar3 = uVar13 >> 0xe;
                pbVar11 = pbVar10 + 1;
                *pbVar10 = bVar4 | 0x80;
                pbVar10 = pbVar11;
                uVar13 = uVar8;
              } while ((uVar3 & 0x3ffff) != 0);
            }
            *pbVar11 = (byte)uVar6;
            iVar9 = ((int)pbVar11 + 1) - (int)local_e8;
            local_e8 = local_e8 + iVar9;
            local_e0 = (ulong *)CONCAT44(local_e0._4_4_,(int)local_e0 - iVar9);
          }
          bVar5 = (local_a0 & 1) != 0;
          pvVar1 = (void *)((ulong)&local_a0 | 1);
          if (bVar5) {
            pvVar1 = local_90;
          }
          uVar6 = (uint)((byte)local_a0 >> 1);
          if (bVar5) {
            uVar6 = (uint)local_98;
          }
          FUN_0080dbe0(&local_f0,pvVar1,uVar6);
          FUN_0080db90(&local_f0);
          thunk_FUN_0080ee40(auStack_100);
          bVar5 = false;
        }
        else {
          uVar13 = 0;
LAB_00811844:
          uVar13 = FUN_0080d5d0(param_1,uVar13);
          if (-1 < (long)uVar13) goto LAB_00811858;
LAB_008118c4:
          bVar5 = true;
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        uVar13 = 0;
        if (bVar5) {
joined_r0x00811a8c:
          uVar12 = 0;
joined_r0x00811a6c:
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
          return uVar12;
        }
      }
      else {
        uVar8 = FUN_00812b70(uVar13 & 0xffffffff,uVar12,param_2,param_1);
        if ((uVar8 & 1) == 0) goto joined_r0x00811a8c;
      }
      break;
    default:
      goto switchD_008117b8_caseD_8117dc;
    case 0x81181c:
      pbVar11 = (byte *)*param_1;
      if (pbVar11 < (byte *)param_1[1]) {
        uVar13 = (ulong)*pbVar11;
        if ((char)*pbVar11 < '\0') goto LAB_00811960;
        *param_1 = (ulong)(pbVar11 + 1);
      }
      else {
        uVar13 = 0;
LAB_00811960:
        uVar13 = FUN_0080d5d0(param_1,uVar13);
        if ((long)uVar13 < 0) goto joined_r0x00811a8c;
      }
      uVar12 = (**(code **)(*plVar7 + 0x270))(plVar7,uVar13 & 0xffffffff);
      uVar8 = local_80 >> 1 & 0x7f;
      if ((local_80 & 1) != 0) {
        uVar8 = local_78;
      }
      if (uVar8 != 0) {
        puVar2 = (undefined1 *)((ulong)&local_80 | 1);
        if ((local_80 & 1) != 0) {
          puVar2 = local_70;
        }
        FUN_0080e5a0(&local_a0,puVar2,uVar8,0xffffffff);
        local_e0 = &local_a0;
        local_f0 = 0;
        local_e8 = (byte *)0x0;
        uStack_d0 = 0;
        uStack_d8 = 0;
        local_d2 = 0;
        local_c8 = 0x7fffffff;
        local_c0 = 0x200000004000000;
        local_b8 = *(undefined4 *)PTR_DAT_02716f78;
        local_b0 = 0;
        uStack_a8 = 0;
        uStack_b4 = local_b8;
        FUN_0080cd70(&local_f0);
        uVar8 = FUN_00812b70(uVar13 & 0xffffffff,uVar12,param_2,&local_f0);
        if ((uVar8 & 1) == 0) {
          FUN_0080c870(&local_f0);
          thunk_FUN_0080ee30(&local_a0);
          goto joined_r0x00811a8c;
        }
        if ((local_80 & 1) == 0) {
          local_80 = local_80 & 0xffffffffffff0000;
        }
        else {
          *local_70 = 0;
          local_78 = 0;
        }
        FUN_0080c870(&local_f0);
        thunk_FUN_0080ee30(&local_a0);
      }
      break;
    case 0x811a30:
      goto switchD_008117b8_caseD_811a30;
    case 0x811a64:
      uVar12 = 1;
      goto joined_r0x00811a6c;
    }
  } while( true );
}


