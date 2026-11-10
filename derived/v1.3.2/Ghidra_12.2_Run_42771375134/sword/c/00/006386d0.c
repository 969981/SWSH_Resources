/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006386d0; name: FUN_006386d0
 */


void FUN_006386d0(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0x128) != '\0') {
    (**(code **)PTR_DAT_027146a0)(param_1 + 0xd0);
    *(undefined1 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if (*(int *)(param_1 + 0x130) != -1) {
    FUN_005fb340(*(undefined8 *)(param_1 + 0x20));
  }
  plVar1 = *(long **)(param_1 + 0x108);
  if (plVar1 != (long *)0x0) {
    if (*(char *)(param_1 + 0x111) != '\0') {
      FUN_006530c0(plVar1,*(undefined8 *)(param_1 + 0x118));
      plVar1 = *(long **)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x111) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      if (plVar1 == (long *)0x0) goto LAB_0063875c;
    }
    (**(code **)(*plVar1 + 0x18))();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
LAB_0063875c:
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 10;
  return;
}


