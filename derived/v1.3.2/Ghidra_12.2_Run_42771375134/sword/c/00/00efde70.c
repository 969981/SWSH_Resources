/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00efde70; name: FUN_00efde70
 */


void FUN_00efde70(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  int param4;
  int iVar11;
  long *plVar12;
  byte local_110 [32];
  undefined4 local_f0;
  ushort local_ec;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined4 local_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long local_70;
  
  plVar9 = *(long **)PTR_DAT_027194d8;
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  plVar10 = *(long **)(lVar8 + 0x58);
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10 + 9;
    (**(code **)(*plVar12 + 0x10))(plVar12);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  iVar2 = FUN_00884820(plVar10);
  local_88 = 0xcea92cffb6e31f2;
  pcStack_80 = "MutePM_at_Recovering";
  local_78 = 0x14;
  local_70 = 0;
  FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_88);
  plVar12 = *(long **)(*(long *)PTR_DAT_0271e860 + 0xa8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar12;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar12 + 0x10))(plVar12,0x98,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
  }
  FUN_00e870e0(lVar4,plVar12);
  *(long **)(lVar4 + 8) = plVar12;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x98;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (iVar2 != 0) {
    param4 = 0;
    iVar11 = 0;
    do {
      lVar3 = (**(code **)(*plVar10 + 0x58))(plVar10,iVar11);
      if (((lVar3 != 0) && (uVar5 = FUN_008787d0(), (uVar5 & 1) == 0)) &&
         (uVar5 = FUN_0087d610(lVar3,2), (uVar5 & 1) == 0)) {
        local_d0 = 0;
        local_cc = 0;
        local_c0 = 0xcbf29ce484222645;
        local_b8 = 0xcbf29ce484222645;
        local_b0 = 0xcbf29ce484222645;
        uStack_a8 = 0xcbf29ce484222645;
        local_90 = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        local_a0 = 0;
        uStack_9c = 0;
        local_f0 = 0;
        local_ec = 0;
        local_e8 = 0;
        local_e4 = 0;
        local_e0 = 0;
        local_d8 = 0xffffffff;
        snprintf((char *)local_110,0x20,"%s%02d","HealPoke_",param4);
        local_c0 = 0xcbf29ce484222645;
        if (local_110[0] != 0) {
          local_c0 = 0xcbf29ce484222645;
          pbVar7 = (byte *)((ulong)local_110 | 1);
          bVar1 = local_110[0];
          do {
            local_c0 = (local_c0 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar1 != 0);
        }
        FUN_014ad910(&local_f0,lVar3);
        local_b8 = 0xfb0600093042adfc;
        uStack_98 = local_e8;
        uStack_94 = (undefined1)local_e4;
        uStack_9c = (uint)local_ec;
        local_a0 = local_f0;
        local_90 = (undefined4)local_e0;
        uVar6 = FUN_00efe1e0(lVar4,&local_d0);
        lVar3 = FUN_00e204c0(plVar9,uVar6);
        *(undefined4 *)(lVar3 + 0x5e0) = local_d8;
        param4 = param4 + 1;
        *(uint *)(lVar3 + 0x37c) = *(uint *)(lVar3 + 0x37c) & 0xfffffffc;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar2);
  }
  (**(code **)(*plVar9 + 0x38))(plVar9,1);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


