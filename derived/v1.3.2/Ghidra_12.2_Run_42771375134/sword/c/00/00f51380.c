/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f51380; name: FUN_00f51380
 */


uint FUN_00f51380(long param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0 [12];
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  local_60 = 0x5dafb456071aa232;
  pcStack_58 = "bin/field/param/symbol_encount/ai.blua";
  local_50 = 0x26;
  local_48 = 0;
  local_c0[0] = PTR_LAB_02720b40;
  local_e0 = PTR_LAB_02720b48;
  local_d8 = (code *)PTR_FUN_02720b50;
  local_d0 = PTR_LAB_02720b58;
  local_c8 = PTR_LAB_02720b60;
  uVar3 = FUN_00da0ab0(*(undefined8 *)PTR_DAT_0271e770,5);
  uVar2 = FUN_00de6e40(uVar5,&local_60,&local_e0,param_2,param_3 & 1,uVar3);
  pcVar1 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined *)0x0;
    local_c8 = (undefined *)0x0;
    local_e0 = (undefined *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar1)(local_c0);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (((uVar2 & 1) != 0) && ((param_3 & 1) == 0)) {
    uVar4 = FUN_00de7150(*(undefined8 *)(param_1 + 0x48));
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      if (*(char *)(param_1 + 0x44) == '\0') {
        FUN_00de7170(*(undefined8 *)(param_1 + 0x48));
        *(undefined1 *)(param_1 + 0x44) = 1;
      }
    }
  }
  return uVar2 & 1;
}


