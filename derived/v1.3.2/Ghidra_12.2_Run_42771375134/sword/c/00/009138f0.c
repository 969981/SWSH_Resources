/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009138f0; name: FUN_009138f0
 */


void FUN_009138f0(char *param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 param_5)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  param_1[(ulong)param_3 + (ulong)param_3 * 2 + 2] = param_4;
  if ((*(long *)(param_1 + 0x30) == 0) || (*(uint *)(param_1 + 0x38) <= (uint)param_4)) {
    param_1[0x3c] = param_3;
  }
  else {
    *(byte *)(*(long *)(param_1 + 0x30) + (ulong)param_4) = param_3;
  }
  cVar1 = param_1[(ulong)param_3 + (ulong)param_3 * 2 + 2];
  if (cVar1 != '\x1f') {
    if (*param_1 != '\0') {
      cVar2 = param_1[2];
      if (((cVar2 != '\x1f') && (cVar2 != cVar1)) &&
         (uVar3 = FUN_008f9ff0(param_2,cVar2,cVar1), (uVar3 & 1) == 0)) {
        uVar4 = FUN_008deea0(param_5,param_1[2]);
        FUN_008e16d0(uVar4,cVar1);
        uVar4 = FUN_008deea0(param_5,cVar1);
        FUN_008e16d0(uVar4,param_1[2]);
      }
    }
    if (param_1[3] != '\0') {
      cVar2 = param_1[5];
      if (((cVar2 != '\x1f') && (cVar2 != cVar1)) &&
         (uVar3 = FUN_008f9ff0(param_2,cVar2,cVar1), (uVar3 & 1) == 0)) {
        uVar4 = FUN_008deea0(param_5,param_1[5]);
        FUN_008e16d0(uVar4,cVar1);
        uVar4 = FUN_008deea0(param_5,cVar1);
        FUN_008e16d0(uVar4,param_1[5]);
      }
    }
    if (param_1[6] != '\0') {
      cVar2 = param_1[8];
      if (((cVar2 != '\x1f') && (cVar2 != cVar1)) &&
         (uVar3 = FUN_008f9ff0(param_2,cVar2,cVar1), (uVar3 & 1) == 0)) {
        uVar4 = FUN_008deea0(param_5,param_1[8]);
        FUN_008e16d0(uVar4,cVar1);
        uVar4 = FUN_008deea0(param_5,cVar1);
        FUN_008e16d0(uVar4,param_1[8]);
      }
    }
    if (param_1[9] != '\0') {
      cVar2 = param_1[0xb];
      if (((cVar2 != '\x1f') && (cVar2 != cVar1)) &&
         (uVar3 = FUN_008f9ff0(param_2,cVar2,cVar1), (uVar3 & 1) == 0)) {
        uVar4 = FUN_008deea0(param_5,param_1[0xb]);
        FUN_008e16d0(uVar4,cVar1);
        uVar4 = FUN_008deea0(param_5,cVar1);
        FUN_008e16d0(uVar4,param_1[0xb]);
      }
    }
    if (param_1[0xc] != '\0') {
      cVar2 = param_1[0xe];
      if (((cVar2 != '\x1f') && (cVar2 != cVar1)) &&
         (uVar3 = FUN_008f9ff0(param_2,cVar2,cVar1), (uVar3 & 1) == 0)) {
        uVar4 = FUN_008deea0(param_5,param_1[0xe]);
        FUN_008e16d0(uVar4,cVar1);
        uVar4 = FUN_008deea0(param_5,cVar1);
        FUN_008e16d0(uVar4,param_1[0xe]);
        return;
      }
    }
  }
  return;
}


