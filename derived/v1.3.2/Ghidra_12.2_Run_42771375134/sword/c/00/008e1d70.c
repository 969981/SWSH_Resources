/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1d70; name: FUN_008e1d70
 */


void FUN_008e1d70(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  if (*(char *)(param_2 + 10) == '\0') {
    return;
  }
  uVar7 = FUN_0087f070(param_3);
  puVar6 = PTR_DAT_02717c38;
  puVar9 = (undefined1 *)(param_2 + 2);
  puVar1 = (undefined1 *)(param_2 + 3);
  puVar2 = (undefined1 *)(param_2 + 4);
  puVar3 = (undefined1 *)(param_2 + 5);
  puVar4 = (undefined1 *)(param_2 + 6);
  puVar5 = (undefined1 *)(param_2 + 7);
  puVar8 = puVar9;
  switch(*(undefined4 *)PTR_DAT_02717c38) {
  case 0:
    break;
  case 1:
    puVar8 = puVar1;
    break;
  case 2:
    puVar8 = puVar2;
    break;
  case 3:
    puVar8 = puVar4;
    break;
  case 4:
    puVar8 = puVar5;
    break;
  case 5:
    puVar8 = puVar3;
    break;
  default:
    goto switchD_008e1de8_default;
  }
  FUN_0087a8a0(param_3,*(undefined4 *)PTR_DAT_02717c38,*puVar8);
switchD_008e1de8_default:
  puVar8 = puVar9;
  switch(*(undefined4 *)(puVar6 + 4)) {
  case 0:
    break;
  case 1:
    puVar8 = puVar1;
    break;
  case 2:
    puVar8 = puVar2;
    break;
  case 3:
    puVar8 = puVar4;
    break;
  case 4:
    puVar8 = puVar5;
    break;
  case 5:
    puVar8 = puVar3;
    break;
  default:
    goto switchD_008e1e40_default;
  }
  FUN_0087a8a0(param_3,*(undefined4 *)(puVar6 + 4),*puVar8);
switchD_008e1e40_default:
  puVar8 = puVar9;
  switch(*(undefined4 *)(puVar6 + 8)) {
  case 0:
    break;
  case 1:
    puVar8 = puVar1;
    break;
  case 2:
    puVar8 = puVar2;
    break;
  case 3:
    puVar8 = puVar4;
    break;
  case 4:
    puVar8 = puVar5;
    break;
  case 5:
    puVar8 = puVar3;
    break;
  default:
    goto switchD_008e1e94_default;
  }
  FUN_0087a8a0(param_3,*(undefined4 *)(puVar6 + 8),*puVar8);
switchD_008e1e94_default:
  puVar8 = puVar9;
  switch(*(undefined4 *)(puVar6 + 0xc)) {
  case 0:
    break;
  case 1:
    puVar8 = puVar1;
    break;
  case 2:
    puVar8 = puVar2;
    break;
  case 3:
    puVar8 = puVar4;
    break;
  case 4:
    puVar8 = puVar5;
    break;
  case 5:
    puVar8 = puVar3;
    break;
  default:
    goto switchD_008e1ee8_default;
  }
  FUN_0087a8a0(param_3,*(undefined4 *)(puVar6 + 0xc),*puVar8);
switchD_008e1ee8_default:
  puVar8 = puVar9;
  switch(*(undefined4 *)(puVar6 + 0x10)) {
  case 0:
    break;
  case 1:
    puVar8 = puVar1;
    break;
  case 2:
    puVar8 = puVar2;
    break;
  case 3:
    puVar8 = puVar4;
    break;
  case 4:
    puVar8 = puVar5;
    break;
  case 5:
    puVar8 = puVar3;
    break;
  default:
    goto switchD_008e1f3c_default;
  }
  FUN_0087a8a0(param_3,*(undefined4 *)(puVar6 + 0x10),*puVar8);
switchD_008e1f3c_default:
  switch(*(undefined4 *)(puVar6 + 0x14)) {
  case 0:
    break;
  case 1:
    puVar9 = puVar1;
    break;
  case 2:
    puVar9 = puVar2;
    break;
  case 3:
    puVar9 = puVar4;
    break;
  case 4:
    puVar9 = puVar5;
    break;
  case 5:
    puVar9 = puVar3;
    break;
  default:
    goto switchD_008e1f8c_default;
  }
  FUN_0087a8a0(param_3,*(undefined4 *)(puVar6 + 0x14),*puVar9);
switchD_008e1f8c_default:
  FUN_008798b0(param_3,*(undefined1 *)(param_2 + 8));
  *(undefined1 *)(param_2 + 10) = 0;
  FUN_0087f0c0(param_3,uVar7 & 1);
  return;
}


