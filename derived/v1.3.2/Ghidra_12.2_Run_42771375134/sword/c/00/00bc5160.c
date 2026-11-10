/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc5160; name: FUN_00bc5160
 */


void FUN_00bc5160(long param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0x68c) != 0) {
    return;
  }
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  uVar7 = FUN_016b8190();
  uVar5 = (uint)((ulong)uVar7 >> 0x20);
  uVar2 = uVar5 - 2;
  if (uVar5 < 2) goto LAB_00bc5374;
  if ((int)uVar7 == 0) {
    if (5 < (int)uVar2) goto LAB_00bc5374;
    uVar5 = *(uint *)(param_1 + 0x614);
    iVar14 = 1;
    uVar6 = FUN_00bcfb20(1,0,uVar2);
    iVar11 = *(int *)(param_1 + 0x618);
    if (iVar11 != 1) goto LAB_00bc5260;
LAB_00bc52b8:
    lVar15 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),iVar14,uVar5,uVar6);
    if (lVar15 == 0) goto LAB_00bc52f0;
    sVar4 = FUN_008787f0();
    bVar3 = sVar4 == 0;
    piVar8 = (int *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
    cVar1 = *(char *)(param_1 + 0x620);
joined_r0x00bc52e8:
    if (cVar1 != '\0') goto LAB_00bc5304;
LAB_00bc531c:
    uVar7 = *(undefined8 *)(param_1 + 0x5f0);
    if ((param_2 & 1) == 0) goto LAB_00bc533c;
    uVar12 = 1;
    if (iVar14 == 0) goto LAB_00bc532c;
LAB_00bc5360:
    uVar10 = 3;
  }
  else {
    if (4 < uVar2) goto LAB_00bc5374;
    lVar15 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar13 == 0) {
      uVar5 = FUN_0150b350(0);
    }
    else {
      plVar16 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar16 + 0x10))(plVar16);
      uVar5 = FUN_0150b350(lVar13);
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
    uVar6 = FUN_00bcfb20(0,(int)uVar7 + -1,uVar2);
    iVar14 = 0;
    iVar11 = *(int *)(param_1 + 0x618);
    if (iVar11 == 1) goto LAB_00bc52b8;
LAB_00bc5260:
    if (iVar11 == 2) {
      bVar3 = *(char *)(param_1 + 0x620) != '\0';
      piVar8 = (int *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
      cVar1 = *(char *)(param_1 + 0x620);
      goto joined_r0x00bc52e8;
    }
LAB_00bc52f0:
    bVar3 = false;
    piVar8 = (int *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
    if (*(char *)(param_1 + 0x620) == '\0') goto LAB_00bc531c;
LAB_00bc5304:
    if ((*piVar8 == iVar14) && (*(byte *)(piVar8 + 1) == uVar5)) goto LAB_00bc531c;
    uVar7 = *(undefined8 *)(param_1 + 0x5f0);
LAB_00bc533c:
    uVar9 = FUN_00bc8500(param_1,iVar14,uVar5,uVar6);
    uVar12 = 0;
    if ((uVar9 & 1) == 0) {
      uVar12 = 2;
    }
    if (iVar14 != 0) goto LAB_00bc5360;
LAB_00bc532c:
    uVar10 = 0;
  }
  FUN_00bd3390(uVar7,uVar10,uVar6,uVar12,bVar3);
LAB_00bc5374:
  if (*(char *)(param_1 + 0x620) == '\0') {
    local_58 = 0x24b1606b667538d3;
    uVar7 = FUN_00ffdef0(param_1 + 0x100,&local_58);
    FUN_016b2da0(uVar7,~param_2 & 1);
  }
  return;
}


