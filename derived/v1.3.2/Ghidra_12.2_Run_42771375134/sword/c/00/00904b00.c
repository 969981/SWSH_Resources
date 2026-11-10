/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00904b00; name: FUN_00904b00
 */


undefined8 FUN_00904b00(long param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 local_28 [4];
  short local_24 [2];
  
  uVar3 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x4000);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x400);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x800);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x1000);
        if ((uVar3 & 1) == 0) {
          uVar3 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x40000);
          if ((uVar3 & 1) == 0) {
            uVar3 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x80000);
            if ((uVar3 & 1) == 0) {
              uVar3 = FUN_008f35c0(*(undefined8 *)(param_1 + 0x58),0x40000000);
              if (((((uVar3 & 1) == 0) &&
                   (uVar3 = FUN_008f89c0(*(undefined8 *)(param_1 + 0x58),0x10), (uVar3 & 1) == 0))
                  && (uVar3 = FUN_008f89c0(*(undefined8 *)(param_1 + 0x58),0x20), (uVar3 & 1) == 0))
                 && ((uVar3 = FUN_008f89c0(*(undefined8 *)(param_1 + 0x58),0x80), (uVar3 & 1) == 0
                     && (iVar2 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58)), iVar2 != 2)))) {
                iVar2 = FUN_008f8b90(*(undefined8 *)(param_1 + 0x58));
                if (iVar2 != 0) {
                  if (iVar2 != 1) {
                    return 1;
                  }
                  uVar5 = 0x5a;
                  goto LAB_00904c1c;
                }
                local_24[0] = 0;
                local_28[0] = 0x1f;
                iVar2 = FUN_00904ce0(param_1,local_28,local_24);
                sVar1 = local_24[0];
                if (iVar2 == 5) {
                  return 1;
                }
                if (local_24[0] != 0) {
                  FUN_009c7ca0(param_2,2,0x498);
                  FUN_009c7cd0(param_2,local_28[0]);
                  FUN_009c7cd0(param_2,sVar1);
                  return 0;
                }
              }
              uVar5 = 0x58;
            }
            else {
              uVar4 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
              FUN_008df7f0(uVar4,1);
              sVar1 = FUN_008e1290();
              uVar5 = 0x204;
              if (sVar1 != 0x378) {
                uVar5 = 0x205;
              }
            }
          }
          else {
            uVar5 = 0x203;
          }
        }
        else {
          uVar5 = 0x19e;
        }
      }
      else {
        uVar5 = 0x19c;
      }
    }
    else {
      uVar5 = 0x19d;
    }
  }
  else {
    uVar5 = 0x1d3;
  }
LAB_00904c1c:
  FUN_009c7ca0(param_2,1,uVar5);
  return 0;
}


