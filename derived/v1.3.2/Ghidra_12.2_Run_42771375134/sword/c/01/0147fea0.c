/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0147fea0; name: FUN_0147fea0
 */


void FUN_0147fea0(long *param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long local_48;
  long local_40;
  long local_38;
  
  cVar1 = *(char *)(param_2[0xe8] + 0x31);
  uVar2 = FUN_00ff5cf0();
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x10))(&local_40,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_48 = local_38;
    lVar3 = FUN_01483fe0(&local_38,uVar2,&local_40,&local_48);
  }
  else {
    (**(code **)(*param_2 + 0x10))(&local_40,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_48 = local_38;
    lVar3 = FUN_01483e90(&local_38,uVar2,&local_40,&local_48);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  *param_1 = lVar3;
  return;
}


