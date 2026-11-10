/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ba9e0; name: FUN_004ba9e0
 */


undefined8
FUN_004ba9e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  
  plVar2 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,param_2,0);
  puVar1 = PTR_DAT_02712de0;
  if (plVar2 != (long *)0x0) {
    FUN_004399e0(*(undefined8 *)PTR_DAT_02712de0,plVar2,param_4,0);
    if ((*(byte *)(param_3 + 2) & 7) == 1) {
      local_54 = 0;
      local_48 = 0;
      local_4c = 0;
      local_58 = 4;
      local_70[0] = 0;
      uStack_5c = *param_3;
      local_60 = 0;
      local_50 = 0;
      local_68 = param_4;
      (**(code **)(*plVar2 + 0x98))(plVar2,local_70);
      FUN_004399e0(*(undefined8 *)puVar1,plVar2,param_4,local_60);
    }
    else {
      (**(code **)(*plVar2 + 0xb0))(plVar2,param_4,param_1,0);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  return 1;
}


