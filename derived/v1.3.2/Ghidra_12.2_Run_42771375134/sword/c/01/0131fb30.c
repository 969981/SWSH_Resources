/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131fb30; name: FUN_0131fb30
 */


void FUN_0131fb30(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 8) + 0x54) == 0) {
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar7 == (undefined8 *)0x0) goto LAB_0131fbb0;
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_027150a8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar2 != 0)) {
      uVar5 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_027150b0 = uVar5;
      __cxa_guard_release(PTR_DAT_027150a8);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_027150b0) {
        puVar7 = puVar7 + -10;
        goto LAB_0131fbb0;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_0131fbb0:
  *(undefined8 *)(param_1 + 0x28) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  FUN_0069c6b0(puVar7,param_2);
  iVar2 = FUN_0069c6d0(puVar7);
  puVar1 = PTR_DAT_02727f60;
  if (iVar2 != 0) {
    uVar6 = 0;
    do {
      FUN_0069c730(*(float *)puVar1 / 30.0,puVar7,uVar6);
      uVar6 = uVar6 + 1;
      uVar3 = FUN_0069c6d0(puVar7);
    } while (uVar6 < uVar3);
  }
  FUN_0069c600(puVar7);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return;
}


