/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040c8a0; name: FUN_0040c8a0
 */


long * FUN_0040c8a0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 auStack_24 [4];
  
  plVar2 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,param_2,0);
  if (plVar2 == (long *)0x0) {
    plVar3 = (long *)0x0;
    *param_3 = 0;
  }
  else {
    plVar3 = (long *)(**(code **)(*plVar2 + 0x260))
                               (plVar2,*(undefined8 *)(param_1 + 0x10),
                                *(undefined8 *)(param_1 + 0x30),param_1 + 0x18,0);
    if (plVar3 != (long *)0x0) {
      local_40 = 0;
      local_48[0] = 0;
      local_38 = 0;
      local_34 = 8;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      iVar1 = (**(code **)(*plVar3 + 0x90))(plVar3,local_48,&local_58,param_3,auStack_24,0,0);
      if (iVar1 == 0) {
        FUN_00409430(plVar3);
        plVar3 = (long *)0x0;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return plVar3;
}


