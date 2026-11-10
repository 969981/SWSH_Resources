/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c9440; name: FUN_005c9440
 */


undefined8 FUN_005c9440(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  FUN_005c47b0(param_2,&DAT_01d38550);
  FUN_005c47b0(param_3,&DAT_01d38550);
  iVar1 = *param_1;
  if (iVar1 == 3) {
    FUN_005c47b0(param_2,&DAT_01ce4acf);
    if (param_1[1] == 7) {
      puVar2 = &DAT_01d24c9b;
    }
    else {
      if (param_1[1] != 6) {
        return 1;
      }
      puVar2 = &DAT_01d038ac;
    }
  }
  else if (iVar1 == 2) {
    puVar2 = &DAT_01ceb842;
    param_3 = param_2;
  }
  else {
    if (iVar1 != 1) {
      return 1;
    }
    FUN_005c47b0(param_2,&DAT_01d33529);
    switch(param_1[1]) {
    case 1:
      puVar2 = &DAT_01cef227;
      break;
    case 2:
      puVar2 = &DAT_01d1ac74;
      break;
    case 3:
      puVar2 = &DAT_01cf5f7a;
      break;
    case 4:
      puVar2 = &DAT_01d1ac71;
      break;
    case 5:
      puVar2 = &DAT_01d2c26d;
      break;
    default:
      goto switchD_005c94c8_default;
    }
  }
  FUN_005c47b0(param_3,puVar2);
switchD_005c94c8_default:
  return 1;
}


