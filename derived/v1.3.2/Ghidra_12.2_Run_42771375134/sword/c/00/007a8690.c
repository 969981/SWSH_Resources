/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a8690; name: FUN_007a8690
 */


void FUN_007a8690(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined4 local_28;
  
  uVar1 = FUN_01866900();
  if ((uVar1 & 1) == 0) {
    local_30 = param_2;
    local_28 = param_3;
    FUN_01866910(auStack_40,&local_30);
    FUN_01866c30(auStack_50);
    FUN_018725b0(auStack_40,auStack_50);
    FUN_01870c60(auStack_50);
    FUN_018725b0(auStack_40,auStack_50);
    *(undefined1 *)(*(long *)PTR_DAT_02716718 + 0x18) = 1;
    FUN_0186bab0(auStack_50,0x18);
    FUN_018725b0(auStack_40,auStack_50);
    FUN_01871ad0(auStack_50);
    FUN_018725b0(auStack_40,auStack_50);
    FUN_01871d70(*(undefined8 *)PTR_DAT_02716720);
    FUN_01866b80(auStack_50);
    FUN_018725b0(auStack_40,auStack_50);
    FUN_01866d30(&LAB_007a8f70);
  }
  return;
}


