/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f4570; name: FUN_004f4570
 */


void FUN_004f4570(long param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uStack_420;
  undefined4 auStack_414 [253];
  
  uVar6 = *(int *)(param_1 + 0x108) + *(int *)(param_1 + 0xe8) + 2;
  if (uVar6 == 0) {
    lVar4 = *(long *)(param_1 + 8);
    puVar10 = (undefined8 *)0x0;
    iVar5 = 0;
  }
  else {
    puVar10 = &uStack_420 + (ulong)uVar6 * -2 + 0x80;
    uVar3 = FUN_004f4640(param_1,puVar10);
    lVar4 = *(long *)(param_1 + 8);
    uVar6 = (uint)*(byte *)(lVar4 + 0x54);
    if (*(byte *)(lVar4 + 0x54) != 0) {
      if (*(uint *)(param_1 + 0xe8) == 0) {
        uVar6 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x98);
        uVar7 = 0;
        lVar9 = (ulong)*(uint *)(param_1 + 0xe8) * 0x18;
        puVar8 = *(undefined4 **)(param_1 + 0xe0);
        do {
          puVar1 = puVar10 + (ulong)uVar3 * 2 + uVar7 * 2;
          uVar6 = (int)uVar7 + 1;
          uVar7 = (ulong)uVar6;
          *puVar1 = *(undefined8 *)(lVar4 + 0x48);
          lVar9 = lVar9 + -0x18;
          *(undefined4 *)(puVar1 + 1) = *puVar8;
          *(undefined4 *)((long)puVar1 + 0xc) = uVar2;
          puVar8 = puVar8 + 6;
        } while (lVar9 != 0);
      }
    }
    iVar5 = uVar6 + uVar3;
  }
  FUN_00498930(*(undefined8 *)PTR_DAT_02712d20,lVar4,puVar10,iVar5);
  return;
}


