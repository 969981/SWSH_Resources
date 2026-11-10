/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b5220; name: FUN_008b5220
 */


void FUN_008b5220(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_50 [24];
  long local_38;
  long local_28;
  
  uVar1 = FUN_010386c0(*(undefined8 *)(param_1 + 0x88));
  if ((uVar1 & 1) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_00897d00();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    lVar6 = puVar5[0xb];
    FUN_008a6a20(&local_28,puVar5 + -10,4);
    lVar3 = local_28;
    if (local_28 != 0) {
      uVar4 = FUN_008c8c30(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(lVar6 + 0x1c));
      FUN_016a66b0(lVar3,uVar4);
    }
    FUN_006cf0a0(auStack_50,&DAT_026176b8);
    FUN_016d3620(auStack_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x78) = 4;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return;
}


