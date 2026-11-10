/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bd8b0; name: FUN_003bd8b0
 */


undefined4 * FUN_003bd8b0(long param_1,undefined4 *param_2)

{
  long lVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  param_2[2] = *(undefined4 *)(param_1 + 0x18);
  param_2[3] = *(undefined4 *)(param_1 + 0x1c);
  param_2[4] = *(undefined4 *)(param_1 + 0x20);
  param_2[5] = *(undefined4 *)(param_1 + 0x24);
  param_2[6] = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)(param_2 + 7) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined1 *)((long)param_2 + 0x1f) = *(undefined1 *)(param_1 + 0x2f);
  *(undefined2 *)((long)param_2 + 0x1d) = *(undefined2 *)(param_1 + 0x2d);
  param_2[8] = *(undefined4 *)(param_1 + 0x30);
  param_2[9] = *(undefined4 *)(param_1 + 0x34);
  param_2[10] = *(undefined4 *)(param_1 + 0x38);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x3c);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x40);
  param_2[0xd] = *(undefined4 *)(param_1 + 0x44);
  param_2[0xe] = *(undefined4 *)(param_1 + 0x48);
  param_2[0xf] = *(undefined4 *)(param_1 + 0x4c);
  param_2[0x10] = *(undefined4 *)(param_1 + 0x50);
  param_2[0x11] = *(undefined4 *)(param_1 + 0x54);
  param_2[0x12] = *(undefined4 *)(param_1 + 0x58);
  param_2[0x13] = *(undefined4 *)(param_1 + 0x5c);
  param_2[0x14] = *(undefined4 *)(param_1 + 0x60);
  param_2[0x15] = *(undefined4 *)(param_1 + 100);
  param_2[0x16] = *(undefined4 *)(param_1 + 0x68);
  param_2[0x1b] = *(undefined4 *)(param_1 + 0x7c);
  *(undefined8 *)(param_2 + 0x19) = *(undefined8 *)(param_1 + 0x74);
  *(undefined8 *)(param_2 + 0x17) = *(undefined8 *)(param_1 + 0x6c);
  param_2[0x1c] = *(undefined4 *)(param_1 + 0x80);
  param_2[0x1d] = *(undefined4 *)(param_1 + 0x84);
  param_2[0x1e] = *(undefined4 *)(param_1 + 0x88);
  memcpy(param_2 + 0x1f,(void *)(param_1 + 0x8c),0x22);
  *(undefined2 *)((long)param_2 + 0x9e) = *(undefined2 *)(param_1 + 0xae);
  lVar1 = *(long *)(param_1 + 0xb0);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x1f) == '\x01')) {
    param_2[0x1f] = *(undefined4 *)(lVar1 + 0x2c);
    param_2[0x1c] = *(undefined4 *)(lVar1 + 0x20);
    param_2[0x1d] = *(undefined4 *)(lVar1 + 0x24);
    param_2[0x1e] = *(undefined4 *)(lVar1 + 0x28);
    param_2[0x1a] = *(undefined4 *)(lVar1 + 0x30);
    param_2[0x1b] = *(undefined4 *)(lVar1 + 0x34);
    param_2[0x18] = *(undefined4 *)(lVar1 + 0x38);
    param_2[0x19] = *(undefined4 *)(lVar1 + 0x3c);
  }
  return (undefined4 *)(param_1 + 0x10);
}


