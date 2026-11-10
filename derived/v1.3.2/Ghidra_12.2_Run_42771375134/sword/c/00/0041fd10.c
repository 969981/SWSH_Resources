/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0041fd10; name: FUN_0041fd10
 */


undefined8 FUN_0041fd10(long param_1)

{
  uint uVar1;
  float fVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  float fVar6;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  uVar1 = *(uint *)(param_1 + 0x30) & 0xff;
  *(uint *)(param_1 + 0x38) = uVar1;
  uVar5 = uVar1;
  if (((*(uint *)(param_1 + 0x30) >> 0xf & 1) != 0) && (*(char *)(lVar3 + 0x20) == '\0')) {
    *(uint *)(param_1 + 0x38) = uVar1 - 1;
    uVar5 = uVar1 - 1;
  }
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x2c));
  if (*(char *)(lVar3 + 0x21) != '\0') {
    uVar5 = 1;
  }
  *(uint *)(param_1 + 0x3c) = uVar5;
  fVar2 = DAT_01d4bc34;
  uVar5 = (uint)(*(float *)(lVar3 + 0x1c) * fVar6);
  *(uint *)(param_1 + 0x40) = uVar5;
  fVar6 = expf(fVar2 / (float)uVar5);
  *(float *)(param_1 + 0x68) = fVar6;
  lVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                    (*(long **)(param_1 + 0x20),(ulong)(uVar1 << 2) * (ulong)uVar5);
  *(long *)(param_1 + 0x50) = lVar3;
  if (lVar3 == 0) {
    return 0x34;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((*(char *)(lVar3 + 0x21) == '\0') || (*(int *)(param_1 + 0x38) == 1)) {
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(undefined **)(param_1 + 8) = PTR_LAB_02712c88;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    puVar4 = PTR_LAB_02712c90;
    if ((*(char *)(param_1 + 0x31) < '\0') &&
       (puVar4 = PTR_LAB_02712c98, *(char *)(lVar3 + 0x20) != '\0')) {
      puVar4 = PTR_LAB_02712c90;
    }
    uVar1 = *(uint *)(param_1 + 0x3c);
    *(undefined **)(param_1 + 8) = puVar4;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (uVar1 != 0) {
    lVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                      (*(long **)(param_1 + 0x20),(ulong)uVar1 * 0xc);
    *(long *)(param_1 + 0x48) = lVar3;
    if (lVar3 == 0) {
      return 0x34;
    }
    lVar3 = *(long *)(param_1 + 0x18);
  }
  *(undefined1 *)(lVar3 + 0x22) = 0;
  return 1;
}


