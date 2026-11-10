/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b7940; name: FUN_014b7940
 */


int FUN_014b7940(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  
  uVar8 = FUN_0087ec90();
  bVar2 = FUN_00879070(param_1,0);
  bVar3 = FUN_00879070(param_1,1);
  bVar4 = FUN_00879070(param_1,2);
  bVar5 = FUN_00879070(param_1,3);
  bVar6 = FUN_00879070(param_1,4);
  bVar7 = FUN_00879070(param_1,5);
  uVar9 = (ulong)(uVar8 % 6);
  uVar8 = *(uint *)(&DAT_02171978 + uVar9 * 0x18);
  bVar10 = bVar2;
  switch(*(undefined4 *)(&DAT_02171960 + (ulong)uVar8 * 4)) {
  case 0:
    goto switchD_014b7a54_caseD_0;
  case 1:
    bVar10 = bVar3;
switchD_014b7a54_caseD_0:
    if (bVar10 != 0) goto LAB_014b7a6c;
    goto switchD_014b7a54_default;
  case 2:
    bVar10 = bVar4;
    break;
  case 3:
    bVar10 = bVar5;
    break;
  case 4:
    bVar10 = bVar6;
    break;
  case 5:
    bVar10 = bVar7;
    break;
  default:
    goto switchD_014b7a54_default;
  }
  if (bVar10 == 0) {
switchD_014b7a54_default:
    bVar10 = 0;
    uVar8 = 0;
  }
LAB_014b7a6c:
  switch(*(undefined4 *)(&DAT_02171960 + (ulong)*(uint *)(&DAT_0217197c + uVar9 * 0x18) * 4)) {
  case 0:
    bVar11 = bVar2;
    break;
  case 1:
    bVar11 = bVar3;
    break;
  case 2:
    bVar11 = bVar4;
    break;
  case 3:
    bVar11 = bVar5;
    break;
  case 4:
    bVar11 = bVar6;
    break;
  case 5:
    bVar11 = bVar7;
    break;
  default:
    bVar11 = 0;
  }
  uVar1 = *(uint *)(&DAT_0217197c + uVar9 * 0x18);
  if (bVar11 <= bVar10) {
    uVar1 = uVar8;
  }
  if (bVar11 <= bVar10) {
    bVar11 = bVar10;
  }
  switch(*(undefined4 *)(&DAT_02171960 + (ulong)*(uint *)(&DAT_02171980 + uVar9 * 0x18) * 4)) {
  case 0:
    bVar10 = bVar2;
    break;
  case 1:
    bVar10 = bVar3;
    break;
  case 2:
    bVar10 = bVar4;
    break;
  case 3:
    bVar10 = bVar5;
    break;
  case 4:
    bVar10 = bVar6;
    break;
  case 5:
    bVar10 = bVar7;
    break;
  default:
    bVar10 = 0;
  }
  uVar8 = *(uint *)(&DAT_02171980 + uVar9 * 0x18);
  if (bVar10 <= bVar11) {
    uVar8 = uVar1;
  }
  if (bVar10 <= bVar11) {
    bVar10 = bVar11;
  }
  switch(*(undefined4 *)(&DAT_02171960 + (ulong)*(uint *)(&DAT_02171984 + uVar9 * 0x18) * 4)) {
  case 0:
    bVar11 = bVar2;
    break;
  case 1:
    bVar11 = bVar3;
    break;
  case 2:
    bVar11 = bVar4;
    break;
  case 3:
    bVar11 = bVar5;
    break;
  case 4:
    bVar11 = bVar6;
    break;
  case 5:
    bVar11 = bVar7;
    break;
  default:
    bVar11 = 0;
  }
  uVar1 = *(uint *)(&DAT_02171984 + uVar9 * 0x18);
  if (bVar11 <= bVar10) {
    uVar1 = uVar8;
  }
  if (bVar11 <= bVar10) {
    bVar11 = bVar10;
  }
  switch(*(undefined4 *)(&DAT_02171960 + (ulong)*(uint *)(&DAT_02171988 + uVar9 * 0x18) * 4)) {
  case 0:
    bVar10 = bVar2;
    break;
  case 1:
    bVar10 = bVar3;
    break;
  case 2:
    bVar10 = bVar4;
    break;
  case 3:
    bVar10 = bVar5;
    break;
  case 4:
    bVar10 = bVar6;
    break;
  case 5:
    bVar10 = bVar7;
    break;
  default:
    bVar10 = 0;
  }
  uVar8 = *(uint *)(&DAT_02171988 + uVar9 * 0x18);
  if (bVar10 <= bVar11) {
    uVar8 = uVar1;
  }
  if (bVar10 <= bVar11) {
    bVar10 = bVar11;
  }
  switch(*(undefined4 *)(&DAT_02171960 + (ulong)*(uint *)(&DAT_0217198c + uVar9 * 0x18) * 4)) {
  case 0:
    bVar7 = bVar2;
    break;
  case 1:
    bVar7 = bVar3;
    break;
  case 2:
    bVar7 = bVar4;
    break;
  case 3:
    bVar7 = bVar5;
    break;
  case 4:
    bVar7 = bVar6;
    break;
  case 5:
    break;
  default:
    bVar7 = 0;
  }
  bVar2 = bVar7;
  if (bVar7 <= bVar10) {
    bVar2 = bVar10;
  }
  uVar1 = *(uint *)(&DAT_0217198c + uVar9 * 0x18);
  if (bVar7 <= bVar10) {
    uVar1 = uVar8;
  }
  return (uint)bVar2 % 5 + uVar1 * 5;
}


