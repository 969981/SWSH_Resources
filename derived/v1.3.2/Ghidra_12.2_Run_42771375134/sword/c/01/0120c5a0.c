/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120c5a0; name: FUN_0120c5a0
 */


void FUN_0120c5a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_0120c690();
    lVar2 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    if (*(long *)(lVar1 + 0x78) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x78) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x78) = 0;
    }
    *(undefined8 *)(lVar1 + 0x78) = 0;
    if (*(long *)(lVar1 + 0x80) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x80) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x80) = 0;
    }
    *(undefined8 *)(lVar1 + 0x80) = 0;
    if (*(long *)(lVar1 + 0x88) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x88) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x88) = 0;
    }
    *(undefined8 *)(lVar1 + 0x88) = 0;
    if (*(long *)(lVar1 + 0x90) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x90) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x90) = 0;
    }
    *(undefined8 *)(lVar1 + 0x90) = 0;
    if (*(long *)(lVar1 + 0x98) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x98) + 0x48) + 0x18))();
      *(undefined8 *)(lVar1 + 0x98) = 0;
    }
    lVar2 = lVar2 + 0x30;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0xa0) = 0;
  } while (lVar2 != 0x180);
  return;
}


