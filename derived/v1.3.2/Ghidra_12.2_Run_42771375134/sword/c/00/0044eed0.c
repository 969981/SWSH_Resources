/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044eed0; name: FUN_0044eed0
 */


int FUN_0044eed0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ushort local_58 [2];
  ushort local_54 [2];
  
  uVar3 = *(ushort *)((long)param_1 + 0x154);
  if ((uVar3 >> 0xb & 1) == 0) {
    if (((uVar3 & 3) != 1) || (param_1[0x28] != 0)) goto LAB_0044f048;
    FUN_00488880(param_1[0x29],param_1 + 0x28,param_1 + 2,local_54,local_58,param_1 + 0x22);
    uVar3 = 0;
    if (param_1[0x28] != 0) {
      uVar3 = local_54[0] & 3;
    }
    *(ushort *)((long)param_1 + 0x154) =
         *(ushort *)((long)param_1 + 0x154) & 0xfff0 | (local_58[0] & 3) << 2 | uVar3;
    lVar9 = param_1[0x28];
  }
  else {
    *(ushort *)((long)param_1 + 0x154) = uVar3 & 0xfffc;
    param_1[0x22] = 0;
    *(undefined8 *)((long)param_1 + 0x116) = 0;
LAB_0044f048:
    lVar9 = param_1[0x28];
  }
  if (lVar9 == 0) {
LAB_0044f050:
    iVar6 = 2;
  }
  else {
    if (*(long *)(lVar9 + 0x50) == 0) {
      lVar8 = *(long *)PTR_DAT_02712ae8;
      uVar1 = *(uint *)(lVar9 + 0xc);
      nn::os::LockMutex((MutexType *)(lVar8 + 0x150));
      uVar2 = *(uint *)(lVar8 + 0x178);
      if (uVar2 == 0) {
        lVar12 = 0;
      }
      else {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar1 / uVar2;
        }
        for (lVar12 = *(long *)(*(long *)(lVar8 + 0x170) + (ulong)(uVar1 - uVar4 * uVar2) * 8);
            lVar12 != 0; lVar12 = *(long *)(lVar12 + 8)) {
          if (*(uint *)(lVar12 + 0x10) == uVar1) {
            *(int *)(lVar12 + 0x14) = *(int *)(lVar12 + 0x14) + 1;
            break;
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x150));
      *(long *)(lVar9 + 0x50) = lVar12;
      *param_2 = lVar12;
      uVar3 = *(ushort *)((long)param_1 + 0x154);
    }
    else {
      *param_2 = *(long *)(lVar9 + 0x50);
      uVar3 = *(ushort *)((long)param_1 + 0x154);
    }
    if ((uVar3 >> 10 & 1) != 0) {
      *(ushort *)((long)param_1 + 0x154) = uVar3 & 0xfbff;
      if (param_1[0x20] == 0) {
        iVar6 = FUN_0044f380(param_1,0);
        puVar5 = PTR_DAT_02712dc8;
        if (iVar6 != 1) {
          return iVar6;
        }
        if (param_1[0x20] == 0) goto LAB_0044ef84;
        iVar6 = FUN_0048aa30(*(undefined8 *)PTR_DAT_02712dc8,param_1[0x20],param_1);
        if (iVar6 == 2) {
          param_1[0x20] = 0;
          return 2;
        }
        (**(code **)(*param_1 + 0x60))(param_1,param_1[0x20]);
        if (iVar6 != 1) {
          return iVar6;
        }
        lVar9 = param_1[0x20];
        if (lVar9 == 0) goto LAB_0044ef84;
        uVar11 = *(undefined8 *)puVar5;
        uVar7 = FUN_00488860(param_1[0x29]);
        FUN_0048ae80(uVar11,lVar9,uVar7);
        lVar9 = *param_2;
        lVar8 = param_1[0x28];
      }
      else {
LAB_0044ef84:
        lVar9 = *param_2;
        lVar8 = param_1[0x28];
      }
      if (lVar9 == 0) {
        if (*(int *)(lVar8 + 0xc) != 0) goto LAB_0044f050;
      }
      else {
        *(undefined4 *)(lVar8 + 0x10) = *(undefined4 *)(lVar9 + 0x20);
        *(undefined4 *)(param_1[0x28] + 0x14) = *(undefined4 *)(lVar9 + 0x24);
        *(undefined4 *)(param_1[0x28] + 0x18) = *(undefined4 *)(lVar9 + 0x28);
        puVar5 = PTR_DAT_02712b50;
        if (((*(byte *)((long)param_1 + 0x155) >> 3 & 1) == 0) && (*(int *)(lVar9 + 0xb0) != 0)) {
          puVar10 = *(undefined4 **)(lVar9 + 0xa8);
          do {
            iVar6 = FUN_0049b200(*(undefined8 *)puVar5,param_1,*puVar10,puVar10[1],puVar10[2],
                                 puVar10[3],puVar10[4],puVar10[9],*(undefined8 *)(puVar10 + 6),
                                 puVar10[8],param_1 + 2,0,1);
            if (iVar6 != 1) {
              return iVar6;
            }
            puVar10 = puVar10 + 10;
          } while (puVar10 !=
                   (undefined4 *)(*(long *)(lVar9 + 0xa8) + (ulong)*(uint *)(lVar9 + 0xb0) * 0x28));
        }
      }
    }
    iVar6 = 1;
  }
  return iVar6;
}


