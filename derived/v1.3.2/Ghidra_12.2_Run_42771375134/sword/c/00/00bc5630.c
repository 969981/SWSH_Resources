/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc5630; name: FUN_00bc5630
 */


uint FUN_00bc5630(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar4 = FUN_016b8190();
  uVar6 = *(undefined8 *)(param_1 + 0x5e8);
  uVar5 = (uint)((ulong)uVar4 >> 0x20);
  uVar3 = uVar5 - 2;
  if (1 < uVar5) {
    if ((int)uVar4 == 0) {
      if ((int)uVar3 < 6) {
        uVar1 = *(undefined4 *)(param_1 + 0x614);
        uVar4 = 1;
        uVar2 = FUN_00bcfb20(1,0,uVar3);
        goto LAB_00bc574c;
      }
    }
    else if (uVar3 < 5) {
      lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar7 == 0) {
        uVar1 = FUN_0150b350(0);
      }
      else {
        plVar9 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        uVar1 = FUN_0150b350(lVar7);
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      uVar2 = FUN_00bcfb20(0,(int)uVar4 + -1,uVar3);
      uVar4 = 0;
      goto LAB_00bc574c;
    }
  }
  uVar1 = 0xffffffff;
  uVar4 = 2;
  uVar2 = 0xffffffff;
LAB_00bc574c:
  uVar3 = FUN_00bce410(uVar6,uVar4,uVar1,uVar2);
  if (*(char *)(param_1 + 0x60c) != '\0') {
    uVar1 = FUN_00bc57b0(param_1);
    FUN_00bb8e40(param_1,uVar1);
  }
  return uVar3 & 1;
}


