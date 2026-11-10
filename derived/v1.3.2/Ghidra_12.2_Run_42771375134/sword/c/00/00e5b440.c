/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5b440; name: FUN_00e5b440
 */


void FUN_00e5b440(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if ((*(char *)(param_1 + 0xc64) != '\0') && (*(char *)(param_1 + 0xc65) == '\0')) {
    if (*(long *)(param_1 + 0x1a8) != -0x340d631b7bddd9bb) {
      lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
      if (lVar4 == 0) {
        uVar2 = FUN_01510f00(0,*(undefined8 *)(param_1 + 0x1a8));
      }
      else {
        plVar5 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        uVar2 = FUN_01510f00(lVar4,*(undefined8 *)(param_1 + 0x1a8));
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
    if (*(int *)(param_1 + 0xc60) < 1) {
      if (0xb < *(int *)(*(long *)PTR_DAT_0271fc30 + 0x50)) {
        if (*(int *)(*(long *)PTR_DAT_0271fc30 + 0x50) != 0xc) {
          return;
        }
        lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        lVar4 = *(long *)(lVar3 + 0x7b0);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        lVar3 = *(long *)(lVar4 + 0x78);
        if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00e5b640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
          return;
        }
        plVar5 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        iVar1 = *(int *)(lVar3 + 0x54);
        (**(code **)(*plVar5 + 0x18))(plVar5);
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        if (iVar1 == 0) {
          return;
        }
      }
      if ((*(long *)(param_1 + 0xc68) != 0) && (*(int *)(*(long *)(param_1 + 0xc68) + 0x54) != 0)) {
        lVar3 = 0;
        if (*(long *)(param_1 + 0xc68) != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + 0xc68) + 0x60);
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            uVar2 = FUN_015b5320(lVar3);
            lVar3 = lVar3 + -0x50;
            if ((uVar2 & 1) == 0) {
              lVar3 = 0;
            }
          }
        }
        uVar2 = FUN_00ddfc80(0,param_1 + 0xb90,lVar3 + 0xb0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
      }
      FUN_00e5c530(param_1);
      return;
    }
  }
  return;
}


