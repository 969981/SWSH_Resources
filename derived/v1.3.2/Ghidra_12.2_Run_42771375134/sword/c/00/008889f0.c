/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008889f0; name: FUN_008889f0
 */


undefined4 FUN_008889f0(long *param_1)

{
  uint uVar1;
  uint3 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0x15) != '\x01') {
    return 0x1c;
  }
  uVar2 = *(uint3 *)(lVar4 + 0x22);
  uVar1 = *(uint *)(lVar4 + 0x1e);
  if ((uVar1 >> 9 & 1) != 0) {
    return 0;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    return 1;
  }
  switch(uVar1 & 0x3f) {
  case 1:
    return 2;
  case 2:
    return 3;
  case 4:
    return 4;
  case 8:
    return 5;
  case 0x10:
    return 6;
  case 0x20:
    return 7;
  case 0x3f:
    uVar3 = 8;
    if ((uVar2 & 0x400) != 0) {
      uVar3 = 10;
    }
    return uVar3;
  }
  if ((uVar1 >> 6 & 1) != 0) {
    return 9;
  }
  if ((uVar2 >> 10 & 1) != 0) {
    return 10;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    return 0xb;
  }
  if ('\0' < *(char *)(lVar4 + 0x25)) {
    return 0xc;
  }
  if (*(char *)(lVar4 + 0x25) < '\0') {
    return 0x12;
  }
  if ('\0' < *(char *)(lVar4 + 0x26)) {
    return 0xd;
  }
  if (*(char *)(lVar4 + 0x26) < '\0') {
    return 0x13;
  }
  if ('\0' < *(char *)(lVar4 + 0x27)) {
    return 0xe;
  }
  if (*(char *)(lVar4 + 0x27) < '\0') {
    return 0x14;
  }
  if ('\0' < *(char *)(lVar4 + 0x29)) {
    return 0xf;
  }
  if (*(char *)(lVar4 + 0x29) < '\0') {
    return 0x15;
  }
  if ('\0' < *(char *)(lVar4 + 0x28)) {
    return 0x11;
  }
  if (*(char *)(lVar4 + 0x28) < '\0') {
    return 0x17;
  }
  if ('\0' < *(char *)(lVar4 + 0x2a)) {
    return 0x10;
  }
  if (*(char *)(lVar4 + 0x2a) < '\0') {
    return 0x16;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    return 0x18;
  }
  if ((uVar2 >> 6 & 1) != 0) {
    return 0x19;
  }
  if ((uVar2 >> 7 & 1) != 0) {
    return 0x1a;
  }
  uVar3 = 0x1b;
  if ((uVar2 & 0x300) == 0) {
    uVar3 = 0x1c;
  }
  return uVar3;
}


