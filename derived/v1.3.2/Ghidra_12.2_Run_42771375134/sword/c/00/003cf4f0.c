/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cf4f0; name: FUN_003cf4f0
 */


void FUN_003cf4f0(long param_1,long param_2,int param_3,long param_4,uint param_5,undefined8 param_6
                 ,uint param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined2 local_78 [4];
  ulong local_70;
  ulong uStack_68;
  undefined2 local_58 [4];
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  if ((*(char *)(*(long *)(*(long *)(param_2 + 8) + 0x50) + 0xd) == '\x01') &&
     (0xfffffffd < *(uint *)(*(long *)(param_2 + 8) + 0xb8))) {
    FUN_003c00a0(DAT_01d4c464);
  }
  if ((*(char *)(*(long *)(*(long *)(param_2 + 0x10) + 0x50) + 0xd) == '\x01') &&
     (0xfffffffd < *(uint *)(*(long *)(param_2 + 0x10) + 0xb8))) {
    FUN_003c00a0(DAT_01d4c464);
  }
  uStack_68 = *(ulong *)(param_2 + 0x28);
  uVar3 = *(ulong *)(param_2 + 0x30);
  *(byte *)(param_2 + 0x25) = *(byte *)(param_2 + 0x25) & 0xdf;
  local_70 = uStack_68;
  if (uVar3 <= uStack_68) {
    local_70 = uVar3;
  }
  if (uStack_68 <= uVar3) {
    uStack_68 = uVar3;
  }
  FUN_003d7220(param_1 + 0x1558,&local_70);
  FUN_003cd9e0(param_1,param_2,5,0,param_5 & 1,param_6,param_7 & 1);
  if (param_3 == 0) {
    local_58[0] = *(undefined2 *)(param_4 + 2);
    lVar5 = FUN_003ce0f0(param_1,uVar1,uVar2,local_58,0,0);
    uVar4 = *(uint *)(param_4 + 4);
  }
  else if (param_3 == 1) {
    local_78[0] = *(undefined2 *)(param_4 + 2);
    lVar5 = FUN_003ce2e0(param_1,uVar1,uVar2,local_78);
    uVar4 = *(uint *)(param_4 + 4);
  }
  else if (param_3 == 2) {
    lVar5 = FUN_003ce460(param_1,uVar1,uVar2,0);
    uVar4 = *(uint *)(param_4 + 4);
  }
  else {
    lVar5 = 0;
    uVar4 = *(uint *)(param_4 + 4);
  }
  if (uVar4 != 0xffffffff) {
    *(byte *)(lVar5 + 0x25) = *(byte *)(lVar5 + 0x25) | 0x20;
    *(long *)(**(long **)(param_1 + 0x98) + (ulong)uVar4 * 8) = lVar5;
    *(uint *)(lVar5 + 0x38) = uVar4;
  }
  return;
}


