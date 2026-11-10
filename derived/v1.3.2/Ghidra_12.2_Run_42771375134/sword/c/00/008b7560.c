/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b7560; name: FUN_008b7560
 */


void FUN_008b7560(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar4)(puVar4);
  lVar2 = FUN_00897d00();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  lVar2 = puVar4[0xb];
  if (*(int *)(lVar2 + 4) != 1) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    return;
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
  if (*(char *)(lVar2 + 100) == '\0') {
    *(undefined4 *)(param_1 + 0x7c) = 7;
    uVar3 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x50))
                      (*(long **)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x1c));
    FUN_014c7bf0(uVar5,0,uVar3);
    FUN_014c9660(uVar5,1,*(undefined4 *)(lVar2 + 0x70));
    FUN_014c9660(uVar5,2,*(undefined4 *)(lVar2 + 0x68));
    FUN_008a6b70(puVar4 + -10,0x2f90dae06cb6aed8,1,0);
    FUN_008b7ad0(param_1);
    *(undefined4 *)(lVar2 + 4) = 0;
    return;
  }
  uVar3 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x50))
                    (*(long **)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x1c));
  FUN_014c7bf0(uVar5,0,uVar3);
  FUN_014c9660(uVar5,1,*(undefined4 *)(lVar2 + 0x68));
  *(undefined4 *)(param_1 + 0x7c) = 9;
  FUN_008a6b70(puVar4 + -10,0x2f90dbe06cb6b08b,1,0);
  *(undefined4 *)(lVar2 + 4) = 0;
  return;
}


