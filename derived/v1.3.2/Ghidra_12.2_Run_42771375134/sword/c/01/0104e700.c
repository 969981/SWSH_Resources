/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0104e700; name: FUN_0104e700
 */


void FUN_0104e700(ulong *param_1,long param_2)

{
  char cVar1;
  
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *param_1 = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (ulong)*(ushort *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0xc);
  if (cVar1 == '\x01') {
    param_1[1] = (ulong)*(ushort *)(param_2 + 0x30);
    param_1[2] = (ulong)*(ushort *)(param_2 + 0x32);
    cVar1 = *(char *)(param_2 + 0xc);
  }
  if (cVar1 == '\x02') {
    param_1[3] = (ulong)*(ushort *)(param_2 + 0x30);
    param_1[4] = (ulong)*(ushort *)(param_2 + 0x32);
    param_1[5] = (ulong)*(ushort *)(param_2 + 0x34);
    param_1[6] = (ulong)*(ushort *)(param_2 + 0x36);
    param_1[7] = (ulong)*(ushort *)(param_2 + 0x38);
    param_1[8] = (ulong)*(ushort *)(param_2 + 0x3a);
    param_1[9] = (ulong)*(ushort *)(param_2 + 0x3c);
    param_1[10] = (ulong)*(ushort *)(param_2 + 0x3e);
    param_1[0xb] = (ulong)*(ushort *)(param_2 + 0x40);
    param_1[0xc] = (ulong)*(ushort *)(param_2 + 0x42);
    param_1[0xd] = (ulong)*(ushort *)(param_2 + 0x44);
    param_1[0xe] = (ulong)*(ushort *)(param_2 + 0x46);
    cVar1 = *(char *)(param_2 + 0xc);
  }
  if (cVar1 == '\x03') {
    param_1[0x1b] = (ulong)*(uint *)(param_2 + 0x30);
  }
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x14] = 0xffffffffffffffff;
  param_1[0x16] = 0xffffffffffffffff;
  param_1[0x18] = 0xffffffffffffffff;
  param_1[0x1a] = 0xffffffffffffffff;
  cVar1 = *(char *)(param_2 + 0xc);
  if (cVar1 == '\x04') {
    param_1[0xf] = (ulong)*(uint *)(param_2 + 0x30);
    if (*(uint *)(param_2 + 0x34) != 0xffffffff) {
      param_1[0x10] = (ulong)*(uint *)(param_2 + 0x34);
    }
    param_1[0x11] = (ulong)*(uint *)(param_2 + 0x38);
    if (*(uint *)(param_2 + 0x3c) != 0xffffffff) {
      param_1[0x12] = (ulong)*(uint *)(param_2 + 0x3c);
    }
    param_1[0x13] = (ulong)*(uint *)(param_2 + 0x40);
    if (*(uint *)(param_2 + 0x44) != 0xffffffff) {
      param_1[0x14] = (ulong)*(uint *)(param_2 + 0x44);
    }
    param_1[0x15] = (ulong)*(uint *)(param_2 + 0x48);
    if (*(uint *)(param_2 + 0x4c) != 0xffffffff) {
      param_1[0x16] = (ulong)*(uint *)(param_2 + 0x4c);
    }
    param_1[0x17] = (ulong)*(uint *)(param_2 + 0x50);
    if (*(uint *)(param_2 + 0x54) != 0xffffffff) {
      param_1[0x18] = (ulong)*(uint *)(param_2 + 0x54);
    }
    param_1[0x19] = (ulong)*(uint *)(param_2 + 0x58);
    if (*(uint *)(param_2 + 0x5c) != 0xffffffff) {
      param_1[0x1a] = (ulong)*(uint *)(param_2 + 0x5c);
    }
    cVar1 = *(char *)(param_2 + 0xc);
  }
  if (cVar1 == '\x05') {
    param_1[0x1c] = (ulong)*(uint *)(param_2 + 0x30);
    return;
  }
  return;
}


