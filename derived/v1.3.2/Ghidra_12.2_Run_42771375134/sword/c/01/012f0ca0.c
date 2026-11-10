/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012f0ca0; name: FUN_012f0ca0
 */


void FUN_012f0ca0(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *local_c0;
  code *pcStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined4 local_a0 [2];
  long local_98;
  
  if (*(int *)(param_1 + 0x94) == 4) goto LAB_012f0ccc;
  switch(*(undefined4 *)(param_2 + 0x14)) {
  case 1:
    lVar4 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x18));
    lVar2 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x1c));
    uVar5 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x20));
    if (((lVar4 != 0) && (lVar2 != 0)) &&
       ((uVar3 = FUN_012e8410(lVar4), (uVar3 & 1) == 0 &&
        (uVar3 = FUN_012e8410(lVar2), (uVar3 & 1) == 0)))) {
      FUN_01314400(*(undefined8 *)(param_1 + 0x88),lVar4,lVar2,uVar5);
      if (*(char *)(param_1 + 0x68) == '\0') {
        return;
      }
      FUN_012f1d60(param_1,2,lVar4);
      return;
    }
    break;
  case 2:
    lVar4 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x18));
    if (lVar4 == 0) {
      return;
    }
    uVar5 = 0;
LAB_012f0f9c:
    FUN_01314eb0(lVar4,uVar5);
    return;
  case 3:
    lVar4 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x18));
    if (lVar4 == 0) {
      return;
    }
    uVar3 = FUN_012e8ab0();
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar5 = 0;
    goto LAB_012f0ee0;
  case 4:
    lVar4 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x18));
    lVar2 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x1c));
    if (((lVar4 != 0) && (lVar2 != 0)) &&
       ((uVar3 = FUN_012e8410(lVar4), (uVar3 & 1) == 0 &&
        (uVar3 = FUN_012e8410(lVar2), (uVar3 & 1) == 0)))) {
      FUN_013146d0(*(undefined8 *)(param_1 + 0x88),lVar4,lVar2);
      return;
    }
    break;
  case 5:
    lVar4 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x18));
    if (lVar4 == 0) {
      return;
    }
    uVar3 = FUN_012e8b00();
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar5 = 1;
    goto LAB_012f0ee0;
  case 6:
    lVar4 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x18));
    if (lVar4 == 0) {
      return;
    }
    uVar3 = FUN_012e8b00();
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar5 = 2;
LAB_012f0ee0:
    FUN_01314a70(lVar4,uVar5);
    return;
  case 7:
    lVar4 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x18));
    lVar2 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x1c));
    if ((((lVar4 != 0) && (lVar2 != 0)) && (uVar3 = FUN_012e8410(lVar4), (uVar3 & 1) == 0)) &&
       (uVar3 = FUN_012e8410(lVar2), (uVar3 & 1) == 0)) {
      local_c0 = *(undefined1 **)(param_2 + 0x24);
      pcStack_b8 = (code *)(ulong)*(uint *)(param_2 + 0x2c);
      FUN_01314950(*(undefined8 *)(param_1 + 0x88),lVar4,lVar2,&local_c0);
      if (*(char *)(param_1 + 0x68) == '\0') {
        return;
      }
      FUN_012f1d60(param_1,8,lVar4);
      return;
    }
    break;
  case 8:
    lVar4 = FUN_012f11b0(param_1,*(undefined4 *)(param_2 + 0x18));
    if (lVar4 != 0) {
      uVar5 = 1;
      goto LAB_012f0f9c;
    }
  default:
    goto switchD_012f0d60_default;
  }
LAB_012f0ccc:
  local_a0[0] = *(undefined4 *)(param_2 + 0x18);
  local_c0 = &LAB_012f5580;
  pcStack_b8 = FUN_012f5790;
  local_b0 = &LAB_012f5820;
  puStack_a8 = &LAB_012f5830;
  local_98 = param_1;
  FUN_012ed8a0(param_1,&local_c0);
  pcVar1 = pcStack_b8;
  if (pcStack_b8 != (code *)0x0) {
    local_b0 = (undefined1 *)0x0;
    puStack_a8 = (undefined1 *)0x0;
    local_c0 = (undefined1 *)0x0;
    pcStack_b8 = (code *)0x0;
    (*pcVar1)(local_a0);
  }
switchD_012f0d60_default:
  return;
}


