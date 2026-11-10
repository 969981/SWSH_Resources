/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045aa50; name: FUN_0045aa50
 */


undefined8 FUN_0045aa50(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  puVar6 = PTR_DAT_02712d38;
  puVar5 = PTR_DAT_02712d18;
  puVar4 = PTR_DAT_02712a90;
  if (*(char *)(param_2 + 0xb9) == '\0') {
    plVar8 = *(long **)PTR_DAT_02712d18;
    if (*(char *)((long)plVar8 + 0xb9) == '\0') {
      puVar1 = PTR_DAT_02712d28 + 0x10;
      puVar2 = PTR_DAT_02712d30 + 0x10;
      do {
        while (plVar8 == (long *)0x0) {
          plVar8 = (long *)FUN_00404690(*(undefined4 *)puVar4,0xc0);
          *plVar8 = (long)puVar1;
          plVar8[1] = 0;
          lVar10 = *(long *)(puVar6 + 8);
          plVar8[2] = 0;
          plVar8[3] = lVar10;
          plVar3 = (long *)(puVar6 + 0x10);
          if (*(long *)(puVar6 + 0x10) != 0) {
            plVar3 = (long *)(lVar10 + 0x10);
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
          if (*(char *)((long)plVar8 + 0xb9) != '\0') goto LAB_0045ab44;
        }
      } while (*(char *)((long)plVar8 + 0xb9) == '\0');
    }
LAB_0045ab44:
    iVar7 = FUN_004588f0(param_2 + 0x60,plVar8 + 0xc);
    if (iVar7 != 1) {
      return 0;
    }
    *(undefined1 *)(param_2 + 0xb9) = 1;
  }
  uVar9 = FUN_00459200(param_1,param_2 + 0x60,param_3,param_4);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  FUN_0045a3a0(param_2);
  return 1;
}


