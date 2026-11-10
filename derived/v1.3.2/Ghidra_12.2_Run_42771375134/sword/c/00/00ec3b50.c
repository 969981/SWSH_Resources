/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec3b50; name: FUN_00ec3b50
 */


int FUN_00ec3b50(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long local_68;
  
  if (((*(byte *)(param_2 + 3) & 0x43) != 0) && (uVar3 = FUN_00f2eac0(), (uVar3 & 1) != 0)) {
    FUN_00f2ebb0();
    return 1;
  }
  FUN_00ec3fd0();
  puVar2 = PTR_DAT_027194d8;
  lVar11 = *(long *)PTR_DAT_027194d8;
  plVar1 = *(long **)(lVar11 + 0xb8);
  for (plVar10 = *(long **)(lVar11 + 0xb0); plVar10 != plVar1; plVar10 = plVar10 + 1) {
    lVar4 = FUN_00e813b0(*plVar10 + 0x50);
    if ((lVar4 != 0) && (uVar3 = (**(code **)(*(long *)*plVar10 + 0x88))(), (uVar3 & 1) == 0))
    goto LAB_00ec3bf0;
  }
  lVar4 = 0;
LAB_00ec3bf0:
  lVar5 = *(long *)(*param_2 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  plVar10 = *(long **)(lVar11 + 0xb0);
  plVar1 = *(long **)(lVar11 + 0xb8);
  if (plVar10 != plVar1) {
    iVar7 = 0;
    do {
      if (((*(byte *)(*plVar10 + 0x38f) & 1) != 0) &&
         (uVar3 = (**(code **)(*(long *)*plVar10 + 0x88))(), (uVar3 & 1) == 0)) {
        plVar9 = (long *)*plVar10;
        uVar3 = FUN_00ec9850(plVar9 + 10);
        if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*plVar9 + 0x228))(plVar9), (uVar3 & 1) != 0)
           ) {
          FUN_00f2ee10();
          iVar7 = 1;
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar1 != plVar10);
    if (iVar7 != 0) goto joined_r0x00ec3fc0;
  }
  *(undefined1 *)(lVar4 + 0x6cd) = 0;
  plVar1 = *(long **)(lVar11 + 0xb8);
  for (plVar10 = *(long **)(lVar11 + 0xb0); plVar10 != plVar1; plVar10 = plVar10 + 1) {
    if (((*(byte *)(*plVar10 + 0x38e) >> 1 & 1) != 0) &&
       (uVar3 = (**(code **)(*(long *)*plVar10 + 0x88))(), (uVar3 & 1) == 0)) {
      plVar8 = (long *)*plVar10;
      plVar9 = (long *)(**(code **)plVar8[10])(plVar8 + 10);
      lVar11 = FUN_00e5a8f0();
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)lVar11) {
          uVar3 = (**(code **)(*plVar8 + 0x178))();
          if (((uVar3 & 1) != 0) && (plVar8[0x74] == 0x33f8598a3ed17609)) {
            *(undefined1 *)(lVar4 + 0x6cd) = 1;
          }
          break;
        }
      }
    }
  }
  if ((*(byte *)(param_2 + 3) >> 3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
    lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x270);
    if (lVar11 == 0) {
      uVar6 = FUN_01501530(0,uVar6);
      FUN_00ec90f0(uVar6,param_2);
      lVar11 = *(long *)(lVar5 + 0x58);
    }
    else {
      plVar10 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN_01501530(lVar11,uVar6);
      uVar6 = (**(code **)(*plVar10 + 0x18))(plVar10);
      FUN_00ec90f0(uVar6,param_2);
      lVar11 = *(long *)(lVar5 + 0x58);
    }
    if (lVar11 == 0) {
      iVar7 = 0;
      local_68 = 0;
      FUN_00ec9510(param_1,&local_68);
      goto joined_r0x00ec3fc0;
    }
    plVar10 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    local_68 = lVar11;
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_00ec9510(param_1,&local_68);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    local_68 = 0;
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  iVar7 = 0;
joined_r0x00ec3fc0:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (iVar7 == 0) {
    FUN_00f2ef00();
    lVar11 = *(long *)puVar2;
    plVar10 = *(long **)(lVar11 + 0xb0);
    plVar1 = *(long **)(lVar11 + 0xb8);
    if (plVar10 != plVar1) {
      do {
        if (((*(byte *)(*plVar10 + 0x38d) >> 5 & 1) != 0) &&
           (uVar3 = (**(code **)(*(long *)*plVar10 + 0x88))(), (uVar3 & 1) == 0)) {
          lVar4 = *plVar10;
          plVar9 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x50))((undefined8 *)(lVar4 + 0x50));
          lVar11 = FUN_00fd8f80();
          for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
            if (plVar9 == (long *)lVar11) {
              uVar3 = FUN_00eca5a0(*(undefined8 *)(param_1 + 0x130),lVar4);
              if ((uVar3 & 1) != 0) {
                FUN_00eca640(*(undefined8 *)(param_1 + 0x130),lVar4,param_2[2]);
              }
              break;
            }
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar1);
      lVar11 = *(long *)puVar2;
      plVar10 = *(long **)(lVar11 + 0xb0);
      plVar1 = *(long **)(lVar11 + 0xb8);
      if (plVar10 != plVar1) {
        iVar7 = 0;
        do {
          if (((*(byte *)(*plVar10 + 0x38f) >> 1 & 1) != 0) &&
             (uVar3 = (**(code **)(*(long *)*plVar10 + 0x88))(), (uVar3 & 1) == 0)) {
            lVar4 = *plVar10;
            plVar9 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x50))
                                       ((undefined8 *)(lVar4 + 0x50));
            lVar11 = FUN_015bed20();
            for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
              if (plVar9 == (long *)lVar11) {
                if (iVar7 == 0) {
                  if (*(long **)(lVar4 + 0x618) == (long *)0x0) {
                    iVar7 = 0;
                  }
                  else {
                    uVar3 = (**(code **)(**(long **)(lVar4 + 0x618) + 0x68))();
                    if ((uVar3 & 1) == 0) {
                      iVar7 = 0;
                    }
                    else {
                      if (*(long **)(lVar4 + 0x618) != (long *)0x0) {
                        (**(code **)(**(long **)(lVar4 + 0x618) + 0x70))();
                      }
                      iVar7 = 1;
                    }
                  }
                }
                break;
              }
            }
          }
          plVar10 = plVar10 + 1;
          if (plVar10 == plVar1) {
            return iVar7;
          }
        } while( true );
      }
    }
    iVar7 = 0;
  }
  return iVar7;
}


