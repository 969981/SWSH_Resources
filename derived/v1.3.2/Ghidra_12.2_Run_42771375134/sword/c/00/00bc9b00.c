/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc9b00; name: FUN_00bc9b00
 */


bool FUN_00bc9b00(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  puVar5 = (undefined4 *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8));
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar6 = FUN_016b8190();
  uVar7 = (uint)((ulong)uVar6 >> 0x20);
  uVar1 = uVar7 - 2;
  if (1 < uVar7) {
    if ((int)uVar6 == 0) {
      if ((int)uVar1 < 6) {
        uVar2 = *(undefined4 *)(param_1 + 0x614);
        uVar6 = 1;
        uVar3 = FUN_00bcfb20(1,0,uVar1);
        goto LAB_00bc9c24;
      }
    }
    else if (uVar1 < 5) {
      lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar8 == 0) {
        uVar2 = FUN_0150b350(0);
      }
      else {
        plVar10 = (long *)(lVar8 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        uVar2 = FUN_0150b350(lVar8);
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      uVar3 = FUN_00bcfb20(0,(int)uVar6 + -1,uVar1);
      uVar6 = 0;
      goto LAB_00bc9c24;
    }
  }
  uVar2 = 0xffffffff;
  uVar6 = 2;
  uVar3 = 0xffffffff;
LAB_00bc9c24:
  iVar4 = FUN_00bcd870(*(undefined8 *)(param_1 + 0x5e8),*puVar5,*(undefined1 *)(puVar5 + 1),
                       *(undefined1 *)((long)puVar5 + 5),uVar6,uVar2,uVar3);
  return iVar4 != 0;
}


