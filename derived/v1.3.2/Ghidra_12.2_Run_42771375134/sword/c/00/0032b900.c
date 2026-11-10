/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0032b900; name: FUN_0032b900
 */


void FUN_0032b900(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  size_t sVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  code *pcVar12;
  char *__s;
  ulong uVar13;
  undefined **ppuVar14;
  byte local_78 [8];
  ulong local_70;
  undefined1 local_68;
  uint7 uStack_67;
  
  lVar4 = *param_1;
  pcVar12 = (code *)param_2[2];
  uVar9 = *param_2;
  puVar6 = (uint *)(lVar4 + 0x10);
  uVar8 = *puVar6;
  if (uVar8 != 0) {
    if (*(char *)(*(long *)(lVar4 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(lVar4 + 8) + (ulong)(uVar8 - 1) * 0x10));
      lVar4 = *param_1;
      puVar6 = (uint *)(lVar4 + 0x10);
      uVar8 = *puVar6;
      *(undefined1 *)(*(long *)(lVar4 + 8) + (ulong)(uVar8 - 1) * 0x10 + 8) = 1;
    }
  }
  local_68 = 0;
  local_70 = uVar9;
  if (uVar8 < (*(uint *)(lVar4 + 0x14) & 0x7fffffff)) {
    puVar1 = (ulong *)(*(long *)(lVar4 + 8) + (ulong)uVar8 * 0x10);
    puVar1[1] = (ulong)uStack_67 << 8;
    *puVar1 = uVar9;
    *puVar6 = *puVar6 + 1;
    piVar7 = (int *)param_1[5];
  }
  else {
    FUN_00327960(lVar4,&local_70);
    piVar7 = (int *)param_1[5];
  }
  if (piVar7 != (int *)0x0) {
    *piVar7 = *piVar7 + 1;
  }
  plVar2 = (long *)param_1[1];
  puVar10 = (undefined8 *)param_1[3];
  iVar3 = *(int *)(*param_1 + 0x10);
  if (iVar3 == 0) {
    pcVar11 = "bad__repx__name";
  }
  else {
    pcVar11 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar3 - 1) * 0x10);
  }
  (*pcVar12)(local_78,param_1[2]);
  if (local_78[0] != 0) {
    if (PTR_s_eVISUALIZATION_025e7588 != (undefined *)0x0) {
      ppuVar14 = &PTR_s_eVISUALIZATION_025e7588;
      uVar9 = 0;
      __s = PTR_s_eVISUALIZATION_025e7588;
      uVar13 = 1;
      do {
        if (((&DAT_025e7590)[uVar9 * 4] & (local_78[0] ^ 0xffffffff)) == 0) {
          if (*(int *)(puVar10 + 3) != 0) {
            pcVar12 = *(code **)*puVar10;
            sVar5 = strlen("|");
            (*pcVar12)(puVar10,&DAT_01d2f65e,sVar5);
            __s = *ppuVar14;
            if (__s == (char *)0x0) goto LAB_0032babc;
          }
          if (*__s != '\0') {
            pcVar12 = *(code **)*puVar10;
            sVar5 = strlen(__s);
            (*pcVar12)(puVar10,__s,sVar5);
          }
        }
LAB_0032babc:
        ppuVar14 = &PTR_s_eVISUALIZATION_025e7588 + uVar13 * 2;
        __s = *ppuVar14;
        uVar9 = uVar13;
        uVar13 = (ulong)((int)uVar13 + 1);
      } while (__s != (char *)0x0);
    }
    local_70 = local_70 & 0xffffffffffffff00;
    (**(code **)*puVar10)(puVar10,&local_70,1);
    (**(code **)(*plVar2 + 0x10))(plVar2,pcVar11,puVar10[4]);
    puVar10[3] = 0;
  }
  puVar6 = (uint *)(*param_1 + 0x10);
  if (*puVar6 != 0) {
    uVar8 = *puVar6 - 1;
    if (*(char *)(*(long *)(*param_1 + 8) + (ulong)uVar8 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_1[1] + 0x28))();
      puVar6 = (uint *)(*param_1 + 0x10);
      uVar8 = *puVar6 - 1;
    }
    *puVar6 = uVar8;
  }
  return;
}


