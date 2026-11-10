/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00431b40; name: FUN_00431b40
 */


void FUN_00431b40(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  undefined1 auStack_c0 [56];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  uVar2 = FUN_00447140();
  *param_4 = uVar2;
  puVar1 = PTR_DAT_02712ae0;
  iVar3 = (**(code **)(**(long **)PTR_DAT_02712ae0 + 0x28))(*(long **)PTR_DAT_02712ae0,auStack_c0);
  if (iVar3 == 1) {
    plVar4 = *(long **)puVar1;
    uStack_84 = *param_4;
    local_88 = 0;
    local_80 = 0;
    local_70 = *(undefined8 *)PTR_DAT_02712dd0;
    local_78 = 0;
    local_60 = 3;
    puStack_68 = auStack_c0;
    local_58 = param_3;
    local_50 = param_1;
    local_48 = param_2;
    uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4,&local_88);
    plVar4 = *(long **)puVar1;
    (**(code **)(*plVar4 + 0x30))(plVar4,auStack_c0,uVar2);
  }
  return;
}


