/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00381a20; name: FUN_00381a20
 */


void FUN_00381a20(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  uint *puVar5;
  int *piVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  code *pcVar12;
  char *__s;
  ulong uVar13;
  undefined **ppuVar14;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined1 local_68;
  uint7 uStack_67;
  
  lVar3 = *param_1;
  pcVar12 = (code *)param_2[2];
  uVar9 = *param_2;
  puVar5 = (uint *)(lVar3 + 0x10);
  uVar8 = *puVar5;
  if (uVar8 != 0) {
    if (*(char *)(*(long *)(lVar3 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar3 + 8) + (ulong)(uVar8 - 1) * 0x10));
      lVar3 = *param_1;
      puVar5 = (uint *)(lVar3 + 0x10);
      uVar8 = *puVar5;
      *(undefined1 *)(*(long *)(lVar3 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) = 1;
    }
  }
  local_68 = 0;
  local_70 = uVar9;
  if (uVar8 < (*(uint *)(lVar3 + 0x14) & 0x7fffffff)) {
    puVar10 = (undefined8 *)(*(long *)(lVar3 + 8) + (ulong)uVar8 * 0x10);
    puVar10[1] = (ulong)uStack_67 << 8;
    *puVar10 = uVar9;
    *puVar5 = *puVar5 + 1;
    piVar6 = (int *)param_1[5];
  }
  else {
    FUN_00327960(lVar3,&local_70);
    piVar6 = (int *)param_1[5];
  }
  if (piVar6 != (int *)0x0) {
    *piVar6 = *piVar6 + 1;
  }
  plVar1 = (long *)param_1[1];
  puVar10 = (undefined8 *)param_1[3];
  iVar2 = *(int *)(*param_1 + 0x10);
  if (iVar2 == 0) {
    pcVar11 = "bad__repx__name";
  }
  else {
    pcVar11 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar2 - 1) * 0x10);
  }
  (*pcVar12)(&local_70,param_1[2]);
  uVar8 = (uint)local_70;
  if ((uint)local_70 != 0) {
    if (PTR_s_eACCELERATION_025e7c90 != (undefined *)0x0) {
      ppuVar14 = &PTR_s_eACCELERATION_025e7c90;
      uVar7 = 0;
      __s = PTR_s_eACCELERATION_025e7c90;
      uVar13 = 1;
      do {
        if (((&DAT_025e7c98)[uVar7 * 4] & (uVar8 ^ 0xffffffff)) == 0) {
          if (*(int *)(puVar10 + 3) != 0) {
            pcVar12 = *(code **)*puVar10;
            sVar4 = strlen("|");
            (*pcVar12)(puVar10,&DAT_01d2f65e,sVar4);
            __s = *ppuVar14;
            if (__s == (char *)0x0) goto LAB_00381bdc;
          }
          if (*__s != '\0') {
            pcVar12 = *(code **)*puVar10;
            sVar4 = strlen(__s);
            (*pcVar12)(puVar10,__s,sVar4);
          }
        }
LAB_00381bdc:
        ppuVar14 = &PTR_s_eACCELERATION_025e7c90 + uVar13 * 2;
        __s = *ppuVar14;
        uVar7 = uVar13;
        uVar13 = (ulong)((int)uVar13 + 1);
      } while (__s != (char *)0x0);
    }
    local_74[0] = 0;
    (**(code **)*puVar10)(puVar10,local_74,1);
    (**(code **)(*plVar1 + 0x10))(plVar1,pcVar11,puVar10[4]);
    puVar10[3] = 0;
  }
  puVar5 = (uint *)(*param_1 + 0x10);
  if (*puVar5 != 0) {
    uVar8 = *puVar5 - 1;
    if (*(char *)(*(long *)(*param_1 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_1[1] + 0x28))();
      puVar5 = (uint *)(*param_1 + 0x10);
      uVar8 = *puVar5 - 1;
    }
    *puVar5 = uVar8;
  }
  return;
}


