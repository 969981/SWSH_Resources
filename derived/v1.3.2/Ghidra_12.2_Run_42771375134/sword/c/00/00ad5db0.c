/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad5db0; name: FUN_00ad5db0
 */


void FUN_00ad5db0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = FUN_00ad9f80(param_1,auStack_40);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xc0) != 0)) {
    FUN_00895ec0(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x78),param_2,param_3);
  }
  lVar1 = FUN_00aaf0a0(param_1,auStack_38);
  if ((lVar1 != 0) && ((int)((ulong)(*(long *)(lVar1 + 200) - *(long *)(lVar1 + 0xc0)) >> 3) != 0))
  {
    uVar3 = 0;
    do {
      lVar2 = FUN_00c55f70(lVar1,uVar3);
      if (lVar2 != 0) {
        FUN_00895ec0(*(undefined8 *)(lVar2 + 0x78),param_2,param_3);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((ulong)(*(long *)(lVar1 + 200) - *(long *)(lVar1 + 0xc0)) >> 3));
  }
  return;
}


