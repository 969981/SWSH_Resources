/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008144d0; name: FUN_008144d0
 */


int FUN_008144d0(long *param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  void *local_68;
  void *local_60;
  undefined8 uStack_58;
  
  lVar7 = (**(code **)(*param_1 + 0xb8))();
  plVar8 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_68 = (void *)0x0;
  (**(code **)(*plVar8 + 0x80))(plVar8,param_1,&local_68);
  if (local_60 == local_68) {
    iVar14 = 0;
  }
  else {
    uVar12 = 0;
    iVar14 = 0;
    do {
      iVar5 = FUN_008146c0(*(undefined8 *)((long)local_68 + uVar12 * 8),param_1);
      uVar12 = uVar12 + 1;
      iVar14 = iVar5 + iVar14;
    } while (uVar12 < (ulong)((long)local_60 - (long)local_68 >> 3));
  }
  cVar3 = *(char *)(*(long *)(lVar7 + 0x20) + 0x50);
  puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,param_1);
  if (cVar3 == '\0') {
    iVar5 = FUN_00811270(puVar9);
  }
  else {
    iVar2 = *(int *)PTR_DAT_02716fa0;
    lVar13 = 0;
    lVar7 = 0;
    iVar5 = 0;
    plVar8 = (long *)*puVar9;
    if (plVar8 != (long *)0x0) goto LAB_008145cc;
LAB_008145e4:
    if (lVar7 < 0) {
      do {
        lVar1 = *plVar8 + lVar13;
        if (*(int *)(lVar1 + 4) == 3) {
          if (*(uint *)(*plVar8 + lVar13) < 0x80) {
            iVar6 = 1;
            pbVar10 = *(byte **)(lVar1 + 8);
            bVar4 = *pbVar10;
            if ((bVar4 & 1) == 0) goto LAB_00814654;
LAB_00814624:
            uVar12 = *(ulong *)(pbVar10 + 8);
            iVar6 = iVar5 + iVar2 + iVar6;
            uVar11 = (uint)uVar12;
            if (uVar11 < 0x80) goto LAB_00814664;
LAB_00814634:
            uVar11 = (uint)uVar12;
            iVar5 = FUN_0080e440(uVar12 & 0xffffffff);
          }
          else {
            iVar6 = FUN_0080e440();
            pbVar10 = *(byte **)(lVar1 + 8);
            bVar4 = *pbVar10;
            if ((bVar4 & 1) != 0) goto LAB_00814624;
LAB_00814654:
            uVar12 = (ulong)(bVar4 >> 1);
            iVar6 = iVar5 + iVar2 + iVar6;
            uVar11 = (uint)(bVar4 >> 1);
            if (0x7f < uVar11) goto LAB_00814634;
LAB_00814664:
            iVar5 = 1;
          }
          iVar5 = iVar6 + uVar11 + iVar5;
        }
        lVar7 = lVar7 + 1;
        lVar13 = lVar13 + 0x10;
        plVar8 = (long *)*puVar9;
        if (plVar8 == (long *)0x0) goto LAB_008145e4;
LAB_008145cc:
        if ((int)((ulong)(plVar8[1] - *plVar8) >> 4) <= lVar7) break;
      } while( true );
    }
  }
  if (local_68 != (void *)0x0) {
    local_60 = local_68;
    operator_delete(local_68);
  }
  return iVar5 + iVar14;
}


