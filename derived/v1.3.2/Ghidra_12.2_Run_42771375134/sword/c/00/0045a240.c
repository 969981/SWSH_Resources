/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045a240; name: FUN_0045a240
 */


bool FUN_0045a240(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  
  puVar7 = PTR_DAT_02712d38;
  puVar6 = PTR_DAT_02712d18;
  puVar5 = PTR_DAT_02712a90;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    plVar9 = *(long **)PTR_DAT_02712d18;
    if ((char)plVar9[0x17] == '\0') {
      puVar1 = PTR_DAT_02712d28 + 0x10;
      puVar2 = PTR_DAT_02712d30 + 0x10;
      do {
        while (plVar9 == (long *)0x0) {
          plVar9 = (long *)FUN_00404690(*(undefined4 *)puVar5,0xc0);
          *plVar9 = (long)puVar1;
          plVar9[1] = 0;
          lVar11 = *(long *)(puVar7 + 8);
          plVar9[2] = 0;
          plVar9[3] = lVar11;
          plVar4 = (long *)(puVar7 + 0x10);
          if (*(long *)(puVar7 + 0x10) != 0) {
            plVar4 = (long *)(lVar11 + 0x10);
          }
          *plVar4 = (long)plVar9;
          *(long **)(puVar7 + 8) = plVar9;
          *(int *)puVar7 = *(int *)puVar7 + 1;
          *plVar9 = (long)puVar2;
          plVar9[7] = 0;
          plVar9[8] = 0;
          plVar9[10] = 0;
          plVar9[0xb] = 0;
          plVar9[0xf] = 0;
          plVar9[0x10] = 0;
          plVar9[0x12] = 0;
          plVar9[0x13] = 0;
          plVar9[0x15] = 0;
          plVar9[0x16] = 0;
          *(long **)puVar6 = plVar9;
          *(undefined2 *)(plVar9 + 0x17) = 0x101;
          if ((char)plVar9[0x17] != '\0') goto LAB_0045a330;
        }
      } while ((char)plVar9[0x17] == '\0');
    }
LAB_0045a330:
    iVar8 = FUN_004588f0(param_2 + 0x20,plVar9 + 4);
    if (iVar8 == 1) {
      *(undefined1 *)(param_2 + 0xb8) = 1;
    }
  }
  uVar10 = FUN_00459200(param_1,param_2 + 0x20,param_3,0);
  bVar3 = (uVar10 & 1) != 0;
  if (bVar3) {
    FUN_0045a3a0(param_2);
  }
  return bVar3;
}


