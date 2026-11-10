/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dd8f0; name: FUN_003dd8f0
 */


void FUN_003dd8f0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  long local_58;
  
  bVar4 = *(byte *)(param_2 + 0x24);
  lVar1 = param_1 + (ulong)bVar4 * 0x10;
  puVar10 = (uint *)(lVar1 + 0x40);
  uVar3 = *puVar10;
  *(uint *)(param_2 + 0x18) = uVar3;
  uVar5 = *(uint *)(lVar1 + 0x44);
  plVar9 = (long *)(lVar1 + 0x38);
  local_58 = param_2;
  if ((uVar5 & 0x7fffffff) == 0) {
    FUN_00114c10(plVar9,0x40);
    uVar2 = *puVar10;
    if (uVar2 < (*(uint *)(lVar1 + 0x44) & 0x7fffffff)) goto LAB_003dd950;
  }
  else {
    uVar2 = uVar3;
    if (uVar3 < (uVar5 & 0x7fffffff)) {
LAB_003dd950:
      *(long *)(*plVar9 + (ulong)uVar2 * 8) = param_2;
      *puVar10 = uVar2 + 1;
      goto joined_r0x003dd9d8;
    }
  }
  FUN_003f2850(plVar9,&local_58);
joined_r0x003dd9d8:
  if ((param_3 & 1) != 0) {
    puVar10 = (uint *)(param_1 + (ulong)bVar4 * 4 + 0x68);
    uVar5 = *puVar10;
    if (uVar5 < uVar3) {
      lVar6 = *(long *)(lVar1 + 0x38);
      lVar8 = *(long *)(lVar6 + (ulong)uVar5 * 8);
      lVar7 = *(long *)(lVar6 + (ulong)uVar3 * 8);
      *(long *)(lVar6 + (ulong)uVar3 * 8) = lVar8;
      *(long *)(*(long *)(lVar1 + 0x38) + (ulong)uVar5 * 8) = lVar7;
      *(uint *)(lVar7 + 0x18) = uVar5;
      *(uint *)(lVar8 + 0x18) = uVar3;
      uVar5 = *puVar10;
    }
    *puVar10 = uVar5 + 1;
  }
  return;
}


