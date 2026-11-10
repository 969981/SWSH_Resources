/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ab020; name: FUN_008ab020
 */


void FUN_008ab020(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar5)(puVar5);
  lVar2 = FUN_00897d00();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  lVar2 = puVar5[0xb];
  uVar3 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x50))
                    (*(long **)(lVar2 + 0x10),*(undefined4 *)(lVar2 + 0x1c));
  FUN_014c7bf0(uVar4,0,uVar3);
  FUN_014c9660(uVar4,1,*(undefined4 *)(lVar2 + 0x70));
  FUN_014c9660(uVar4,2,*(undefined4 *)(lVar2 + 0x68));
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar5)(puVar5);
    lVar2 = FUN_00897d00();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar5 = puVar5 + -10;
        goto LAB_008ab0f8;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_008ab0f8:
  FUN_008a6b70(puVar5,*(undefined8 *)PTR_DAT_027179f8,1,0);
  *(undefined8 *)(param_1 + 0x7c) = 2;
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  return;
}


