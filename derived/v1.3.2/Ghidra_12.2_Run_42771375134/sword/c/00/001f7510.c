/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f7510; name: FUN_001f7510
 */


void FUN_001f7510(long param_1,long param_2,uint param_3)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 auStack_118 [216];
  long local_38;
  
  lVar1 = param_2 + 0x60;
  pbVar2 = (byte *)(*(long *)(PTR_DAT_02711068 +
                             (ulong)(*(uint *)(param_2 + 0x68) >> 0x18 & 0xf) * 8 + 0x30) + lVar1 +
                   0xc);
  if ((*(uint *)(param_2 + 0x68) & 1) != 0) {
    pbVar2 = *(byte **)(param_2 + 0x70);
  }
  if ((*pbVar2 >> 3 & 1) == 0) {
    if (*(char *)(param_1 + 0x1fc9) == '\0') {
      puVar4 = auStack_118;
      if (8 < *(ushort *)(param_2 + 0x30)) {
        puVar4 = (undefined1 *)0x0;
      }
    }
    else {
      puVar4 = (undefined1 *)0x0;
    }
    FUN_001ccd40(param_1 + 0x10,lVar1,0,puVar4);
    FUN_00207d60(param_2 + 0x28,param_1,param_2,param_3 & 1,puVar4);
    if (*(long *)(param_2 + 0x20) != 0) {
      FUN_001e17d0(param_2 + 0x18);
    }
  }
  else {
    FUN_001ccd40(param_1 + 0x10,lVar1,1,0);
    FUN_00207d60(param_2 + 0x28,param_1,param_2,param_3 & 1,0);
  }
  uVar3 = *(uint *)(param_1 + 0x25f0);
  *(uint *)(param_2 + 0x50) = uVar3;
  if (uVar3 < (*(uint *)(param_1 + 0x25f4) & 0x7fffffff)) {
    *(long *)(*(long *)(param_1 + 0x25e8) + (ulong)uVar3 * 8) = param_2;
    *(uint *)(param_1 + 0x25f0) = uVar3 + 1;
  }
  else {
    local_38 = param_2;
    FUN_00200180(param_1 + 0x25e8,&local_38);
  }
  return;
}


