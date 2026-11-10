/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0114adb0; name: FUN_0114adb0
 */


void FUN_0114adb0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long local_48;
  
  uVar6 = (ulong)*(byte *)(*(long *)(param_1 + 0x88) + 0x3ba);
  if ((uVar6 < 5) &&
     (plVar8 = *(long **)(*(long *)(param_1 + 0x88) + uVar6 * 8 + 0x418), plVar8 != (long *)0x0)) {
    plVar7 = plVar8 + 9;
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar2 = (**(code **)(*plVar8 + 0x50))(plVar8,0);
    if (lVar2 != 0) {
      iVar1 = FUN_0087afd0();
      if (iVar1 == 0) {
        FUN_0087b060(lVar2,1);
      }
      lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      if (*(char *)(param_1 + 0x1a4) != '\0') {
        plVar8 = *(long **)(lVar9 + 0x58);
        if (plVar8 != (long *)0x0) {
          (**(code **)(plVar8[9] + 0x10))();
        }
        uVar3 = (**(code **)(*plVar8 + 0x50))(plVar8,*(undefined4 *)(param_1 + 0x1a8));
        if (plVar8 != (long *)0x0) {
          (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
        }
        FUN_00866390(uVar3,lVar2);
      }
      if (*(char *)(param_1 + 0x1ac) != '\0') {
        plVar8 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0xb8,8);
        if (lVar5 == 0) {
          (**(code **)(*plVar8 + 0xb8))(plVar8);
        }
        FUN_00866320(lVar5,plVar8,lVar2);
        *(long **)(lVar5 + 8) = plVar8;
        *(long *)(lVar5 + 0x10) = lVar5;
        *(undefined8 *)(lVar5 + 0x18) = 0xb8;
        *(undefined8 *)(lVar5 + 0x20) = 8;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        uVar6 = FUN_015060c0(lVar2,*(undefined4 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b4)
                             ,plVar8,1);
        if ((uVar6 & 1) != 0) {
          local_48 = lVar5;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
          }
          FUN_01505ea0(lVar2,&local_48,*(undefined4 *)(param_1 + 0x1b0),
                       *(undefined4 *)(param_1 + 0x1b4));
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
            local_48 = 0;
          }
        }
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
        }
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        }
      }
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  return;
}


