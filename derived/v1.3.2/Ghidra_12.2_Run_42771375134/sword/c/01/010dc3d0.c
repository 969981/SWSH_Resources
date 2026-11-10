/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010dc3d0; name: FUN_010dc3d0
 */


void FUN_010dc3d0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  plVar1 = (long *)FUN_00ffdc80(param_1 + 0x100,"normal_panel");
  FUN_016b2d70(plVar1,1);
  (**(code **)(*plVar1 + 0x50))(plVar1);
  local_28 = 0;
  FUN_016b7990(plVar1,&local_28,1,1);
  local_28 = 0x84800ae152bcc465;
  uVar2 = FUN_00ffdef0(param_1 + 0x100,&local_28);
  FUN_016b2da0(uVar2,1);
  FUN_00ffa3d0(param_1,0);
  FUN_00ffa160(param_1,1,1);
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  return;
}


