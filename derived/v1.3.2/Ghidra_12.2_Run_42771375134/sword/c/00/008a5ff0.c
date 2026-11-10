/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a5ff0; name: FUN_008a5ff0
 */


void FUN_008a5ff0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_38;
  
  puVar5 = PTR_DAT_02710860;
  plVar8 = *(long **)(param_1 + 8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar6 + 0x80) < 0x10) {
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    lVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,0x180,0x10);
    if (lVar7 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_016a6780(lVar7,plVar8);
    *(long **)(lVar7 + 8) = plVar8;
    *(long *)(lVar7 + 0x10) = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 0x180;
    *(undefined8 *)(lVar7 + 0x20) = 0x10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    *(long *)(param_1 + 0xb0) = lVar7;
    plVar8 = *(long **)(param_1 + 8);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (*(ulong *)(lVar6 + 0x80) < 0x10) {
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,0x180,0x10);
      if (lVar7 == 0) {
        (**(code **)(*plVar8 + 0xb8))(plVar8);
      }
      FUN_016a7120(lVar7,plVar8);
      *(long **)(lVar7 + 8) = plVar8;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 0x180;
      *(undefined8 *)(lVar7 + 0x20) = 0x10;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0xb8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xb8) = 0;
      }
      *(long *)(param_1 + 0xb8) = lVar7;
      plVar8 = *(long **)(param_1 + 8);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (*(ulong *)(lVar6 + 0x80) < 0x10) {
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        lVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,0x3c0,0x10);
        if (lVar7 == 0) {
          (**(code **)(*plVar8 + 0xb8))(plVar8);
        }
        FUN_0168a080(lVar7,plVar8);
        *(undefined8 *)(lVar7 + 0x380) = 0x3c0;
        *(long **)(lVar7 + 0x370) = plVar8;
        *(long *)(lVar7 + 0x378) = lVar7;
        *(undefined8 *)(lVar7 + 0x388) = 0x10;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x3b0) + 0x10))(lVar7 + 0x3b0);
        }
        lVar6 = *(long *)(param_1 + 0x138);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x3b0) + 0x18))(lVar6 + 0x3b0);
          *(undefined8 *)(param_1 + 0x138) = 0;
        }
        *(long *)(param_1 + 0x138) = lVar7;
        plVar8 = *(long **)(param_1 + 8);
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (*(ulong *)(lVar6 + 0x80) < 0x10) {
          *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          lVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,0x3c0,0x10);
          if (lVar7 == 0) {
            (**(code **)(*plVar8 + 0xb8))(plVar8);
          }
          FUN_0168a980(lVar7,plVar8);
          *(undefined8 *)(lVar7 + 0x380) = 0x3c0;
          *(long **)(lVar7 + 0x370) = plVar8;
          *(long *)(lVar7 + 0x378) = lVar7;
          *(undefined8 *)(lVar7 + 0x388) = 0x10;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x3b0) + 0x10))(lVar7 + 0x3b0);
          }
          lVar6 = *(long *)(param_1 + 0x140);
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x3b0) + 0x18))(lVar6 + 0x3b0);
            *(undefined8 *)(param_1 + 0x140) = 0;
          }
          *(long *)(param_1 + 0x140) = lVar7;
          FUN_016a6840(*(undefined8 *)(param_1 + 0xb0),0);
          FUN_016a7560(*(undefined8 *)(param_1 + 0xb8),0);
          FUN_0168a180(*(undefined8 *)(param_1 + 0x138),0);
          FUN_0168aa80(*(undefined8 *)(param_1 + 0x140),0);
          plVar8 = *(long **)(param_1 + 8);
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
          if (*(ulong *)(lVar6 + 0x80) < 0x10) {
            *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar8;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
            lVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,0xd0,0x10);
            if (lVar7 == 0) {
              (**(code **)(*plVar8 + 0xb8))(plVar8);
            }
            FUN_015f5e90(lVar7,plVar8);
            *(long **)(lVar7 + 8) = plVar8;
            *(long *)(lVar7 + 0x10) = lVar7;
            *(undefined8 *)(lVar7 + 0x18) = 0xd0;
            *(undefined8 *)(lVar7 + 0x20) = 0x10;
            *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
            }
            if (*(long *)(param_1 + 0xc0) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 0x18))();
              *(undefined8 *)(param_1 + 0xc0) = 0;
            }
            *(long *)(param_1 + 0xc0) = lVar7;
            FUN_008a6510(param_1);
            FUN_016a5c40(&local_38,*(undefined8 *)(param_1 + 8));
            if (*(long *)(param_1 + 0x128) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0x128) + 0x48) + 0x18))();
              *(undefined8 *)(param_1 + 0x128) = 0;
            }
            *(undefined8 *)(param_1 + 0x128) = local_38;
            FUN_016a5c70(&local_38,*(undefined8 *)(param_1 + 8));
            plVar8 = *(long **)(param_1 + 0x130);
            if (plVar8 != (long *)0x0) {
              lVar6 = plVar8[0xb];
              piVar1 = (int *)(lVar6 + 0x54);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                *(undefined8 *)(lVar6 + 0x60) = 0;
                (**(code **)(*plVar8 + 0x18))();
              }
              *(undefined8 *)(param_1 + 0x130) = 0;
            }
            *(undefined8 *)(param_1 + 0x130) = local_38;
            FUN_016a61c0(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0x128));
            FUN_016a61c0(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0x128));
            FUN_016a61c0(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0x128));
            FUN_016a61c0(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x128));
            FUN_016a61c0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0x128));
            FUN_016a61c0(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x128));
            FUN_016a61c0(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x128));
            FUN_016a61c0(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x128));
            FUN_016a61c0(*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x128));
            FUN_016a61c0(*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0x128));
            FUN_016a61c0(*(undefined8 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x128));
            FUN_016a61c0(*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128));
            FUN_0070cf00(*(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x128));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


