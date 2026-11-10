/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c3b60; name: FUN_007c3b60
 */


undefined8 FUN_007c3b60(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int local_58 [4];
  int local_48 [6];
  
  uVar2 = FUN_007c4080();
  if (((uVar2 & 1) != 0) &&
     (lVar3 = *(long *)PTR_DAT_027104b0, lVar3 != 0 && *(long *)PTR_DAT_02716a30 != 0)) {
    if (*(char *)(lVar3 + 0x218) != '\0') {
      return 1;
    }
    if (*(long *)(lVar3 + 0x1f8) != 0) {
      FUN_0193edd0(local_58);
      puVar1 = PTR_DAT_02716b80;
      if (local_58[0] == 0) {
        *(undefined1 *)(lVar3 + 0x218) = 1;
        return 1;
      }
      lVar3 = *(long *)PTR_DAT_02716b80;
      if (lVar3 != 0) {
        local_48[0] = 2;
        FUN_007c2c00(lVar3,local_48);
        local_48[0]._0_1_ = 1;
        local_48[1] = 0;
        FUN_007c2c50(lVar3,local_48);
        lVar3 = *(long *)puVar1;
        if (lVar3 != 0) {
          local_48[0] = (uint)local_48[0]._1_3_ << 8;
          FUN_018724d0((ulong)local_48 | 4,local_58);
          local_48[0] = CONCAT31(local_48[0]._1_3_,1);
          FUN_007c2fb0(lVar3,local_48);
        }
      }
    }
  }
  return 0;
}


