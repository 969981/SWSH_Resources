/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009643c0; name: FUN_009643c0
 */


void FUN_009643c0(undefined8 *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined1 auStack_64 [4];
  undefined1 auStack_58 [8];
  
  uVar9 = FUN_00965740(param_2);
  if ((uVar9 & 1) == 0) {
    return;
  }
  uVar16 = *param_1;
  uVar6 = *(undefined2 *)(param_1 + 1);
  uVar1 = FUN_00965610(param_2,0);
  uVar2 = FUN_00965610(param_2,1);
  uVar3 = FUN_00965610(param_2,2);
  uVar4 = FUN_00965610(param_2,3);
  uVar5 = FUN_00965610(param_2,4);
  uVar7 = FUN_00965600(param_2);
  uVar7 = uVar7 & 0xff;
  uVar17 = 0;
  FUN_00918050(uVar16,uVar6,0xb6,uVar1,uVar2,uVar3,uVar4,uVar5,uVar7,0);
  FUN_00943e60(auStack_58);
  FUN_009653a0(auStack_64 + 4,auStack_58,param_2);
  uVar6 = FUN_00943f40(auStack_58);
  puVar10 = (undefined4 *)FUN_00943fc0(auStack_58);
  uVar1 = FUN_00943fb0(auStack_58);
  iVar8 = FUN_00943f50(auStack_58);
  if (iVar8 == 1) {
    switch(uVar1) {
    case 0:
      uVar16 = *param_1;
      uVar1 = *(undefined2 *)((long)param_1 + 10);
      uVar11 = 0xba;
LAB_009645b4:
      FUN_009181d0(uVar16,uVar1,uVar11,uVar6,0xffff0000);
      return;
    case 1:
      uVar16 = *param_1;
      uVar17 = *puVar10;
      uVar12 = puVar10[1];
      uVar1 = *(undefined2 *)((long)param_1 + 10);
      uVar11 = 0xba;
LAB_00964650:
      FUN_009181d0(uVar16,uVar1,uVar11,uVar6,uVar17,uVar12,0xffff0000);
      return;
    case 2:
      uVar16 = *param_1;
      uVar12 = *puVar10;
      uVar13 = puVar10[1];
      uVar14 = puVar10[2];
      uVar11 = 0xba;
      uVar1 = *(undefined2 *)((long)param_1 + 10);
      uVar15 = 0xffff0000;
      break;
    case 3:
      uVar16 = *param_1;
      uVar12 = *puVar10;
      uVar13 = puVar10[1];
      uVar14 = puVar10[2];
      uVar15 = puVar10[3];
      uVar1 = *(undefined2 *)((long)param_1 + 10);
      uVar11 = 0xba;
      uVar7 = 0xffff0000;
      break;
    case 4:
      uVar7 = puVar10[4];
      uVar16 = *param_1;
      uVar12 = *puVar10;
      uVar13 = puVar10[1];
      uVar14 = puVar10[2];
      uVar15 = puVar10[3];
      uVar11 = 0xba;
LAB_009646bc:
      uVar1 = *(undefined2 *)((long)param_1 + 10);
      uVar17 = 0xffff0000;
      break;
    default:
      goto switchD_00964558_default;
    }
  }
  else {
    iVar8 = FUN_00943f50(auStack_58);
    if (iVar8 != 2) {
      return;
    }
    switch(uVar1) {
    case 0:
      uVar16 = *param_1;
      uVar1 = *(undefined2 *)((long)param_1 + 10);
      uVar11 = 0xbb;
      goto LAB_009645b4;
    case 1:
      uVar16 = *param_1;
      uVar17 = *puVar10;
      uVar12 = puVar10[1];
      uVar1 = *(undefined2 *)((long)param_1 + 10);
      uVar11 = 0xbb;
      goto LAB_00964650;
    case 2:
      uVar16 = *param_1;
      uVar12 = *puVar10;
      uVar13 = puVar10[1];
      uVar14 = puVar10[2];
      uVar11 = 0xbb;
      uVar1 = *(undefined2 *)((long)param_1 + 10);
      uVar15 = 0xffff0000;
      break;
    case 3:
      uVar16 = *param_1;
      uVar12 = *puVar10;
      uVar13 = puVar10[1];
      uVar14 = puVar10[2];
      uVar15 = puVar10[3];
      uVar1 = *(undefined2 *)((long)param_1 + 10);
      uVar11 = 0xbb;
      uVar7 = 0xffff0000;
      break;
    case 4:
      uVar16 = *param_1;
      uVar12 = *puVar10;
      uVar13 = puVar10[1];
      uVar14 = puVar10[2];
      uVar15 = puVar10[3];
      uVar7 = puVar10[4];
      uVar11 = 0xbb;
      goto LAB_009646bc;
    default:
      goto switchD_00964558_default;
    }
  }
  FUN_009181d0(uVar16,uVar1,uVar11,uVar6,uVar12,uVar13,uVar14,uVar15,uVar7,uVar17);
switchD_00964558_default:
  return;
}


