/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00552fb0; name: FUN_00552fb0
 */


/* WARNING: Removing unreachable block (ram,0x0055302c) */

void FUN_00552fb0(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0x2c) < 1) {
    *(undefined4 *)(param_1 + 0x2c) = 8;
    iVar4 = *(int *)(param_1 + 0x30);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x30);
  }
  if (iVar4 < 1) {
    *(undefined4 *)(param_1 + 0x30) = 2;
    iVar4 = *(int *)(param_1 + 0x40);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x40);
  }
  if (iVar4 < 0) {
    iVar4 = 0x10;
    *(undefined4 *)(param_1 + 0x40) = 0x10;
    cVar2 = *(char *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x40) = 0x10;
  }
  else {
    if (0xf < iVar4) {
      iVar4 = 0x10;
    }
    cVar2 = *(char *)(param_1 + 0x58);
    *(int *)(param_1 + 0x40) = iVar4;
  }
  if (cVar2 != '\0') {
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    *(int *)(param_1 + 0x40) = iVar4;
  }
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0xc));
  fVar5 = logf(fVar5);
  uVar1 = *(uint *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x30) + (int)(fVar5 / DAT_01d4c4dc) + -2;
  iVar4 = *(int *)(param_1 + 0x2c);
  if (iVar3 <= *(int *)(param_1 + 0x2c)) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = iVar4;
  iVar4 = *(int *)(param_1 + 0x4c);
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x4c) = iVar4;
  fVar5 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x18)) {
    fVar5 = *(float *)(param_1 + 0x18);
  }
  *(float *)(param_1 + 0x18) = fVar5;
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 4) >> 1;
    *(uint *)(param_1 + 0x1c) = uVar1;
  }
  if (*(uint *)(param_1 + 0xc) < uVar1) {
    fVar5 = *(float *)(param_1 + 0x74);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
    fVar5 = *(float *)(param_1 + 0x74);
  }
  if (fVar5 <= 0.0) {
    *(float *)(param_1 + 0x74) = (float)*(uint *)(param_1 + 0xc) / (float)*(uint *)(param_1 + 0x10);
    fVar5 = *(float *)(param_1 + 0x78);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x78);
  }
  if (fVar5 <= 0.0) {
    *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
    iVar4 = *(int *)(param_1 + 0x24);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x24);
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x28);
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x20);
    return;
  }
  return;
}


