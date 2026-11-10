/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00901e30; name: FUN_00901e30
 */


undefined8 FUN_00901e30(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_008fade0(*(undefined8 *)(param_1 + 0x58),1);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar3 = FUN_008df3c0(uVar3,1);
    FUN_00914330(uVar3,0);
    cVar1 = FUN_008e2230();
    if ((cVar1 != '\0') &&
       (uVar2 = FUN_009c9ad0(*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x68),1,0),
       (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  uVar2 = FUN_008fade0(*(undefined8 *)(param_1 + 0x58),2);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar3 = FUN_008df3c0(uVar3,2);
    FUN_00914330(uVar3,0);
    cVar1 = FUN_008e2230();
    if ((cVar1 != '\0') &&
       (uVar2 = FUN_009c9ad0(*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x68),2,0),
       (uVar2 & 1) != 0)) {
      return 2;
    }
  }
  uVar2 = FUN_008fade0(*(undefined8 *)(param_1 + 0x58),3);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar3 = FUN_008df3c0(uVar3,3);
    FUN_00914330(uVar3,0);
    cVar1 = FUN_008e2230();
    if ((cVar1 != '\0') &&
       (uVar2 = FUN_009c9ad0(*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x68),3,0),
       (uVar2 & 1) != 0)) {
      return 3;
    }
  }
  uVar2 = FUN_008fade0(*(undefined8 *)(param_1 + 0x58),4);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar3 = FUN_008df3c0(uVar3,4);
    FUN_00914330(uVar3,0);
    cVar1 = FUN_008e2230();
    if ((cVar1 != '\0') &&
       (uVar2 = FUN_009c9ad0(*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x68),4,0),
       (uVar2 & 1) != 0)) {
      return 4;
    }
  }
  return 0xff;
}


