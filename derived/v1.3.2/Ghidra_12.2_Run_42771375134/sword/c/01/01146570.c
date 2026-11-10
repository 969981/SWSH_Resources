/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01146570; name: FUN_01146570
 */


void FUN_01146570(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_DAT_02710860;
  plVar9 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,0xd0,8);
    if (lVar6 == 0) {
      (**(code **)(*plVar9 + 0xb8))(plVar9);
    }
    FUN_0117aea0(lVar6,*(undefined1 *)(param_1 + 0x1a2));
    *(long **)(lVar6 + 0x10) = plVar9;
    *(long *)(lVar6 + 0x18) = lVar6;
    *(undefined8 *)(lVar6 + 0x20) = 0xd0;
    *(undefined8 *)(lVar6 + 0x28) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x50) + 0x10))();
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x50) + 0x18))();
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    *(long *)(param_1 + 0x90) = lVar6;
    lVar5 = *(long *)(lVar6 + 0x60);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x100) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x100) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x134);
    *(long *)(param_1 + 0x100) = lVar5;
    uVar10 = (ulong)*(byte *)(*(long *)(param_1 + 0x88) + 0x3ba);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar9;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      plVar7 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x90,8);
      if (plVar7 == (long *)0x0) {
        (**(code **)(*plVar9 + 0xb8))(plVar9);
      }
      FUN_00883c20(plVar7,plVar9);
      plVar7[1] = (long)plVar9;
      plVar7[2] = (long)plVar7;
      plVar7[3] = 0x90;
      plVar7[4] = 8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      if (plVar7 != (long *)0x0) {
        (**(code **)(plVar7[9] + 0x10))();
      }
      if (*(long *)(param_1 + 0xa0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      *(long **)(param_1 + 0xa0) = plVar7;
      (**(code **)(*plVar7 + 0x68))
                (plVar7,*(undefined8 *)(*(long *)(param_1 + 0x88) + uVar10 * 8 + 0x418));
      lVar5 = *(long *)(param_1 + 0x138);
      if (lVar5 != 0) {
        plVar7 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      lVar6 = *(long *)(param_1 + 0xb0);
      *(long *)(param_1 + 0xb0) = lVar5;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      }
      bVar2 = FUN_009fed30(lVar5,5);
      *(byte *)(param_1 + 0x108) = bVar2 & 1;
      uVar4 = FUN_009fe1a0(lVar5,9);
      *(undefined4 *)(param_1 + 0x10c) = uVar4;
      cVar3 = FUN_009ff0e0(*(undefined8 *)(param_1 + 0x138));
      lVar6 = param_1 + 0x180;
      if (cVar3 == '\x02') {
        lVar11 = (long)*(int *)(&DAT_02165bbc + uVar10 * 0xc);
        *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar6 + lVar11 * 8);
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar8 + 0x80) < 0x10) {
          *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          plVar7 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x90,8);
          if (plVar7 == (long *)0x0) {
            (**(code **)(*plVar9 + 0xb8))(plVar9);
          }
          FUN_00883c20(plVar7,plVar9);
          plVar7[1] = (long)plVar9;
          plVar7[2] = (long)plVar7;
          plVar7[3] = 0x90;
          plVar7[4] = 8;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          if (plVar7 != (long *)0x0) {
            (**(code **)(plVar7[9] + 0x10))();
          }
          if (*(long *)(param_1 + 0xb8) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0xb8) = 0;
          }
          *(long **)(param_1 + 0xb8) = plVar7;
          (**(code **)(*plVar7 + 0x68))
                    (plVar7,*(undefined8 *)(*(long *)(param_1 + 0x88) + lVar11 * 8 + 0x418));
          lVar8 = FUN_008ea4d0(auStack_70,plVar9);
          if (lVar8 != 0) {
            (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 0xc0) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0xc0) = 0;
          }
          *(long *)(param_1 + 0xc0) = lVar8;
          FUN_01524b60(lVar8,*(undefined8 *)(*(long *)(param_1 + 0x88) + lVar11 * 8 + 0x9e0));
          lVar11 = (long)*(int *)(&DAT_02165bc0 + uVar10 * 0xc);
          *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar6 + lVar11 * 8);
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar8 + 0x80) < 0x10) {
            *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar9;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            plVar7 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x90,8);
            if (plVar7 == (long *)0x0) {
              (**(code **)(*plVar9 + 0xb8))(plVar9);
            }
            FUN_00883c20(plVar7,plVar9);
            plVar7[1] = (long)plVar9;
            plVar7[2] = (long)plVar7;
            plVar7[3] = 0x90;
            plVar7[4] = 8;
            *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            if (plVar7 != (long *)0x0) {
              (**(code **)(plVar7[9] + 0x10))();
            }
            if (*(long *)(param_1 + 0xd0) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0xd0) + 0x48) + 0x18))();
              *(undefined8 *)(param_1 + 0xd0) = 0;
            }
            *(long **)(param_1 + 0xd0) = plVar7;
            (**(code **)(*plVar7 + 0x68))
                      (plVar7,*(undefined8 *)(*(long *)(param_1 + 0x88) + lVar11 * 8 + 0x418));
            lVar8 = FUN_008ea4d0(auStack_70,plVar9);
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
            }
            if (*(long *)(param_1 + 0xd8) != 0) {
              (**(code **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x48) + 0x18))();
              *(undefined8 *)(param_1 + 0xd8) = 0;
            }
            *(long *)(param_1 + 0xd8) = lVar8;
            FUN_01524b60(lVar8,*(undefined8 *)(*(long *)(param_1 + 0x88) + lVar11 * 8 + 0x9e0));
            lVar8 = (long)*(int *)(&DAT_02165bc4 + uVar10 * 0xc);
            *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar6 + lVar8 * 8);
            lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
            if (*(ulong *)(lVar6 + 0x80) < 0x10) {
              *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar9;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
              plVar7 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x90,8);
              if (plVar7 == (long *)0x0) {
                (**(code **)(*plVar9 + 0xb8))(plVar9);
              }
              FUN_00883c20(plVar7,plVar9);
              plVar7[1] = (long)plVar9;
              plVar7[2] = (long)plVar7;
              plVar7[3] = 0x90;
              plVar7[4] = 8;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
              if (plVar7 != (long *)0x0) {
                (**(code **)(plVar7[9] + 0x10))();
              }
              if (*(long *)(param_1 + 0xe8) != 0) {
                (**(code **)(*(long *)(*(long *)(param_1 + 0xe8) + 0x48) + 0x18))();
                *(undefined8 *)(param_1 + 0xe8) = 0;
              }
              *(long **)(param_1 + 0xe8) = plVar7;
              (**(code **)(*plVar7 + 0x68))
                        (plVar7,*(undefined8 *)(*(long *)(param_1 + 0x88) + lVar8 * 8 + 0x418));
              lVar6 = FUN_008ea4d0(auStack_70,plVar9);
              if (lVar6 != 0) {
                (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
              }
              if (*(long *)(param_1 + 0xf0) != 0) {
                (**(code **)(*(long *)(*(long *)(param_1 + 0xf0) + 0x48) + 0x18))();
                *(undefined8 *)(param_1 + 0xf0) = 0;
              }
              *(long *)(param_1 + 0xf0) = lVar6;
              goto LAB_01146ca0;
            }
          }
        }
      }
      else {
        lVar8 = (long)*(int *)(&DAT_01cd52a8 + uVar10 * 4);
        *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar6 + lVar8 * 8);
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar6 + 0x80) < 0x10) {
          *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar9;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          plVar7 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x90,8);
          if (plVar7 == (long *)0x0) {
            (**(code **)(*plVar9 + 0xb8))(plVar9);
          }
          FUN_00883c20(plVar7,plVar9);
          plVar7[1] = (long)plVar9;
          plVar7[2] = (long)plVar7;
          plVar7[3] = 0x90;
          plVar7[4] = 8;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
          if (plVar7 != (long *)0x0) {
            (**(code **)(plVar7[9] + 0x10))();
          }
          if (*(long *)(param_1 + 0xb8) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0xb8) = 0;
          }
          *(long **)(param_1 + 0xb8) = plVar7;
          (**(code **)(*plVar7 + 0x68))
                    (plVar7,*(undefined8 *)(*(long *)(param_1 + 0x88) + lVar8 * 8 + 0x418));
          lVar6 = FUN_008ea4d0(auStack_68,plVar9);
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 0xc0) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0xc0) = 0;
          }
          *(long *)(param_1 + 0xc0) = lVar6;
LAB_01146ca0:
          FUN_01524b60(lVar6,*(undefined8 *)(*(long *)(param_1 + 0x88) + lVar8 * 8 + 0x9e0));
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


