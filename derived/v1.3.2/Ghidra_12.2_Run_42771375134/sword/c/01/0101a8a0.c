/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0101a8a0; name: FUN_0101a8a0
 */


void FUN_0101a8a0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_48 [8];
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x18,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    puVar2[2] = 0;
    *puVar2 = 0xf4b17a579f18960;
    puVar2[1] = 0x82a2b175229d6a5b;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    lVar3 = *(long *)(param_1 + 0x98);
    *(undefined8 **)(param_1 + 0x98) = puVar2;
    if (lVar3 != 0) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))
                (*(long **)(param_1 + 0xa0),lVar3,*(undefined8 *)(param_1 + 0xa8),
                 *(undefined8 *)(param_1 + 0xb0));
      puVar2 = *(undefined8 **)(param_1 + 0x98);
    }
    *(long **)(param_1 + 0xa0) = param_2;
    *(undefined8 *)(param_1 + 0xa8) = 0x18;
    *(undefined8 *)(param_1 + 0xb0) = 8;
    FUN_01028f70(puVar2);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x140,0x10);
      if (lVar4 == 0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_0101c740(lVar4,param_1,param_2);
      *(long **)(lVar4 + 8) = param_2;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x140;
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x60) = 0;
      }
      *(long *)(param_1 + 0x60) = lVar4;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x90,8);
        if (lVar4 == 0) {
          (**(code **)(*param_2 + 0xb8))(param_2);
        }
        FUN_010194a0(lVar4,param_1);
        *(long **)(lVar4 + 8) = param_2;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 0x90;
        *(undefined8 *)(lVar4 + 0x20) = 8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x68) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x68) = 0;
        }
        *(long *)(param_1 + 0x68) = lVar4;
        lVar3 = FUN_0101b600(auStack_58,param_2);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x80) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x80) = 0;
        }
        *(long *)(param_1 + 0x80) = lVar3;
        FUN_01065770();
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar3 + 0x80) < 0x10) {
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x78,8);
          if (lVar4 == 0) {
            (**(code **)(*param_2 + 0xb8))(param_2);
          }
          FUN_01065900(lVar4,param_2);
          *(long **)(lVar4 + 8) = param_2;
          *(long *)(lVar4 + 0x10) = lVar4;
          *(undefined8 *)(lVar4 + 0x18) = 0x78;
          *(undefined8 *)(lVar4 + 0x20) = 8;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 0x88) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x88) = 0;
          }
          *(long *)(param_1 + 0x88) = lVar4;
          FUN_01065d00(lVar4,param_2);
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar3 + 0x80) < 0x10) {
            *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
            lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0xcb0,0x10);
            if (lVar4 == 0) {
              (**(code **)(*param_2 + 0xb8))(param_2);
            }
            FUN_010040a0(lVar4,param_2);
            *(long **)(lVar4 + 8) = param_2;
            *(long *)(lVar4 + 0x10) = lVar4;
            *(undefined8 *)(lVar4 + 0x18) = 0xcb0;
            *(undefined8 *)(lVar4 + 0x20) = 0x10;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            if (lVar4 != 0) {
              (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
            }
            if (*(long *)(param_1 + 0x90) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
              *(undefined8 *)(param_1 + 0x90) = 0;
            }
            *(long *)(param_1 + 0x90) = lVar4;
            thunk_FUN_01006730(lVar4,param_2);
            plVar5 = *(long **)(*(long *)PTR_DAT_02710540 + 0xa8);
            lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
            if (*(ulong *)(lVar3 + 0x80) < 0x10) {
              *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
              lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0xd80,0x10);
              if (lVar4 == 0) {
                (**(code **)(*plVar5 + 0xb8))(plVar5);
              }
              FUN_014a9f70(lVar4,plVar5);
              *(long **)(lVar4 + 8) = plVar5;
              *(long *)(lVar4 + 0x10) = lVar4;
              *(undefined8 *)(lVar4 + 0x18) = 0xd80;
              *(undefined8 *)(lVar4 + 0x20) = 0x10;
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
              if (lVar4 != 0) {
                (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
              }
              if (*(long *)(param_1 + 0x70) != 0) {
                (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
                *(undefined8 *)(param_1 + 0x70) = 0;
              }
              *(long *)(param_1 + 0x70) = lVar4;
              lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
              if (*(ulong *)(lVar3 + 0x80) < 0x10) {
                *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
                *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x3850,8);
                if (lVar4 == 0) {
                  (**(code **)(*plVar5 + 0xb8))(plVar5);
                }
                FUN_00c57340(lVar4,plVar5);
                *(long **)(lVar4 + 8) = plVar5;
                *(long *)(lVar4 + 0x10) = lVar4;
                *(undefined8 *)(lVar4 + 0x18) = 0x3850;
                *(undefined8 *)(lVar4 + 0x20) = 8;
                *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
                if (lVar4 != 0) {
                  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
                }
                if (*(long *)(param_1 + 0x78) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x78) = 0;
                }
                *(long *)(param_1 + 0x78) = lVar4;
                lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
                if (*(ulong *)(lVar3 + 0x80) < 0x10) {
                  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
                  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0x360,0x10);
                  if (lVar4 == 0) {
                    (**(code **)(*param_2 + 0xb8))(param_2);
                  }
                  FUN_015c7a00(lVar4,param_2);
                  *(long **)(lVar4 + 8) = param_2;
                  *(long *)(lVar4 + 0x10) = lVar4;
                  *(undefined8 *)(lVar4 + 0x18) = 0x360;
                  *(undefined8 *)(lVar4 + 0x20) = 0x10;
                  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
                  if (lVar4 != 0) {
                    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
                  }
                  if (*(long *)(param_1 + 0xb8) != 0) {
                    (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
                    *(undefined8 *)(param_1 + 0xb8) = 0;
                  }
                  *(long *)(param_1 + 0xb8) = lVar4;
                  lVar3 = FUN_0101b710(auStack_48,param_2);
                  if (lVar3 != 0) {
                    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
                  }
                  if (*(long *)(param_1 + 0xc0) != 0) {
                    (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 0x18))();
                    *(undefined8 *)(param_1 + 0xc0) = 0;
                  }
                  *(long *)(param_1 + 0xc0) = lVar3;
                  FUN_0102b490(lVar3);
                  FUN_0101b020(param_1,param_2);
                  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x30,8);
                  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
                  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
                    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
                    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                    puVar2[4] = 0;
                    puVar2[5] = 0;
                    *(undefined4 *)((long)puVar2 + 0x2c) = 4;
                    puVar2[2] = 0;
                    puVar2[3] = 0;
                    *puVar2 = 0;
                    puVar2[1] = 0;
                    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
                    lVar3 = *(long *)(param_1 + 0xd0);
                    *(undefined8 **)(param_1 + 0xd0) = puVar2;
                    if (lVar3 != 0) {
                      (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))
                                (*(long **)(param_1 + 0xd8),lVar3,*(undefined8 *)(param_1 + 0xe0),
                                 *(undefined8 *)(param_1 + 0xe8));
                      puVar2 = *(undefined8 **)(param_1 + 0xd0);
                    }
                    *(long **)(param_1 + 0xd8) = param_2;
                    *(undefined8 *)(param_1 + 0xe0) = 0x30;
                    *(undefined8 *)(param_1 + 0xe8) = 8;
                    FUN_0106ad60(puVar2,1);
                    return;
                  }
                }
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


