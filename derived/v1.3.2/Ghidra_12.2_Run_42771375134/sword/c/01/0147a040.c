/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0147a040; name: FUN_0147a040
 */


void FUN_0147a040(long param_1,long param_2,int param_3)

{
  *(undefined1 *)(param_1 + 0xb0) = 1;
  if (param_3 < 1) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0xf0),param_2,*(undefined8 *)(param_1 + 0xb8));
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0xb8);
  if (param_3 == 1) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0xf0),param_2 + 8,*(undefined8 *)(param_1 + 0xc0));
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xc0);
  if (param_3 < 3) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0xf0),param_2 + 0x10,*(undefined8 *)(param_1 + 200));
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 200);
  if (param_3 == 3) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0xf0),param_2 + 0x18,*(undefined8 *)(param_1 + 0xd0));
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0xd0);
  if (param_3 < 5) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0xf0),param_2 + 0x20,*(undefined8 *)(param_1 + 0xd8));
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xd8);
  if (param_3 == 5) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0xf0),param_2 + 0x28,*(undefined8 *)(param_1 + 0xe0));
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0xe0);
  if (param_3 < 7) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0xf0),param_2 + 0x30,*(undefined8 *)(param_1 + 0xe8));
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xe8);
  return;
}


