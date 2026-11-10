/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092f460; name: FUN_0092f460
 */


undefined8 FUN_0092f460(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_008f37f0(param_1,0);
  if ((uVar2 & 1) != 0) {
    cVar1 = FUN_008f8ca0(param_1,0);
    if (cVar1 == param_3) {
      uVar3 = FUN_00931920(param_2);
      FUN_008df3c0(uVar3,0);
      cVar1 = FUN_009141d0();
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  uVar2 = FUN_008f37f0(param_1,1);
  if ((uVar2 & 1) != 0) {
    cVar1 = FUN_008f8ca0(param_1,1);
    if (cVar1 == param_3) {
      uVar3 = FUN_00931920(param_2);
      FUN_008df3c0(uVar3,1);
      cVar1 = FUN_009141d0();
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  uVar2 = FUN_008f37f0(param_1,2);
  if ((uVar2 & 1) != 0) {
    cVar1 = FUN_008f8ca0(param_1,2);
    if (cVar1 == param_3) {
      uVar3 = FUN_00931920(param_2);
      FUN_008df3c0(uVar3,2);
      cVar1 = FUN_009141d0();
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  uVar2 = FUN_008f37f0(param_1,3);
  if ((uVar2 & 1) != 0) {
    cVar1 = FUN_008f8ca0(param_1,3);
    if (cVar1 == param_3) {
      uVar3 = FUN_00931920(param_2);
      FUN_008df3c0(uVar3,3);
      cVar1 = FUN_009141d0();
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  uVar2 = FUN_008f37f0(param_1,4);
  if ((uVar2 & 1) != 0) {
    cVar1 = FUN_008f8ca0(param_1,4);
    if (cVar1 == param_3) {
      uVar3 = FUN_00931920(param_2);
      FUN_008df3c0(uVar3,4);
      cVar1 = FUN_009141d0();
      if (cVar1 != '\0') {
        return 0;
      }
    }
  }
  return 1;
}


