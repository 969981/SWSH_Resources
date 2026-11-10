/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008aae50; name: FUN_008aae50
 */


void FUN_008aae50(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) != 0) {
    puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_00897d00();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
    plVar2 = *(long **)(puVar5[0xb] + 0x10);
    uVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(puVar5[0xb] + 0x1c));
    FUN_014c7bf0(uVar6,0,uVar4);
    FUN_014c9660(uVar6,1,0x5d);
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      lVar3 = FUN_00897d00();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar5 = puVar5 + -10;
          goto LAB_008aaf24;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_008aaf24:
    FUN_008a6b70(puVar5,0x2f90d8e06cb6ab72,0,0);
    *(undefined8 *)(param_1 + 0x7c) = 2;
  }
  return;
}


