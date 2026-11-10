/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce63b0; name: FUN_00ce63b0
 */


void FUN_00ce63b0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_28;
  
  uVar1 = FUN_010386c0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xb4) = 5;
    FUN_016b2d70(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x600),0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x620);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    FUN_016b2da0(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x630),0);
    FUN_00ffcf80(*(long *)(param_1 + 0x78) + 0x100,"anime_switch_reward");
    lVar2 = *(long *)(param_1 + 0x78) + 0x100;
    FUN_00ffcf80(lVar2,"anime_ptn_result");
    local_28 = 0xc29e55ab076e5162;
    FUN_00ffd510(0x3f800000,lVar2,&local_28);
    FUN_00ce45c0(param_1);
    FUN_00ce34e0(*(undefined8 *)(param_1 + 0x78));
    FUN_00ce32b0(*(undefined8 *)(param_1 + 0x78),1);
  }
  return;
}


