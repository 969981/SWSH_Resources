/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c6f40; name: FUN_014c6f40
 */


void FUN_014c6f40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  int iVar10;
  
  uVar3 = FUN_014bf220(param_3);
  uVar4 = FUN_0077dba0(param_3,0);
  sVar5 = FUN_0077dba0(param_3,1);
  uVar6 = FUN_014c73a0(param_1,uVar4);
  uVar7 = FUN_008d3750();
  iVar10 = 0;
  if (5 < (uVar7 & 0xff) - 2) goto switchD_014c6fd0_caseD_6;
  uVar1 = uVar6 >> 0x12 & 7;
  uVar9 = uVar6 & 3;
  uVar2 = uVar6 >> 2 & 7;
  switch(uVar7 & 0xff) {
  case 2:
    iVar10 = uVar2 + uVar1 * 2;
    break;
  case 3:
    iVar10 = uVar2 + uVar9 * 2 + uVar1 * 4;
    break;
  case 4:
    iVar10 = 10;
    uVar9 = uVar9 | uVar9 << 2;
    goto LAB_014c7020;
  case 5:
    iVar10 = uVar1 * 3 + uVar9;
    break;
  case 6:
    goto switchD_014c6fd0_caseD_6;
  case 7:
    uVar9 = uVar9 * 3;
    iVar10 = 6;
LAB_014c7020:
    iVar10 = uVar9 + uVar2 + uVar1 * iVar10;
switchD_014c6fd0_caseD_6:
  }
  if ((sVar5 != 0) || ((uVar6 >> 9 & 1) == 0)) {
    psVar8 = (short *)FUN_014bb580(*(undefined8 *)PTR_DAT_02710898,uVar3,iVar10);
    sVar5 = *psVar8;
    while (sVar5 != 0) {
      psVar8 = psVar8 + 1;
      FUN_0077d5c0(param_2);
      sVar5 = *psVar8;
    }
  }
  FUN_0077db30(param_3);
  return;
}


