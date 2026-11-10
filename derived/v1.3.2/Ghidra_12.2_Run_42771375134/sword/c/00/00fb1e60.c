/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb1e60; name: FUN_00fb1e60
 */


void FUN_00fb1e60(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_00dab3a0(0);
    lVar1 = *(long *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_0078b210();
    lVar1 = *(long *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  *(undefined8 *)(param_1 + 0x3f0) = 0xcbf29ce484222645;
  if (*(long *)(param_1 + 0x3f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x400) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x400) = 0;
  }
  *(undefined8 *)(param_1 + 0x408) = 0x1e00000000;
  *(undefined4 *)(param_1 + 0x410) = 0x1e;
  return;
}


