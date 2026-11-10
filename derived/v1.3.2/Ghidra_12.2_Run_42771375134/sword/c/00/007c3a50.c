/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c3a50; name: FUN_007c3a50
 */


undefined8 FUN_007c3a50(long param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 local_28 [8];
  
  lVar4 = *(long *)PTR_DAT_02716b80;
  if (lVar4 != 0) {
    uVar3 = FUN_007c2f70(lVar4);
    if ((uVar3 & 0xff) == 0) {
      lVar4 = *(long *)PTR_DAT_027104b0;
      if ((lVar4 != 0 && *(long *)PTR_DAT_02716a30 != 0) && (*(char *)(lVar4 + 0x218) != '\0')) {
        FUN_0193f060();
        *(undefined1 *)(lVar4 + 0x218) = 0;
        iVar2 = nn::ldn::GetState();
        if ((iVar2 != 0) && (cVar1 = FUN_007a9cb0(), cVar1 == '\0')) {
          nn::ldn::Finalize();
        }
      }
    }
    else {
      if (uVar3 >> 0x20 == 0) {
        lVar5 = *(long *)PTR_DAT_027104b0;
        if (lVar5 == 0) {
          return 0;
        }
        if (*(long *)PTR_DAT_02716a30 == 0) {
          return 0;
        }
        if (*(char *)(lVar5 + 0x218) != '\0') {
          FUN_0193f060(*(long *)PTR_DAT_02716a30);
          *(undefined1 *)(lVar5 + 0x218) = 0;
          iVar2 = nn::ldn::GetState();
          if ((iVar2 != 0) && (cVar1 = FUN_007a9cb0(), cVar1 == '\0')) {
            nn::ldn::Finalize();
          }
        }
      }
      local_28[0] = 0;
      FUN_007c2c50(lVar4,local_28);
    }
  }
  *(undefined1 *)(param_1 + 0x354) = 0;
  return 1;
}


