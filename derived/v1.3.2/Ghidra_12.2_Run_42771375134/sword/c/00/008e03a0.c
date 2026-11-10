/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e03a0; name: FUN_008e03a0
 */


void FUN_008e03a0(undefined8 param_1,short *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined1 uVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  pbVar9 = (byte *)((long)param_2 + 7);
  *param_2 = 0;
  puVar5 = PTR_DAT_02717c38;
  pbVar8 = (byte *)(param_2 + 1);
  pbVar1 = (byte *)((long)param_2 + 3);
  pbVar2 = (byte *)(param_2 + 2);
  pbVar3 = (byte *)((long)param_2 + 5);
  pbVar4 = (byte *)(param_2 + 3);
  pbVar10 = pbVar8;
  switch(*(undefined4 *)PTR_DAT_02717c38) {
  case 0:
    break;
  case 1:
    pbVar10 = pbVar1;
    break;
  case 2:
    pbVar10 = pbVar2;
    break;
  case 3:
    pbVar10 = pbVar4;
    break;
  case 4:
    pbVar10 = pbVar9;
    break;
  case 5:
    pbVar10 = pbVar3;
    break;
  default:
    goto switchD_008e0408_default;
  }
  bVar7 = FUN_0087a6e0(param_3);
  *pbVar10 = bVar7;
  *param_2 = *param_2 + (ushort)bVar7;
switchD_008e0408_default:
  pbVar10 = pbVar8;
  switch(*(undefined4 *)(puVar5 + 4)) {
  case 0:
    break;
  case 1:
    pbVar10 = pbVar1;
    break;
  case 2:
    pbVar10 = pbVar2;
    break;
  case 3:
    pbVar10 = pbVar4;
    break;
  case 4:
    pbVar10 = pbVar9;
    break;
  case 5:
    pbVar10 = pbVar3;
    break;
  default:
    goto switchD_008e0468_default;
  }
  bVar7 = FUN_0087a6e0(param_3);
  *pbVar10 = bVar7;
  *param_2 = *param_2 + (ushort)bVar7;
switchD_008e0468_default:
  pbVar10 = pbVar8;
  switch(*(undefined4 *)(puVar5 + 8)) {
  case 0:
    break;
  case 1:
    pbVar10 = pbVar1;
    break;
  case 2:
    pbVar10 = pbVar2;
    break;
  case 3:
    pbVar10 = pbVar4;
    break;
  case 4:
    pbVar10 = pbVar9;
    break;
  case 5:
    pbVar10 = pbVar3;
    break;
  default:
    goto switchD_008e04c8_default;
  }
  bVar7 = FUN_0087a6e0(param_3);
  *pbVar10 = bVar7;
  *param_2 = *param_2 + (ushort)bVar7;
switchD_008e04c8_default:
  pbVar10 = pbVar8;
  switch(*(undefined4 *)(puVar5 + 0xc)) {
  case 0:
    break;
  case 1:
    pbVar10 = pbVar1;
    break;
  case 2:
    pbVar10 = pbVar2;
    break;
  case 3:
    pbVar10 = pbVar4;
    break;
  case 4:
    pbVar10 = pbVar9;
    break;
  case 5:
    pbVar10 = pbVar3;
    break;
  default:
    goto switchD_008e0528_default;
  }
  bVar7 = FUN_0087a6e0(param_3);
  *pbVar10 = bVar7;
  *param_2 = *param_2 + (ushort)bVar7;
switchD_008e0528_default:
  pbVar10 = pbVar8;
  switch(*(undefined4 *)(puVar5 + 0x10)) {
  case 0:
    break;
  case 1:
    pbVar10 = pbVar1;
    break;
  case 2:
    pbVar10 = pbVar2;
    break;
  case 3:
    pbVar10 = pbVar4;
    break;
  case 4:
    pbVar10 = pbVar9;
    break;
  case 5:
    pbVar10 = pbVar3;
    break;
  default:
    goto switchD_008e0588_default;
  }
  bVar7 = FUN_0087a6e0(param_3);
  *pbVar10 = bVar7;
  *param_2 = *param_2 + (ushort)bVar7;
switchD_008e0588_default:
  switch(*(undefined4 *)(puVar5 + 0x14)) {
  case 0:
    break;
  case 1:
    pbVar8 = pbVar1;
    break;
  case 2:
    pbVar8 = pbVar2;
    break;
  case 3:
    pbVar8 = pbVar4;
    break;
  case 4:
    pbVar8 = pbVar9;
    break;
  case 5:
    pbVar8 = pbVar3;
    break;
  default:
    goto switchD_008e05e4_default;
  }
  bVar7 = FUN_0087a6e0(param_3);
  *pbVar8 = bVar7;
  *param_2 = *param_2 + (ushort)bVar7;
switchD_008e05e4_default:
  uVar6 = FUN_00879890(param_3);
  *(undefined1 *)(param_2 + 4) = uVar6;
  bVar7 = FUN_0087ee80(param_3);
  *(byte *)((long)param_2 + 9) = bVar7 & 1;
  *(undefined1 *)(param_2 + 5) = 0;
  return;
}


