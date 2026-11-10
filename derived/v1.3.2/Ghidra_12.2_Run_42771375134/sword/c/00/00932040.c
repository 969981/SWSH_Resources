/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00932040; name: FUN_00932040
 */


void FUN_00932040(ushort *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar4 = FUN_008e0a00(param_3);
  uVar5 = FUN_008e0a00(param_4);
  cVar2 = FUN_008f94e0(uVar4);
  cVar3 = FUN_008f94e0(uVar5);
  uVar6 = FUN_008f9ff0(param_2,uVar4,uVar5);
  if (cVar2 == '\0') {
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (param_5 == 0) {
      if (param_1 == (ushort *)0x0) {
        return;
      }
      uVar1 = *param_1;
    }
    else if (param_5 < 8) {
      if (param_5 == 7) {
        return;
      }
      param_1 = param_1 + 2;
      uVar1 = *param_1;
    }
    else {
      param_1 = param_1 + 1;
      uVar1 = *param_1;
    }
  }
  else {
    if (cVar3 != '\0') {
      return;
    }
    if (((uVar6 ^ 1) & 1) == 0) {
      return;
    }
    if (param_5 == 0) {
      param_1 = param_1 + 3;
      uVar1 = *param_1;
    }
    else if (param_5 < 8) {
      if (param_5 == 7) {
        return;
      }
      param_1 = param_1 + 5;
      uVar1 = *param_1;
    }
    else {
      param_1 = param_1 + 4;
      uVar1 = *param_1;
    }
  }
  if (uVar1 < 9999) {
    *param_1 = uVar1 + 1;
  }
  return;
}


