/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092b460; name: FUN_0092b460
 */


void FUN_0092b460(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined4 *param_5,uint param_6,uint param_7,undefined4 param_8)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_64;
  
  iVar2 = FUN_0093b420(param_3);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar7,3,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x54,param_6 & 1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,*param_5);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x16,*(undefined1 *)((long)param_5 + 0xe));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x1b,param_5[4]);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),99,*(undefined1 *)(param_5 + 5));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x6e,*(uint *)(param_4 + 4) & 1);
  if (iVar2 != 0) {
    if ((param_7 & 1) == 0) {
      iVar4 = 0;
      iVar6 = 0;
      iVar5 = 0;
      do {
        uVar7 = FUN_0093b2c0(param_3,iVar6);
        uVar3 = FUN_0093b320(param_3,uVar7,&local_64);
        if ((uVar3 & 1) != 0) {
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          iVar4 = local_64 + iVar4;
          uVar1 = FUN_008e0a00(uVar7);
          FUN_008db3f0(uVar8,iVar5 + 6,uVar1);
          iVar5 = iVar5 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar2 != iVar6);
    }
    else {
      iVar4 = 0;
      iVar6 = 0;
      iVar5 = 0;
      do {
        uVar7 = FUN_0093b2c0(param_3,iVar6);
        uVar3 = FUN_0093b380(param_3,uVar7,&local_64);
        if ((uVar3 & 1) != 0) {
          uVar8 = *(undefined8 *)(param_1 + 0x10);
          iVar4 = local_64 + iVar4;
          uVar1 = FUN_008e0a00(uVar7);
          FUN_008db3f0(uVar8,iVar5 + 6,uVar1);
          iVar5 = iVar5 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar2 != iVar6);
    }
    if (iVar5 != 0) {
      FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),5,iVar5);
      FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x4e,0);
      FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x4f,0);
      FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x35,iVar4);
      FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xa4);
      iVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x4f);
      if (iVar2 == 0) {
        FUN_008dad40(*(undefined8 *)(param_1 + 0x10),param_8);
      }
    }
  }
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return;
}


