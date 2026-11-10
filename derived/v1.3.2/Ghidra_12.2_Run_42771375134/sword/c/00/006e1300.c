/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e1300; name: FUN_006e1300
 */


void FUN_006e1300(long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_02715500;
  local_68 = 0;
  lVar11 = *(long *)(param_1 + 0x60);
  lVar13 = *(long *)(param_1 + 0x148);
  local_78 = 0;
  uStack_70 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  iVar5 = *(int *)PTR_DAT_02715500;
  FUN_0199c2d0(&local_90);
  FUN_0199de60(*(long *)(lVar11 + 0x58) + (long)*(int *)puVar6 * 0x170,0x123);
  FUN_0199de90(*(long *)(lVar11 + 0x58) + (long)*(int *)puVar6 * 0x170,0x123);
  piVar12 = *(int **)(param_1 + 0x160);
  piVar3 = *(int **)(param_1 + 0x168);
  if (piVar12 != piVar3) {
    do {
      iVar1 = *piVar12;
      iVar2 = piVar12[1];
      iVar7 = FUN_006f82b0(*(undefined8 *)(param_1 + 0x150));
      iVar4 = piVar12[4];
      iVar8 = FUN_006f82b0(*(undefined8 *)(param_1 + 0x150));
      iVar9 = FUN_006f8330(*(undefined8 *)(param_1 + 0x150));
      local_90 = CONCAT44(local_90._4_4_,(iVar1 + iVar7 * iVar2 + iVar8 * iVar4 * iVar9) * 4);
      local_88 = CONCAT44(*piVar12,(undefined4)local_88);
      local_80 = CONCAT44(local_80._4_4_,piVar12[1]);
      local_78 = *(undefined8 *)(piVar12 + 2);
      local_68 = CONCAT44(local_68._4_4_,piVar12[4]);
      uVar10 = FUN_006f2950(*(undefined8 *)(param_1 + 0x150));
      FUN_0199d750(*(long *)(lVar11 + 0x58) + (long)*(int *)puVar6 * 0x170,
                   lVar13 + (long)iVar5 * 0x70 + 0x58,uVar10,&local_90);
      piVar12 = piVar12 + 5;
    } while (piVar12 != piVar3);
  }
  FUN_0199de60(*(long *)(lVar11 + 0x58) + (long)*(int *)puVar6 * 0x170,0x123);
  FUN_0199de90(*(long *)(lVar11 + 0x58) + (long)*(int *)puVar6 * 0x170,0x123);
  return;
}


