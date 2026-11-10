/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ab100; name: FUN_012ab100
 */


void FUN_012ab100(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))();
    puVar2 = *(undefined8 **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))
                (*(long **)(param_1 + 0x60),puVar2,*(undefined8 *)(param_1 + 0x68),
                 *(undefined8 *)(param_1 + 0x70));
    }
  }
  if (*(long *)(param_1 + 200) != 0) {
    uVar1 = FUN_007ad1e0(*(undefined8 *)PTR_DAT_02716748);
    FUN_01853100(uVar1,*(undefined8 *)(param_1 + 200));
    puVar2 = *(undefined8 **)(param_1 + 200);
    *(undefined8 *)(param_1 + 200) = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))
                (*(long **)(param_1 + 0xd0),puVar2,*(undefined8 *)(param_1 + 0xd8),
                 *(undefined8 *)(param_1 + 0xe0));
    }
  }
  *(undefined1 *)(param_1 + 0xf9) = 0;
  if (*(char *)(param_1 + 0x100) != '\0') {
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  if (*(char *)(param_1 + 0x310) != '\0') {
    *(undefined1 *)(param_1 + 0x310) = 0;
  }
  *(undefined1 *)(param_1 + 0x340) = 0;
  if (*(char *)(param_1 + 0x348) != '\0') {
    *(undefined1 *)(param_1 + 0x348) = 0;
  }
  *(undefined1 *)(param_1 + 0x378) = 0;
  if (*(char *)(param_1 + 0x380) != '\0') {
    *(undefined1 *)(param_1 + 0x380) = 0;
  }
  *(undefined1 *)(param_1 + 0x3b0) = 0;
  if (*(char *)(param_1 + 0x3b8) != '\0') {
    *(undefined1 *)(param_1 + 0x3b8) = 0;
  }
  return;
}


