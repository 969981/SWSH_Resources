/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc6770; name: FUN_00bc6770
 */


undefined8 FUN_00bc6770(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 local_48;
  
  local_48 = 0xddc788ee97937f68;
  if ((*(long *)(param_1 + 0x2b0) != 0) &&
     (uVar4 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_48), (uVar4 & 1) == 0)) {
    return 0;
  }
  plVar5 = (long *)FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  FUN_016b2d70(plVar5,1);
  (**(code **)(*plVar5 + 0x50))(plVar5);
  if (*(char *)(param_1 + 0x60c) == '\0') {
    return 1;
  }
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar6 = FUN_016b8190();
  uVar8 = *(undefined8 *)(param_1 + 0x5e8);
  uVar7 = (uint)((ulong)uVar6 >> 0x20);
  uVar1 = uVar7 - 2;
  if (1 < uVar7) {
    if ((int)uVar6 == 0) {
      if ((int)uVar1 < 6) {
        uVar2 = *(undefined4 *)(param_1 + 0x614);
        uVar6 = 1;
        uVar3 = FUN_00bcfb20(1,0,uVar1);
        goto LAB_00bc68f8;
      }
    }
    else if (uVar1 < 5) {
      lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar9 == 0) {
        uVar2 = FUN_0150b350(0);
      }
      else {
        plVar5 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        uVar2 = FUN_0150b350(lVar9);
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      uVar3 = FUN_00bcfb20(0,(int)uVar6 + -1,uVar1);
      uVar6 = 0;
      goto LAB_00bc68f8;
    }
  }
  uVar2 = 0xffffffff;
  uVar6 = 2;
  uVar3 = 0xffffffff;
LAB_00bc68f8:
  uVar6 = thunk_FUN_00bccb30(uVar8,uVar6,uVar2,uVar3);
  FUN_00bb83c0(param_1,uVar6);
  return 1;
}


