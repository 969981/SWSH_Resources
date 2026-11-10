/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090e410; name: FUN_0090e410
 */


void FUN_0090e410(long param_1)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  byte local_6c [4];
  undefined1 auStack_68 [40];
  byte local_38 [4];
  undefined4 local_34;
  
  lVar1 = param_1 + 0xf8;
  local_34 = 0;
  *(undefined1 *)(param_1 + 0x5e4) = 0;
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  FUN_009afa30(lVar1);
  uVar3 = FUN_009afa70(lVar1,&local_34,local_38,local_6c,auStack_68);
  bVar2 = local_6c[0];
  while ((uVar3 & 1) != 0) {
    uVar3 = (ulong)local_38[0];
    uVar4 = (uint)bVar2;
    local_6c[0] = bVar2;
    if (bVar2 != 0) {
      if (bVar2 < 2) {
        uVar4 = 1;
      }
      memcpy((void *)(param_1 + uVar3 * 0x30 + 0x4f0),auStack_68,(ulong)(uVar4 << 3));
    }
    *(byte *)(param_1 + uVar3 + 0x5e0) = bVar2;
    uVar3 = FUN_009afa70(lVar1,&local_34,local_38,local_6c,auStack_68);
    bVar2 = local_6c[0];
  }
  return;
}


