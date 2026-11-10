/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccf310; name: FUN_00ccf310
 */


void FUN_00ccf310(long param_1,uint param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x538);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  puVar1 = PTR_DAT_0271c810;
  lVar2 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),
                       PTR_DAT_0271c810 + (long)param_4 * 0xf8 + 0x10);
  lVar3 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),puVar1 + (long)param_4 * 0xf8 + 0x18);
  FUN_016a7910(lVar4,param_2,1,lVar2,0,0);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  if ((param_3 & 0xff) == (param_2 & 0xff)) {
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
    FUN_016a7910(lVar4,param_3,1,lVar3,0,0);
  }
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ccf3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


