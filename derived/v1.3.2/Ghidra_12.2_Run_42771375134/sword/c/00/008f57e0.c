/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f57e0; name: FUN_008f57e0
 */


void FUN_008f57e0(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined8 *param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar9 = 0;
  do {
    if (*(char *)((long)param_4 + uVar9 + 8) < '\0') {
      iVar2 = 0x1f;
    }
    else {
      iVar2 = FUN_009c9800(param_3);
      iVar2 = (uint)*(byte *)((long)param_4 + uVar9 + 8) + iVar2;
    }
    lVar7 = (**(code **)(*(long *)*param_4 + 0x58))((long *)*param_4,uVar9 & 0xffffffff);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    uVar8 = FUN_0087d610(lVar7,2);
    uVar3 = 899;
    if ((uVar8 & 1) == 0) {
      uVar3 = FUN_008783b0(lVar7);
    }
    uVar4 = FUN_008783c0(lVar7);
    uVar5 = FUN_0087ccf0(lVar7);
    uVar6 = FUN_0087a5f0(lVar7);
    sVar1 = FUN_008787f0(lVar7);
    FUN_009c9120(*param_2,uVar9 & 0xffffffff,iVar2,uVar3,uVar4,uVar5,uVar6,sVar1 != 0);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 6);
  return;
}


