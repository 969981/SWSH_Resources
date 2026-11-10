/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc78a0; name: FUN_00bc78a0
 */


void FUN_00bc78a0(long param_1,byte param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  *(byte *)(param_1 + 0x694) = param_2 & 1;
  if (*(int *)(param_1 + 0x5cc) == 0) {
    bVar1 = ~param_2 & 1;
    FUN_00bb5520(param_1,bVar1);
    param_1 = param_1 + 0x100;
    uVar2 = FUN_00ffda40(param_1,&DAT_0215a1b8);
    FUN_016b2d70(uVar2,bVar1);
    uVar2 = FUN_00ffda40(param_1,&DAT_0215a1c0);
    FUN_016b2d70(uVar2,bVar1);
    uVar2 = FUN_00ffda40(param_1,&DAT_0215a1c8);
    FUN_016b2d70(uVar2,bVar1);
    uVar2 = FUN_00ffda40(param_1,&DAT_0215a1d0);
    FUN_016b2d70(uVar2,bVar1);
    uVar2 = FUN_00ffda40(param_1,&DAT_0215a1d8);
    FUN_016b2d70(uVar2,bVar1);
    return;
  }
  return;
}


