/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bd5c0; name: FUN_010bd5c0
 */


void FUN_010bd5c0(long param_1,long param_2,int param_3)

{
  *(undefined1 *)(param_1 + 0xd0) = 1;
  if (param_3 < 1) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x110),param_2,*(undefined8 *)(param_1 + 0xd8));
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xd8);
  if (param_3 == 1) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x110),param_2 + 8,*(undefined8 *)(param_1 + 0xe0));
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0xe0);
  if (param_3 < 3) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x110),param_2 + 0x10,*(undefined8 *)(param_1 + 0xe8));
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xe8);
  if (param_3 == 3) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x110),param_2 + 0x18,*(undefined8 *)(param_1 + 0xf0));
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xf0);
  if (param_3 < 5) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x110),param_2 + 0x20,*(undefined8 *)(param_1 + 0xf8));
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xf8);
  if (param_3 == 5) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x110),param_2 + 0x28,*(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x100);
  if (param_3 < 7) {
    *(undefined8 *)(param_1 + 200) = 0;
    return;
  }
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x110),param_2 + 0x30,*(undefined8 *)(param_1 + 0x108));
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x108);
  return;
}


