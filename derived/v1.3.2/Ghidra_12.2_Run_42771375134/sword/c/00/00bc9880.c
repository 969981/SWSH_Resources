/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc9880; name: FUN_00bc9880
 */


void FUN_00bc9880(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
        uVar2 = *(undefined4 *)(param_1 + 0x614);
        uVar4 = 1;
        uVar3 = FUN_00bcfb20(1,0,uVar1);
        goto LAB_00bc999c;
      }
    }
    else if (uVar1 < 5) {
      lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar6 == 0) {
        uVar2 = FUN_0150b350(0);
      }
      else {
        plVar8 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        uVar2 = FUN_0150b350(lVar6);
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      uVar3 = FUN_00bcfb20(0,(int)uVar4 + -1,uVar1);
      uVar4 = 0;
      goto LAB_00bc999c;
    }
  }
  uVar2 = 0xffffffff;
  uVar4 = 2;
  uVar3 = 0xffffffff;
LAB_00bc999c:
  FUN_00bb9350(param_1,uVar4,uVar2,uVar3,0,param_2 & 1);
  return;
}


