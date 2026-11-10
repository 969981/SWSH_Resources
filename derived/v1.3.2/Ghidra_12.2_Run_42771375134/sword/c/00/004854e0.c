/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004854e0; name: FUN_004854e0
 */


int FUN_004854e0(long *param_1,long *param_2,int *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  byte *pbVar8;
  int iVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  ushort *puVar13;
  uint uVar14;
  uint uVar15;
  
  iVar9 = (**(code **)(*param_1 + 0x208))();
  if (iVar9 != 1) {
    return iVar9;
  }
  if ((param_4 & 1) != 0) {
    return 1;
  }
  bVar4 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  *(uint *)((long)param_1 + 0x9c) =
       *(uint *)((long)param_1 + 0x9c) & 0xffffc000 |
       *(uint *)((long)param_1 + 0x9c) & 0x1fff | (bVar4 & 1) << 0xd;
  piVar11 = (int *)*param_2 + 1;
  iVar9 = *(int *)*param_2;
  *param_2 = (long)piVar11;
  if (iVar9 != 0) {
    plVar10 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,iVar9,1);
    if (plVar10 == (long *)0x0) {
      return 2;
    }
    (**(code **)(*param_1 + 0x10))(param_1);
    iVar9 = (**(code **)(*plVar10 + 0x50))(plVar10,param_1);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    if (iVar9 != 1) {
      return iVar9;
    }
    piVar11 = (int *)*param_2;
  }
  iVar9 = *piVar11;
  *param_2 = (long)(piVar11 + 1);
  if ((iVar9 != 0) &&
     (plVar10 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,iVar9,0),
     plVar10 != (long *)0x0)) {
    (**(code **)(*param_1 + 0x10))(param_1);
    iVar9 = (**(code **)(*plVar10 + 0x50))(plVar10,param_1);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    if (iVar9 != 1) {
      return iVar9;
    }
  }
  bVar4 = *(byte *)*param_2;
  *param_2 = (long)((byte *)*param_2 + 1);
  uVar14 = *(uint *)(param_1 + 0x13);
  if ((bVar4 & 1) != (uVar14 & 1)) {
    uVar15 = uVar14 | 1;
    if ((bVar4 & 1) == 0) {
      uVar15 = uVar14 & 0xfffffffe;
    }
    *(uint *)(param_1 + 0x13) = uVar15;
    (**(code **)(*param_1 + 0x180))(param_1,0);
  }
  uVar14 = *(uint *)((long)param_1 + 0x9c);
  if ((bVar4 >> 1 & 1) != (uVar14 & 0x8000) >> 0xf) {
    *(uint *)((long)param_1 + 0x9c) = uVar14 & 0xffff7fff | (bVar4 & 2) << 0xe;
    (**(code **)(*param_1 + 0x180))(param_1,0);
    uVar14 = *(uint *)((long)param_1 + 0x9c);
  }
  *(uint *)((long)param_1 + 0x9c) =
       uVar14 & 0xe0000000 | uVar14 & 0x1ffffff | (bVar4 >> 2 & 0xf) << 0x19;
  iVar9 = (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3);
  if ((((iVar9 == 1) && (iVar9 = FUN_00484f30(param_1,param_2), iVar9 == 1)) &&
      (iVar9 = (**(code **)(*param_1 + 0x210))(param_1,param_2,param_3), iVar9 == 1)) &&
     ((iVar9 = (**(code **)(*param_1 + 0x218))(param_1,param_2,param_3), iVar9 == 1 &&
      (iVar9 = (**(code **)(param_1[3] + 0x70))(param_1 + 3,param_2,param_3), iVar9 == 1)))) {
    puVar13 = (ushort *)*param_2 + 1;
    uVar6 = *(ushort *)*param_2;
    *param_2 = (long)puVar13;
    uVar14 = (uint)uVar6;
    if (uVar14 != 0) {
      uVar15 = 0;
      while( true ) {
        uVar2 = *(undefined4 *)puVar13;
        *param_2 = (long)(puVar13 + 2);
        uVar6 = puVar13[2];
        *param_2 = (long)puVar13 + 5;
        uVar5 = *(undefined1 *)((long)puVar13 + 5);
        *param_2 = (long)(puVar13 + 3);
        bVar4 = (byte)puVar13[3];
        *param_2 = (long)puVar13 + 7;
        uVar1 = bVar4 & 0x7f;
        pbVar8 = (byte *)((long)puVar13 + 7);
        while ((char)bVar4 < '\0') {
          bVar4 = *pbVar8;
          uVar1 = bVar4 & 0x7f | uVar1 << 7;
          *param_2 = (long)(pbVar8 + 1);
          pbVar8 = pbVar8 + 1;
        }
        uVar3 = *(undefined4 *)pbVar8;
        *param_2 = (long)(pbVar8 + 4);
        bVar4 = pbVar8[4];
        *param_2 = (long)(pbVar8 + 5);
        uVar7 = *(ushort *)(pbVar8 + 5);
        *param_2 = (long)(pbVar8 + 7);
        iVar9 = (**(code **)(*param_1 + 0x1d8))
                          (param_1,uVar2,(char)uVar6,uVar5,uVar1,uVar3,bVar4,pbVar8 + 7,uVar7,1);
        if (iVar9 != 1) {
          return iVar9;
        }
        lVar12 = (ulong)uVar7 * 0xc;
        *param_2 = *param_2 + lVar12;
        uVar15 = uVar15 + 1;
        *param_3 = *param_3 - (int)lVar12;
        if (uVar14 <= uVar15) break;
        puVar13 = (ushort *)*param_2;
      }
      iVar9 = 1;
    }
  }
  return iVar9;
}


