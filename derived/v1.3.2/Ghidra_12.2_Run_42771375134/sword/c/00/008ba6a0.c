/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ba6a0; name: FUN_008ba6a0
 */


void FUN_008ba6a0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_008c9670(*(undefined8 *)(param_1 + 0x88));
  if ((uVar1 & 1) == 0) {
    return;
  }
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  lVar3 = FUN_00897d00();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  lVar3 = puVar5[0xb];
  *(undefined4 *)(param_1 + 0x7c) = 2;
  plVar2 = *(long **)(lVar3 + 0x10);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
  uVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(lVar3 + 0x1c));
  FUN_014c7bf0(uVar6,0,uVar4);
  FUN_014ca220(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8),1,*(undefined4 *)(param_1 + 0x9c),
               3,0,1);
  if (*(int *)(param_1 + 0xa0) == 0xb) {
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      lVar3 = FUN_00897d00();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar5 = puVar5 + -10;
          uVar1 = 0x77ca234bc0d1;
          goto LAB_008ba80c;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
    uVar1 = 0x77ca234bc0d1;
  }
  else {
    if (*(int *)(param_1 + 0xa0) != 10) {
      return;
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      lVar3 = FUN_00897d00();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar5 = puVar5 + -10;
          goto LAB_008ba7a0;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_008ba7a0:
    uVar1 = 0x74ca234bbbb8;
  }
LAB_008ba80c:
  FUN_008a6b70(puVar5,uVar1 | 0xcf3d000000000000,1,0);
  return;
}


