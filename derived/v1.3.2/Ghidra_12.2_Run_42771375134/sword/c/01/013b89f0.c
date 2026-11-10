/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b89f0; name: FUN_013b89f0
 */


void FUN_013b89f0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long local_48;
  long local_38;
  
  local_38 = *param_2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  local_48 = *param_3;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_00ff5fc0(param_1,&local_38,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  puVar3 = PTR_DAT_02729038;
  puVar1 = PTR_DAT_02729038 + 0xb0;
  puVar2 = PTR_DAT_02729038 + 0x1d8;
  param_1[0xf] = (long)(PTR_DAT_02729038 + 0x118);
  param_1[0x10] = (long)(puVar3 + 0x1a0);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x3a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x3c] = 0;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)(puVar3 + 0xf0);
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x17] = (long)puVar2;
  param_1[0x18] = (long)(puVar3 + 0x1f0);
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0x100000002;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined1 *)((long)param_1 + 0x334) = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined1 *)((long)param_1 + 0x33c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)((long)param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)((long)param_1 + 0x324) = 0;
  *(undefined8 *)((long)param_1 + 0x31c) = 0;
  *(undefined4 *)((long)param_1 + 0x4ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x90) = 0;
  *(undefined4 *)((long)param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  *(undefined8 *)((long)param_1 + 0x4b4) = 0;
  *(undefined1 *)((long)param_1 + 0x4bd) = 1;
  *(undefined1 *)((long)param_1 + 0x4bc) = 0;
  *(undefined1 *)((long)param_1 + 0x4ea) = 0;
  *(undefined2 *)(param_1 + 0x9d) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)((long)param_1 + 0x4ec) = 0;
  *(undefined8 *)((long)param_1 + 0x4d5) = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 8;
  *(undefined1 *)((long)param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  *(undefined1 *)((long)param_1 + 0x4fc) = 0;
  puVar2 = PTR_LAB_02718fa8;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  puVar1 = PTR_FUN_02718fa0;
  param_1[0xa2] = (long)puVar2;
  puVar2 = PTR_LAB_02718fb0;
  param_1[0xa3] = (long)puVar1;
  puVar1 = PTR_LAB_02718fb8;
  param_1[0xa4] = (long)puVar2;
  *(undefined4 *)(param_1 + 0x11d) = 0x3c;
  *(undefined4 *)(param_1 + 0x92) = 5;
  param_1[0x137] = 0x3ff0000000000000;
  param_1[0xa5] = (long)puVar1;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  param_1[0xb7] = 0;
  param_1[0xb6] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xd9] = 0;
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xf6] = 0;
  param_1[0x109] = 0;
  param_1[0x108] = 0;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0x11c] = 0;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = 0;
  *(undefined1 *)((long)param_1 + 0x8ec) = 0;
  param_1[0x11e] = 0;
  param_1[0x123] = 0;
  param_1[0x122] = 0;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x132) = 0;
  param_1[0x136] = 0;
  *(undefined1 *)(param_1 + 0x135) = 0;
  param_1[0x134] = 0;
  param_1[0x133] = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  param_1[0x13d] = 0;
  param_1[0x13c] = 0;
  param_1[0x13b] = 0;
  param_1[0x13a] = 0;
  if (param_1[0x11] == 0) {
    plVar8 = (long *)param_1[1];
    uVar4 = (**(code **)(param_1[0xf] + 0x70))();
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0x380,0x10);
    if (lVar6 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_013bde30(lVar6,plVar8,uVar4);
    *(long **)(lVar6 + 8) = plVar8;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0x380;
    *(undefined8 *)(lVar6 + 0x20) = 0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (param_1[0x11] != 0) {
      (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
      param_1[0x11] = 0;
    }
    param_1[0x11] = lVar6;
  }
  puVar7 = (undefined8 *)0x0;
  if (param_1[0xd] != 0) {
    puVar7 = *(undefined8 **)(param_1[0xd] + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar8 = (long *)(**(code **)*puVar7)(puVar7);
      lVar5 = FUN_0132d9a0();
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)lVar5) {
          puVar7 = puVar7 + -10;
          goto LAB_013b8ebc;
        }
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_013b8ebc:
  memcpy(param_1 + 0x3a,puVar7 + 0x12,0x2a4);
  return;
}


