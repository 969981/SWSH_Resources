/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001157a0; name: FUN_001157a0
 */


void FUN_001157a0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  ushort *puVar5;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  uint local_34;
  
  uVar1 = *(uint *)(param_1 + 0x44) & 0x7fffffff;
  local_34 = param_5;
  if (uVar1 <= param_5) {
    uVar3 = param_5 * 2 + 2;
    if (uVar3 < 0x101) {
      uVar3 = 0x100;
    }
    if (uVar1 < uVar3) {
      FUN_0011b200(param_1 + 0x38,uVar3);
    }
    FUN_00190b50(param_1 + 0x110,uVar3);
  }
  uVar1 = *(uint *)(param_1 + 0x40);
  local_4c = 0x10;
  if (uVar1 < param_5 + 1) {
    uVar1 = param_5 + 1;
  }
  local_50 = 0;
  local_48 = 0xffffffffffffffff;
  FUN_00115900(param_1 + 0x38,uVar1,&local_50);
  lVar4 = (ulong)(param_5 >> 5) * 4;
  *(uint *)(*(long *)(param_1 + 0x110) + lVar4) =
       *(uint *)(*(long *)(param_1 + 0x110) + lVar4) & (1 << (ulong)(param_5 & 0x1f) ^ 0xffffffffU);
  lVar4 = *(long *)(param_1 + 0x38);
  puVar5 = (ushort *)(lVar4 + (ulong)local_34 * 0x10 + 4);
  uVar2 = *puVar5;
  if ((uVar2 >> 1 & 1) == 0) {
    if ((uVar2 >> 3 & 1) != 0) {
      return;
    }
    uVar2 = uVar2 & 0xffef;
    *puVar5 = uVar2;
    *(uint *)(lVar4 + (ulong)local_34 * 0x10) = param_4;
    param_1 = param_1 + (ulong)param_4 * 0x10;
    if (*(uint *)(param_1 + 0x160) < (*(uint *)(param_1 + 0x164) & 0x7fffffff)) {
      *(uint *)(*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x160) * 4) = local_34;
      *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
    }
    else {
      FUN_001b4230((long *)(param_1 + 0x158),&local_34);
      uVar2 = *puVar5;
    }
    uVar2 = uVar2 & 0xffbf | 8;
  }
  else {
    uVar2 = uVar2 & 0xfffd;
  }
  *puVar5 = uVar2;
  return;
}


