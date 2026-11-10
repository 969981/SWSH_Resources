/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00905070; name: FUN_00905070
 */


undefined8 FUN_00905070(long param_1,undefined8 param_2,undefined1 *param_3,undefined2 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined2 uVar11;
  undefined1 auStack_70 [8];
  undefined1 local_68 [8];
  
  uVar7 = FUN_008e29c0(param_2,7);
  if ((uVar7 & 1) == 0) {
    iVar4 = FUN_00932e30(*(undefined8 *)(param_1 + 0xe0),7);
    if (iVar4 == 1) {
      return 4;
    }
    uVar5 = FUN_008e0a00(param_2);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    uVar8 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar5 = FUN_008f9470(uVar10,uVar8,uVar5);
    FUN_008ed700(auStack_70,2,uVar5);
    uVar5 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
    uVar6 = FUN_008f87e0(*(undefined8 *)(param_1 + 0x58));
    uVar8 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    bVar1 = FUN_008ee2f0(auStack_70,uVar5,uVar6,uVar8,local_68);
    if (bVar1 != 0) {
      uVar7 = 0;
      uVar11 = 0x17;
      do {
        uVar8 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
        uVar8 = FUN_008df3f0(uVar8,local_68[uVar7]);
        sVar3 = FUN_008e12a0(uVar8,0x13);
        if (sVar3 == 0x47) {
          uVar9 = FUN_00905270(param_1,param_2);
          if ((uVar9 & 1) != 0) {
            uVar10 = 0;
            uVar11 = 0x47;
            goto LAB_0090521c;
          }
        }
        else if (sVar3 == 0x2a) {
          uVar9 = FUN_008e29c0(param_2,8);
          if ((uVar9 & 1) != 0) {
            uVar10 = 0;
            uVar11 = 0x2a;
            goto LAB_0090521c;
          }
        }
        else if ((sVar3 == 0x17) && (iVar4 = FUN_008e12a0(param_2,0x13), iVar4 != 0x17)) {
          uVar10 = 0;
          goto LAB_0090521c;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < bVar1);
    }
    uVar7 = FUN_008e1810(param_2,0x16);
    if ((((uVar7 & 1) != 0) || (uVar7 = FUN_008e1810(param_2,8), (uVar7 & 1) != 0)) ||
       (uVar7 = FUN_008e1810(param_2,0x15), (uVar7 & 1) != 0)) {
      uVar11 = 0;
      uVar10 = 3;
      uVar8 = param_2;
LAB_0090521c:
      uVar2 = FUN_008e0a00(uVar8);
      *param_3 = uVar2;
      *param_4 = uVar11;
      return uVar10;
    }
  }
  return 5;
}


