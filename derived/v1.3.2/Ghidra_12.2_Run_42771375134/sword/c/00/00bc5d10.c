/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc5d10; name: FUN_00bc5d10
 */


undefined8 FUN_00bc5d10(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar4 = FUN_016b8190();
  uVar5 = (uint)((ulong)uVar4 >> 0x20);
  uVar1 = uVar5 - 2;
  if (1 < uVar5) {
    if ((int)uVar4 == 0) {
      if ((int)uVar1 < 6) {
        iVar3 = *(int *)(param_1 + 0x614);
        iVar2 = FUN_00bcfb20(1,0,uVar1);
        if (iVar3 != 0) {
          return 0;
        }
        FUN_00bb7250(param_1,0,iVar2,0);
        lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar7 = *(long *)(lVar6 + 0x58);
        if (lVar7 == 0) {
          iVar3 = FUN_00884820(0);
        }
        else {
          plVar8 = (long *)(lVar7 + 0x48);
          (**(code **)(*plVar8 + 0x10))(plVar8);
          iVar3 = FUN_00884820(lVar7);
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        if (iVar2 != iVar3 + -1) {
          FUN_00bd26a0(*(undefined8 *)(param_1 + 0x5f0),iVar2,1);
          return 1;
        }
      }
    }
    else if (uVar1 < 5) {
      lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar7 == 0) {
        FUN_0150b350(0);
      }
      else {
        plVar8 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0150b350(lVar7);
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      FUN_00bcfb20(0,(int)uVar4 + -1,uVar1);
    }
  }
  return 0;
}


