/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045ae00; name: FUN_0045ae00
 */


undefined8 FUN_0045ae00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  
  puVar8 = PTR_DAT_02712d38;
  puVar7 = PTR_DAT_02712d18;
  puVar6 = PTR_DAT_02712a90;
  cVar5 = *(char *)(param_1 + 0xb8);
  lVar1 = param_1 + 0x20;
  if (cVar5 == '\0') {
    plVar11 = *(long **)PTR_DAT_02712d18;
    if ((char)plVar11[0x17] == '\0') {
      puVar2 = PTR_DAT_02712d28 + 0x10;
      puVar3 = PTR_DAT_02712d30 + 0x10;
      do {
        while (plVar11 != (long *)0x0) {
          if ((char)plVar11[0x17] != '\0') goto LAB_0045af08;
        }
        plVar11 = (long *)FUN_00404690(*(undefined4 *)puVar6,0xc0);
        *plVar11 = (long)puVar2;
        plVar11[1] = 0;
        lVar12 = *(long *)(puVar8 + 8);
        plVar11[2] = 0;
        plVar11[3] = lVar12;
        plVar4 = (long *)(puVar8 + 0x10);
        if (*(long *)(puVar8 + 0x10) != 0) {
          plVar4 = (long *)(lVar12 + 0x10);
        }
        *plVar4 = (long)plVar11;
        *(long **)(puVar8 + 8) = plVar11;
        *(int *)puVar8 = *(int *)puVar8 + 1;
        *plVar11 = (long)puVar3;
        plVar11[7] = 0;
        plVar11[8] = 0;
        plVar11[10] = 0;
        plVar11[0xb] = 0;
        plVar11[0xf] = 0;
        plVar11[0x10] = 0;
        plVar11[0x12] = 0;
        plVar11[0x13] = 0;
        plVar11[0x15] = 0;
        plVar11[0x16] = 0;
        *(long **)puVar7 = plVar11;
        *(undefined2 *)(plVar11 + 0x17) = 0x101;
      } while ((char)plVar11[0x17] == '\0');
    }
LAB_0045af08:
    iVar9 = FUN_004588f0(lVar1,plVar11 + 4);
    if (iVar9 != 1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0xb8) = 1;
    uVar10 = FUN_00459d30(lVar1,param_2);
  }
  else {
    uVar10 = FUN_00459d30(lVar1,param_2);
  }
  if ((uVar10 & 1) != 0) {
    FUN_0045a3a0(param_1);
    return 1;
  }
  if (cVar5 == '\0') {
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_0045a3a0(param_1);
  }
  return 0;
}


