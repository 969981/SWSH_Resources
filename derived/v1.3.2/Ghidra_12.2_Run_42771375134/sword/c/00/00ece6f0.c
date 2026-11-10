/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ece6f0; name: FUN_00ece6f0
 */


undefined4 FUN_00ece6f0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_60 [12];
  undefined4 local_54;
  int iStack_50;
  int local_4c;
  long local_28;
  
  local_28 = param_1;
  if ((param_1 == -0x340d631b7bddd9bb) &&
     (local_28 = FUN_00e7e2e0(), local_28 == -0x340d631b7bddd9bb)) {
    return 0;
  }
  FUN_0102ad30(auStack_60);
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar4 + 0x7c8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  uVar2 = FUN_01018640(lVar3,&local_28,local_4c + 0x76c,iStack_50 + 1,local_54,0);
  uVar1 = FUN_00ece7e0(uVar2,&local_28);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return uVar1;
}


