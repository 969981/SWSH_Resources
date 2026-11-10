/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00860be0; name: FUN_00860be0
 */


long * FUN_00860be0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *local_38;
  undefined *puStack_30;
  undefined1 local_28;
  
  if (param_2 == 0) {
    plVar2 = operator_new(0x40);
    *plVar2 = (long)(PTR_DAT_02717308 + 0x10);
    plVar2[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    plVar2[3] = 0;
    plVar2[4] = 0;
    if (*(long *)puVar1 != 2) {
      local_28 = 0;
      local_38 = PTR_DAT_02716670 + 0x10;
      puStack_30 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&local_38);
      FUN_00801390(&local_38);
    }
    plVar2[2] = 0;
    plVar2[6] = *(long *)PTR_DAT_02716d10;
    plVar2[7] = 0;
  }
  else {
    plVar2 = (long *)FUN_0080efb0(param_2,0,0x40);
    *plVar2 = (long)(PTR_DAT_02717308 + 0x10);
    plVar2[1] = 0;
    puVar1 = PTR_DAT_02716d70;
    plVar2[3] = 0;
    plVar2[4] = 0;
    if (*(long *)puVar1 != 2) {
      local_28 = 0;
      local_38 = PTR_DAT_02716670 + 0x10;
      puStack_30 = PTR_LAB_02716d78;
      FUN_00801c10(PTR_DAT_02716d70,&local_38);
      FUN_00801390(&local_38);
    }
    *(undefined4 *)((long)plVar2 + 0x14) = 0;
    plVar2[6] = *(long *)PTR_DAT_02716d10;
    plVar2[7] = 0;
    *(undefined4 *)(plVar2 + 2) = 0;
    FUN_0080eeb0(param_2,plVar2,PTR_LAB_02717340);
  }
  return plVar2;
}


