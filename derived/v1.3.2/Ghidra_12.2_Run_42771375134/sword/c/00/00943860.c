/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00943860; name: FUN_00943860
 */


void FUN_00943860(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  uint uVar7;
  
  param_1[2] = param_3;
  puVar1 = PTR_DAT_02717e40;
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x1a) = 1;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1a) = 1;
  uVar3 = FUN_008f37f0(param_1[1],0);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00931920(param_1[2]);
    uVar4 = FUN_008df3c0(uVar4,0);
    uVar2 = FUN_008f9310(param_1[1],0);
    if (uVar2 != 0) {
      uVar7 = 0;
      do {
        lVar5 = FUN_00914330(uVar4,uVar7);
        if ((lVar5 != 0) && (uVar3 = FUN_008e1600(), (uVar3 & 1) == 0)) {
          uVar6 = 0;
          goto LAB_00943ac4;
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xff) < uVar2);
    }
  }
  uVar3 = FUN_008f37f0(param_1[1],1);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00931920(param_1[2]);
    uVar4 = FUN_008df3c0(uVar4,1);
    uVar2 = FUN_008f9310(param_1[1],1);
    if (uVar2 != 0) {
      uVar7 = 0;
      do {
        lVar5 = FUN_00914330(uVar4,uVar7);
        if ((lVar5 != 0) && (uVar3 = FUN_008e1600(), (uVar3 & 1) == 0)) {
          uVar6 = 1;
          goto LAB_00943ac4;
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xff) < uVar2);
    }
  }
  uVar3 = FUN_008f37f0(param_1[1],2);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00931920(param_1[2]);
    uVar4 = FUN_008df3c0(uVar4,2);
    uVar2 = FUN_008f9310(param_1[1],2);
    if (uVar2 != 0) {
      uVar7 = 0;
      do {
        lVar5 = FUN_00914330(uVar4,uVar7);
        if ((lVar5 != 0) && (uVar3 = FUN_008e1600(), (uVar3 & 1) == 0)) {
          uVar6 = 2;
          goto LAB_00943ac4;
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xff) < uVar2);
    }
  }
  uVar3 = FUN_008f37f0(param_1[1],3);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00931920(param_1[2]);
    uVar4 = FUN_008df3c0(uVar4,3);
    uVar2 = FUN_008f9310(param_1[1],3);
    if (uVar2 != 0) {
      uVar7 = 0;
      do {
        lVar5 = FUN_00914330(uVar4,uVar7);
        if ((lVar5 != 0) && (uVar3 = FUN_008e1600(), (uVar3 & 1) == 0)) {
          uVar6 = 3;
          goto LAB_00943ac4;
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xff) < uVar2);
    }
  }
  uVar3 = FUN_008f37f0(param_1[1],4);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00931920(param_1[2]);
    uVar4 = FUN_008df3c0(uVar4,4);
    uVar2 = FUN_008f9310(param_1[1],4);
    if (uVar2 != 0) {
      uVar7 = 0;
      do {
        lVar5 = FUN_00914330(uVar4,uVar7);
        if ((lVar5 != 0) && (uVar3 = FUN_008e1600(), (uVar3 & 1) == 0)) {
          uVar6 = 4;
LAB_00943ac4:
          *(undefined1 *)(param_1 + 3) = uVar6;
          *(char *)((long)param_1 + 0x19) = (char)uVar7;
          *(undefined1 *)((long)param_1 + 0x1a) = 0;
          return;
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xff) < uVar2);
    }
  }
  return;
}


