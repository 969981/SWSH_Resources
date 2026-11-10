/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b91d0; name: FUN_003b91d0
 */


void FUN_003b91d0(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 local_38;
  
  lVar6 = *(long *)(param_1 + 0x50);
  plVar4 = *(long **)(lVar6 + 0x20);
  pcVar7 = *(code **)(*plVar4 + 0x148);
  uVar1 = *(undefined4 *)(lVar6 + 0x5c);
  uVar3 = (**(code **)(*plVar4 + 0x150))(plVar4);
  (*pcVar7)(plVar4,0,0,uVar1,uVar3);
  pcVar7 = *(code **)(*plVar4 + 0x168);
  uVar1 = *(undefined4 *)(lVar6 + 100);
  uVar3 = (**(code **)(*plVar4 + 0x170))(plVar4);
  (*pcVar7)(plVar4,0,0,uVar1,uVar3);
  pcVar7 = *(code **)(*plVar4 + 0x188);
  uVar1 = *(undefined4 *)(lVar6 + 0x6c);
  uVar3 = (**(code **)(*plVar4 + 0x198))(plVar4);
  (*pcVar7)(plVar4,0,0,uVar1,uVar3);
  uVar2 = *(uint *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (uVar2 != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x1048);
    uVar8 = 0;
    do {
      FUN_003cdd80(uVar5,param_1,*(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar8 * 8));
      uVar8 = uVar8 + 1;
    } while (uVar2 != uVar8);
  }
  local_38 = 0;
  FUN_003b92e0(param_1 + 0xb0,0,&local_38);
  return;
}


