/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c8f00; name: FUN_009c8f00
 */


void FUN_009c8f00(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
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
  puVar1 = PTR_DAT_02718870;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[9] = (long)(puVar1 + 0x48);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar3;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 2;
  *(undefined2 *)(param_1 + 0x18) = 1;
  *(undefined1 *)((long)param_1 + 0xc2) = 0;
  *(undefined1 *)((long)param_1 + 0xc4) = 0x1f;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((long)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 2;
  *(undefined1 *)((long)param_1 + 0xd4) = 1;
  *(undefined1 *)((long)param_1 + 0xd5) = 0;
  *(undefined1 *)((long)param_1 + 0xd6) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x15) = 2;
  *(undefined2 *)((long)param_1 + 0xac) = 1;
  *(undefined1 *)((long)param_1 + 0xae) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0x1f;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined2 *)((long)param_1 + 0x99) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0x1f;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((long)param_1 + 0xa4) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0x1f;
  *(undefined4 *)((long)param_1 + 0x8c) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 2;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined2 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined2 *)((long)param_1 + 0x84) = 1;
  *(undefined1 *)((long)param_1 + 0x86) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 2;
  *(undefined2 *)(param_1 + 0xe) = 1;
  *(undefined1 *)((long)param_1 + 0x72) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0x1f;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0x1f;
  *(undefined4 *)((long)param_1 + 100) = 0;
  return;
}


