/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01460060; name: FUN_01460060
 */


uint FUN_01460060(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  bVar2 = *(int *)(lVar3 + 0x5c) == 0;
  uVar4 = 2;
  if (!bVar2) {
    uVar4 = 1;
  }
  uVar1 = (uint)bVar2;
  if (*(int *)(lVar3 + 0x54) == 0) {
    uVar1 = uVar4;
  }
  if (*(int *)(lVar3 + 100) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x6c) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x74) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x7c) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x84) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x8c) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x94) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x9c) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0xa4) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0xac) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0xb4) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0xbc) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0xc4) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0xcc) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0xd4) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0xdc) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0xec) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0xf4) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0xfc) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x104) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x10c) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x114) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x11c) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x124) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 300) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x134) == 0) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(lVar3 + 0x13c) == 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}


