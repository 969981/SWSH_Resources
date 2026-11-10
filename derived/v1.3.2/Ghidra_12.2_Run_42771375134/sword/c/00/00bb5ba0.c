/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb5ba0; name: FUN_00bb5ba0
 */


void FUN_00bb5ba0(long param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long local_98;
  char acStack_90 [64];
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar6 = FUN_016b8190();
  uVar8 = *(undefined8 *)(param_1 + 0x5e8);
  uVar7 = (uint)((ulong)uVar6 >> 0x20);
  uVar2 = uVar7 - 2;
  if (1 < uVar7) {
    if ((int)uVar6 == 0) {
      if ((int)uVar2 < 6) {
        uVar3 = *(undefined4 *)(param_1 + 0x614);
        uVar6 = 1;
        uVar4 = FUN_00bcfb20(1,0,uVar2);
        goto LAB_00bb5cc8;
      }
    }
    else if (uVar2 < 5) {
      lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar9 == 0) {
        uVar3 = FUN_0150b350(0);
      }
      else {
        plVar11 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        uVar3 = FUN_0150b350(lVar9);
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      uVar4 = FUN_00bcfb20(0,(int)uVar6 + -1,uVar2);
      uVar6 = 0;
      goto LAB_00bb5cc8;
    }
  }
  uVar3 = 0xffffffff;
  uVar6 = 2;
  uVar4 = 0xffffffff;
LAB_00bb5cc8:
  iVar5 = FUN_00bceb70(uVar8,uVar6,uVar3,uVar4,param_2);
  snprintf(acStack_90,0x40,"anime_L_window_marking_00_L_icon_marking_%02d",param_2);
  FUN_00bb8ff0(&local_98,acStack_90,&PTR_s__default_02637ad0 + iVar5);
  puVar1 = (undefined8 *)PTR_PTR_02710928;
  if (local_98 != 0) {
    puVar1 = (undefined8 *)(local_98 + 0x60);
  }
  FUN_00ffcf80(param_1 + 0x100,*puVar1);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  return;
}


