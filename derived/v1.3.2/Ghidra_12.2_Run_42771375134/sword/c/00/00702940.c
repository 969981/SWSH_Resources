/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00702940; name: FUN_00702940
 */


void FUN_00702940(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_28 [8];
  
  FUN_00706c40(*param_2,auStack_38);
  FUN_00706f30(*param_2,auStack_28);
  lVar3 = *(long *)(param_1 + 0x128);
  lVar1 = *param_2;
  *param_2 = 0;
  lVar2 = *(long *)(lVar1 + 0x58);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar3 + 0x278) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar3 + 0x278) + 0x48) + 0x18))();
    *(undefined8 *)(lVar3 + 0x278) = 0;
  }
  *(long *)(lVar3 + 0x278) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


