/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fec2f0; name: FUN_00fec2f0
 */


void FUN_00fec2f0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined4 local_b0 [24];
  undefined4 local_48;
  undefined4 uStack_44;
  
  pcVar3 = *(code **)(param_1 + 0x5d0);
  if (pcVar3 != (code *)0x0) {
    lVar5 = 0;
    lVar6 = 0;
    puVar4 = &DAT_02667b78;
    while( true ) {
      uStack_44 = (undefined4)lVar6;
      local_48 = 0;
      (*pcVar3)(local_b0,param_1 + 0x5f0,&uStack_44);
      local_48 = local_b0[0];
      uVar1 = FUN_00fed660(*(long *)(param_1 + 0x688) + lVar5,&local_48);
      uVar2 = FUN_00ffda40(param_1 + 0x100,puVar4);
      FUN_016b2d70(uVar2,uVar1 & 1);
      if (lVar6 == 0x10) break;
      pcVar3 = *(code **)(param_1 + 0x5d0);
      lVar6 = lVar6 + 1;
      puVar4 = puVar4 + 0x10;
      lVar5 = lVar5 + 0x90;
    }
  }
  return;
}


