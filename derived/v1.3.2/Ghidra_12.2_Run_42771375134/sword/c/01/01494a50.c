/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01494a50; name: FUN_01494a50
 */


void FUN_01494a50(char *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  uVar2 = 0xff;
  if (uVar1 <= *(uint *)(param_1 + 0x44)) {
    uVar2 = (uint)(((float)uVar1 / (float)*(uint *)(param_1 + 0x44)) * *(float *)(param_1 + 0x20) *
                  DAT_01d4c154);
    *(uint *)(param_1 + 0x80) = uVar1 + 1;
  }
  if (param_1[0x84] != '\0') {
    uVar2 = 0xff - uVar2;
  }
  local_28 = uVar2 << 0x18 | 0xffffff;
  FUN_0073d460(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),&local_28);
  FUN_0073e750(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),param_1 + 0x78);
  if (*param_1 != '\0') {
    local_2c = 0x40200000;
    FUN_0073d4b0(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),&local_2c);
    local_24 = (int)(((float)uVar2 / DAT_01d4c154) * DAT_01d4c154) << 0x18 |
               (int)(*(float *)(param_1 + 0x34) * DAT_01d4c154) & 0xffU |
               ((int)(*(float *)(param_1 + 0x38) * DAT_01d4c154) & 0xffU) << 8 |
               ((int)(*(float *)(param_1 + 0x3c) * DAT_01d4c154) & 0xffU) << 0x10;
    FUN_0073d460(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),&local_24);
    FUN_0073e750(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0xb0),param_1 + 0x7c);
  }
  return;
}


