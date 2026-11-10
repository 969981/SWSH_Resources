/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00332fb0; name: FUN_00332fb0
 */


void FUN_00332fb0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44 [4];
  
  (**(code **)(param_3 + 0x18))(&local_60,param_1[2]);
  plVar1 = (long *)param_1[1];
  puVar4 = (undefined8 *)param_1[3];
  iVar2 = *(int *)(*param_1 + 0x10);
  if (iVar2 == 0) {
    pcVar5 = "bad__repx__name";
  }
  else {
    pcVar5 = *(char **)(*(long *)(*param_1 + 8) + (ulong)(iVar2 - 1) * 0x10);
  }
  local_80 = local_60;
  uStack_78 = uStack_58;
  local_70 = local_50;
  local_68 = local_48;
  FUN_0032c7c0(puVar4,&local_80);
  pcVar6 = *(code **)*puVar4;
  sVar3 = strlen(" ");
  (*pcVar6)(puVar4,&DAT_01ce77a5,sVar3);
  FUN_0031b3b0(puVar4,&local_70);
  local_44[0] = 0;
  (**(code **)*puVar4)(puVar4,local_44,1);
  (**(code **)(*plVar1 + 0x10))(plVar1,pcVar5,puVar4[4]);
  puVar4[3] = 0;
  return;
}


