/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df79c0; name: FUN_00df79c0
 */


void FUN_00df79c0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  param_1[7] = 0;
  puVar2 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  puVar1 = PTR_DAT_0271ee40;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = param_2;
  param_1[10] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar4;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x2e] = 0;
  param_1[0x34] = 0;
  param_1[0x3a] = 0;
  param_1[0x10] = -0x340d631b7bddd9bb;
  param_1[0x1c] = 0;
  plVar6 = param_1 + 0x14;
  *plVar6 = 0;
  param_1[0x40] = 0;
  param_1[0x46] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x15] = 0;
  param_1[0x4a] = -0x340d631b7bddd9bb;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_00df7fc0(param_1 + 0xeb);
  param_1[0x197] = 0;
  *(undefined4 *)(param_1 + 0x19b) = 0;
  *(undefined4 *)(param_1 + 0x1a2) = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a0] = 0;
  param_1[0x19f] = 0;
  param_1[0x19e] = 0;
  param_1[0x19d] = 0;
  param_1[0x19c] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a4] = 0;
  *(undefined4 *)(param_1 + 0x1ab) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xd5c) = 0;
  puVar1 = PTR_DAT_0271ee48 + 0x10;
  param_1[0x19a] = (long)puVar1;
  param_1[0x1ac] = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  param_1[0x1af] = 0;
  param_1[0x1ae] = 0;
  *(undefined8 *)((long)param_1 + 0xd84) = 0x3f000000;
  *(undefined8 *)((long)param_1 + 0xd8c) = 0x41f00000;
  *(undefined1 *)((long)param_1 + 0xd94) = 0;
  *(undefined4 *)(param_1 + 0x1b5) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  param_1[0x1bb] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1b8] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1be] = 0;
  *(undefined4 *)(param_1 + 0x1c5) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xe2c) = 0;
  param_1[0x1b4] = (long)puVar1;
  param_1[0x1c6] = 0;
  *(undefined4 *)(param_1 + 0x1ca) = 0;
  param_1[0x1c9] = 0;
  param_1[0x1c8] = 0;
  *(undefined4 *)((long)param_1 + 0xe54) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x1cb) = 0;
  *(undefined4 *)((long)param_1 + 0xe5c) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined1 *)((long)param_1 + 0xe64) = 0;
  lVar3 = param_1[10];
  param_1[10] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = param_1[0xc];
  param_1[0xc] = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  plVar5 = (long *)param_1[9];
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x310,0x10);
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_00e00ba0(lVar4,param_1[9]);
    *(long **)(lVar4 + 8) = plVar5;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x310;
    *(undefined8 *)(lVar4 + 0x20) = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (param_1[0xe] != 0) {
      (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
      param_1[0xe] = 0;
    }
    param_1[0xe] = lVar4;
    plVar5 = (long *)param_1[9];
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x170,0x10);
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0xb8))(plVar5);
      }
      FUN_00dff0b0(lVar4,param_1[9]);
      *(long **)(lVar4 + 8) = plVar5;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x170;
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (param_1[0xf] != 0) {
        (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
        param_1[0xf] = 0;
      }
      param_1[0xf] = lVar4;
      plVar5 = (long *)param_1[9];
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x310,0x10);
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0xb8))(plVar5);
        }
        FUN_00e00ba0(lVar4,param_1[9]);
        *(long **)(lVar4 + 8) = plVar5;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 0x310;
        *(undefined8 *)(lVar4 + 0x20) = 0x10;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        if (*plVar6 != 0) {
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
          *plVar6 = 0;
        }
        param_1[0x14] = lVar4;
        plVar6 = (long *)param_1[9];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (*(ulong *)(lVar3 + 0x80) < 0x10) {
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar6;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x170,0x10);
          if (lVar4 == 0) {
            (**(code **)(*plVar6 + 0xb8))(plVar6);
          }
          FUN_00e01aa0(lVar4,param_1[9]);
          *(long **)(lVar4 + 8) = plVar6;
          *(long *)(lVar4 + 0x10) = lVar4;
          *(undefined8 *)(lVar4 + 0x18) = 0x170;
          *(undefined8 *)(lVar4 + 0x20) = 0x10;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
          }
          if (param_1[0x15] != 0) {
            (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
            param_1[0x15] = 0;
          }
          *(undefined4 *)(param_1 + 0x198) = 0xc;
          param_1[0x15] = lVar4;
          *(undefined4 *)((long)param_1 + 0xd84) = 0x3dcccccd;
          *(undefined4 *)(param_1 + 0x1b1) = DAT_02a59bb8;
          *(undefined8 *)((long)param_1 + 0xd8c) = 0x841a00000;
          *(undefined4 *)(param_1 + 0x1b0) = 1;
          *(undefined4 *)((long)param_1 + 0xe54) = 0x3f000000;
          *(undefined4 *)(param_1 + 0x1cb) = DAT_02a59bbc;
          *(undefined8 *)((long)param_1 + 0xe5c) = 0x1241c00000;
          *(undefined4 *)(param_1 + 0x1ca) = 1;
          *(undefined4 *)(param_1 + 0x1ce) = 0x441b0000;
          *(undefined4 *)((long)param_1 + 0xe74) = DAT_02a59bc0;
          *(undefined4 *)(param_1 + 0x1cf) = 0x3f4ccccd;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


