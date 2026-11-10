/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008be220; name: FUN_008be220
 */


void FUN_008be220(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar3 = FUN_016d3660(*(undefined4 *)(param_1 + 0xa8));
  if ((uVar3 & 1) == 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x90) + 0xa8);
    plVar4 = *(long **)(lVar6 + 0x10);
    uVar5 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(lVar6 + 0x1c));
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8);
    iVar1 = *(int *)(param_1 + 0xac);
    FUN_014c7bf0(uVar7,0,uVar5);
    if (iVar1 == 0) {
      uVar5 = 0x9a798355c714948b;
    }
    else {
      uVar2 = FUN_0087cdb0(uVar5);
      FUN_014c93c0(uVar7,1,uVar2);
      uVar5 = 0xccae60bd82ed1938;
    }
    FUN_008a6b70(*(undefined8 *)(param_1 + 0x90),uVar5,1,0);
    FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
    *(undefined4 *)(param_1 + 0x7c) = 3;
  }
  return;
}


