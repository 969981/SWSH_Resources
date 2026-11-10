/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c3830; name: FUN_010c3830
 */


void FUN_010c3830(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = FUN_010367c0(*(undefined8 *)(param_1 + 0xa0));
  uVar2 = FUN_010367c0(*(undefined8 *)(param_1 + 0x88));
  uVar3 = FUN_010367c0(*(undefined8 *)(param_1 + 0x90));
  if ((((uVar1 & 1) == 0) && ((uVar2 & 1) == 0)) && ((uVar3 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    FUN_00ffa160(*(undefined8 *)(param_1 + 0x90),1,1);
    lVar4 = *(long *)(param_1 + 0x90);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5e0),1);
    (**(code **)(**(long **)(lVar4 + 0x5e0) + 0x50))();
    lVar4 = *(long *)(param_1 + 0x90);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5e8),1);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f0),1);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x5f8),*(undefined1 *)(lVar4 + 0x618));
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x600),1);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x608),1);
    FUN_016b2d70(*(undefined8 *)(lVar4 + 0x610),1);
    FUN_010c1f70(*(undefined8 *)(param_1 + 0x90),1);
    return;
  }
  return;
}


