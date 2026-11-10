/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb3b90; name: FUN_00bb3b90
 */


void FUN_00bb3b90(long param_1,uint param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  
  puVar3 = PTR_DAT_02710848;
  puVar2 = PTR_DAT_02710798;
  uVar7 = 0;
  do {
    uVar4 = FUN_00bd1d20(*(undefined8 *)(param_1 + 0x5f0),1,param_2,uVar7);
    if ((uVar4 & 1) == 0) {
      lVar8 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),1,param_2,uVar7);
      FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar8,3,uVar7,0);
      if (lVar8 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x5f0);
        uVar4 = FUN_00bc8500(param_1,1,param_2,uVar7);
        uVar12 = 0;
        if ((uVar4 & 1) == 0) {
          uVar12 = 2;
        }
        FUN_00bd3390(uVar9,3,uVar7,uVar12,0);
        uVar1 = *(ushort *)(param_1 + 0x6d8);
        if (uVar1 == 0) {
          uVar4 = 0;
LAB_00bb3cc0:
          if ((uint)uVar4 == (uint)uVar1) goto LAB_00bb3cc8;
          uVar9 = *(undefined8 *)(param_1 + 0x5f0);
          uVar5 = 4;
        }
        else {
          uVar4 = 0;
          puVar6 = (ushort *)(*(long *)(param_1 + 0x6d0) + 6);
          do {
            if (((*(int *)(puVar6 + -3) == 1) && (puVar6[-1] == param_2)) && (uVar7 == *puVar6))
            goto LAB_00bb3cc0;
            uVar4 = uVar4 + 1;
            puVar6 = puVar6 + 4;
          } while (uVar4 < uVar1);
LAB_00bb3cc8:
          lVar11 = *(long *)(*(long *)puVar3 + 0x90);
          if (lVar11 != 0) {
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
          }
          lVar10 = *(long *)(*(long *)puVar2 + 0x228);
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
          }
          if (lVar11 != 0) {
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
          }
          if (param_2 != 0) {
            FUN_0150aec0(lVar10,param_2 - 1);
          }
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
          }
          uVar9 = *(undefined8 *)(param_1 + 0x5f0);
          uVar5 = 0;
        }
        FUN_00bd34e0(uVar9,3,uVar7,uVar5);
      }
    }
    else {
      FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),0,3,uVar7,0);
      lVar8 = 0;
    }
    FUN_00bb7250(param_1,lVar8,uVar7,0);
    uVar7 = uVar7 + 1;
    if (uVar7 == 6) {
      FUN_00bbafd0(param_1,param_2,0);
      return;
    }
  } while( true );
}


