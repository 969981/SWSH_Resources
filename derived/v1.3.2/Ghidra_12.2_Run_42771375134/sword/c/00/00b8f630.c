/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b8f630; name: FUN_00b8f630
 */


void FUN_00b8f630(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  FUN_00ff5da0();
  puVar1 = PTR_DAT_0271b220;
  param_1[0xd] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x58);
  param_1[10] = (long)(puVar1 + 0x98);
  plVar5 = param_1 + 0xc;
  *plVar5 = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  thunk_FUN_011f3570(param_1 + 0x12);
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
    if (*plVar5 != 0) {
      (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
      *plVar5 = 0;
    }
    param_1[0xc] = lVar3;
    plVar4 = (long *)param_1[1];
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
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
      if (param_1[0xd] != 0) {
        (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
        param_1[0xd] = 0;
      }
      param_1[0xd] = lVar3;
      plVar4 = (long *)param_1[1];
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
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
        if (param_1[0xe] != 0) {
          (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
          param_1[0xe] = 0;
        }
        param_1[0xe] = lVar3;
        plVar4 = (long *)param_1[1];
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
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
          if (param_1[0xf] != 0) {
            (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
            param_1[0xf] = 0;
          }
          param_1[0xf] = lVar3;
          plVar4 = (long *)param_1[1];
          lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
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
            if (param_1[0x10] != 0) {
              (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
              param_1[0x10] = 0;
            }
            param_1[0x10] = lVar3;
            plVar4 = (long *)param_1[1];
            lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
            if (*(ulong *)(lVar2 + 0x80) < 0x10) {
              *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
              *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
              lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x250,0x10);
              if (lVar3 == 0) {
                (**(code **)(*plVar4 + 0xb8))(plVar4);
              }
              FUN_014c5570(lVar3,plVar4);
              *(long **)(lVar3 + 8) = plVar4;
              *(long *)(lVar3 + 0x10) = lVar3;
              *(undefined8 *)(lVar3 + 0x18) = 0x250;
              *(undefined8 *)(lVar3 + 0x20) = 0x10;
              *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
              if (lVar3 != 0) {
                (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
              }
              if (param_1[0x11] != 0) {
                (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
                param_1[0x11] = 0;
              }
              param_1[0x11] = lVar3;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


