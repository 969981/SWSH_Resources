/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e30080; name: FUN_00e30080
 */


void FUN_00e30080(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar1 = PTR_DAT_0271f6b8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(lVar2 + 0x80) != 0) {
      lVar3 = *(long *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((long)param_1 + 0x5c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  param_1[9] = (long)(puVar1 + 0x48);
  *(undefined1 *)((long)param_1 + 0x5e) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((long)param_1 + 100) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x6e) = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x86) = 0;
  *(undefined8 *)((long)param_1 + 0x8e) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x96) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x9e) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xff;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)((long)param_1 + 0xb6) = 1;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined2 *)((long)param_1 + 0xbc) = 0xffff;
  *(undefined8 *)((long)param_1 + 0xc6) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((long)param_1 + 0xde) = 0;
  *(undefined4 *)((long)param_1 + 0xee) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xe6) = 0xffffffffffffffff;
  *(undefined2 *)((long)param_1 + 0xf6) = 0;
  *(undefined4 *)((long)param_1 + 0xf2) = 0;
  *(undefined2 *)((long)param_1 + 0xfa) = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0xff;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined2 *)((long)param_1 + 0x10c) = 0;
  *(undefined1 *)((long)param_1 + 0x10e) = 1;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((long)param_1 + 0x114) = 0xffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((long)param_1 + 0x11e) = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((long)param_1 + 0x136) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x146) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x13e) = 0xffffffffffffffff;
  *(undefined2 *)((long)param_1 + 0x14e) = 0;
  *(undefined4 *)((long)param_1 + 0x14a) = 0;
  *(undefined2 *)((long)param_1 + 0x152) = 0;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0xff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)((long)param_1 + 0x164) = 0;
  *(undefined1 *)((long)param_1 + 0x166) = 1;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)((long)param_1 + 0x16c) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x176) = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((long)param_1 + 0x18e) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)((long)param_1 + 0x19e) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x196) = 0xffffffffffffffff;
  *(undefined2 *)((long)param_1 + 0x1a6) = 0;
  *(undefined4 *)((long)param_1 + 0x1a2) = 0;
  *(undefined2 *)((long)param_1 + 0x1aa) = 0;
  param_1[0x36] = 0;
  *(undefined2 *)(param_1 + 0x35) = 0xff;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined2 *)((long)param_1 + 0x1bc) = 0;
  *(undefined1 *)((long)param_1 + 0x1be) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined2 *)((long)param_1 + 0x1c4) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x1ce) = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((long)param_1 + 0x1e6) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((long)param_1 + 0x1ee) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x1f6) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1fa) = 0;
  *(undefined2 *)((long)param_1 + 0x21c) = 0xffff;
  *(undefined2 *)((long)param_1 + 0x1fe) = 0;
  *(undefined2 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined2 *)(param_1 + 0x40) = 0xff;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined2 *)((long)param_1 + 0x214) = 0;
  *(undefined1 *)((long)param_1 + 0x216) = 1;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined8 *)((long)param_1 + 0x226) = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((long)param_1 + 0x23e) = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((long)param_1 + 0x246) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x24e) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x252) = 0;
  param_1[0x4e] = -0x340d631b7bddd9bb;
  param_1[0x50] = -0x340d631b7bddd9bb;
  param_1[0x51] = -0x340d631b7bddd9bb;
  *(undefined2 *)((long)param_1 + 0x256) = 0;
  *(undefined2 *)((long)param_1 + 0x25a) = 0;
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x4b) = 0xff;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined1 *)((long)param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x53) = 2;
  *(undefined1 *)((long)param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x2a4) = 0;
  param_1[0x55] = 0;
  FUN_00e30330(param_1);
  return;
}


