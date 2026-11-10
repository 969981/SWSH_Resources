/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea8e00; name: FUN_00ea8e00
 */


undefined8 FUN_00ea8e00(long *param_1,long *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long local_100;
  long local_f8;
  undefined4 local_f0 [2];
  long *local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_70 [2];
  
  uVar7 = FUN_00db3320(param_1,param_2,param_3 & 1);
  if ((uVar7 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    FUN_00c58c00(local_70,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
    local_83 = 0;
    uVar1 = *(undefined4 *)((long)param_1 + 0x5cc);
    uVar6 = (undefined2)param_1[0xba];
    uVar2 = *(undefined4 *)((long)param_1 + 0x5d4);
    uVar5 = (undefined1)param_1[0xbb];
    uVar3 = *(undefined4 *)((long)param_1 + 0x5dc);
    uStack_7c = 0;
    uVar4 = (undefined4)param_1[0xbc];
    local_90 = uVar1;
    local_8c = uVar6;
    local_88 = uVar2;
    local_84 = uVar5;
    local_80 = uVar3;
    local_78 = uVar4;
    puVar8 = (undefined8 *)FUN_00c79e90(local_70[0],0x1a);
    (**(code **)(*param_1 + 0x10))(&local_f8,param_1);
    lVar10 = local_f8;
    local_f8 = 0;
    local_f0[0] = (**(code **)(*param_1 + 0x228))(param_1);
    local_d3 = 0;
    uStack_cc = 0;
    local_c0 = *puVar8;
    local_b0 = lVar10;
    local_b8 = 1;
    local_e8 = param_2;
    local_e0 = uVar1;
    local_dc = uVar6;
    local_d8 = uVar2;
    local_d4 = uVar5;
    local_d0 = uVar3;
    local_c8 = uVar4;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    local_a8 = param_1[0x32];
    lStack_a0 = param_1[0x33];
    local_98 = 0;
    local_94 = 0;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    if (local_f8 != 0) {
      (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
      local_f8 = 0;
    }
    local_94 = 1;
    if (((param_3 & 1) != 0) && (FUN_00c79ed0(&local_100,local_70[0],0,local_f0), local_100 != 0)) {
      (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
      local_100 = 0;
    }
    uVar11 = *(undefined8 *)(*(long *)PTR_DAT_0271e8d0 + 0x1e8);
    plVar9 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x140,0x10);
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    FUN_0131a840(plVar9,uVar11);
    plVar9[0x26] = 0;
    *plVar9 = (long)(PTR_DAT_0271f540 + 0x10);
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    puVar8 = (undefined8 *)param_1[0xfe];
    param_1[0xfe] = (long)plVar9;
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)*puVar8)(puVar8);
      (**(code **)(*(long *)param_1[0xff] + 0x18))
                ((long *)param_1[0xff],puVar8,param_1[0x100],param_1[0x101]);
      plVar9 = (long *)param_1[0xfe];
    }
    param_1[0xff] = (long)param_2;
    param_1[0x100] = 0x140;
    param_1[0x101] = 0x10;
    FUN_0131aaf0(plVar9,&local_90);
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      local_b0 = 0;
    }
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    }
    uVar11 = 1;
  }
  return uVar11;
}


