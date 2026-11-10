/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01164a30; name: FUN_01164a30
 */


void FUN_01164a30(long param_1,byte param_2,undefined8 param_3,uint param_4,undefined1 param_5,
                 undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = ((ulong)param_2 + (ulong)param_2 * 8) * 4;
  FUN_0077d7e0(*(long *)(param_1 + 0x60) + lVar2 + 0xb8,param_3,0xd);
  *(uint *)(*(long *)(param_1 + 0x60) + lVar2 + 0xd4) = param_4 & 0xff;
  *(undefined1 *)(*(long *)(param_1 + 0x60) + lVar2 + 0xd2) = param_5;
  *(undefined1 *)(*(long *)(param_1 + 0x60) + lVar2 + 0xd3) = param_6;
  lVar2 = *(long *)(*(long *)(param_1 + 0x60) + 0x198);
  if (((lVar2 == 0) || (*(int *)(lVar2 + 0x54) == 0)) ||
     (plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x1a0), plVar1 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01164adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))();
  return;
}


