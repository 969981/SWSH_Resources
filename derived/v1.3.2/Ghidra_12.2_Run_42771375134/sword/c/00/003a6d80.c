/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a6d80; name: FUN_003a6d80
 */


void FUN_003a6d80(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  char local_74 [4];
  undefined8 local_70;
  undefined8 local_68;
  
  uVar7 = *(uint *)(param_1 + 0x1f18);
  if (uVar7 == *(uint *)(param_1 + 0x1f1c)) {
    FUN_003a6f20(param_1,uVar7 << 1);
    uVar7 = *(uint *)(param_1 + 0x1f18);
  }
  *(uint *)(param_1 + 0x1f18) = uVar7 + 1;
  lVar9 = *(long *)(*(long *)(param_1 + 0x1ea0) + 0x10);
  puVar10 = (undefined8 *)(*(long *)(param_1 + 0x1f10) + (ulong)uVar7 * 0x10);
  uVar5 = *puVar10;
  uVar1 = *(uint *)(param_2 + 0x20);
  puVar10[1] = param_3 & 0xffffffff;
  FUN_00397850(uVar5,param_2);
  puVar3 = *(undefined4 **)(param_2 + 8);
  puVar4 = (undefined4 *)(*(long *)(param_1 + 0x1f08) + (ulong)uVar7 * 0x18);
  *puVar4 = *puVar3;
  puVar4[1] = puVar3[1];
  puVar4[2] = puVar3[2];
  puVar4[3] = puVar3[3];
  puVar4[4] = puVar3[4];
  puVar4[5] = puVar3[5];
  FUN_003a6200((long *)(param_1 + 0x1ef8),*(undefined4 *)(param_2 + 0x10),uVar5);
  FUN_003a7130(param_1);
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar8 = 0;
    puVar10 = (undefined8 *)(lVar9 + (ulong)uVar1 * 0x10 + 8);
    do {
      uVar6 = 0xffffffff;
      if (uVar8 < *(uint *)(param_1 + 0x1f00)) {
        uVar6 = (ulong)*(uint *)(*(long *)(param_1 + 0x1ef8) + uVar8 * 4);
      }
      local_70 = puVar10[-1];
      local_68 = *puVar10;
      puVar2 = (undefined8 *)FUN_003a8e50(param_1 + 0x1ea8,&local_70,local_74);
      if (local_74[0] == '\0') {
        puVar2[1] = local_68;
        puVar2[2] = param_3 & 0xffffffff | uVar6 << 0x20;
        *(uint *)(puVar2 + 3) = uVar7;
        *puVar2 = local_70;
      }
      uVar8 = uVar8 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar8 < *(uint *)(param_2 + 0x10));
  }
  FUN_00397960(uVar5,*(undefined4 *)(param_2 + 0x20));
  return;
}


