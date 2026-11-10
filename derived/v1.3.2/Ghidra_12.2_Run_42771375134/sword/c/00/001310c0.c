/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001310c0; name: FUN_001310c0
 */


undefined8
FUN_001310c0(undefined4 param_1,long param_2,uint param_3,undefined4 param_4,ulong param_5,
            uint param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  uint *local_70 [2];
  
  uVar1 = param_3 + 1;
  if (*(uint *)(param_2 + 0xb8) <= uVar1) {
    uVar3 = uVar1 | uVar1 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    iVar2 = (uVar3 | uVar3 >> 0x10) + 1;
    local_70[0] = (uint *)CONCAT44(local_70[0]._4_4_,0xffffffff);
    FUN_0012ff00(param_2 + 0x90,iVar2,local_70);
    local_70[0] = (uint *)0x0;
    FUN_0012ffe0(param_2 + 0xb0,iVar2,local_70);
    FUN_00130120(*(undefined8 *)(param_2 + 0xa8),iVar2);
    FUN_00190b50(param_2 + 0x50,iVar2);
    FUN_00190b50(param_2 + 0x60,iVar2);
  }
  uVar3 = *(uint *)(param_2 + 0x1d8);
  if (*(uint *)(param_2 + 0x1d8) <= uVar1) {
    uVar3 = uVar1;
  }
  *(uint *)(param_2 + 0x1d8) = uVar3;
  uVar4 = (ulong)param_3;
  *(undefined4 *)(*(long *)(param_2 + 0x98) + uVar4 * 4) = param_4;
  *(undefined4 *)(*(long *)(*(long *)(param_2 + 0xa8) + 8) + uVar4 * 4) = param_1;
  lVar5 = *(long *)(param_2 + 0xb0);
  *(ulong *)(lVar5 + uVar4 * 0x10) = param_5 & 0xfffffffffffffff0 | (ulong)(param_7 & 0xff);
  if (param_6 == 0xffffffff) {
    *(undefined4 *)(lVar5 + uVar4 * 0x10 + 8) = 0xffffffff;
    uVar4 = (ulong)(param_3 >> 5);
    uVar1 = *(uint *)(*(long *)(param_2 + 0x60) + uVar4 * 4);
    uVar3 = 1 << (ulong)(param_3 & 0x1f);
    if ((uVar1 & uVar3) == 0) {
      *(uint *)(*(long *)(param_2 + 0x50) + uVar4 * 4) =
           *(uint *)(*(long *)(param_2 + 0x50) + uVar4 * 4) | uVar3;
    }
    else {
      *(uint *)(*(long *)(param_2 + 0x60) + uVar4 * 4) = uVar1 & (uVar3 ^ 0xffffffff);
    }
    *(undefined1 *)(param_2 + 0x1dd) = 1;
  }
  else {
    *(uint *)(lVar5 + uVar4 * 0x10 + 8) = param_6 << 1;
    *(undefined1 *)(param_2 + 0x1dd) = 1;
    puVar6 = *(uint **)(*(long *)(param_2 + 0x1e8) + (ulong)param_6 * 8);
    if (puVar6[4] < 0x80) {
      if (puVar6[4] == 0) {
        uVar4 = (ulong)(*puVar6 >> 5);
        uVar1 = *(uint *)(*(long *)(param_2 + 0x60) + uVar4 * 4);
        uVar3 = 1 << ((ulong)*puVar6 & 0x1f);
        if ((uVar1 & uVar3) == 0) {
          *(uint *)(*(long *)(param_2 + 0x50) + uVar4 * 4) =
               *(uint *)(*(long *)(param_2 + 0x50) + uVar4 * 4) | uVar3;
        }
        else {
          *(uint *)(*(long *)(param_2 + 0x60) + uVar4 * 4) = uVar1 & (uVar3 ^ 0xffffffff);
        }
      }
      local_70[0] = (uint *)CONCAT44(local_70[0]._4_4_,param_3);
      if (puVar6[4] < (puVar6[5] & 0x7fffffff)) {
        *(uint *)(*(long *)(puVar6 + 2) + (ulong)puVar6[4] * 4) = param_3;
        puVar6[4] = puVar6[4] + 1;
        uVar1 = puVar6[8];
      }
      else {
        FUN_001b4230(puVar6 + 2,local_70);
        uVar1 = puVar6[8];
      }
      if (uVar1 == 0xffffffff) {
        uVar1 = *(uint *)(param_2 + 0x200);
        puVar6[8] = uVar1;
        if (uVar1 < (*(uint *)(param_2 + 0x204) & 0x7fffffff)) {
          *(uint **)(*(long *)(param_2 + 0x1f8) + (ulong)uVar1 * 8) = puVar6;
          *(uint *)(param_2 + 0x200) = uVar1 + 1;
        }
        else {
          local_70[0] = puVar6;
          FUN_00134780(param_2 + 0x1f8,local_70);
        }
      }
    }
  }
  return 1;
}


