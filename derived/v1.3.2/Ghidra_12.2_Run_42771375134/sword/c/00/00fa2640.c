/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa2640; name: FUN_00fa2640
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_00fa2640(undefined4 param_1,uint param_2,int param_3,int param_4,undefined8 *param_5,
                   long *param_6,int param_7,byte param_8)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  byte bStack_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  
  iVar1 = *(int *)(param_5 + 9);
  plVar7 = *(long **)PTR_DAT_027194d8;
  plVar8 = *(long **)(*(long *)PTR_DAT_0271e860 + 0xa8);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,0x98,8);
  if (lVar3 == 0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  FUN_00e870e0(lVar3,plVar8);
  *(long **)(lVar3 + 8) = plVar8;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x98;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_100 = 0;
  local_fc = 0;
  local_b0 = 0xcbf29ce484222645;
  uStack_a8 = 0xcbf29ce484222645;
  local_90 = 0;
  uStack_98 = 0;
  bStack_94 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  local_88 = 0xcbf29ce484222645;
  local_80 = 0;
  local_e8 = param_5[3];
  local_f0 = param_5[2];
  local_e0 = FUN_007101c0(param_5 + 6);
  uStack_c8 = _UNK_01d4a138;
  uStack_d0 = _DAT_01d4a130;
  local_c0 = *param_5;
  uStack_b8 = 0xfb0600093042adfc;
  uStack_9c = param_2 & 0xffff;
  if ((param_3 == 1) || (param_3 != 2)) {
    uStack_98 = 0;
  }
  else {
    uStack_98 = 1;
  }
  bStack_94 = param_4 == 1 & param_8;
  local_90 = 0;
  local_100 = 1;
  local_fc = CONCAT44(*(undefined4 *)PTR_DAT_027201c0,*(undefined4 *)PTR_DAT_027201c0);
  local_80 = *(undefined4 *)(param_5 + 0x5a);
  local_a0 = param_1;
  uVar4 = FUN_00fa29f0(lVar3,&local_100);
  plVar8 = (long *)FUN_00fa2e90(plVar7,uVar4);
  *(undefined1 *)(plVar8 + 0x43) = 0;
  *(undefined4 *)((long)plVar8 + 0x8a4) = *(undefined4 *)(param_5 + 9);
  FUN_00e60b60(plVar8,param_5 + 0x4e);
  memcpy(plVar8 + 0x150,param_5 + 10,0xa0);
  memcpy(plVar8 + 0x120,param_5 + 0x1e,0x171);
  *(undefined1 *)((long)plVar8 + 0xb31) = *(undefined1 *)((long)param_5 + 0x2cd);
  *(undefined4 *)((long)plVar8 + 0xb34) = *(undefined4 *)(param_5 + 0x59);
  *(undefined4 *)(plVar8 + 0x114) = *(undefined4 *)((long)param_5 + 0x4c);
  *(undefined1 *)((long)plVar8 + 0xbd9) = *(undefined1 *)((long)param_5 + 0x2cc);
  plVar8[0x1a9] = param_5[1];
  lVar2 = param_5[5];
  plVar8[0x16e] = param_5[4];
  plVar8[0x16f] = lVar2;
  plVar8[0x170] = param_5[8];
  *(undefined4 *)(plVar8 + 0xbc) = *(undefined4 *)((long)param_5 + 0x2d4);
  (**(code **)(*plVar7 + 0x38))(plVar7,1);
  if (iVar1 == 0) {
    (**(code **)(*plVar8 + 0x10))(&local_108,plVar8);
    lVar2 = local_108;
    if (0 < param_7) {
      lVar6 = plVar8[0x34];
      lVar5 = 0;
      do {
        if (*(char *)((long)param_5 + 0x2cd) == '\0') {
          if ((*param_6 == 0) || (*(int *)(*param_6 + 0x54) == 0)) {
            if (local_108 != 0) {
              (**(code **)(*(long *)(local_108 + 0x48) + 0x10))();
            }
            lVar5 = *param_6;
            *param_6 = lVar2;
            if (lVar5 != 0) {
              (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
            }
            param_6[1] = lVar6;
            if (local_108 == 0) goto LAB_00fa29ac;
            goto LAB_00fa299c;
          }
        }
        else if (lVar6 == param_6[1]) {
          if (local_108 != 0) {
            (**(code **)(*(long *)(local_108 + 0x48) + 0x10))();
          }
          lVar5 = *param_6;
          *param_6 = lVar2;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
          }
          break;
        }
        lVar5 = lVar5 + 1;
        param_6 = param_6 + 2;
      } while (lVar5 < param_7);
    }
    if (local_108 != 0) {
LAB_00fa299c:
      (**(code **)(*(long *)(local_108 + 0x48) + 0x18))();
      local_108 = 0;
    }
  }
LAB_00fa29ac:
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return plVar8;
}


