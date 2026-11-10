/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00130fe0; name: FUN_00130fe0
 */


void FUN_00130fe0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_40 [2];
  
  uVar2 = param_2 + 1;
  if (*(uint *)(param_1 + 0xb8) <= uVar2) {
    uVar2 = uVar2 | uVar2 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    iVar3 = (uVar2 | uVar2 >> 0x10) + 1;
    local_40[0] = CONCAT44(local_40[0]._4_4_,0xffffffff);
    FUN_0012ff00(param_1 + 0x90,iVar3,local_40);
    local_40[0] = 0;
    FUN_0012ffe0(param_1 + 0xb0,iVar3,local_40);
    FUN_00130120(*(undefined8 *)(param_1 + 0xa8),iVar3);
    FUN_00190b50(param_1 + 0x50,iVar3);
    FUN_00190b50(param_1 + 0x60,iVar3);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x98) + (ulong)param_2 * 4) = 0xffffffff;
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xa8) + 8) + (ulong)param_2 * 4) = 0;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)param_2 * 0x10);
  *(undefined4 *)(puVar1 + 1) = 0xffffffff;
  *puVar1 = 0;
  return;
}


