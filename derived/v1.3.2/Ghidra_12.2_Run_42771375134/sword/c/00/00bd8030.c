/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd8030; name: FUN_00bd8030
 */


void FUN_00bd8030(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar2 = PTR_DAT_0271b808;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  param_1[10] = 0;
  param_1[0xb] = -0x100000000;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x75) = 0;
  param_1[9] = (long)(puVar2 + 0x48);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x8d) = 0;
  *(undefined8 *)((long)param_1 + 0xa5) = 0;
  *(undefined8 *)((long)param_1 + 0xbd) = 0;
  *(undefined8 *)((long)param_1 + 0xd5) = 0;
  *(undefined8 *)((long)param_1 + 0xed) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((long)param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined2 *)((long)param_1 + 0x126) = 0;
  *(undefined8 *)((long)param_1 + 0xfe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((long)param_1 + 0x11e) = 0;
  *(undefined8 *)((long)param_1 + 0x116) = 0;
  *(undefined8 *)((long)param_1 + 0x10e) = 0;
  *(undefined8 *)((long)param_1 + 0x106) = 0;
  *(undefined4 *)((long)param_1 + 0x1a4) = 1;
  *(undefined4 *)((long)param_1 + 0x1b4) = 1;
  *(undefined4 *)(param_1 + 0x3a) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)((long)param_1 + 0x1d4) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)((long)param_1 + 500) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  FUN_00bd8470(param_1 + 0x40);
  *(undefined2 *)(param_1 + 0x281) = 0x100;
  param_1[0x280] = 0;
  param_1[0x27f] = 0;
  param_1[0x27e] = 0;
  uVar6 = 0;
  *(undefined1 *)((long)param_1 + 0x140c) = 0;
  *(undefined1 *)((long)param_1 + 0x1414) = 0;
  *(undefined1 *)((long)param_1 + 0x141c) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined1 *)((long)param_1 + 0x143c) = 0;
  *(undefined8 *)((long)param_1 + 0x1434) = 0;
  *(undefined8 *)((long)param_1 + 0x142c) = 0;
  *(undefined8 *)((long)param_1 + 0x1424) = 0;
  plVar5 = (long *)param_1[1];
  plVar7 = param_1;
  while( true ) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) break;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0xb8,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_00866110(lVar4,plVar5);
    *(long **)(lVar4 + 8) = plVar5;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0xb8;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (plVar7[0xd] != 0) {
      (**(code **)(*(long *)(plVar7[0xd] + 0x48) + 0x18))();
      plVar7[0xd] = 0;
    }
    plVar7[0xd] = lVar4;
    plVar5 = (long *)param_1[1];
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) break;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0xb8,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_00866110(lVar4,plVar5);
    *(long **)(lVar4 + 8) = plVar5;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0xb8;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (plVar7[0x184] != 0) {
      (**(code **)(*(long *)(plVar7[0x184] + 0x48) + 0x18))();
      plVar7[0x184] = 0;
    }
    plVar7[0x184] = lVar4;
    plVar5 = (long *)param_1[1];
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) break;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0xb8,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0xb8))(plVar5);
    }
    FUN_00866110(lVar4,plVar5);
    *(long **)(lVar4 + 8) = plVar5;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0xb8;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (plVar7[0x1d1] != 0) {
      (**(code **)(*(long *)(plVar7[0x1d1] + 0x48) + 0x18))();
      plVar7[0x1d1] = 0;
    }
    plVar7[0x1d1] = lVar4;
    plVar5 = (long *)param_1[1];
    uVar6 = uVar6 + 1;
    plVar7 = plVar7 + 3;
    if (5 < uVar6) {
      lVar3 = FUN_010905f0(auStack_58,plVar5);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (param_1[0x24] != 0) {
        (**(code **)(*(long *)(param_1[0x24] + 0x48) + 0x18))();
        param_1[0x24] = 0;
      }
      param_1[0x24] = lVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


