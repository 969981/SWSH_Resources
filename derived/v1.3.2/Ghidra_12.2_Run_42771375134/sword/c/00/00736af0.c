/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00736af0; name: FUN_00736af0
 */


void FUN_00736af0(long *param_1,undefined8 param_2,long *param_3,int param_4,undefined4 param_5)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined1 local_168 [8];
  undefined4 local_160;
  undefined1 local_15c [4];
  undefined8 local_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  long local_68;
  undefined1 auStack_58 [8];
  
  FUN_00732c50(param_1,param_2,param_4);
  puVar2 = PTR_DAT_02715c88;
  *param_1 = (long)(PTR_DAT_02715c88 + 0x10);
  param_1[9] = (long)(puVar2 + 0xb0);
  param_1[10] = (long)(puVar2 + 0xf0);
  lVar4 = *param_3;
  *param_3 = 0;
  param_1[0x40] = lVar4;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x44) = param_5;
  plVar8 = *(long **)(*(long *)(param_1[0x17] + 0x260) + (long)param_4 * 0x60 + 0x40);
  lVar4 = plVar8[1];
  if (lVar4 == plVar8[2]) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    do {
      piVar5 = *(int **)(*(long *)(lVar4 + 0x10) + 0x40);
      if (((0x24 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
          (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x12], uVar6 != 0)) &&
         (*(char *)((long)piVar5 + uVar6) != '\0')) {
        lVar10 = lVar10 + 1;
      }
      lVar4 = lVar4 + 0x18;
    } while (plVar8[2] != lVar4);
  }
  plVar11 = (long *)param_1[1];
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar11;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar11 + 0x10))(plVar11,0x118,8);
  if (lVar3 == 0) {
    (**(code **)(*plVar11 + 0xb8))(plVar11);
  }
  plVar1 = param_1 + 0x41;
  FUN_007340f0(lVar3,lVar10);
  *(long **)(lVar3 + 8) = plVar11;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x118;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
  *plVar1 = lVar3;
  lVar4 = plVar8[1];
  lVar10 = plVar8[2];
  if (lVar4 != lVar10) {
    iVar9 = 0;
    do {
      piVar5 = *(int **)(*(long *)(lVar4 + 0x10) + 0x40);
      if (((0x24 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
          (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x12], uVar6 != 0)) &&
         (*(char *)((long)piVar5 + uVar6) != '\0')) {
        local_68 = *(long *)(*(long *)(param_1[0x40] + 0x170) +
                            (ulong)*(uint *)(*(long *)(lVar4 + 0x10) + 0x4a0) * 0x10);
        lVar3 = param_1[0x41];
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
        }
        FUN_00734610(lVar3,iVar9,&local_68);
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        iVar9 = iVar9 + 1;
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar10 != lVar4);
    lVar3 = *plVar1;
  }
  FUN_00734980(lVar3,param_2);
  if (((char)plVar8[7] == '\0') && (*(char *)((long)plVar8 + 0x39) == '\0')) {
    local_168 = (undefined1  [8])0xffffffff00000000;
    local_160 = 0;
    local_158 = 0xffffffff00000000;
    local_150 = 0;
    local_14c = 0;
    local_148 = 0xffffffff00000000;
    local_140 = 0;
    local_13c = 0;
    local_138 = 0xffffffff00000000;
    local_130 = 0;
    local_12c = 0;
    local_128 = 0xffffffff00000000;
    local_120 = 0;
    local_11c = 0;
    local_118 = 0xffffffff00000000;
    local_110 = 0;
    local_10c = 0;
    local_108 = 0xffffffff00000000;
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0xffffffff00000000;
    local_f0 = 0;
    local_ec = 0;
    local_e8 = 0xffffffff00000000;
    local_e0 = 0;
    local_dc = 0;
    local_d8 = 0xffffffff00000000;
    local_d0 = 0;
    local_cc = 0;
    local_c8 = 0xffffffff00000000;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0xffffffff00000000;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0xffffffff00000000;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0xffffffff00000000;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0xffffffff00000000;
    local_80 = 0;
    local_7c = 0;
    local_78 = 0xffffffff00000000;
    local_70 = 0;
    local_6c = 0;
    lVar4 = *plVar8;
    if (0 < *(int *)(lVar4 + 0xa0)) {
      lVar10 = 0;
      lVar3 = 0;
      do {
        uVar7 = *(undefined8 *)(lVar4 + lVar3 + 0xac);
        *(undefined8 *)(local_168 + lVar3 + 5) = *(undefined8 *)(lVar4 + lVar3 + 0xb1);
        *(undefined8 *)(local_168 + lVar3) = uVar7;
        local_15c[lVar3] = 1;
        lVar4 = *plVar8;
        lVar10 = lVar10 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar10 < *(int *)(lVar4 + 0xa0));
    }
    local_15c[0] = 0;
    lVar4 = FUN_00737b00(auStack_58,param_1[1],local_168,plVar8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (param_1[0x43] != 0) {
      (**(code **)(*(long *)(param_1[0x43] + 0x48) + 0x18))();
      param_1[0x43] = 0;
    }
    param_1[0x43] = lVar4;
  }
  return;
}


