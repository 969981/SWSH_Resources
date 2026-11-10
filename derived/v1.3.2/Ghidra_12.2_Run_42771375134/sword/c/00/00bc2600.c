/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc2600; name: FUN_00bc2600
 */


bool FUN_00bc2600(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  puVar6 = (undefined4 *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
  uVar2 = FUN_00bcfb20(*puVar6,(uint)puVar6[1] >> 8 & 0x3f,(uint)puVar6[1] >> 0xe & 0x3f);
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar7 = FUN_016b8190();
  uVar8 = (uint)((ulong)uVar7 >> 0x20);
  uVar1 = uVar8 - 2;
  if (1 < uVar8) {
    if ((int)uVar7 == 0) {
      if ((int)uVar1 < 6) {
        uVar3 = *(undefined4 *)(param_1 + 0x614);
        uVar7 = 1;
        uVar4 = FUN_00bcfb20(1,0,uVar1);
        goto LAB_00bc2740;
      }
    }
    else if (uVar1 < 5) {
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
      uVar4 = FUN_00bcfb20(0,(int)uVar7 + -1,uVar1);
      uVar7 = 0;
      goto LAB_00bc2740;
    }
  }
  uVar3 = 0xffffffff;
  uVar7 = 2;
  uVar4 = 0xffffffff;
LAB_00bc2740:
  uVar1 = puVar6[1];
  iVar5 = FUN_00bcccc0(*(undefined8 *)(param_1 + 0x5e8),*puVar6,uVar1 & 0xff,uVar2,uVar7,uVar3,uVar4
                       ,uVar1 >> 0x14 & 0x3f,uVar1 >> 0x1a,*(int *)(param_1 + 0x61c) == 2);
  return iVar5 != 0;
}


