/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01200630; name: FUN_01200630
 */


void FUN_01200630(char *param_1,char *param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == '\0') {
    if (*param_2 != '\0') {
      uVar1 = *(undefined8 *)(param_2 + 8);
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      *(undefined8 *)(param_1 + 8) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      param_2[0x18] = '\0';
      param_2[0x19] = '\0';
      param_2[0x1a] = '\0';
      param_2[0x1b] = '\0';
      param_2[0x1c] = '\0';
      param_2[0x1d] = '\0';
      param_2[0x1e] = '\0';
      param_2[0x1f] = '\0';
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      param_2[0x20] = '\0';
      param_2[0x21] = '\0';
      param_2[0x22] = '\0';
      param_2[0x23] = '\0';
      param_2[0x24] = '\0';
      param_2[0x25] = '\0';
      param_2[0x26] = '\0';
      param_2[0x27] = '\0';
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      param_2[0x28] = '\0';
      param_2[0x29] = '\0';
      param_2[0x2a] = '\0';
      param_2[0x2b] = '\0';
      param_2[0x2c] = '\0';
      param_2[0x2d] = '\0';
      param_2[0x2e] = '\0';
      param_2[0x2f] = '\0';
      *(undefined8 *)(param_1 + 0x28) = uVar1;
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *param_1 = '\x01';
    }
    return;
  }
  if (*param_2 != '\0') {
    if (*(long *)(param_1 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    uVar1 = *(undefined8 *)(param_2 + 8);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    *(undefined8 *)(param_1 + 8) = uVar1;
    if (*(long *)(param_1 + 0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
    }
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    if (*(long *)(param_1 + 0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
    }
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x1c] = '\0';
    param_2[0x1d] = '\0';
    param_2[0x1e] = '\0';
    param_2[0x1f] = '\0';
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
    }
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x2c] = '\0';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
    }
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    param_2[0x28] = '\0';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    param_2[0x2c] = '\0';
    param_2[0x2d] = '\0';
    param_2[0x2e] = '\0';
    param_2[0x2f] = '\0';
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    return;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x48) + 0x18))();
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
  }
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = '\0';
  return;
}


