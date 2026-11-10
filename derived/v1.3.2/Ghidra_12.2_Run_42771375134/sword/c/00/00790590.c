/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00790590; name: FUN_00790590
 */


void FUN_00790590(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar1 = *param_3;
  uVar6 = param_3[1];
  uVar11 = param_3[2];
  lVar12 = *(long *)(param_1 + 0x78);
  uVar2 = param_3[3];
  uVar7 = param_3[4];
  uVar3 = param_3[5];
  uVar8 = param_3[6];
  uVar4 = param_3[9];
  uVar9 = param_3[10];
  uVar5 = param_3[7];
  uVar10 = param_3[8];
  *(undefined1 *)(lVar12 + (ulong)param_2 + 0x8c8) = 1;
  lVar12 = lVar12 + (ulong)param_2 * 0x58;
  *(undefined8 *)(lVar12 + 0x8e0) = uVar1;
  *(undefined8 *)(lVar12 + 0x8f0) = uVar11;
  *(undefined8 *)(lVar12 + 0x8e8) = uVar6;
  *(undefined8 *)(lVar12 + 0x910) = uVar8;
  *(undefined8 *)(lVar12 + 0x908) = uVar3;
  *(undefined8 *)(lVar12 + 0x900) = uVar7;
  *(undefined8 *)(lVar12 + 0x8f8) = uVar2;
  *(undefined8 *)(lVar12 + 0x930) = uVar9;
  *(undefined8 *)(lVar12 + 0x928) = uVar4;
  *(undefined8 *)(lVar12 + 0x920) = uVar10;
  *(undefined8 *)(lVar12 + 0x918) = uVar5;
  *(undefined **)(lVar12 + 0x8e0) = PTR_LAB_027164c0;
  return;
}


