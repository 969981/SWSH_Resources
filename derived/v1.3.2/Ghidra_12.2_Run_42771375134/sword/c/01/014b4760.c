/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b4760; name: FUN_014b4760
 */


uint FUN_014b4760(undefined8 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  puVar1 = PTR_DAT_02710798;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar6 == 0) {
    uVar3 = FUN_01510f00(0,0x711644f9ed6e814d);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    uVar3 = FUN_01510f00(lVar6,0x711644f9ed6e814d);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (((uVar3 & 1) != 0) && (uVar3 = FUN_0087d610(*param_1,2), (uVar3 & 1) == 0)) {
    uVar3 = FUN_008783b0(*param_1);
    uVar4 = FUN_014ae470(uVar3,1);
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)(*(long *)puVar1 + 0x1f8);
      if (lVar5 == 0) {
        uVar2 = FUN_01534f60(0,uVar3 & 0xffffffff);
        uVar2 = uVar2 ^ 1;
      }
      else {
        plVar7 = (long *)(lVar5 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        uVar2 = FUN_01534f60(lVar5,uVar3 & 0xffffffff);
        uVar2 = uVar2 ^ 1;
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      goto LAB_014b4878;
    }
  }
  uVar2 = 0;
LAB_014b4878:
  return uVar2 & 1;
}


