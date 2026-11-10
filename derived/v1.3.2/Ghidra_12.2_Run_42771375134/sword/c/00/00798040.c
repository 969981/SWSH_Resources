/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00798040; name: FUN_00798040
 */


void FUN_00798040(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
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
  long local_70 [2];
  
  iVar3 = FUN_006faa80(*(undefined8 *)(param_2 + 8));
  if (0 < iVar3) {
    iVar6 = 0;
    puVar1 = PTR_DAT_02710800 + 0x10;
    do {
      plVar7 = *(long **)(param_1 + 8);
      FUN_00729ec0(&local_190,param_2,iVar6,0x3f);
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_007982c8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0x8f0,0x10);
      if (lVar5 == 0) {
        (**(code **)(*plVar7 + 0xb8))(plVar7);
      }
      FUN_0072a630(lVar5,&local_190);
      *(long **)(lVar5 + 8) = plVar7;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x8f0;
      *(undefined8 *)(lVar5 + 0x20) = 0x10;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      local_70[0] = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48));
      }
      local_190 = puVar1;
      if (local_188 == 0) {
        local_188 = 0;
        pcVar2 = local_f8;
      }
      else {
        FUN_006e2100(local_188,&local_190);
        lVar4 = local_188;
        local_188 = 0;
        pcVar2 = local_f8;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
          pcVar2 = local_f8;
        }
      }
      local_f8 = pcVar2;
      if (pcVar2 != (code *)0x0) {
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        local_f8 = (code *)0x0;
        (*pcVar2)(auStack_e0);
      }
      pcVar2 = local_178;
      if (local_178 != (code *)0x0) {
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        local_178 = (code *)0x0;
        (*pcVar2)(auStack_160);
      }
      if (local_188 != 0) {
        (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
        local_188 = 0;
      }
      plVar7 = *(long **)(param_1 + 0xb8);
      if (plVar7 < *(long **)(param_1 + 0xc0)) {
        uVar8 = *(undefined8 *)(param_1 + 200);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_007982c8;
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar8;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *plVar7 = local_70[0];
        if (local_70[0] != 0) {
          (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
        }
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 8;
      }
      else {
        FUN_00799150(param_1 + 0xb0,local_70);
      }
      if (local_70[0] != 0) {
        (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
        local_70[0] = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  FUN_00739320(param_1,param_3);
  return;
}


