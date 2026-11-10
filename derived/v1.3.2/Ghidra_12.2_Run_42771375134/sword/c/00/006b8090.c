/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b8090; name: FUN_006b8090
 */


void FUN_006b8090(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  long local_40;
  
  if (*(long *)(param_3 + 8) != 0) {
    FUN_006b9170(auStack_68,param_3);
    FUN_006b9640(auStack_60,auStack_68,param_3 + 0x10,*(undefined8 *)(param_3 + 0x30));
    pcVar2 = *(code **)(*(long *)(param_3 + 8) + 0x80);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(*(long *)(param_3 + 8) + 0xa0,auStack_60);
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
  }
  if (*(long *)(param_3 + 0x78) != 0) {
    FUN_006b6cc0();
  }
  lVar1 = *(long *)(param_3 + 0x80);
  if (lVar1 != 0) {
    if (0.0 <= (float)param_2) {
      FUN_006b6e70(param_2,param_1);
      lVar1 = *(long *)(param_3 + 0x80);
    }
    FUN_006b6d50(param_1,lVar1);
  }
  *(long *)(param_3 + 0x78) = 0;
  *(undefined8 *)(param_3 + 0x80) = 0;
  return;
}


