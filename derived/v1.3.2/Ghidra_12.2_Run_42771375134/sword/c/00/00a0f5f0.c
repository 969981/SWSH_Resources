/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0f5f0; name: FUN_00a0f5f0
 */


void FUN_00a0f5f0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [8];
  undefined1 auStack_38 [8];
  
  plVar2 = (long *)FUN_00ff93d0();
  lVar3 = FUN_00a11b50(auStack_48,plVar2);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x158) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  *(long *)(param_1 + 0x158) = lVar3;
  lVar3 = FUN_00a11c80(auStack_38,plVar2);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x160) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  *(long *)(param_1 + 0x160) = lVar3;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2);
    }
    FUN_0077d050(lVar4,0x100);
    *(long **)(lVar4 + 8) = plVar2;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x128) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x128) = 0;
    }
    *(long *)(param_1 + 0x128) = lVar4;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
      if (lVar4 == 0) {
        (**(code **)(*plVar2 + 0xb8))(plVar2);
      }
      FUN_0077d050(lVar4,0x100);
      *(long **)(lVar4 + 8) = plVar2;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x80;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x130) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x130) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x130) = 0;
      }
      *(long *)(param_1 + 0x130) = lVar4;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
        if (lVar4 == 0) {
          (**(code **)(*plVar2 + 0xb8))(plVar2);
        }
        FUN_0077d050(lVar4,0x100);
        *(long **)(lVar4 + 8) = plVar2;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 0x80;
        *(undefined8 *)(lVar4 + 0x20) = 8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x138) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x138) = 0;
        }
        *(long *)(param_1 + 0x138) = lVar4;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar3 + 0x80) < 0x10) {
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
          if (lVar4 == 0) {
            (**(code **)(*plVar2 + 0xb8))(plVar2);
          }
          FUN_0077d050(lVar4,0x100);
          *(long **)(lVar4 + 8) = plVar2;
          *(long *)(lVar4 + 0x10) = lVar4;
          *(undefined8 *)(lVar4 + 0x18) = 0x80;
          *(undefined8 *)(lVar4 + 0x20) = 8;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 0x140) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x140) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x140) = 0;
          }
          *(long *)(param_1 + 0x140) = lVar4;
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar3 + 0x80) < 0x10) {
            *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
            lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
            if (lVar4 == 0) {
              (**(code **)(*plVar2 + 0xb8))(plVar2);
            }
            FUN_0077d050(lVar4,0x100);
            *(long **)(lVar4 + 8) = plVar2;
            *(long *)(lVar4 + 0x10) = lVar4;
            *(undefined8 *)(lVar4 + 0x18) = 0x80;
            *(undefined8 *)(lVar4 + 0x20) = 8;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            if (lVar4 != 0) {
              (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
            }
            if (*(long *)(param_1 + 0x148) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0x148) + 0x48) + 0x18))();
              *(undefined8 *)(param_1 + 0x148) = 0;
            }
            *(long *)(param_1 + 0x148) = lVar4;
            lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
            if (*(ulong *)(lVar3 + 0x80) < 0x10) {
              *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
              lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
              if (lVar4 == 0) {
                (**(code **)(*plVar2 + 0xb8))(plVar2);
              }
              FUN_0077d050(lVar4,0x100);
              *(long **)(lVar4 + 8) = plVar2;
              *(long *)(lVar4 + 0x10) = lVar4;
              *(undefined8 *)(lVar4 + 0x18) = 0x80;
              *(undefined8 *)(lVar4 + 0x20) = 8;
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
              if (lVar4 != 0) {
                (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
              }
              if (*(long *)(param_1 + 0x150) != 0) {
                (**(code **)(*(long *)(*(long *)(param_1 + 0x150) + 0x48) + 0x18))();
                *(undefined8 *)(param_1 + 0x150) = 0;
              }
              *(long *)(param_1 + 0x150) = lVar4;
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


