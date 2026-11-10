/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008eb260; name: FUN_008eb260
 */


undefined4 FUN_008eb260(void)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02717c48 + 0xf0);
  lVar4 = *(long *)(*(long *)PTR_DAT_02717c48 + 0x108);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (lVar5 == 0x674edc539f9f74a6) {
    uVar1 = FUN_01510f00(lVar3,0x6d546465931c9879);
    if ((uVar1 & 1) != 0) {
      uVar1 = FUN_01510f00(lVar3,0x8d69486d6c143d25);
      uVar2 = 4;
      if ((uVar1 & 1) != 0) {
        uVar2 = 5;
      }
      goto joined_r0x008eb39c;
    }
  }
  else if (lVar5 == 0x5ea5c3539ab81c81) {
    uVar1 = FUN_01510f00(lVar3,0x16aab0ce7943f690);
    uVar2 = 1;
    if ((uVar1 & 1) != 0) {
      uVar2 = 2;
    }
    goto joined_r0x008eb39c;
  }
  uVar2 = 0;
joined_r0x008eb39c:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return uVar2;
}


