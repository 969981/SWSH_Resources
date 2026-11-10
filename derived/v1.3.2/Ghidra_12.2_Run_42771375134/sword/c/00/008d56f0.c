/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d56f0; name: FUN_008d56f0
 */


ulong FUN_008d56f0(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  switch(param_2) {
  case 0:
    lVar6 = *(long *)(param_1 + 0x80);
    goto joined_r0x008d577c;
  case 2:
    lVar6 = *(long *)(param_1 + 0x80);
    if (lVar6 != 0) goto LAB_008d57d0;
LAB_008d5824:
    uVar4 = 5;
    iVar1 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
    goto joined_r0x008d5834;
  case 3:
    lVar6 = *(long *)(param_1 + 0x78);
    if (lVar6 == 0) goto LAB_008d5824;
LAB_008d57d0:
    uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x60));
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    uVar2 = FUN_008e0a00(lVar6);
    uVar4 = FUN_008f9470(uVar5,uVar3,uVar2);
    uVar4 = uVar4 & 0xffffffff;
    iVar1 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
joined_r0x008d5834:
    if (iVar1 == 1) {
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      param_2 = 1;
LAB_008d585c:
      uVar4 = FUN_008f9420(uVar3,uVar4,param_2);
      return uVar4;
    }
    break;
  case 5:
  case 6:
  case 7:
    iVar1 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
    if (iVar1 == 2) {
      lVar6 = *(long *)(param_1 + 0x78);
      param_2 = param_2 + -5;
      if (lVar6 == 0) {
        uVar4 = 5;
      }
      else {
        uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x60));
        uVar5 = *(undefined8 *)(param_1 + 0x58);
        uVar2 = FUN_008e0a00(lVar6);
        uVar4 = FUN_008f9470(uVar5,uVar3,uVar2);
        uVar4 = uVar4 & 0xffffffff;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x58);
      goto LAB_008d585c;
    }
  default:
    lVar6 = *(long *)(param_1 + 0x78);
joined_r0x008d577c:
    if (lVar6 != 0) {
      uVar3 = FUN_00931920(*(undefined8 *)(param_1 + 0x60));
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      uVar2 = FUN_008e0a00(lVar6);
      uVar4 = FUN_008f9470(uVar5,uVar3,uVar2);
      return uVar4;
    }
    uVar4 = 5;
  }
  return uVar4;
}


