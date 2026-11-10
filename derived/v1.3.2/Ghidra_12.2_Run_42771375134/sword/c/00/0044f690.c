/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044f690; name: FUN_0044f690
 */


void FUN_0044f690(undefined8 param_1,undefined1 param_2 [16],long param_3,undefined4 param_4)

{
  float fVar1;
  
  fVar1 = param_2._0_4_;
  switch(param_4) {
  case 0:
    *(ushort *)(param_3 + 0x154) = *(ushort *)(param_3 + 0x154) | 0x200;
    *(float *)(param_3 + 0xe8) = *(float *)(param_3 + 0xe8) + fVar1;
    return;
  case 2:
    *(float *)(param_3 + 0x68) = *(float *)(param_3 + 0x68) + fVar1;
    return;
  case 3:
    fVar1 = *(float *)(param_3 + 0xec) + fVar1;
    *(float *)(param_3 + 0xec) = fVar1;
    *(float *)(param_3 + 0x6c) = *(float *)(param_3 + 0xf0) + fVar1;
    return;
  case 4:
    fVar1 = *(float *)(param_3 + 0xf4) + fVar1;
    *(float *)(param_3 + 0xf4) = fVar1;
    *(float *)(param_3 + 0x70) = *(float *)(param_3 + 0xf8) + fVar1;
    return;
  case 5:
    return;
  case 7:
    *(float *)(param_3 + 0x78) = *(float *)(param_3 + 0x78) + fVar1;
    return;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    param_1 = param_2._0_8_;
    break;
  case 0x25:
    *(float *)(param_3 + 0x80) = *(float *)(param_3 + 0x80) + fVar1;
    return;
  case 0x26:
    *(float *)(param_3 + 0xd4) = *(float *)(param_3 + 0xd4) + fVar1;
    return;
  case 0x27:
    *(float *)(param_3 + 0x94) = *(float *)(param_3 + 0x94) + fVar1;
    return;
  case 0x28:
    *(float *)(param_3 + 0x98) = *(float *)(param_3 + 0x98) + fVar1;
    return;
  case 0x29:
    *(float *)(param_3 + 0x9c) = *(float *)(param_3 + 0x9c) + fVar1;
    return;
  case 0x2a:
    *(float *)(param_3 + 0xa0) = *(float *)(param_3 + 0xa0) + fVar1;
    return;
  case 0x2b:
    *(float *)(param_3 + 0x88) = *(float *)(param_3 + 0x88) + fVar1;
    return;
  case 0x2c:
    *(float *)(param_3 + 0x90) = *(float *)(param_3 + 0x90) + fVar1;
    return;
  case 0x2d:
    *(float *)(param_3 + 0x8c) = *(float *)(param_3 + 0x8c) + fVar1;
    return;
  case 0x2f:
    *(float *)(param_3 + 0xa4) = *(float *)(param_3 + 0xa4) + fVar1;
    return;
  case 0x30:
    *(float *)(param_3 + 0xa8) = *(float *)(param_3 + 0xa8) + fVar1;
    return;
  case 0x31:
    *(float *)(param_3 + 0xac) = *(float *)(param_3 + 0xac) + fVar1;
    return;
  case 0x32:
    *(float *)(param_3 + 0xb0) = *(float *)(param_3 + 0xb0) + fVar1;
    return;
  case 0x33:
    *(float *)(param_3 + 0xb4) = *(float *)(param_3 + 0xb4) + fVar1;
    return;
  case 0x34:
    *(float *)(param_3 + 0xb8) = *(float *)(param_3 + 0xb8) + fVar1;
    return;
  case 0x35:
    *(float *)(param_3 + 0xbc) = *(float *)(param_3 + 0xbc) + fVar1;
    return;
  case 0x36:
    *(float *)(param_3 + 0xc0) = *(float *)(param_3 + 0xc0) + fVar1;
    return;
  case 0x37:
    *(float *)(param_3 + 0xd8) = *(float *)(param_3 + 0xd8) + fVar1;
    return;
  case 0x38:
    *(float *)(param_3 + 0xdc) = *(float *)(param_3 + 0xdc) + fVar1;
    return;
  }
  FUN_0044f860(param_1);
  return;
}


