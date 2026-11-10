/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a40aa0; name: FUN_00a40aa0
 */


void FUN_00a40aa0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined1 *local_100;
  code *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  long alStack_e0 [13];
  long local_78;
  undefined8 local_70 [2];
  
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  local_70[0] = FUN_00ff93d0();
  plVar4 = (long *)FUN_00ff93d0(param_1);
  plVar5 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x540,8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar4;
  puVar1 = PTR_DAT_027192a0;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = puVar1 + 0x10;
  plVar5[0x13] = 0;
  plVar5[0x14] = 0;
  plVar5[0x11] = 0;
  plVar5[0x12] = 0;
  plVar5[2] = lVar3;
  plVar5[0xf] = 0;
  plVar5[0x10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  *plVar5 = (long)puVar1;
  plVar5[1] = lVar2;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  plVar5[0x16] = *(long *)(param_1 + 8);
  plVar5[0x17] = lVar2;
  plVar5[0x15] = (long)puVar1;
  plVar5[0x28] = 0;
  plVar5[0x29] = 0;
  plVar5[0x26] = 0;
  plVar5[0x27] = 0;
  plVar5[0x24] = 0;
  plVar5[0x25] = 0;
  plVar5[0x22] = 0;
  plVar5[0x23] = 0;
  plVar5[0x20] = 0;
  plVar5[0x21] = 0;
  plVar5[0x1e] = 0;
  plVar5[0x1f] = 0;
  plVar5[0x1c] = 0;
  plVar5[0x1d] = 0;
  plVar5[0x1a] = 0;
  plVar5[0x1b] = 0;
  plVar5[0x18] = 0;
  plVar5[0x19] = 0;
  lVar2 = *(long *)(param_1 + 8);
  plVar5[0x2c] = *(long *)(param_1 + 0x10);
  plVar5[0x2a] = (long)puVar1;
  plVar5[0x2b] = lVar2;
  plVar5[0x3d] = 0;
  plVar5[0x3e] = 0;
  plVar5[0x3b] = 0;
  plVar5[0x3c] = 0;
  plVar5[0x39] = 0;
  plVar5[0x3a] = 0;
  plVar5[0x37] = 0;
  plVar5[0x38] = 0;
  plVar5[0x35] = 0;
  plVar5[0x36] = 0;
  plVar5[0x33] = 0;
  plVar5[0x34] = 0;
  plVar5[0x31] = 0;
  plVar5[0x32] = 0;
  plVar5[0x2f] = 0;
  plVar5[0x30] = 0;
  plVar5[0x2d] = 0;
  plVar5[0x2e] = 0;
  lVar2 = *(long *)(param_1 + 8);
  plVar5[0x41] = *(long *)(param_1 + 0x10);
  plVar5[0x53] = 0;
  plVar5[0x52] = 0;
  plVar5[0x51] = 0;
  plVar5[0x50] = 0;
  plVar5[0x4f] = 0;
  plVar5[0x4e] = 0;
  plVar5[0x4d] = 0;
  plVar5[0x4c] = 0;
  plVar5[0x4b] = 0;
  plVar5[0x4a] = 0;
  plVar5[0x49] = 0;
  plVar5[0x48] = 0;
  plVar5[0x47] = 0;
  plVar5[0x46] = 0;
  plVar5[0x45] = 0;
  plVar5[0x44] = 0;
  plVar5[0x43] = 0;
  plVar5[0x42] = 0;
  plVar5[0x3f] = (long)puVar1;
  plVar5[0x40] = lVar2;
  lVar2 = *(long *)(param_1 + 0x10);
  plVar5[0x55] = *(long *)(param_1 + 8);
  plVar5[0x56] = lVar2;
  plVar5[0x54] = (long)puVar1;
  plVar5[0x68] = 0;
  plVar5[0x67] = 0;
  plVar5[0x66] = 0;
  plVar5[0x65] = 0;
  plVar5[100] = 0;
  plVar5[99] = 0;
  plVar5[0x62] = 0;
  plVar5[0x61] = 0;
  plVar5[0x60] = 0;
  plVar5[0x5f] = 0;
  plVar5[0x5e] = 0;
  plVar5[0x5d] = 0;
  plVar5[0x5c] = 0;
  plVar5[0x5b] = 0;
  plVar5[0x5a] = 0;
  plVar5[0x59] = 0;
  plVar5[0x58] = 0;
  plVar5[0x57] = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  plVar5[0x6a] = *(long *)(param_1 + 8);
  plVar5[0x6b] = lVar2;
  plVar5[0x69] = (long)puVar1;
  plVar5[0x7d] = 0;
  plVar5[0x7c] = 0;
  plVar5[0x7b] = 0;
  plVar5[0x7a] = 0;
  plVar5[0x79] = 0;
  plVar5[0x78] = 0;
  plVar5[0x77] = 0;
  plVar5[0x76] = 0;
  plVar5[0x75] = 0;
  plVar5[0x74] = 0;
  plVar5[0x73] = 0;
  plVar5[0x72] = 0;
  plVar5[0x71] = 0;
  plVar5[0x70] = 0;
  plVar5[0x6f] = 0;
  plVar5[0x6e] = 0;
  plVar5[0x6d] = 0;
  plVar5[0x6c] = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  plVar5[0x7f] = *(long *)(param_1 + 8);
  plVar5[0x80] = lVar2;
  plVar5[0x7e] = (long)puVar1;
  plVar5[0x92] = 0;
  plVar5[0x91] = 0;
  plVar5[0x90] = 0;
  plVar5[0x8f] = 0;
  plVar5[0x8e] = 0;
  plVar5[0x8d] = 0;
  plVar5[0x8c] = 0;
  plVar5[0x8b] = 0;
  plVar5[0x8a] = 0;
  plVar5[0x89] = 0;
  plVar5[0x88] = 0;
  plVar5[0x87] = 0;
  plVar5[0x86] = 0;
  plVar5[0x85] = 0;
  plVar5[0x84] = 0;
  plVar5[0x83] = 0;
  plVar5[0x82] = 0;
  plVar5[0x81] = 0;
  lVar2 = *(long *)(param_1 + 0x10);
  plVar5[0x94] = *(long *)(param_1 + 8);
  plVar5[0x95] = lVar2;
  plVar5[0x93] = (long)puVar1;
  plVar5[0xa7] = 0;
  plVar5[0xa6] = 0;
  plVar5[0xa5] = 0;
  plVar5[0xa4] = 0;
  plVar5[0xa3] = 0;
  plVar5[0xa2] = 0;
  plVar5[0xa1] = 0;
  plVar5[0xa0] = 0;
  plVar5[0x9f] = 0;
  plVar5[0x9e] = 0;
  plVar5[0x9d] = 0;
  plVar5[0x9c] = 0;
  plVar5[0x9b] = 0;
  plVar5[0x9a] = 0;
  plVar5[0x99] = 0;
  plVar5[0x98] = 0;
  plVar5[0x97] = 0;
  plVar5[0x96] = 0;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  FUN_00a42370(plVar5);
  FUN_00a42370(plVar5 + 0x15);
  FUN_00a42370(plVar5 + 0x2a);
  FUN_00a42370(plVar5 + 0x3f);
  FUN_00a42370(plVar5 + 0x54);
  FUN_00a42370(plVar5 + 0x69);
  FUN_00a42370(plVar5 + 0x7e);
  FUN_00a42370(plVar5 + 0x93);
  lVar6 = *(long *)(param_1 + 0x80);
  *(long **)(param_1 + 0x80) = plVar5;
  if (lVar6 != 0) {
    uVar7 = *(ulong *)(param_1 + 0x90);
    if (0xa7 < uVar7) {
      uVar10 = 0;
      plVar5 = (long *)(lVar6 + 0x90);
      puVar1 = PTR_DAT_027192a0 + 0x10;
      do {
        plVar5[-0x12] = (long)puVar1;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          *plVar5 = 0;
        }
        uVar10 = uVar10 + 1;
        plVar5 = plVar5 + 0x15;
      } while (uVar10 < uVar7 / 0xa8);
      uVar7 = *(ulong *)(param_1 + 0x90);
    }
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))
              (*(long **)(param_1 + 0x88),lVar6,uVar7,*(undefined8 *)(param_1 + 0x98));
  }
  *(long **)(param_1 + 0x88) = plVar4;
  *(undefined8 *)(param_1 + 0x90) = 0x540;
  *(undefined8 *)(param_1 + 0x98) = 8;
  lVar6 = FUN_00a41590(&local_100,local_70[0],&DAT_02154950,local_70);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  *(long *)(param_1 + 0xa8) = lVar6;
  uVar8 = FUN_00ffde30(uVar8,&DAT_02154958);
  *(undefined8 *)(param_1 + 0xa0) = uVar8;
  FUN_016c2c80(uVar8,0,0);
  FUN_016c2c90(*(undefined8 *)(param_1 + 0xa0),0);
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  local_78 = *(long *)(param_1 + 0xa8);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(uVar8,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  lVar6 = *(long *)(param_1 + 0xa0);
  local_100 = &LAB_00a41fa0;
  local_f8 = FUN_00a42030;
  local_f0 = FUN_00a42040;
  local_e8 = &LAB_00a42050;
  pcVar9 = *(code **)(lVar6 + 200);
  alStack_e0[0] = param_1;
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0xd0) = 0;
    *(undefined8 *)(lVar6 + 0xd8) = 0;
    *(undefined8 *)(lVar6 + 0xc0) = 0;
    *(undefined8 *)(lVar6 + 200) = 0;
    (*pcVar9)(lVar6 + 0xe0);
    if (local_f0 == (code *)0x0) goto LAB_00a40fb8;
  }
  (*local_f0)(alStack_e0,lVar6 + 0xe0);
  *(undefined1 **)(lVar6 + 0xd8) = local_e8;
  *(code **)(lVar6 + 200) = local_f8;
  *(code **)(lVar6 + 0xd0) = local_f0;
  *(undefined8 *)(lVar6 + 0xc0) = local_100;
LAB_00a40fb8:
  pcVar9 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (undefined1 *)0x0;
    local_100 = (undefined1 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar9)(alStack_e0);
  }
  return;
}


