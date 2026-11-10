/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d2e60; name: FUN_006d2e60
 */


void FUN_006d2e60(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ThreadType *pTVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),false,0);
  FUN_006cee90((long)param_1 + 0x4c,1,0);
  plVar7 = param_1 + 0xc;
  param_1[0xb] = 0;
  FUN_006d4f50(plVar7,3);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0x1b] = lVar3;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0x21] = lVar3;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  param_1[0x27] = lVar3;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  lVar3 = *param_2;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2a] = lVar3;
  param_1[0x2b] = 3;
  lVar3 = param_2[1];
  *(char *)((long)param_1 + 0x161) = (char)lVar3;
  puVar2 = PTR_DAT_02715188;
  if ((char)lVar3 == '\0') {
    plVar8 = *(long **)(*(long *)PTR_DAT_02715188 + 0x28);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006d3518;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0x388,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_006d5b60(lVar5,0,param_1,param_1[0x2a],plVar8);
    *(long **)(lVar5 + 8) = plVar8;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x388;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (param_1[2] != 0) {
      (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
      param_1[2] = 0;
    }
    param_1[2] = lVar5;
    FUN_006d0560(lVar5,"JobThread0",0,0x10);
    thunk_FUN_006d53c0(plVar7,*(undefined8 *)(param_1[2] + 0x358));
    plVar8 = *(long **)(*(long *)puVar2 + 0x28);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006d3518;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0x388,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_006d5b60(lVar5,1,param_1,param_1[0x2a],plVar8);
    *(long **)(lVar5 + 8) = plVar8;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x388;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (param_1[3] != 0) {
      (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
      param_1[3] = 0;
    }
    param_1[3] = lVar5;
    FUN_006d0560(lVar5,"JobThread1",1,0x10);
    thunk_FUN_006d53c0(plVar7,*(undefined8 *)(param_1[3] + 0x358));
    plVar8 = *(long **)(*(long *)puVar2 + 0x28);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    uVar6 = *(ulong *)(lVar3 + 0x80);
  }
  else {
    pTVar4 = (ThreadType *)nn::os::GetCurrentThread();
    nn::os::SetThreadCoreMask(pTVar4,0,1);
    puVar2 = PTR_DAT_02715188;
    plVar8 = *(long **)(*(long *)PTR_DAT_02715188 + 0x28);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006d3518;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0x388,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_006d59c0(lVar5,param_1,plVar8);
    *(long **)(lVar5 + 8) = plVar8;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x388;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (param_1[2] != 0) {
      (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
      param_1[2] = 0;
    }
    param_1[2] = lVar5;
    plVar8 = *(long **)(*(long *)puVar2 + 0x28);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_006d3518;
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0x388,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_006d5b60(lVar5,1,param_1,param_1[0x2a],plVar8);
    *(long **)(lVar5 + 8) = plVar8;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x388;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (param_1[3] != 0) {
      (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
      param_1[3] = 0;
    }
    param_1[3] = lVar5;
    FUN_006d0560(lVar5,"JobThread1",1,0x10);
    thunk_FUN_006d53c0(plVar7,*(undefined8 *)(param_1[3] + 0x358));
    plVar8 = *(long **)(*(long *)puVar2 + 0x28);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    uVar6 = *(ulong *)(lVar3 + 0x80);
  }
  if (uVar6 < 0x10) {
    *(long **)(lVar3 + uVar6 * 8) = plVar8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0x388,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_006d5b60(lVar5,2,param_1,param_1[0x2a],plVar8);
    *(long **)(lVar5 + 8) = plVar8;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x388;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (param_1[4] != 0) {
      (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
      param_1[4] = 0;
    }
    param_1[4] = lVar5;
    FUN_006d0560(lVar5,"JobThread2",2,0x10);
    thunk_FUN_006d53c0(plVar7,*(undefined8 *)(param_1[4] + 0x358));
    plVar7 = *(long **)(*(long *)PTR_DAT_02715188 + 0x28);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar7;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0x290,8);
      if (lVar5 == 0) {
        (**(code **)(*plVar7 + 0xb8))(plVar7);
      }
      FUN_006d0990(lVar5,param_1);
      *(long **)(lVar5 + 8) = plVar7;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x290;
      *(undefined8 *)(lVar5 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      FUN_006d1120(lVar5);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (*param_1 != 0) {
        (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
        *param_1 = 0;
      }
      *param_1 = lVar5;
      *(ulong *)(lVar5 + 0x130) = *(ulong *)(lVar5 + 0x130) | 0x20;
      return;
    }
  }
LAB_006d3518:
                    /* WARNING: Subroutine does not return */
  abort();
}


