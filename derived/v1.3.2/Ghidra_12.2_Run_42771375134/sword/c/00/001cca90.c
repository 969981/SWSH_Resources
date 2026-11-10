/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001cca90; name: FUN_001cca90
 */


void FUN_001cca90(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long local_38;
  
  if (*(uint *)(param_2 + 8) >> 0x1e == 2) {
    lVar2 = FUN_00206d30();
    if ((param_3 & 1) == 0) {
      uVar1 = FUN_001f3be0(param_2,&local_38);
      uVar3 = (ulong)uVar1;
      FUN_003e7b70(param_1 + 0x10,
                   *(long *)(PTR_DAT_02711068 + (ulong)(*(byte *)(param_2 + 0xb) & 0xf) * 8 + 0x30)
                   + param_2,local_38,uVar3,lVar2,0);
    }
    else {
      uVar1 = FUN_001f0560();
      uVar3 = (ulong)uVar1;
      FUN_003e8080(param_1 + 0x10,
                   *(long *)(PTR_DAT_02711068 + (ulong)(*(byte *)(param_2 + 0xb) & 0xf) * 8 + 0x30)
                   + param_2,local_38,uVar3,lVar2,0);
    }
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        FUN_00206d40(*(long *)(local_38 + uVar4 * 8) + lVar2 + -0x20);
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  return;
}


