/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbf470; name: FUN_00bbf470
 */


undefined8 FUN_00bbf470(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_70 [3];
  long local_58;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar4 = FUN_016b8190();
  uVar8 = (uint)((ulong)uVar4 >> 0x20);
  uVar3 = uVar8 - 2;
  if (1 < uVar8) {
    if ((int)uVar4 == 0) {
      if (5 < (int)uVar3) {
        return 0;
      }
      uVar2 = *(undefined4 *)(param_1 + 0x614);
      iVar11 = 1;
      uVar5 = FUN_00bcfb20(1,0,uVar3);
      iVar1 = *(int *)(param_1 + 0x61c);
    }
    else {
      if (4 < uVar3) {
        return 0;
      }
      lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar10 == 0) {
        uVar2 = FUN_0150b350(0);
      }
      else {
        plVar13 = (long *)(lVar10 + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        uVar2 = FUN_0150b350(lVar10);
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
      uVar5 = FUN_00bcfb20(0,(int)uVar4 + -1,uVar3);
      iVar11 = 0;
      iVar1 = *(int *)(param_1 + 0x61c);
    }
    uVar5 = uVar5 & 0xffffffff;
    if (iVar1 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x5f0);
      uVar6 = FUN_00bc8500(param_1,iVar11,uVar2,uVar5);
      uVar9 = 0;
      if ((uVar6 & 1) == 0) {
        uVar9 = 2;
      }
      if (iVar11 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 3;
      }
      FUN_00bd3390(uVar4,uVar7,uVar5,uVar9,0);
    }
    thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),iVar11,uVar2,uVar5);
    uVar3 = FUN_008787f0();
    if ((uVar3 & 0xffff) != 0) {
      FUN_00bcfef0(*(undefined8 *)(param_1 + 0x5f8),uVar3,1,0);
      FUN_00bd0160(*(undefined8 *)(param_1 + 0x5f8),iVar11,uVar2,uVar5,uVar3 & 0xffff);
      uVar2 = 0;
      if (iVar11 != 0) {
        uVar2 = 3;
      }
      lVar12 = FUN_00bd1790(*(undefined8 *)(param_1 + 0x5f0),uVar2);
      FUN_00bd0100(*(undefined8 *)(param_1 + 0x5f8),lVar12 + uVar5,1);
      local_70[0] = 0x531f9cb6e0867206;
      FUN_00ffd010(param_1 + 0x100,local_70);
      FUN_0167b9b0(*(undefined8 *)(*(long *)(param_1 + 0x600) + 0x60),
                   *(long *)(param_1 + 0x600) + 0x90,0);
      FUN_006cf0a0(local_70,&DAT_02637c60);
      FUN_016d3620(local_70);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
      *(undefined4 *)(param_1 + 0x608) = 0xe;
      return 1;
    }
  }
  return 0;
}


