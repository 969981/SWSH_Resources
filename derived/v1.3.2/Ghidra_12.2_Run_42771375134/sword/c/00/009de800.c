/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009de800; name: FUN_009de800
 */


void FUN_009de800(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined2 *puVar9;
  
  FUN_008f8110(param_2);
  uVar8 = FUN_008f0ca0();
  if (((uVar8 & 1) != 0) && (iVar2 = FUN_008f3790(param_2), iVar2 == 3)) {
    uVar3 = FUN_008e0a00(param_3);
    uVar4 = FUN_008f94e0();
    uVar5 = FUN_008f5920();
    uVar5 = (uVar3 & 0xff) - (uVar5 & 0xff);
    uVar6 = FUN_008f98a0(param_2);
    uVar8 = FUN_008fafc0(param_2,uVar4,uVar6);
    if ((uVar8 & 1) == 0) {
      iVar2 = 3;
      if ((uVar4 & 0xff) < 2) {
        iVar2 = 0;
      }
    }
    else {
      uVar7 = FUN_008f98a0(param_2);
      iVar2 = 0;
      if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
        iVar2 = 3;
      }
    }
    uVar5 = iVar2 + (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
    if (4 < (uVar5 & 0xff)) {
      uVar5 = 5;
    }
    puVar9 = (undefined2 *)(param_1 + ((ulong)uVar5 & 0xff) * 0x1a);
    if ((uVar8 & 1) == 0) {
      puVar9 = puVar9 + 0x4e;
    }
    FUN_008e1680(param_3);
    uVar1 = FUN_008783b0();
    *puVar9 = uVar1;
    FUN_008e1680(param_3);
    uVar1 = FUN_008783c0();
    puVar9[1] = uVar1;
    if (param_4 != (undefined8 *)0x0) {
      uVar6 = FUN_008e0a00(*param_4);
      uVar8 = FUN_008f9ff0(param_2,uVar3,uVar6);
      if ((uVar8 & 1) == 0) {
        FUN_008e1680(*param_4);
        uVar1 = FUN_008783b0();
        puVar9[3] = uVar1;
        FUN_008e1680(*param_4);
        uVar1 = FUN_008783c0();
        puVar9[4] = uVar1;
        puVar9[2] = (short)*(undefined4 *)(param_4 + 1);
        return;
      }
    }
    puVar9[4] = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
  }
  return;
}


