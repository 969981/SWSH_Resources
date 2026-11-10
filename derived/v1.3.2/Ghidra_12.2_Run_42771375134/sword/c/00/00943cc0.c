/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00943cc0; name: FUN_00943cc0
 */


void FUN_00943cc0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ushort uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ushort local_6c [6];
  
  bVar3 = FUN_0093b420(*param_3);
  uVar11 = (ulong)bVar3;
  if (bVar3 != 0) {
    uVar9 = 0;
    do {
      uVar6 = FUN_0093b2c0(*param_3,uVar9 & 0xffffffff);
      uVar7 = FUN_009423e0(param_1);
      uVar4 = FUN_00929240(uVar7,uVar6,1);
      local_6c[uVar9] = uVar4;
      uVar9 = uVar9 + 1;
    } while (uVar11 != uVar9);
    uVar9 = 1;
    uVar8 = 0;
    do {
      uVar1 = uVar8 + 1;
      if (uVar1 < uVar11) {
        uVar10 = uVar9;
        do {
          uVar4 = local_6c[uVar8];
          uVar2 = local_6c[uVar10];
          if ((uVar4 < uVar2) || ((uVar4 == uVar2 && (iVar5 = FUN_008ebfa0(2), iVar5 != 0)))) {
            FUN_0093ba00(*param_3,uVar8 & 0xffffffff,uVar10 & 0xffffffff);
            local_6c[uVar8] = uVar2;
            local_6c[uVar10] = uVar4;
          }
          uVar10 = uVar10 + 1;
        } while (uVar11 != uVar10);
      }
      uVar9 = uVar9 + 1;
      uVar8 = uVar1;
    } while (uVar1 != uVar11);
  }
  return;
}


