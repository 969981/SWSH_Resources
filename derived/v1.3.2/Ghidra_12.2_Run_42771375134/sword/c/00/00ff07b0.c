/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff07b0; name: FUN_00ff07b0
 */


undefined4 * FUN_00ff07b0(long *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,0x18,8);
  *puVar1 = 0x736b6264;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(long **)(puVar1 + 4) = param_1;
  lVar2 = FUN_009e3950(&local_40,param_1);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(puVar1 + 2) != 0) {
    (**(code **)(*(long *)(*(long *)(puVar1 + 2) + 0x48) + 0x18))();
    *(undefined8 *)(puVar1 + 2) = 0;
  }
  *(long *)(puVar1 + 2) = lVar2;
  local_40 = 0xe5d621f8a5d3fc6f;
  pcStack_38 = "common/strinput.dat";
  local_30 = 0x13;
  local_28 = 0;
  FUN_014bc440(lVar2,&local_40,1);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return puVar1;
}


