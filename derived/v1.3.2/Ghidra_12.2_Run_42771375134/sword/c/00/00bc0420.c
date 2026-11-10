/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc0420; name: FUN_00bc0420
 */


void FUN_00bc0420(long param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  
  sVar1 = *(short *)(param_1 + 0x6da);
  lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar8 == 0) {
    uVar2 = FUN_0150b350(0);
  }
  else {
    plVar11 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar2 = FUN_0150b350(lVar8);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  uVar4 = (ulong)*(ushort *)(param_1 + 0x6d8);
  if (*(ushort *)(param_1 + 0x6d8) != 0) {
    uVar12 = 0;
    uVar9 = 0;
LAB_00bc04c8:
    do {
      if ((uVar9 < 0x1e) &&
         (lVar10 = uVar12 * 8, *(int *)(*(long *)(param_1 + 0x6d0) + lVar10) == 2)) {
        do {
          uVar3 = (uint)uVar4;
          if (uVar3 != 0) {
            uVar5 = 0;
            do {
              uVar6 = 0;
              puVar7 = (ushort *)(*(long *)(param_1 + 0x6d0) + 6);
              do {
                if (((*(int *)(puVar7 + -3) == 0) && (uVar2 == puVar7[-1])) && (uVar9 == *puVar7)) {
                  if (uVar3 != (uint)uVar6) goto LAB_00bc0584;
                  break;
                }
                uVar6 = uVar6 + 1;
                puVar7 = puVar7 + 4;
              } while (uVar6 < uVar4);
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar3);
          }
          lVar8 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),0,uVar2,uVar9);
          if ((lVar8 != 0) && (uVar4 = FUN_00bca610(param_1,0,uVar2,uVar9), (uVar4 & 1) != 0)) {
            *(undefined4 *)(*(long *)(param_1 + 0x6d0) + lVar10) = 0;
            *(short *)(*(long *)(param_1 + 0x6d0) + lVar10 + 4) = (short)uVar2;
            *(short *)(*(long *)(param_1 + 0x6d0) + lVar10 + 6) = (short)uVar9;
            FUN_00bd34e0(*(undefined8 *)(param_1 + 0x5f0),0,uVar9,4);
            *(short *)(param_1 + 0x6da) = *(short *)(param_1 + 0x6da) + 1;
            uVar4 = (ulong)*(ushort *)(param_1 + 0x6d8);
            uVar12 = uVar12 + 1;
            if (uVar4 <= uVar12) goto LAB_00bc05f4;
            goto LAB_00bc04c8;
          }
LAB_00bc0584:
          uVar9 = uVar9 + 1;
          if (0x1d < uVar9) break;
          uVar4 = (ulong)*(ushort *)(param_1 + 0x6d8);
        } while( true );
      }
      uVar4 = (ulong)*(ushort *)(param_1 + 0x6d8);
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar4);
  }
LAB_00bc05f4:
  if (sVar1 == *(short *)(param_1 + 0x6da)) {
    return;
  }
  FUN_00bca320(param_1);
  return;
}


