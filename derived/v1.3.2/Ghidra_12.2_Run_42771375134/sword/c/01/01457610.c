/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01457610; name: FUN_01457610
 */


void FUN_01457610(long param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  lVar2 = *(long *)(param_1 + 0x98);
  *(long *)(param_1 + 0x98) = lVar3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  lVar3 = *param_3;
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  lVar2 = *(long *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = lVar3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  lVar3 = *param_4;
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa8) = lVar3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  puVar1 = PTR_DAT_02710860;
  plVar4 = *(long **)(param_1 + 8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_0077d050(lVar2,0x200);
    *(long **)(lVar2 + 8) = plVar4;
    *(long *)(lVar2 + 0x10) = lVar2;
    *(undefined8 *)(lVar2 + 0x18) = 0x80;
    *(undefined8 *)(lVar2 + 0x20) = 8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    *(long *)(param_1 + 0x60) = lVar2;
    plVar4 = *(long **)(param_1 + 8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0xb8))(plVar4);
      }
      FUN_0077d050(lVar2,0x200);
      *(long **)(lVar2 + 8) = plVar4;
      *(long *)(lVar2 + 0x10) = lVar2;
      *(undefined8 *)(lVar2 + 0x18) = 0x80;
      *(undefined8 *)(lVar2 + 0x20) = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x68) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      *(long *)(param_1 + 0x68) = lVar2;
      plVar4 = *(long **)(param_1 + 8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
        if (lVar2 == 0) {
          (**(code **)(*plVar4 + 0xb8))(plVar4);
        }
        FUN_0077d050(lVar2,0x80);
        *(long **)(lVar2 + 8) = plVar4;
        *(long *)(lVar2 + 0x10) = lVar2;
        *(undefined8 *)(lVar2 + 0x18) = 0x80;
        *(undefined8 *)(lVar2 + 0x20) = 8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x70) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x70) = 0;
        }
        *(long *)(param_1 + 0x70) = lVar2;
        plVar4 = *(long **)(param_1 + 8);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar3 + 0x80) < 0x10) {
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
          if (lVar2 == 0) {
            (**(code **)(*plVar4 + 0xb8))(plVar4);
          }
          FUN_0077d050(lVar2,0x80);
          *(long **)(lVar2 + 8) = plVar4;
          *(long *)(lVar2 + 0x10) = lVar2;
          *(undefined8 *)(lVar2 + 0x18) = 0x80;
          *(undefined8 *)(lVar2 + 0x20) = 8;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          if (lVar2 != 0) {
            (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 0x78) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x78) = 0;
          }
          *(long *)(param_1 + 0x78) = lVar2;
          plVar4 = *(long **)(param_1 + 8);
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar3 + 0x80) < 0x10) {
            *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
            lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
            if (lVar2 == 0) {
              (**(code **)(*plVar4 + 0xb8))(plVar4);
            }
            FUN_0077d050(lVar2,0x80);
            *(long **)(lVar2 + 8) = plVar4;
            *(long *)(lVar2 + 0x10) = lVar2;
            *(undefined8 *)(lVar2 + 0x18) = 0x80;
            *(undefined8 *)(lVar2 + 0x20) = 8;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            if (lVar2 != 0) {
              (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
            }
            if (*(long *)(param_1 + 0x80) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
              *(undefined8 *)(param_1 + 0x80) = 0;
            }
            *(long *)(param_1 + 0x80) = lVar2;
            plVar4 = *(long **)(param_1 + 8);
            lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
            if (*(ulong *)(lVar3 + 0x80) < 0x10) {
              *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
              lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
              if (lVar2 == 0) {
                (**(code **)(*plVar4 + 0xb8))(plVar4);
              }
              FUN_0077d050(lVar2,0x80);
              *(long **)(lVar2 + 8) = plVar4;
              *(long *)(lVar2 + 0x10) = lVar2;
              *(undefined8 *)(lVar2 + 0x18) = 0x80;
              *(undefined8 *)(lVar2 + 0x20) = 8;
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
              if (lVar2 != 0) {
                (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
              }
              if (*(long *)(param_1 + 0x88) != 0) {
                (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
                *(undefined8 *)(param_1 + 0x88) = 0;
              }
              *(long *)(param_1 + 0x88) = lVar2;
              plVar4 = *(long **)(param_1 + 8);
              lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
              if (*(ulong *)(lVar3 + 0x80) < 0x10) {
                *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
                *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x80,8);
                if (lVar2 == 0) {
                  (**(code **)(*plVar4 + 0xb8))(plVar4);
                }
                FUN_0077d050(lVar2,0x80);
                *(long **)(lVar2 + 8) = plVar4;
                *(long *)(lVar2 + 0x10) = lVar2;
                *(undefined8 *)(lVar2 + 0x18) = 0x80;
                *(undefined8 *)(lVar2 + 0x20) = 8;
                *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
                if (lVar2 != 0) {
                  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
                }
                if (*(long *)(param_1 + 0x90) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x90) = 0;
                }
                *(long *)(param_1 + 0x90) = lVar2;
                *(undefined1 *)(param_1 + 0xb0) = 1;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


