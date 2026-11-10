/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00961ac0; name: FUN_00961ac0
 */


void FUN_00961ac0(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  
  *param_1 = 0x1000;
  *param_2 = 0;
  lVar4 = FUN_008f7fc0(param_3);
  if ((*(char *)(lVar4 + 0x1a5) != '\0') && (uVar5 = FUN_008e5ad0(param_4), (uVar5 & 1) != 0)) {
    uVar2 = FUN_008e1290(param_4);
    uVar3 = FUN_00961bc0(uVar2);
    *param_1 = uVar3;
    *param_2 = 0;
    return;
  }
  lVar4 = FUN_008f7fc0(param_3);
  uVar1 = *(undefined1 *)(lVar4 + 0x1a4);
  *param_1 = 0x1000;
  *param_2 = 0;
  lVar4 = 0;
  switch(uVar1) {
  case 0:
    *param_2 = 1;
    return;
  case 1:
    break;
  case 2:
    lVar4 = 1;
    break;
  case 3:
    lVar4 = 2;
    break;
  case 4:
    lVar4 = 3;
    break;
  case 5:
    lVar4 = 4;
    break;
  case 6:
    lVar4 = 5;
    break;
  default:
    goto switchD_00961b58_default;
  }
  *param_1 = (&DAT_0214b528)[lVar4 * 2];
switchD_00961b58_default:
  return;
}


