/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcb210; name: FUN_00bcb210
 */


void FUN_00bcb210(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar4 = FUN_016b8190();
  puVar2 = PTR_DAT_02710848;
  uVar6 = (uint)((ulong)uVar4 >> 0x20);
  uVar1 = uVar6 - 2;
  if (uVar6 < 2) {
LAB_00bcb324:
    uVar3 = 0xffffffff;
    *param_2 = 2;
    *param_3 = 0xffffffff;
  }
  else {
    if ((int)uVar4 == 0) {
      if (5 < (int)uVar1) goto LAB_00bcb324;
      *param_2 = 1;
      *param_3 = *(undefined4 *)(param_1 + 0x614);
      uVar4 = 1;
      iVar5 = 0;
    }
    else {
      if (4 < uVar1) goto LAB_00bcb324;
      *param_2 = 0;
      lVar7 = *(long *)(*(long *)puVar2 + 0x90);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar8 == 0) {
        uVar3 = FUN_0150b350(0);
      }
      else {
        plVar9 = (long *)(lVar8 + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        uVar3 = FUN_0150b350(lVar8);
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      iVar5 = (int)uVar4 + -1;
      uVar4 = 0;
      *param_3 = uVar3;
    }
    uVar3 = FUN_00bcfb20(uVar4,iVar5,uVar1);
  }
  *param_4 = uVar3;
  return;
}


