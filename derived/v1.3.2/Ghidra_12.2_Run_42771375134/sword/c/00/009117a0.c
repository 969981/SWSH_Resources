/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009117a0; name: FUN_009117a0
 */


undefined8 FUN_009117a0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_008f8110(*(undefined8 *)(param_1 + 0x60));
  if (iVar2 == 2) {
    uVar4 = FUN_009122a0(*(undefined8 *)(param_1 + 0x60));
    if ((uVar4 & 1) != 0) {
      uVar5 = FUN_00931920(*(undefined8 *)(param_1 + 0x68));
      FUN_008df3c0(uVar5,0);
      cVar1 = FUN_009141d0();
      if (cVar1 == '\0') {
        return 0;
      }
    }
    FUN_00931a60(*(undefined8 *)(param_1 + 0x68));
    uVar4 = FUN_009347b0();
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    uVar3 = FUN_008f98a0(*(undefined8 *)(param_1 + 0x60));
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x60),0);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x60),uVar3,0), (uVar4 & 1) != 0)) {
      uVar5 = FUN_00931920(*(undefined8 *)(param_1 + 0x68));
      FUN_008df3c0(uVar5,0);
      cVar1 = FUN_009141d0();
      if (cVar1 != '\0') goto LAB_00911944;
    }
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x60),1);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x60),uVar3,1), (uVar4 & 1) != 0)) {
      uVar5 = FUN_00931920(*(undefined8 *)(param_1 + 0x68));
      FUN_008df3c0(uVar5,1);
      cVar1 = FUN_009141d0();
      if (cVar1 != '\0') goto LAB_00911944;
    }
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x60),2);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x60),uVar3,2), (uVar4 & 1) != 0)) {
      uVar5 = FUN_00931920(*(undefined8 *)(param_1 + 0x68));
      FUN_008df3c0(uVar5,2);
      cVar1 = FUN_009141d0();
      if (cVar1 != '\0') goto LAB_00911944;
    }
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x60),3);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x60),uVar3,3), (uVar4 & 1) != 0)) {
      uVar5 = FUN_00931920(*(undefined8 *)(param_1 + 0x68));
      FUN_008df3c0(uVar5,3);
      cVar1 = FUN_009141d0();
      if (cVar1 != '\0') goto LAB_00911944;
    }
    uVar4 = FUN_008f37f0(*(undefined8 *)(param_1 + 0x60),4);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = FUN_008fafc0(*(undefined8 *)(param_1 + 0x60),uVar3,4), (uVar4 & 1) != 0)) {
      uVar5 = FUN_00931920(*(undefined8 *)(param_1 + 0x68));
      FUN_008df3c0(uVar5,4);
      cVar1 = FUN_009141d0();
      if (cVar1 != '\0') {
LAB_00911944:
        uVar5 = FUN_00931920(*(undefined8 *)(param_1 + 0x68));
        FUN_008df7f0(uVar5,4);
        uVar5 = FUN_008e1600();
        return uVar5;
      }
    }
  }
  return 0;
}


