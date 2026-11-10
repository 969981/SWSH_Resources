/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e8080; name: FUN_003e8080
 */


void FUN_003e8080(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  uint uVar10;
  
  piVar4 = *(int **)(param_1 + 0x1148);
  lVar5 = *(long *)(piVar4 + 4);
  iVar1 = piVar4[1];
  uVar2 = (ulong)(uint)piVar4[2];
  puVar7 = (undefined8 *)(lVar5 + uVar2 * 0x18 + 8);
  puVar9 = (undefined8 *)*puVar7;
  if (puVar9 == (undefined8 *)0x0) {
    piVar8 = (int *)(lVar5 + uVar2 * 0x18 + 0x10);
    iVar3 = *piVar8;
    if (iVar3 != *piVar4) {
      *piVar8 = iVar3 + 1;
      puVar9 = (undefined8 *)(*(long *)(lVar5 + uVar2 * 0x18) + (ulong)(uint)(iVar3 * iVar1));
      if (puVar9 != (undefined8 *)0x0) goto LAB_003e8118;
    }
    puVar9 = (undefined8 *)FUN_003f1aa0();
  }
  else {
    *puVar7 = *puVar9;
  }
LAB_003e8118:
  FUN_003bed50(puVar9,param_1,param_2);
  if ((*(byte *)(puVar9[0x11] + 0x1c) >> 5 & 1) != 0) {
    if (*(char *)(puVar9[10] + 0xd) == '\x04') {
      uVar10 = *(uint *)(puVar9 + 0x16);
      if (0xffffffbf < uVar10) goto LAB_003e81b8;
      FUN_00190b50(param_1 + 0x1f80,(uVar10 >> 6) + 1);
      lVar5 = *(long *)(param_1 + 0x1f80);
    }
    else {
      uVar10 = *(uint *)(puVar9 + 0x16);
      FUN_00190b50(param_1 + 0x1f70,(uVar10 >> 6) + 1);
      lVar5 = *(long *)(param_1 + 0x1f70);
    }
    lVar6 = (ulong)(uVar10 >> 0xb) * 4;
    *(uint *)(lVar5 + lVar6) = *(uint *)(lVar5 + lVar6) | 1 << (ulong)(uVar10 >> 6 & 0x1f);
  }
LAB_003e81b8:
  (**(code **)(**(long **)(param_1 + 0x760) + 0x30))
            (*(long **)(param_1 + 0x760),puVar9 + 0xc,*(uint *)(puVar9 + 0x16) >> 6);
  *(int *)(param_1 + 0x1294) = *(int *)(param_1 + 0x1294) + 1;
  FUN_003e7690(param_1,param_3,param_4,param_5,puVar9,param_6);
  return;
}


