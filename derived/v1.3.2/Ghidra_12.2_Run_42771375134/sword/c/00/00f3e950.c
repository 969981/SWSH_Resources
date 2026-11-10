/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3e950; name: FUN_00f3e950
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f3e950(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  undefined1 *local_58;
  undefined1 local_44 [4];
  
  puVar5 = PTR_DAT_027194d8;
  lVar6 = FUN_00df1bc0(*(undefined8 *)PTR_DAT_027194d8,&local_58);
  *(undefined4 *)(lVar6 + 0x67c) = 0x3f800000;
  FUN_00e9e5e0();
  lVar9 = *(long *)(lVar6 + 0x588);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))((long *)(lVar9 + 0x48));
    if (*(int *)(lVar9 + 0x54) != 0) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar12 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar9 + 0x58);
          plVar7 = (long *)FUN_0156b190();
          lVar11 = 0;
          if (plVar10 == (long *)0x0) goto LAB_00f3ea1c;
          while (plVar10 != plVar7) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) {
              lVar11 = 0;
              goto LAB_00f3ea1c;
            }
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar12) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = 0;
            if (*(long *)(lVar9 + 0x60) != 0) {
              lVar11 = *(long *)(lVar9 + 0x60) + -0x50;
            }
            goto LAB_00f3ea1c;
          }
          lVar11 = 0;
          iVar12 = iVar2;
          if (iVar2 == 0) goto LAB_00f3ea1c;
        }
        ClearExclusiveLocal();
        lVar11 = 0;
        iVar12 = iVar2;
      } while (iVar2 != 0);
      goto LAB_00f3ea1c;
    }
  }
  lVar11 = 0;
LAB_00f3ea1c:
  local_58 = (undefined1 *)0x73e9feb1a72e2f94;
  FUN_00dc0720(lVar11,&local_58);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  *(undefined1 *)(lVar6 + 0x680) = 0;
  local_44[0] = 1;
  local_58 = local_44;
  FUN_00f35920(*(undefined8 *)puVar5,&local_58);
  FUN_00f3eba0(param_1 + 0x110);
  lVar6 = *(long *)(param_1 + 0x508);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  if (lVar6 != 0) {
    FUN_00f39dd0(param_1 + 0x510);
  }
  if (*(long *)(param_1 + 0x318) != 0) {
    FUN_0167cd30(*(long *)(param_1 + 0x318),0);
  }
  puVar5 = PTR_DAT_02710848;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 == 0) {
    uVar8 = *(undefined8 *)(_DAT_00000060 + 0x630);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x60) + 0x630);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  FUN_016b1c40(uVar8,1);
  lVar6 = *(long *)(*(long *)puVar5 + 0x90);
  if (lVar6 == 0) {
    lVar6 = _DAT_00000060;
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    lVar6 = *(long *)(lVar6 + 0x60);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  puVar5 = PTR_DAT_02710880;
  *(undefined1 *)(lVar6 + 0x790) = 1;
  FUN_01196fd0(*(undefined8 *)(*(long *)puVar5 + 0xc0),1);
  *(undefined1 *)(param_1 + 0x754) = 0;
  return;
}


