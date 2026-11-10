/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008102d0; name: FUN_008102d0
 */


byte FUN_008102d0(long *param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined6 uStack_58;
  undefined2 local_52;
  undefined4 uStack_50;
  char cStack_4c;
  undefined1 uStack_4b;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_70 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  cStack_4c = '\0';
  uStack_4b = 0;
  uStack_58 = 0;
  local_52 = 0;
  local_48 = 0x7fffffff;
  local_38 = *(undefined4 *)PTR_DAT_02716f78;
  local_40 = 0x200000004000000;
  local_30 = 0;
  uStack_28 = 0;
  local_60 = param_2;
  uStack_34 = local_38;
  FUN_0080cd70(&local_70);
  if (*param_1 != 0) {
    FUN_0080f500(param_1);
  }
  local_18 = 0;
  uVar2 = FUN_00810860(&local_70,&local_18);
  if (((uVar2 & 1) == 0) || (cStack_4c == '\0')) {
    bVar3 = 0;
    bVar4 = 0;
  }
  else {
    FUN_0080f9a0(param_1,&local_18);
    bVar3 = 1;
    bVar4 = 1;
  }
  if (local_18 != 0) {
    FUN_0080f500(&local_18);
    bVar4 = bVar3;
  }
  bVar1 = cStack_4c != '\0';
  FUN_0080c870(&local_70);
  return bVar4 & bVar1;
}


