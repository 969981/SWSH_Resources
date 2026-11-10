/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00788550; name: FUN_00788550
 */


void FUN_00788550(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  
  *(undefined8 *)(param_1 + 2) = param_3;
  puVar1 = param_1 + 4;
  uVar5 = FUN_007890c0(param_4,param_5);
  FUN_019ab940(puVar1,uVar5);
  uVar2 = FUN_019aba60(puVar1);
  if (uVar2 == 0) {
    uVar9 = (uint)*(ushort *)(*(long *)(param_1 + 6) + 0xe);
  }
  else {
    lVar6 = FUN_019aba80(puVar1);
    uVar9 = 0;
    uVar10 = (ulong)uVar2;
    do {
      lVar7 = FUN_019b1800(*(undefined8 *)(param_2 + 0x20),lVar6);
      if (lVar7 != 0) {
        uVar3 = FUN_019abaa0(puVar1);
        iVar4 = FUN_019abb00(puVar1,lVar7,uVar3 & 1);
        uVar9 = iVar4 + uVar9;
      }
      lVar6 = lVar6 + 0x24;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  plVar8 = *(long **)(param_1 + 2);
  uVar5 = FUN_00789160(param_4);
  (**(code **)(*plVar8 + 0x48))(plVar8,PTR_DAT_027155e8,uVar5,*(undefined8 *)(param_1 + 6),uVar9);
  *param_1 = 1;
  param_1[0xc] = 0x3f800000;
  return;
}


