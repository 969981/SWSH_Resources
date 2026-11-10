/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b4fa0; name: FUN_006b4fa0
 */


void FUN_006b4fa0(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [40];
  long local_50;
  undefined1 auStack_38 [8];
  
  lVar1 = FUN_006b6560(*(undefined8 *)(param_2 + 0x1b0));
  FUN_006b6710(param_1,*(undefined8 *)(param_2 + 0x1b0));
  lVar2 = FUN_006b6560(*(undefined8 *)(param_2 + 0x1b0));
  if ((lVar1 != lVar2) && (*param_3 != 0)) {
    FUN_006b91e0(auStack_38,lVar1);
    FUN_006b91e0(auStack_80,lVar2);
    FUN_006b57e0(auStack_78,auStack_38,auStack_80,param_2 + 0x68,*(undefined8 *)(param_2 + 0x60));
    (*(code *)*param_3)(param_3 + 4,auStack_78);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    }
  }
  return;
}


