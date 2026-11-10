/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045a840; name: FUN_0045a840
 */


undefined8 FUN_0045a840(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  
  puVar6 = PTR_DAT_02712d38;
  puVar5 = PTR_DAT_02712d18;
  puVar4 = PTR_DAT_02712a90;
  if (*(char *)(param_2 + 0xb8) == '\0') {
    plVar8 = *(long **)PTR_DAT_02712d18;
    if ((char)plVar8[0x17] == '\0') {
      puVar1 = PTR_DAT_02712d28 + 0x10;
      puVar2 = PTR_DAT_02712d30 + 0x10;
      do {
        while (plVar8 == (long *)0x0) {
          plVar8 = (long *)FUN_00404690(*(undefined4 *)puVar4,0xc0);
          *plVar8 = (long)puVar1;
          plVar8[1] = 0;
          lVar9 = *(long *)(puVar6 + 8);
          plVar8[2] = 0;
          plVar8[3] = lVar9;
          plVar3 = (long *)(puVar6 + 0x10);
          if (*(long *)(puVar6 + 0x10) != 0) {
            plVar3 = (long *)(lVar9 + 0x10);
          }
          *plVar3 = (long)plVar8;
          *(long **)(puVar6 + 8) = plVar8;
          *(int *)puVar6 = *(int *)puVar6 + 1;
          *plVar8 = (long)puVar2;
          plVar8[7] = 0;
          plVar8[8] = 0;
          plVar8[10] = 0;
          plVar8[0xb] = 0;
          plVar8[0xf] = 0;
          plVar8[0x10] = 0;
          plVar8[0x12] = 0;
          plVar8[0x13] = 0;
          plVar8[0x15] = 0;
          plVar8[0x16] = 0;
          *(long **)puVar5 = plVar8;
          *(undefined2 *)(plVar8 + 0x17) = 0x101;
          if ((char)plVar8[0x17] != '\0') goto LAB_0045a928;
        }
      } while ((char)plVar8[0x17] == '\0');
    }
LAB_0045a928:
    iVar7 = FUN_004588f0(param_2 + 0x20,plVar8 + 4);
    if (iVar7 == 1) {
      *(undefined1 *)(param_2 + 0xb8) = 1;
    }
  }
  if (*(int *)(param_2 + 0x40) != 0) {
    lVar9 = *(long *)(param_2 + 0x38);
    do {
      *(undefined4 *)(lVar9 + 0x10) = param_1;
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != *(long *)(param_2 + 0x38) + (ulong)*(uint *)(param_2 + 0x40) * 0x18);
  }
  FUN_0045a3a0(param_2);
  return 1;
}


