/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b76e0; name: FUN_008b76e0
 */


void FUN_008b76e0(long param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar2 & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x7c) = 7;
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
    cVar1 = *(char *)(param_1 + 0x99);
  }
  else {
    plVar3 = (long *)(**(code **)*puVar6)(puVar6);
    lVar4 = FUN_00897d00();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar6 = puVar6 + -10;
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
        if (*(char *)(param_1 + 0x99) == '\0') goto LAB_008b7758;
        goto LAB_008b77c8;
      }
    }
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x5d8);
    cVar1 = *(char *)(param_1 + 0x99);
  }
  puVar6 = (undefined8 *)0x0;
  if (cVar1 == '\0') {
LAB_008b7758:
    plVar3 = *(long **)(puVar6[0x15] + 0x10);
    uVar5 = (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined4 *)(puVar6[0x15] + 0x1c));
    FUN_014c7bf0(uVar7,0,uVar5);
    FUN_014c9660(uVar7,1,*(undefined4 *)(param_1 + 0x9c));
    uVar7 = 0x2f90d8e06cb6ab72;
  }
  else {
LAB_008b77c8:
    FUN_014c9660(uVar7,0,*(undefined4 *)(param_1 + 0x9c));
    uVar7 = 0x2f9458e06cb9bac9;
  }
  FUN_008a6b70(puVar6,uVar7,0,0);
  return;
}


