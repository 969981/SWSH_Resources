/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcad50; name: FUN_00bcad50
 */


undefined8 FUN_00bcad50(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar5 = FUN_016b8190();
  uVar7 = (uint)((ulong)uVar5 >> 0x20);
  uVar1 = uVar7 - 2;
  if (1 < uVar7) {
    if ((int)uVar5 == 0) {
      if ((int)uVar1 < 6) {
        uVar2 = *(undefined4 *)(param_1 + 0x614);
        uVar5 = 1;
        uVar3 = FUN_00bcfb20(1,0,uVar1);
        goto LAB_00bcae6c;
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
      uVar3 = FUN_00bcfb20(0,(int)uVar5 + -1,uVar1);
      uVar5 = 0;
      goto LAB_00bcae6c;
    }
  }
  uVar2 = 0xffffffff;
  uVar5 = 2;
  uVar3 = 0xffffffff;
LAB_00bcae6c:
  uVar4 = FUN_00bcf510(*(undefined8 *)(param_1 + 0x5e8),uVar5,uVar2,uVar3,param_2 & 1);
  switch(uVar4) {
  case 1:
    uVar2 = 0x1f;
    break;
  case 2:
    uVar2 = 0x20;
    break;
  case 3:
    uVar2 = 0x21;
    break;
  case 4:
    uVar2 = 2;
    break;
  case 6:
    uVar2 = 0x23;
    break;
  default:
    if (((param_2 & 1) != 0) || (uVar6 = FUN_00bc8500(param_1,uVar5,uVar2,uVar3), (uVar6 & 1) != 0))
    {
      return 1;
    }
  case 5:
    uVar2 = 0x1c;
    if (*(int *)(param_1 + 0x5cc) != 4) {
      uVar2 = 0x22;
    }
  }
  FUN_00bc46a0(param_1,uVar2,0);
  return 0;
}


