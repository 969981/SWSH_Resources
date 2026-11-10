/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009048a0; name: FUN_009048a0
 */


undefined8 FUN_009048a0(long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x4000);
  if (((((uVar4 & 1) == 0) &&
       (uVar4 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x400), (uVar4 & 1) == 0)) &&
      (uVar4 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x800), (uVar4 & 1) == 0)) &&
     ((uVar4 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x1000), (uVar4 & 1) == 0 &&
      (uVar4 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x80000), (uVar4 & 1) == 0)))) {
    uVar4 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x40000000);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_008f89c0(*(undefined8 *)(param_1 + 0x58),0x40);
      if (((uVar4 & 1) == 0) &&
         (uVar4 = FUN_008f89c0(*(undefined8 *)(param_1 + 0x58),0x80), (uVar4 & 1) == 0)) {
        iVar3 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
        if (iVar3 == 2) {
          uVar6 = 0x1d8;
          goto LAB_00904910;
        }
        if (param_4 != '\0') {
          uVar6 = 0x4f;
          goto LAB_00904910;
        }
        uVar4 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),8);
        if ((uVar4 & 1) != 0) {
          uVar6 = 0x4e;
          goto LAB_00904910;
        }
        iVar3 = FUN_008f3790(*(undefined8 *)(param_1 + 0x58));
        if ((iVar3 == 0) && (iVar3 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58)), iVar3 == 1)) {
          uVar6 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
          FUN_008df3c0(uVar6,1);
          bVar1 = FUN_009141d0();
          if (1 < bVar1) {
            uVar6 = 0x4d;
            goto LAB_00904910;
          }
        }
        uVar4 = FUN_009047d0(param_1);
        if ((uVar4 & 1) != 0) {
          uVar6 = 0x50;
          goto LAB_00904910;
        }
        iVar3 = FUN_008f3790(*(undefined8 *)(param_1 + 0x58));
        if (iVar3 != 0) {
          return 1;
        }
        lVar5 = FUN_00904a90(param_1);
        if (lVar5 == 0) {
          return 1;
        }
        bVar1 = FUN_008f8960(*(undefined8 *)(param_1 + 0x58));
        bVar2 = FUN_008e12a0(lVar5,0x11);
        if (bVar2 <= bVar1) {
          return 1;
        }
      }
      uVar6 = 0x1fb;
    }
    else {
      uVar6 = 0x214;
    }
  }
  else {
    uVar6 = 0x1db;
  }
LAB_00904910:
  FUN_009c7ca0(param_2,1,uVar6);
  return 0;
}


