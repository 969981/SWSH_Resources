/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01025010; name: FUN_01025010
 */


undefined8 FUN_01025010(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [16];
  undefined8 local_18;
  
  local_48 = 0x71cfcea90142567d;
  local_40 = "vib_table";
  local_38 = 9;
  FUN_012b4250(auStack_30,param_1 + 0x120,&local_48);
  iVar1 = FUN_012b40f0(auStack_30);
  uVar2 = 0xcbf29ce484222645;
  if ((-1 < param_2) && (param_2 < iVar1)) {
    FUN_012b4190(auStack_58,auStack_30,(long)param_2);
    local_48 = 0x24312a27509e058c;
    local_40 = "key";
    local_38 = 3;
    FUN_012b4250(auStack_68,auStack_58,&local_48);
    local_18 = 0;
    uVar2 = FUN_012b4b40(auStack_68,&local_18);
  }
  return uVar2;
}


