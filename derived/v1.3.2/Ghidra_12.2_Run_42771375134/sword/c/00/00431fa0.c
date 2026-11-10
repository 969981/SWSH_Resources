/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00431fa0; name: FUN_00431fa0
 */


void FUN_00431fa0(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined1 auStack_c0 [48];
  undefined4 local_90;
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
  
  puVar1 = PTR_DAT_02712ae0;
  iVar2 = (**(code **)(**(long **)PTR_DAT_02712ae0 + 0x28))(*(long **)PTR_DAT_02712ae0,auStack_c0);
  if (iVar2 == 1) {
    plVar4 = *(long **)puVar1;
    local_88 = 1;
    local_80 = 0;
    local_78 = 0;
    local_70 = *(undefined8 *)PTR_DAT_02712dd0;
    local_60 = 2;
    local_48 = 0;
    local_58 = 0xffffffff;
    uStack_84 = param_1;
    puStack_68 = auStack_c0;
    local_50 = param_2;
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,&local_88);
    plVar4 = *(long **)puVar1;
    (**(code **)(*plVar4 + 0x30))(plVar4,auStack_c0,uVar3);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_90;
    }
  }
  return;
}


