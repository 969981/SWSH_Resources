/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f3810; name: FUN_008f3810
 */


undefined8 FUN_008f3810(long param_1,int *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  
  *(undefined1 *)(param_1 + 0x184) = 1;
  FUN_008f26c0();
  switch(*param_2) {
  case 0:
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_008de2d0();
    FUN_009e0630();
    FUN_008eb9a0();
    FUN_008f3a60(param_1);
    FUN_008f3b90(param_1);
    FUN_009e0490();
    lVar3 = *(long *)(param_1 + 0x440);
    *(undefined8 *)(param_1 + 0x440) = 0;
    if (lVar3 != 0) {
      FUN_009dec50(lVar3);
      (**(code **)(**(long **)(param_1 + 0x448) + 0x18))
                (*(long **)(param_1 + 0x448),lVar3,*(undefined8 *)(param_1 + 0x450),
                 *(undefined8 *)(param_1 + 0x458));
    }
    *(undefined **)(param_1 + 0xc0) = PTR_LAB_02717cb8;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    break;
  case 1:
    pcVar5 = *(code **)(param_1 + 0xc0);
    uVar2 = *(ulong *)(param_1 + 200);
    if ((pcVar5 == (code *)0x0) && (uVar2 == 0 || (uVar2 & 1) == 0 && pcVar5 == (code *)0x0)) {
      iVar4 = 2;
    }
    else {
      plVar1 = (long *)(param_1 + ((long)uVar2 >> 1));
      if ((uVar2 & 1) != 0) {
        pcVar5 = *(code **)(pcVar5 + *plVar1);
      }
      uVar2 = (*pcVar5)(plVar1,param_1 + 0xd0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      iVar4 = *param_2 + 1;
    }
    *param_2 = iVar4;
    return 0;
  case 2:
    if (*(long *)(param_1 + 0x638) == 0) {
      *(undefined8 *)(param_1 + 0x638) = 0;
      FUN_009ec810();
      lVar3 = *(long *)(param_1 + 0x758);
    }
    else {
      FUN_006e2100(*(long *)(param_1 + 0x638),param_1 + 0x630);
      lVar3 = *(long *)(param_1 + 0x638);
      *(undefined8 *)(param_1 + 0x638) = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      FUN_009ec810();
      lVar3 = *(long *)(param_1 + 0x758);
    }
    if (lVar3 != 0) {
      FUN_009cab00();
    }
    if (*(long *)(param_1 + 0x750) != 0) {
      FUN_009b0f00();
    }
    break;
  case 3:
    if (*(long *)(param_1 + 0x758) != 0) {
      uVar2 = FUN_009cab10();
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar3 = *(long *)(param_1 + 0x758);
      *(undefined8 *)(param_1 + 0x758) = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
    }
    if (*(long *)(param_1 + 0x750) != 0) {
      uVar2 = FUN_009b10a0();
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar3 = *(long *)(param_1 + 0x750);
      *(undefined8 *)(param_1 + 0x750) = 0;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
    }
    return 1;
  default:
    return 0;
  }
  *param_2 = *param_2 + 1;
  return 0;
}


