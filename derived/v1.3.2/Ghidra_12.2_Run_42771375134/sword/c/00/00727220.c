/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00727220; name: FUN_00727220
 */


void FUN_00727220(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_250 [24];
  long local_238;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar3 = *(long *)(param_1 + 0x370);
  for (lVar2 = *(long *)(param_1 + 0x368); lVar2 != lVar3; lVar2 = lVar2 + 0x48) {
    uVar1 = FUN_0072f7b0(lVar2,0,param_3);
    if ((uVar1 & 1) != 0) {
      FUN_0072ece0(lVar2,param_2);
    }
  }
  if (*(long *)(param_1 + 0x328) != *(long *)(param_1 + 800)) {
    FUN_006cf0a0(auStack_250,PTR_DAT_02715b70);
    lVar2 = FUN_007029e0(param_2,auStack_250);
    if (local_238 != 0) {
      (**(code **)(*(long *)(local_238 + 0x48) + 0x18))();
      local_238 = 0;
    }
    if ((lVar2 != 0) && (uVar1 = FUN_00728cc0(lVar2 + 0x50), (uVar1 & 1) != 0)) {
      FUN_006cf0a0(auStack_60,PTR_DAT_02715b78);
      FUN_00784060(auStack_250,*(undefined8 *)(lVar2 + 0x268));
      lVar3 = *(long *)(param_1 + 0x370);
      for (lVar2 = *(long *)(param_1 + 0x368); lVar2 != lVar3; lVar2 = lVar2 + 0x48) {
        uVar1 = FUN_0072f7b0(lVar2,0,param_3);
        if ((uVar1 & 1) != 0) {
          FUN_0072f680(lVar2,auStack_60,auStack_250,0);
        }
      }
      FUN_00784490(auStack_250);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


