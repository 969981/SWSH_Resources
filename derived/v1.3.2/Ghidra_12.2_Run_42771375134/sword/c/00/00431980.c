/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00431980; name: FUN_00431980
 */


void FUN_00431980(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined1 auStack_b0 [56];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar1 = PTR_DAT_02712ae0;
  iVar2 = (**(code **)(**(long **)PTR_DAT_02712ae0 + 0x28))(*(long **)PTR_DAT_02712ae0,auStack_b0);
  if (iVar2 == 1) {
    plVar4 = *(long **)puVar1;
    local_78 = 0;
    local_70 = 0;
    local_60 = *(undefined8 *)PTR_DAT_02712dd0;
    local_68 = 0;
    local_40 = 0;
    local_38 = 0;
    local_50 = 1;
    uStack_74 = param_1;
    puStack_58 = auStack_b0;
    local_48 = param_2;
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,&local_78);
    plVar4 = *(long **)puVar1;
    (**(code **)(*plVar4 + 0x30))(plVar4,auStack_b0,uVar3);
  }
  return;
}


