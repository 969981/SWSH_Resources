/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bca6d0; name: FUN_00bca6d0
 */


undefined8 FUN_00bca6d0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_60 [24];
  long local_48;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar4 = FUN_016b8190();
  uVar6 = (uint)((ulong)uVar4 >> 0x20);
  uVar1 = uVar6 - 2;
  if (1 < uVar6) {
    if ((int)uVar4 == 0) {
      if ((int)uVar1 < 6) {
        uVar2 = *(undefined4 *)(param_1 + 0x614);
        uVar4 = 1;
        uVar3 = FUN_00bcfb20(1,0,uVar1);
        goto LAB_00bca7e8;
      }
    }
    else if (uVar1 < 5) {
      lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar7 == 0) {
        uVar2 = FUN_0150b350(0);
      }
      else {
        plVar9 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        uVar2 = FUN_0150b350(lVar7);
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      uVar3 = FUN_00bcfb20(0,(int)uVar4 + -1,uVar1);
      uVar4 = 0;
      goto LAB_00bca7e8;
    }
  }
  uVar2 = 0xffffffff;
  uVar4 = 2;
  uVar3 = 0xffffffff;
LAB_00bca7e8:
  uVar5 = FUN_00bca610(param_1,uVar4,uVar2,uVar3);
  if ((uVar5 & 1) != 0) {
    uVar5 = FUN_00bc8500(param_1,uVar4,uVar2,uVar3);
    if ((uVar5 & 1) == 0) {
      FUN_00bc46a0(param_1,0x1c,0);
    }
    else {
      uVar5 = FUN_00bca420(param_1);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      FUN_00bc46a0(param_1,0x19,0);
      FUN_006cf0a0(auStack_60,&DAT_02637c48);
      FUN_016d3620(auStack_60);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
    }
  }
  return 0;
}


