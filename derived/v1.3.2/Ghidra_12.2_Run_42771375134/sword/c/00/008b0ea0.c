/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b0ea0; name: FUN_008b0ea0
 */


undefined4 FUN_008b0ea0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  lVar3 = FUN_00897d00();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  if ((*(uint *)(param_1 + 0xf8) < 4) && (*(int *)(param_1 + 0xf4) != 0)) {
    lVar3 = puVar4[0xb];
    iVar1 = FUN_01521090(*(undefined8 *)(param_1 + 0xe8));
    *(short *)(lVar3 + (ulong)*(uint *)(param_1 + 0xf8) * 2 + 0x100) =
         (short)*(undefined4 *)(param_1 + 0xf4);
    FUN_01520b70(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf4),1);
    FUN_008beff0(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0xf4));
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    if (iVar1 == 1) {
      FUN_008c61d0(*(long *)(param_1 + 0x78),1);
    }
    else {
      FUN_016bfe70(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x5e8));
    }
  }
  return *(undefined4 *)(param_1 + 0xf8);
}


