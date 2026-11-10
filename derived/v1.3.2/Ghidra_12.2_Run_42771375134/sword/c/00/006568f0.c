/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006568f0; name: FUN_006568f0
 */


void FUN_006568f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    if (*(long **)(lVar1 + 0xa8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + 0xa8) + 0x18))();
      *(undefined8 *)(lVar1 + 0xa8) = 0;
    }
    if (*(long **)(lVar1 + 0xb8) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + 0xb8) + 0x18))();
      *(undefined8 *)(lVar1 + 0xb8) = 0;
    }
    if (*(long **)(lVar1 + 0xc0) != (long *)0x0) {
      (**(code **)(**(long **)(lVar1 + 0xc0) + 0x18))();
      *(undefined8 *)(lVar1 + 0xc0) = 0;
    }
    lVar2 = lVar2 + 0x38;
    *(undefined4 *)(lVar1 + 0xa0) = 0;
    *(undefined8 *)(lVar1 + 200) = 0;
    *(undefined8 *)(lVar1 + 0xd0) = 0x400000000;
  } while (lVar2 != 0x1c0);
  if (*(long **)(param_1 + 0x268) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x268) + 0x18))();
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  if (*(long **)(param_1 + 0x270) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x270) + 0x18))();
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  if (*(long **)(param_1 + 0x278) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x278) + 0x18))();
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0x400000000;
  *(undefined1 *)(param_1 + 0x350) = 0;
  return;
}


