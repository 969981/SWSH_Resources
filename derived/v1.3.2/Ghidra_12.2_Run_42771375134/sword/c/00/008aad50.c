/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008aad50; name: FUN_008aad50
 */


void FUN_008aad50(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar1 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    uVar1 = FUN_008aba10(param_1);
    if ((int)uVar1 == 0) {
      uVar5 = 0xc;
    }
    else {
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar3 = FUN_00897d00();
      for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
      }
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
      plVar2 = *(long **)(puVar6[0xb] + 0x10);
      uVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(puVar6[0xb] + 0x1c));
      FUN_014c7bf0(uVar7,0,uVar4);
      FUN_014c9660(uVar7,1,uVar1 >> 0x20);
      FUN_008a6b70(puVar6 + -10,0x9a797f55c7148dbf,0,0);
      uVar5 = 8;
      if ((int)uVar1 == 2) {
        uVar5 = 9;
      }
    }
    *(undefined4 *)(param_1 + 0x7c) = uVar5;
  }
  return;
}


