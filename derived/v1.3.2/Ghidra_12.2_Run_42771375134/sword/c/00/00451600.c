/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00451600; name: FUN_00451600
 */


ushort FUN_00451600(long *param_1)

{
  MutexType *pMVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ushort local_48 [2];
  ushort local_44 [2];
  
  if ((*(byte *)((long)param_1 + 0x155) >> 2 & 1) == 0) goto LAB_0045185c;
  FUN_0044e9b0(param_1);
  uVar5 = *(ushort *)((long)param_1 + 0x154);
  uVar2 = uVar5 & 0xfbfc;
  *(ushort *)((long)param_1 + 0x154) = uVar2 | 1;
  if ((uVar5 >> 0xb & 1) == 0) {
    if (param_1[0x28] == 0) {
      FUN_00488880(param_1[0x29],param_1 + 0x28,param_1 + 2,local_44,local_48,param_1 + 0x22);
      lVar10 = param_1[0x28];
      uVar2 = 0;
      if (lVar10 != 0) {
        uVar2 = local_44[0] & 3;
      }
      *(ushort *)((long)param_1 + 0x154) =
           *(ushort *)((long)param_1 + 0x154) & 0xfff0 | (local_48[0] & 3) << 2 | uVar2;
      goto joined_r0x004516bc;
    }
  }
  else {
    *(ushort *)((long)param_1 + 0x154) = uVar2;
    param_1[0x22] = 0;
    *(undefined8 *)((long)param_1 + 0x116) = 0;
    lVar10 = param_1[0x28];
joined_r0x004516bc:
    if (lVar10 == 0) goto LAB_0045185c;
  }
  plVar11 = param_1 + 0x28;
  if (((param_1[0x20] == 0) &&
      (iVar8 = FUN_0044f380(param_1,0), puVar7 = PTR_DAT_02712dc8, iVar8 == 1)) &&
     (param_1[0x20] != 0)) {
    iVar8 = FUN_0048aa30(*(undefined8 *)PTR_DAT_02712dc8,param_1[0x20],param_1);
    if (iVar8 != 2) {
      (**(code **)(*param_1 + 0x60))(param_1,param_1[0x20]);
      if ((iVar8 == 1) && (lVar10 = param_1[0x20], lVar10 != 0)) {
        uVar13 = *(undefined8 *)puVar7;
        uVar9 = FUN_00488860(param_1[0x29]);
        FUN_0048ae80(uVar13,lVar10,uVar9);
      }
      goto LAB_00451758;
    }
    param_1[0x20] = 0;
    lVar14 = *plVar11;
    lVar10 = *(long *)(lVar14 + 0x50);
  }
  else {
LAB_00451758:
    lVar14 = *plVar11;
    lVar10 = *(long *)(lVar14 + 0x50);
  }
  if (lVar10 == 0) {
    lVar10 = *(long *)PTR_DAT_02712ae8;
    uVar3 = *(uint *)(lVar14 + 0xc);
    pMVar1 = (MutexType *)(lVar10 + 0x150);
    nn::os::LockMutex(pMVar1);
    uVar4 = *(uint *)(lVar10 + 0x178);
    if (uVar4 != 0) {
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar3 / uVar4;
      }
      for (lVar10 = *(long *)(*(long *)(lVar10 + 0x170) + (ulong)(uVar3 - uVar6 * uVar4) * 8);
          lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
        if (*(uint *)(lVar10 + 0x10) == uVar3) {
          *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar1);
          *(long *)(lVar14 + 0x50) = lVar10;
          lVar14 = *plVar11;
          goto LAB_00451764;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
    *(undefined8 *)(lVar14 + 0x50) = 0;
  }
  else {
LAB_00451764:
    *(undefined4 *)(lVar14 + 0x10) = *(undefined4 *)(lVar10 + 0x20);
    *(undefined4 *)(param_1[0x28] + 0x14) = *(undefined4 *)(lVar10 + 0x24);
    *(undefined4 *)(param_1[0x28] + 0x18) = *(undefined4 *)(lVar10 + 0x28);
    puVar7 = PTR_DAT_02712b50;
    if (((*(byte *)((long)param_1 + 0x155) >> 3 & 1) == 0) && (*(int *)(lVar10 + 0xb0) != 0)) {
      puVar12 = *(undefined4 **)(lVar10 + 0xa8);
      do {
        iVar8 = FUN_0049b200(*(undefined8 *)puVar7,param_1,*puVar12,puVar12[1],puVar12[2],puVar12[3]
                             ,puVar12[4],puVar12[9],*(undefined8 *)(puVar12 + 6),puVar12[8],
                             param_1 + 2,0,1);
        if (iVar8 != 1) break;
        puVar12 = puVar12 + 10;
      } while (puVar12 !=
               (undefined4 *)(*(long *)(lVar10 + 0xa8) + (ulong)*(uint *)(lVar10 + 0xb0) * 0x28));
    }
  }
LAB_0045185c:
  return *(ushort *)((long)param_1 + 0x154) & 3;
}


