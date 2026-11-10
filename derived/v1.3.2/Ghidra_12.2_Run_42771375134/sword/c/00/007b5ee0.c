/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b5ee0; name: FUN_007b5ee0
 */


void FUN_007b5ee0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x248,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  puVar1 = PTR_DAT_02716a40;
  *puVar2 = 0x3e800002710;
  puVar2[1] = 0;
  *(undefined8 *)((long)puVar2 + 0x2c) = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  *(undefined1 *)((long)puVar2 + 0x104) = 0;
  *(undefined8 *)((long)puVar2 + 0xfc) = 0;
  puVar1 = puVar1 + 0x10;
  puVar2[2] = puVar1;
  puVar2[3] = (undefined8 *)((long)puVar2 + 0x2c);
  *(undefined4 *)(puVar2 + 4) = 0x50;
  *(undefined1 *)((long)puVar2 + 0x7c) = 0;
  *(undefined8 *)((long)puVar2 + 0x74) = 0;
  *(undefined8 *)((long)puVar2 + 0x6c) = 0;
  *(undefined8 *)((long)puVar2 + 100) = 0;
  *(undefined8 *)((long)puVar2 + 0x5c) = 0;
  *(undefined8 *)((long)puVar2 + 0x54) = 0;
  *(undefined8 *)((long)puVar2 + 0x4c) = 0;
  *(undefined8 *)((long)puVar2 + 0x44) = 0;
  *(undefined8 *)((long)puVar2 + 0x3c) = 0;
  *(undefined8 *)((long)puVar2 + 0x34) = 0;
  *(undefined8 *)((long)puVar2 + 0x24) = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0xff;
  *(undefined8 *)((long)puVar2 + 0xf4) = 0;
  *(undefined8 *)((long)puVar2 + 0xec) = 0;
  *(undefined8 *)((long)puVar2 + 0xb4) = 0;
  *(undefined4 *)(puVar2 + 0x15) = 0x50;
  *(undefined8 *)((long)puVar2 + 0xe4) = 0;
  *(undefined8 *)((long)puVar2 + 0xdc) = 0;
  *(undefined8 *)((long)puVar2 + 0xd4) = 0;
  *(undefined8 *)((long)puVar2 + 0xcc) = 0;
  *(undefined8 *)((long)puVar2 + 0xc4) = 0;
  *(undefined8 *)((long)puVar2 + 0xbc) = 0;
  *(undefined8 *)((long)puVar2 + 0xac) = 0;
  *(undefined1 *)(puVar2 + 0x21) = 0xff;
  *(undefined4 *)(puVar2 + 0x26) = 0x50;
  *(undefined1 *)((long)puVar2 + 0x18c) = 0;
  puVar2[0x13] = puVar1;
  puVar2[0x14] = (undefined8 *)((long)puVar2 + 0xb4);
  puVar2[0x22] = 0;
  puVar2[0x23] = 0;
  puVar2[0x24] = puVar1;
  puVar2[0x25] = (undefined8 *)((long)puVar2 + 0x13c);
  *(undefined8 *)((long)puVar2 + 0x184) = 0;
  *(undefined8 *)((long)puVar2 + 0x17c) = 0;
  *(undefined8 *)((long)puVar2 + 0x174) = 0;
  *(undefined8 *)((long)puVar2 + 0x16c) = 0;
  *(undefined8 *)((long)puVar2 + 0x164) = 0;
  *(undefined8 *)((long)puVar2 + 0x15c) = 0;
  *(undefined8 *)((long)puVar2 + 0x154) = 0;
  *(undefined8 *)((long)puVar2 + 0x14c) = 0;
  *(undefined8 *)((long)puVar2 + 0x144) = 0;
  *(undefined8 *)((long)puVar2 + 0x13c) = 0;
  *(undefined8 *)((long)puVar2 + 0x134) = 0;
  *(undefined4 *)(puVar2 + 0x37) = 0x50;
  *(undefined1 *)(puVar2 + 0x32) = 0xff;
  *(undefined1 *)((long)puVar2 + 0x214) = 0;
  puVar2[0x33] = 0;
  puVar2[0x34] = 0;
  puVar2[0x35] = puVar1;
  puVar2[0x36] = (undefined8 *)((long)puVar2 + 0x1c4);
  *(undefined8 *)((long)puVar2 + 0x20c) = 0;
  *(undefined8 *)((long)puVar2 + 0x204) = 0;
  *(undefined8 *)((long)puVar2 + 0x1fc) = 0;
  *(undefined8 *)((long)puVar2 + 500) = 0;
  *(undefined8 *)((long)puVar2 + 0x1ec) = 0;
  *(undefined8 *)((long)puVar2 + 0x1e4) = 0;
  *(undefined8 *)((long)puVar2 + 0x1dc) = 0;
  *(undefined8 *)((long)puVar2 + 0x1d4) = 0;
  *(undefined8 *)((long)puVar2 + 0x1cc) = 0;
  *(undefined8 *)((long)puVar2 + 0x1c4) = 0;
  *(undefined8 *)((long)puVar2 + 0x1bc) = 0;
  *(undefined1 *)(puVar2 + 0x43) = 0xff;
  puVar2[0x45] = 0;
  puVar2[0x44] = 0;
  *(undefined1 *)(puVar2 + 0x46) = 1;
  FUN_01866da0((long)puVar2 + 0x234);
  *puVar2 = 0x19000000fa0;
  *(undefined4 *)((long)puVar2 + 0x234) = 1;
  puVar2[0x48] = 0;
  puVar2[0x47] = 0;
  *param_1 = puVar2;
  param_1[1] = param_2;
  param_1[2] = 0x248;
  param_1[3] = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  return;
}


