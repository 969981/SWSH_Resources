/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b0ce0; name: FUN_008b0ce0
 */


void FUN_008b0ce0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_28;
  
  switch(*(undefined4 *)(*(long *)(param_1 + 0x78) + 0x5cc)) {
  case 1:
  case 2:
    FUN_008c61d0(*(long *)(param_1 + 0x78),1);
    FUN_008c7d10(*(undefined8 *)(param_1 + 0x78));
    FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),0);
    local_28 = 0x7e6282327890dd21;
    lVar5 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x2b0),&local_28);
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
    uVar3 = 2;
    break;
  case 3:
    FUN_008b1490(param_1);
    uVar3 = 7;
    break;
  case 4:
    FUN_008c8450();
    uVar3 = 2;
    break;
  case 5:
    uVar3 = FUN_008c8330();
    puVar2 = PTR_DAT_02710798;
    *(undefined4 *)(param_1 + 0xf4) = uVar3;
    lVar5 = *(long *)(*(long *)puVar2 + 0x1d8);
    if (lVar5 == 0) {
      uVar4 = FUN_01521090(0,uVar3);
    }
    else {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar4 = FUN_01521090(lVar5,*(undefined4 *)(param_1 + 0xf4));
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    if (uVar4 < 2) {
      *(undefined8 *)(param_1 + 0xd0) = 0x500000008;
      *(undefined4 *)(param_1 + 0xd8) = 2;
      *(undefined1 *)(param_1 + 0xdc) = 1;
      FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),0);
      iVar1 = *(int *)(param_1 + 0xd8);
      FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xc0),0);
      if (iVar1 == 0) {
        FUN_008a6b70(*(undefined8 *)(param_1 + 0xb8),0xd5cb6de6e721fe63,
                     *(char *)(param_1 + 200) == '\0',0);
      }
      else {
        FUN_008a6c20();
      }
      *(undefined1 *)(param_1 + 200) = 1;
      goto LAB_008b0df4;
    }
    uVar3 = 5;
    break;
  default:
    uVar3 = 6;
  }
  *(undefined4 *)(param_1 + 0xd0) = uVar3;
LAB_008b0df4:
  *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x5cc) = 0;
  return;
}


