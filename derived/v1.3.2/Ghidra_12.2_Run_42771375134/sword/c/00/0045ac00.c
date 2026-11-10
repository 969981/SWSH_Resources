/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045ac00; name: FUN_0045ac00
 */


undefined8 FUN_0045ac00(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *unaff_x23;
  long lVar11;
  long *plVar12;
  
  puVar7 = PTR_DAT_02712d38;
  puVar6 = PTR_DAT_02712d18;
  puVar5 = PTR_DAT_02712a90;
  if (*(char *)(param_1 + 0xb8) == '\0') {
    plVar12 = *(long **)PTR_DAT_02712d18;
    if ((char)plVar12[0x17] == '\0') {
      puVar1 = PTR_DAT_02712d28 + 0x10;
      puVar2 = PTR_DAT_02712d30 + 0x10;
      do {
        while (unaff_x23 = puVar5, plVar12 == (long *)0x0) {
          plVar12 = (long *)FUN_00404690(*(undefined4 *)puVar5,0xc0);
          *plVar12 = (long)puVar1;
          plVar12[1] = 0;
          lVar9 = *(long *)(puVar7 + 8);
          plVar12[2] = 0;
          plVar12[3] = lVar9;
          plVar3 = (long *)(puVar7 + 0x10);
          if (*(long *)(puVar7 + 0x10) != 0) {
            plVar3 = (long *)(lVar9 + 0x10);
          }
          *plVar3 = (long)plVar12;
          *(long **)(puVar7 + 8) = plVar12;
          *(int *)puVar7 = *(int *)puVar7 + 1;
          *plVar12 = (long)puVar2;
          plVar12[7] = 0;
          plVar12[8] = 0;
          plVar12[10] = 0;
          plVar12[0xb] = 0;
          plVar12[0xf] = 0;
          plVar12[0x10] = 0;
          plVar12[0x12] = 0;
          plVar12[0x13] = 0;
          plVar12[0x15] = 0;
          plVar12[0x16] = 0;
          *(long **)puVar6 = plVar12;
          *(undefined2 *)(plVar12 + 0x17) = 0x101;
          if ((char)plVar12[0x17] != '\0') goto LAB_0045ada4;
        }
      } while ((char)plVar12[0x17] == '\0');
    }
LAB_0045ada4:
    iVar8 = FUN_004588f0(param_1 + 0x20,plVar12 + 4);
    if (iVar8 == 1) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
      iVar8 = *(int *)(param_2 + 0x10);
      goto joined_r0x0045adc4;
    }
LAB_0045add8:
    uVar10 = 0;
  }
  else {
    iVar8 = *(int *)(param_2 + 0x10);
joined_r0x0045adc4:
    if (iVar8 != 0) {
      plVar12 = *(long **)(param_2 + 8);
      bVar4 = true;
      do {
        lVar11 = *plVar12;
        unaff_x23 = (undefined *)((ulong)unaff_x23 & 0xffffffff00000000);
        lVar9 = FUN_00458bb0(param_1 + 0x20,lVar11,unaff_x23);
        if (lVar11 != -1 && lVar9 != 0) {
          if ((((long *)(lVar9 - 0x18U) < *(long **)(param_1 + 0x38)) ||
              (*(long *)(lVar9 - 0x18U) != lVar11)) &&
             ((*(long **)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x40) * 3 + -3 <
               (long *)(lVar9 + 0x18U) || (*(long *)(lVar9 + 0x18U) != lVar11)))) {
            FUN_004e7fa0(param_1 + 0x48,lVar11);
          }
        }
        bVar4 = (bool)(bVar4 & lVar9 != 0);
        plVar12 = plVar12 + 1;
      } while (plVar12 != (long *)(*(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x10) * 8));
      if (!bVar4) goto LAB_0045add8;
    }
    FUN_0045a3a0(param_1);
    uVar10 = 1;
  }
  return uVar10;
}


