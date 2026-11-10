/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcaf40; name: FUN_00bcaf40
 */


void FUN_00bcaf40(long param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar4 = FUN_016b8190();
  puVar2 = PTR_DAT_02710848;
  uVar6 = (uint)((ulong)uVar4 >> 0x20);
  uVar1 = uVar6 - 2;
  if (uVar6 < 2) {
LAB_00bcb060:
    uVar3 = 0xffffffff;
    *param_3 = 2;
    *param_4 = 0xffffffff;
  }
  else {
    if ((int)uVar4 == 0) {
      if (5 < (int)uVar1) goto LAB_00bcb060;
      *param_3 = 1;
      *param_4 = *(undefined4 *)(param_1 + 0x614);
      uVar4 = 1;
      iVar5 = 0;
    }
    else {
      if (4 < uVar1) goto LAB_00bcb060;
      *param_3 = 0;
      lVar8 = *(long *)(*(long *)puVar2 + 0x90);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar9 == 0) {
        uVar3 = FUN_0150b350(0);
      }
      else {
        plVar10 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        uVar3 = FUN_0150b350(lVar9);
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      iVar5 = (int)uVar4 + -1;
      uVar4 = 0;
      *param_4 = uVar3;
    }
    uVar3 = FUN_00bcfb20(uVar4,iVar5,uVar1);
  }
  *param_5 = uVar3;
  uVar7 = *param_2;
  uVar4 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),*param_3,*param_4);
  FUN_00866390(uVar7,uVar4);
  return;
}


