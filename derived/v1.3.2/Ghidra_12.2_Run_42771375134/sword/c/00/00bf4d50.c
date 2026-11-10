/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf4d50; name: FUN_00bf4d50
 */


void FUN_00bf4d50(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_00bef870(*(undefined8 *)(param_1 + 0xb8));
  FUN_00bef870(*(undefined8 *)(param_1 + 0xe0));
  FUN_00bef870(*(undefined8 *)(param_1 + 0x100));
  FUN_00bef870(*(undefined8 *)(param_1 + 0xe8));
  FUN_00bef870(*(undefined8 *)(param_1 + 0x118));
  FUN_00bef870(*(undefined8 *)(param_1 + 0x120));
  FUN_00bef870(*(undefined8 *)(param_1 + 0x128));
  FUN_00bef870(*(undefined8 *)(param_1 + 0x130));
  FUN_00bef870(*(undefined8 *)(param_1 + 0xd8));
  FUN_00bef870(*(undefined8 *)(param_1 + 0x110));
  FUN_00bef870(*(undefined8 *)(param_1 + 200));
  FUN_00bef870(*(undefined8 *)(param_1 + 0xd0));
  switch(*(undefined4 *)(param_1 + 0x68)) {
  case 0:
    FUN_00bf7490(*(undefined8 *)(param_1 + 0xb8),0);
    return;
  default:
    return;
  case 5:
    FUN_00bf9bf0(*(undefined8 *)(param_1 + 0xe0),0);
    return;
  case 0x11:
    FUN_00c10960(*(undefined8 *)(param_1 + 0x100),0);
    return;
  case 0x37:
    FUN_00c097c0(*(undefined8 *)(param_1 + 0xe8),0,0);
  case 0x38:
    FUN_00c097c0(*(undefined8 *)(param_1 + 0xe8),0,1);
  case 0x39:
    FUN_00c097c0(*(undefined8 *)(param_1 + 0xe8),0,2);
  case 0x3a:
    FUN_00c097c0(*(undefined8 *)(param_1 + 0xe8),0,3);
  case 0x3b:
    FUN_00c097c0(*(undefined8 *)(param_1 + 0xe8),0,4);
  case 0x3c:
    FUN_00c097c0(*(undefined8 *)(param_1 + 0xe8),0,5);
  case 0x3d:
    FUN_00c097c0(*(undefined8 *)(param_1 + 0xe8),0,6);
  case 0x3e:
    FUN_00c097c0(*(undefined8 *)(param_1 + 0xe8),0,7);
    return;
  case 0x42:
  case 0x43:
  case 0x58:
  case 0x6c:
  case 0x6d:
  case 0x6e:
    FUN_00bf9bf0(*(undefined8 *)(param_1 + 0xe0),1);
    return;
  case 0x5e:
    break;
  case 0x5f:
    cVar1 = *(char *)(*(long *)(param_1 + 0x90) + 0x3a9);
    uVar2 = *(undefined8 *)(param_1 + 0x120);
    if (*(char *)(*(long *)(param_1 + 0x90) + 0x3a8) == '\0') {
      if (cVar1 == '\0') {
        FUN_00c17170(uVar2,3);
        return;
      }
      FUN_00c17170(uVar2,2);
      return;
    }
    if (cVar1 == '\0') {
      FUN_00c17170(uVar2,1);
      return;
    }
    FUN_00c17170(uVar2,0);
    return;
  case 0x60:
    if (*(char *)(*(long *)(param_1 + 0x90) + 0x550) == '\0') {
      FUN_00c0bc00(*(undefined8 *)(param_1 + 0x128),1);
      return;
    }
    FUN_00c0bc00(*(undefined8 *)(param_1 + 0x128),0);
    return;
  case 0x61:
    if (*(char *)(*(long *)(param_1 + 0x90) + 0x550) == '\0') {
      FUN_00c0e760(*(undefined8 *)(param_1 + 0x130),1);
      return;
    }
    FUN_00c0e760(*(undefined8 *)(param_1 + 0x130),0);
    return;
  case 100:
  case 0x65:
    FUN_00c16520(*(undefined8 *)(param_1 + 0xd8),0);
    return;
  case 0x6f:
  case 0x70:
    FUN_00bfd570(*(undefined8 *)(param_1 + 0x110),0);
    return;
  case 0x75:
    FUN_00c0dfe0(*(undefined8 *)(param_1 + 200),0);
    return;
  case 0x76:
    FUN_00c0f0b0(*(undefined8 *)(param_1 + 0xd0),0);
    return;
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
    FUN_00bfdee0(*(undefined8 *)(param_1 + 0x140),1);
    return;
  }
  cVar1 = *(char *)(*(long *)(param_1 + 0x90) + 0x3a9);
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  if (*(char *)(*(long *)(param_1 + 0x90) + 0x3a8) == '\0') {
    if (cVar1 == '\0') {
      FUN_00c12b20(uVar2,3);
      return;
    }
    FUN_00c12b20(uVar2,2);
    return;
  }
  if (cVar1 == '\0') {
    FUN_00c12b20(uVar2,1);
    return;
  }
  FUN_00c12b20(uVar2,0);
  return;
}


