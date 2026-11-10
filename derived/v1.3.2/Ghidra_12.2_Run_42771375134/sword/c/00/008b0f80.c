/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b0f80; name: FUN_008b0f80
 */


undefined4 FUN_008b0f80(long param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar6)(puVar6);
  lVar5 = FUN_00897d00();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  if (*(int *)(param_1 + 0xf8) != 0) {
    lVar5 = puVar6[0xb];
    uVar2 = *(int *)(param_1 + 0xf8) - 1;
    *(uint *)(param_1 + 0xf8) = uVar2;
    lVar5 = lVar5 + (ulong)uVar2 * 2;
    uVar1 = *(undefined2 *)(lVar5 + 0x100);
    iVar3 = FUN_01521090(*(undefined8 *)(param_1 + 0xe8),uVar1);
    *(undefined2 *)(lVar5 + 0x100) = 0;
    FUN_01520760(*(undefined8 *)(param_1 + 0xe8),uVar1,1,1);
    FUN_008bf040(*(undefined8 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0xf4) = 0;
    if (iVar3 == 0) {
      FUN_008c61d0(*(long *)(param_1 + 0x78),1);
    }
    else {
      FUN_016bfe70(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x5e8));
    }
  }
  return *(undefined4 *)(param_1 + 0xf8);
}


