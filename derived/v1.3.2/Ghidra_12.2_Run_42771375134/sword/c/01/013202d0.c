/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013202d0; name: FUN_013202d0
 */


void FUN_013202d0(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  char local_60 [16];
  undefined1 auStack_50 [16];
  
  if (*(int *)(param_1 + 0x10) == 2) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 8) + 0x54) == 0) {
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar8 == (undefined8 *)0x0) goto LAB_01320370;
    plVar6 = (long *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_027150a8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar4 != 0)) {
      uVar7 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_027150b0 = uVar7;
      __cxa_guard_release(PTR_DAT_027150a8);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_027150b0) {
        puVar8 = puVar8 + -10;
        goto LAB_01320370;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_01320370:
  puVar2 = PTR_DAT_027152c0;
  FUN_0131fd90(local_60,param_1,PTR_DAT_027152c0);
  if (local_60[0] != '\0') {
    FUN_0069c6b0(puVar8,auStack_50);
    iVar4 = FUN_0069c6d0(puVar8);
    puVar3 = PTR_DAT_02727f60;
    if (iVar4 != 0) {
      uVar9 = 0;
      do {
        FUN_0069c730(*(undefined4 *)(puVar3 + 8),puVar8,uVar9);
        uVar9 = uVar9 + 1;
        uVar5 = FUN_0069c6d0(puVar8);
      } while (uVar9 < uVar5);
    }
    FUN_0069c600(puVar8);
    uVar7 = *(undefined8 *)puVar2;
    uVar1 = *(undefined8 *)(puVar2 + 8);
    *(undefined4 *)(param_1 + 0x58) = param_2;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  return;
}


