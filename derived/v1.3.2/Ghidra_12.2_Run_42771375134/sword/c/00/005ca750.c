/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ca750; name: FUN_005ca750
 */


void FUN_005ca750(void)

{
  undefined4 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  puVar6 = PTR_DAT_02713f28;
  puVar5 = PTR_DAT_02713f08;
  puVar4 = PTR_DAT_02713f00;
  puVar3 = PTR_DAT_02713ef8;
  fVar2 = DAT_01d4bda0;
  lVar9 = 0;
  do {
    lVar10 = lVar9 * 4;
    *(int *)(puVar3 + lVar10) = (int)lVar9;
    iVar7 = rand();
    *(float *)(puVar4 + lVar10) = (float)iVar7 * fVar2 + (float)iVar7 * fVar2 + -1.0;
    iVar7 = rand();
    *(float *)(puVar5 + lVar10) = (float)iVar7 * fVar2 + (float)iVar7 * fVar2 + -1.0;
    iVar7 = rand();
    lVar9 = lVar9 + 1;
    *(float *)(puVar6 + lVar10) = (float)iVar7 * fVar2 + (float)iVar7 * fVar2 + -1.0;
  } while (lVar9 != 0x100);
  lVar9 = 0;
  do {
    iVar7 = rand();
    uVar1 = *(undefined4 *)(puVar3 + lVar9);
    uVar8 = -(ulong)((uint)(iVar7 % 0x100) >> 0x1f) & 0xfffffffc00000000 |
            (ulong)(uint)(iVar7 % 0x100) << 2;
    *(undefined4 *)(puVar3 + lVar9) = *(undefined4 *)(puVar3 + uVar8);
    lVar9 = lVar9 + 4;
    *(undefined4 *)(puVar3 + uVar8) = uVar1;
  } while (lVar9 != 0x400);
  return;
}


