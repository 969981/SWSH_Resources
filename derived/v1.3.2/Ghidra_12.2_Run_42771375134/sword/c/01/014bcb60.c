/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bcb60; name: FUN_014bcb60
 */


void FUN_014bcb60(long *param_1,long *param_2,undefined4 param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_48;
  
  local_48 = *param_2;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_0077eb50(param_1,&local_48,param_3,1,0,1);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  puVar1 = PTR_DAT_0272a300 + 0xb0;
  *param_1 = (long)(PTR_DAT_0272a300 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[0x23] = 0;
  FUN_01992930(param_1 + 0x24);
  *(undefined4 *)((long)param_1 + 0x144) = 1;
  puVar1 = PTR_DAT_0272a308;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined2 *)((long)param_1 + 0x19a) = 0;
  *(undefined2 *)((long)param_1 + 0x19c) = 0;
  param_1[0x24] = (long)(puVar1 + 0x10);
  param_1[0x25] = -0xffffff01000000;
  *(undefined4 *)(param_1 + 0x2f) = 0x1000000;
  *(undefined2 *)((long)param_1 + 0x17c) = 0x101;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  puVar1 = PTR_DAT_0272a310;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_014bcfa0(param_1,*(undefined4 *)puVar1,param_4 & 1);
  param_1[0x10] = (long)(param_1 + 0x24);
  FUN_00780100(param_1,0);
  FUN_00780110(param_1,1);
  param_1[0x29] = (long)param_1;
  param_1[0x30] = -0x100000000;
  puVar1 = PTR_DAT_02710860;
  plVar4 = (long *)param_1[1];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_0077d050(lVar3,0x400);
    *(long **)(lVar3 + 8) = plVar4;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x80;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = param_1[0x34];
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      param_1[0x34] = 0;
    }
    param_1[0x34] = lVar3;
    plVar4 = (long *)param_1[1];
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar2 + 0x80) < 0x10) {
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
      if (lVar3 == 0) {
        (**(code **)(*plVar4 + 0xb8))(plVar4);
      }
      FUN_0077d050(lVar3,0x80);
      *(long **)(lVar3 + 8) = plVar4;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x80;
      *(undefined8 *)(lVar3 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (param_1[0x35] != 0) {
        (**(code **)(*(long *)(param_1[0x35] + 0x48) + 0x18))();
        param_1[0x35] = 0;
      }
      param_1[0x35] = lVar3;
      plVar4 = (long *)param_1[1];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar2 + 0x80) < 0x10) {
        *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x250,0x10);
        if (lVar3 == 0) {
          (**(code **)(*plVar4 + 0xb8))(plVar4);
        }
        FUN_014c5f50(lVar3,1,1,plVar4);
        *(long **)(lVar3 + 8) = plVar4;
        *(long *)(lVar3 + 0x10) = lVar3;
        *(undefined8 *)(lVar3 + 0x18) = 0x250;
        *(undefined8 *)(lVar3 + 0x20) = 0x10;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (param_1[0x36] != 0) {
          (**(code **)(*(long *)(param_1[0x36] + 0x48) + 0x18))();
          param_1[0x36] = 0;
        }
        param_1[0x36] = lVar3;
        plVar4 = (long *)param_1[1];
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar2 + 0x80) < 0x10) {
          *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
          lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
          if (lVar3 == 0) {
            (**(code **)(*plVar4 + 0xb8))(plVar4);
          }
          FUN_0077d050(lVar3,0x800);
          *(long **)(lVar3 + 8) = plVar4;
          *(long *)(lVar3 + 0x10) = lVar3;
          *(undefined8 *)(lVar3 + 0x18) = 0x80;
          *(undefined8 *)(lVar3 + 0x20) = 8;
          *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
          if (lVar3 != 0) {
            (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
          }
          if (param_1[0x37] != 0) {
            (**(code **)(*(long *)(param_1[0x37] + 0x48) + 0x18))();
            param_1[0x37] = 0;
          }
          param_1[0x37] = lVar3;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


