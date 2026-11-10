/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd99c0; name: FUN_00cd99c0
 */


void FUN_00cd99c0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  uVar5 = **(undefined8 **)(param_1 + 200);
  uVar4 = (*(undefined8 **)(param_1 + 200))[2];
  uVar1 = FUN_00cd3b10(uVar5,4);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_00cd3b10(uVar5,5);
    if (((uVar1 | uVar2) & 1) == 0) {
      return;
    }
  }
  else {
    lVar3 = *(long *)PTR_DAT_027107a8;
    local_68 = 0x735a727b1b14cc53;
    pcStack_60 = "Play_UI_Gnest_join";
    local_58 = 0x12;
    FUN_006cf0a0(auStack_50,&local_68);
    FUN_008962c0(lVar3 + 0x108,auStack_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    FUN_00cd3b10(uVar5,5);
  }
  FUN_01182820(uVar4);
  FUN_01182a90(uVar4,0);
  uVar5 = FUN_00cd3b20(uVar5);
  FUN_01182450(uVar4,uVar5);
  FUN_01183100(uVar4);
  return;
}


