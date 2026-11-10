/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010250f0; name: FUN_010250f0
 */


void FUN_010250f0(undefined8 *param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  local_60 = 0x71cfcea90142567d;
  pcStack_58 = "vib_table";
  local_50 = 9;
  FUN_012b4250(auStack_30,param_2 + 0x120,&local_60);
  iVar1 = FUN_012b40f0(auStack_30);
  if ((param_3 < 0) || (iVar1 <= param_3)) {
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = 0;
    param_1[1] = 0xcbf29ce484222645;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = &DAT_01d38550;
    return;
  }
  FUN_012b4190(auStack_40,auStack_30,(long)param_3);
  local_88 = 0x72b64509739af096;
  local_80 = &DAT_01d3e3f3;
  local_78 = 4;
  FUN_012b4250(auStack_70,auStack_40,&local_88);
  local_a8 = 0xcbf29ce484222645;
  local_a0 = &DAT_01d38550;
  uStack_98 = 0;
  local_90 = 0;
  FUN_012b4820(&local_60,auStack_70,&local_a8);
  FUN_008d48d0(param_1,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
  }
  return;
}


